module.exports = grammar({
  name: "plpgsql",

  extras: ($) => [/\s\n/, /\s/, $.line_comment, $.block_comment],

  conflicts: ($) => [[$.keyword_char, $.keyword_varchar]],

  word: ($) => $._identifier,

  rules: {
    source_file: ($) => repeat(choice($.statement)),

    statement: ($) => seq(optional($._ddl_statement), ";"),

    _ddl_statement: ($) => choice($._create_statement),

    _create_statement: ($) => choice($.create_table),

    // References: https://www.postgresql.org/docs/15/sql-createtable.html
    create_table: ($) =>
      seq(
        $.keyword_create,
        optional(choice($.keyword_temporary, $.keyword_unlogged)),
        $.keyword_table,
        optional($._if_not_exists),
        $.table_reference,
        $.column_definitions
        // TODO: INHERITS
        // TODO: PARTITION BY
        // TODO: USING
        // TODO: WITH
        // TODO: ON COMMIT
        // TODO: TABLESPACE
      ),

    column_definitions: ($) =>
      seq(
        "(",
        optional(
          commaSepRepeat1(choice($.column_definition /*, $.table_constraint*/))
        ),
        ")"
      ),

    column_definition: ($) =>
      seq(
        field("name", $.identifier),
        field("datatype", $._type),
        repeat($.column_constraint)
      ),

    column_constraint: ($) =>
      seq(
        optional(seq($.keyword_constraint, field("name", $.identifier))),
        choice(
          $._not_null,
          $.keyword_null,
          seq($.keyword_default, $._expression),
          // TODO: add index_parameters in UNIQUE, PRIMARY KEY
          seq(
            $.keyword_unique,
            optional(
              seq($.keyword_nulls, optional($.keyword_not), $.keyword_distinct)
            )
          ),
          $.keyword_primary_key
          // TODO: CHECK
          // TODO: GENERATED
          // TODO: FOREIGN KEY
        )
        // TODO: DEFERRABLE
      ),

    table_reference: ($) =>
      seq(
        optional(seq(field("schema", $.identifier), ".")),
        field("name", $.identifier)
      ),

    _expression: ($) =>
      choice(
        $.literal
        // TODO: add more types
      ),

    literal: ($) =>
      choice(
        $._number,
        $._literal_string,
        $.keyword_true,
        $.keyword_false,
        $.keyword_null
      ),

    // References: https://www.postgresql.org/docs/15/datatype.html
    _type: ($) =>
      choice(
        $._type_numeric,
        $._type_character,
        $._type_datetime,
        $._type_geometric,
        $._type_net,
        $._type_bit_string,
        $._type_text_search,
        $.keyword_money,
        $.keyword_bytea,
        $.keyword_boolean,
        $.keyword_uuid,
        $.keyword_xml
        // TODO: add arrays References: https://www.postgresql.org/docs/15/arrays.html
        // TODO: add rangetypes References: https://www.postgresql.org/docs/15/rangetypes.html
        // TODO: add OID types References: https://www.postgresql.org/docs/15/datatype-oid.html
      ),

    // References: https://www.postgresql.org/docs/15/datatype-numeric.html
    _type_numeric: ($) =>
      choice(
        $.keyword_smallint,
        $.keyword_integer,
        $.keyword_bigint,
        $.keyword_real,
        $.keyword_smallserial,
        $.keyword_serial,
        $.keyword_bigserial,
        $.double,
        $.numeric,
        $.decimal
      ),
    double: ($) => seq(mkKeyword("double"), mkKeyword("precision")),
    decimal: ($) =>
      choice(
        parametricType($, $.keyword_decimal, ["precision"]),
        parametricType($, $.keyword_decimal, ["precision", "scale"])
      ),
    numeric: ($) =>
      choice(
        parametricType($, $.keyword_numeric, ["precision"]),
        parametricType($, $.keyword_numeric, ["precision", "scale"])
      ),

    // References: https://www.postgresql.org/docs/15/datatype-character.html
    _type_character: ($) => choice($.keyword_text, $.char, $.varchar),
    char: ($) => parametricType($, $.keyword_char),
    varchar: ($) => parametricType($, $.keyword_varchar),

    // TODO: add interval type
    // References: https://www.postgresql.org/docs/15/datatype-datetime.html
    _type_datetime: ($) =>
      choice(
        $.keyword_date,
        $.keyword_datetime,
        $.keyword_time,
        $.keyword_timestamp,
        $.keyword_timestamptz
      ),

    // TODO: add geometric types
    // References: https://www.postgresql.org/docs/15/datatype-geometric.html
    _type_geometric: ($) => choice(),

    // TODO: add net types
    // References: https://www.postgresql.org/docs/15/datatype-net-types.html
    _type_net: ($) => choice(),

    // TODO: add bit string types
    // References: https://www.postgresql.org/docs/15/datatype-bit.html
    _type_bit_string: ($) => choice(),

    // TODO: add text search types
    // References: https://www.postgresql.org/docs/15/datatype-textsearch.html
    _type_text_search: ($) => choice(),

    // References: https://www.postgresql.org/docs/15/datatype-json.html
    _type_json: ($) => choice($.keyword_json, $.keyword_jsonb),

    // keywords
    _if_not_exists: ($) => seq($.keyword_if, $.keyword_not, $.keyword_exists),
    _not_null: ($) => seq($.keyword_not, $.keyword_null),
    _without_time_zone: ($) => seq(mkKeyword("without"), $._keyword_time_zone),
    _with_time_zone: ($) => seq(mkKeyword("with"), $._keyword_time_zone),
    _keyword_time_zone: (_) => seq(mkKeyword("time"), mkKeyword("zone")),

    keyword_create: (_) => mkKeyword("create"),
    keyword_table: (_) => mkKeyword("table"),
    keyword_temporary: (_) => choice(mkKeyword("temporary"), mkKeyword("temp")),
    keyword_unlogged: (_) => mkKeyword("unlogged"),
    keyword_if: (_) => mkKeyword("if"),
    keyword_not: (_) => mkKeyword("not"),
    keyword_exists: (_) => mkKeyword("exists"),
    keyword_null: (_) => mkKeyword("null"),
    keyword_constraint: (_) => mkKeyword("constraint"),
    keyword_default: (_) => mkKeyword("default"),
    keyword_true: (_) => mkKeyword("true"),
    keyword_false: (_) => mkKeyword("false"),
    keyword_nulls: (_) => mkKeyword("nulls"),
    keyword_distinct: (_) => mkKeyword("distinct"),
    keyword_unique: (_) => mkKeyword("unique"),
    keyword_primary_key: (_) => seq(mkKeyword("primary"), mkKeyword("key")),
    // References: https://www.postgresql.org/docs/15/datatype-xml.html
    keyword_xml: (_) => mkKeyword("xml"),
    // References: https://www.postgresql.org/docs/15/datatype-uuid.html
    keyword_uuid: (_) => mkKeyword("uuid"),
    keyword_json: (_) => mkKeyword("json"),
    keyword_jsonb: (_) => mkKeyword("jsonb"),
    keyword_boolean: (_) => mkKeyword("boolean"),
    keyword_smallint: (_) => mkKeyword("smallint"),
    keyword_integer: (_) => mkKeyword("integer"),
    keyword_bigint: (_) => mkKeyword("bigint"),
    keyword_decimal: (_) => mkKeyword("decimal"),
    keyword_numeric: (_) => mkKeyword("numeric"),
    keyword_real: (_) => mkKeyword("real"),
    keyword_smallserial: (_) => mkKeyword("smallserial"),
    keyword_serial: (_) => mkKeyword("serial"),
    keyword_bigserial: (_) => mkKeyword("bigserial"),
    // References: https://www.postgresql.org/docs/15/datatype-money.html
    keyword_money: (_) => mkKeyword("money"),
    keyword_text: (_) => mkKeyword("text"),
    keyword_char: (_) => choice(mkKeyword("character"), mkKeyword("char")),
    keyword_varchar: (_) =>
      choice(
        mkKeyword("varchar"),
        seq(mkKeyword("character", mkKeyword("varying")))
      ),
    keyword_bytea: (_) => mkKeyword("bytea"),
    keyword_date: (_) => mkKeyword("date"),
    keyword_datetime: (_) => mkKeyword("datetime"),
    keyword_time: ($) =>
      seq(
        mkKeyword("time"),
        choice(optional($._without_time_zone), $._with_time_zone)
      ),
    keyword_timestamp: ($) =>
      seq(mkKeyword("timestamp"), optional($._without_time_zone)),
    keyword_timestamptz: ($) =>
      choice(
        mkKeyword("timestamptz"),
        seq(mkKeyword("timestamp"), $._with_time_zone)
      ),

    // -------

    line_comment: (_) => seq("--", /.*\n/),
    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
    block_comment: (_) => seq("/*", /[^*]*\*+(?:[^/*][^*]*\*+)*/, "/"),

    _literal_string: ($) => choice(seq("'", /[^']*/, "'")),
    _number: (_) => /\d+/,

    identifier: ($) => choice($._identifier, seq('"', /[^"]+/, '"')),

    _identifier: (_) => /([a-zA-Z_][0-9a-zA-Z_]*)/,
  },
});

function mkKeyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}

function commaSepRepeat1(field) {
  return seq(field, repeat(seq(",", field)));
}

function parametricType($, type, params = ["size"]) {
  return prec.right(
    choice(
      type,
      seq(
        type,
        "(",
        // first parameter is guaranteed, shift it out of the array
        field(params.shift(), alias($._number, $.literal)),
        // then, fill in the ", next" until done
        ...params.map((p) => seq(",", field(p, alias($._number, $.literal)))),
        ")"
      )
    )
  );
}
