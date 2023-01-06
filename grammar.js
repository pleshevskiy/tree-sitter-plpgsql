module.exports = grammar({
  name: "plpgsql",

  extras: ($) => [/\s\n/, /\s/, $.comment, $.marginalia],

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
      ),

    table_reference: ($) =>
      seq(
        optional(seq(field("schema", $.identifier), ".")),
        field("name", $.identifier)
      ),

    column_definitions: ($) =>
      seq(
        "(",
        optional(commaSepRepeat1(choice($.column_definition /*$.constraint*/))),
        ")"
      ),

    column_definition: ($) => seq(field("name", $.identifier)),

    //constraint: $ => seq(),

    // keywords
    keyword_create: (_) => mkKeyword("create"),
    keyword_table: (_) => mkKeyword("table"),
    keyword_temporary: (_) => choice(mkKeyword("temporary"), mkKeyword("temp")),
    keyword_unlogged: (_) => mkKeyword("unlogged"),
    keyword_if: (_) => mkKeyword("if"),
    keyword_not: (_) => mkKeyword("not"),
    keyword_exists: (_) => mkKeyword("exists"),

    _if_not_exists: ($) => seq($.keyword_if, $.keyword_not, $.keyword_exists),
    // -------

    comment: (_) => seq("--", /.*\n/),
    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
    marginalia: (_) => seq("/*", /[^*]*\*+(?:[^/*][^*]*\*+)*/, "/"),

    identifier: ($) => choice($._identifier, seq('"', $._identifier, '"')),

    _identifier: (_) => /([a-zA-Z_][0-9a-zA-Z_]*)/,
  },
});

function mkKeyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}

function commaSepRepeat1(field) {
  return seq(field, repeat(seq(",", field)));
}
