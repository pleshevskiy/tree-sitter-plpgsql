#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  sym__identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT = 6,
  sym_keyword_create = 7,
  sym_keyword_table = 8,
  aux_sym_keyword_temporary_token1 = 9,
  aux_sym_keyword_temporary_token2 = 10,
  sym_keyword_unlogged = 11,
  sym_keyword_if = 12,
  sym_keyword_not = 13,
  sym_keyword_exists = 14,
  sym_keyword_null = 15,
  sym_keyword_constraint = 16,
  sym_keyword_default = 17,
  sym_keyword_true = 18,
  sym_keyword_false = 19,
  aux_sym_double_token1 = 20,
  aux_sym_double_token2 = 21,
  sym_keyword_boolean = 22,
  sym_keyword_smallint = 23,
  sym_keyword_integer = 24,
  sym_keyword_bigint = 25,
  sym_keyword_decimal = 26,
  sym_keyword_numeric = 27,
  sym_keyword_real = 28,
  sym_keyword_smallserial = 29,
  sym_keyword_serial = 30,
  sym_keyword_bigserial = 31,
  sym_keyword_money = 32,
  sym_keyword_text = 33,
  aux_sym_keyword_char_token1 = 34,
  aux_sym_keyword_char_token2 = 35,
  aux_sym_keyword_varchar_token1 = 36,
  sym_keyword_bytea = 37,
  sym_keyword_date = 38,
  sym_keyword_datetime = 39,
  aux_sym_keyword_time_token1 = 40,
  aux_sym_keyword_timestamp_token1 = 41,
  aux_sym_keyword_timestamptz_token1 = 42,
  aux_sym__without_time_zone_token1 = 43,
  aux_sym__with_time_zone_token1 = 44,
  aux_sym__keyword_time_zone_token1 = 45,
  sym_keyword_uuid = 46,
  sym_keyword_xml = 47,
  sym_keyword_json = 48,
  sym_keyword_jsonb = 49,
  anon_sym_DASH_DASH = 50,
  aux_sym_comment_token1 = 51,
  anon_sym_SLASH_STAR = 52,
  aux_sym_marginalia_token1 = 53,
  anon_sym_SLASH = 54,
  anon_sym_SQUOTE = 55,
  aux_sym__literal_string_token1 = 56,
  sym__number = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_identifier_token1 = 59,
  sym_source_file = 60,
  sym_statement = 61,
  sym__ddl_statement = 62,
  sym__create_statement = 63,
  sym_create_table = 64,
  sym_column_definitions = 65,
  sym_column_definition = 66,
  sym_column_constraint = 67,
  sym_table_reference = 68,
  sym__expression = 69,
  sym_literal = 70,
  sym__if_not_exists = 71,
  sym__not_null = 72,
  sym_keyword_temporary = 73,
  sym__type = 74,
  sym__type_numeric = 75,
  sym_double = 76,
  sym_decimal = 77,
  sym_numeric = 78,
  sym__type_character = 79,
  sym_char = 80,
  sym_varchar = 81,
  sym__type_datetime = 82,
  sym__type_geometric = 83,
  sym__type_net = 84,
  sym__type_bit_string = 85,
  sym__type_text_search = 86,
  sym_keyword_char = 87,
  sym_keyword_varchar = 88,
  sym_keyword_time = 89,
  sym_keyword_timestamp = 90,
  sym_keyword_timestamptz = 91,
  sym__without_time_zone = 92,
  sym__with_time_zone = 93,
  sym__keyword_time_zone = 94,
  sym_comment = 95,
  sym_marginalia = 96,
  sym__literal_string = 97,
  sym_identifier = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_column_definitions_repeat1 = 100,
  aux_sym_column_definition_repeat1 = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [sym_keyword_create] = "keyword_create",
  [sym_keyword_table] = "keyword_table",
  [aux_sym_keyword_temporary_token1] = "keyword_temporary_token1",
  [aux_sym_keyword_temporary_token2] = "keyword_temporary_token2",
  [sym_keyword_unlogged] = "keyword_unlogged",
  [sym_keyword_if] = "keyword_if",
  [sym_keyword_not] = "keyword_not",
  [sym_keyword_exists] = "keyword_exists",
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_constraint] = "keyword_constraint",
  [sym_keyword_default] = "keyword_default",
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
  [aux_sym_double_token1] = "double_token1",
  [aux_sym_double_token2] = "double_token2",
  [sym_keyword_boolean] = "keyword_boolean",
  [sym_keyword_smallint] = "keyword_smallint",
  [sym_keyword_integer] = "keyword_integer",
  [sym_keyword_bigint] = "keyword_bigint",
  [sym_keyword_decimal] = "keyword_decimal",
  [sym_keyword_numeric] = "keyword_numeric",
  [sym_keyword_real] = "keyword_real",
  [sym_keyword_smallserial] = "keyword_smallserial",
  [sym_keyword_serial] = "keyword_serial",
  [sym_keyword_bigserial] = "keyword_bigserial",
  [sym_keyword_money] = "keyword_money",
  [sym_keyword_text] = "keyword_text",
  [aux_sym_keyword_char_token1] = "keyword_char_token1",
  [aux_sym_keyword_char_token2] = "keyword_char_token2",
  [aux_sym_keyword_varchar_token1] = "keyword_varchar_token1",
  [sym_keyword_bytea] = "keyword_bytea",
  [sym_keyword_date] = "keyword_date",
  [sym_keyword_datetime] = "keyword_datetime",
  [aux_sym_keyword_time_token1] = "keyword_time_token1",
  [aux_sym_keyword_timestamp_token1] = "keyword_timestamp_token1",
  [aux_sym_keyword_timestamptz_token1] = "keyword_timestamptz_token1",
  [aux_sym__without_time_zone_token1] = "_without_time_zone_token1",
  [aux_sym__with_time_zone_token1] = "_with_time_zone_token1",
  [aux_sym__keyword_time_zone_token1] = "_keyword_time_zone_token1",
  [sym_keyword_uuid] = "keyword_uuid",
  [sym_keyword_xml] = "keyword_xml",
  [sym_keyword_json] = "keyword_json",
  [sym_keyword_jsonb] = "keyword_jsonb",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_marginalia_token1] = "marginalia_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [sym__number] = "_number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym__ddl_statement] = "_ddl_statement",
  [sym__create_statement] = "_create_statement",
  [sym_create_table] = "create_table",
  [sym_column_definitions] = "column_definitions",
  [sym_column_definition] = "column_definition",
  [sym_column_constraint] = "column_constraint",
  [sym_table_reference] = "table_reference",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__if_not_exists] = "_if_not_exists",
  [sym__not_null] = "_not_null",
  [sym_keyword_temporary] = "keyword_temporary",
  [sym__type] = "_type",
  [sym__type_numeric] = "_type_numeric",
  [sym_double] = "double",
  [sym_decimal] = "decimal",
  [sym_numeric] = "numeric",
  [sym__type_character] = "_type_character",
  [sym_char] = "char",
  [sym_varchar] = "varchar",
  [sym__type_datetime] = "_type_datetime",
  [sym__type_geometric] = "_type_geometric",
  [sym__type_net] = "_type_net",
  [sym__type_bit_string] = "_type_bit_string",
  [sym__type_text_search] = "_type_text_search",
  [sym_keyword_char] = "keyword_char",
  [sym_keyword_varchar] = "keyword_varchar",
  [sym_keyword_time] = "keyword_time",
  [sym_keyword_timestamp] = "keyword_timestamp",
  [sym_keyword_timestamptz] = "keyword_timestamptz",
  [sym__without_time_zone] = "_without_time_zone",
  [sym__with_time_zone] = "_with_time_zone",
  [sym__keyword_time_zone] = "_keyword_time_zone",
  [sym_comment] = "comment",
  [sym_marginalia] = "marginalia",
  [sym__literal_string] = "_literal_string",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_column_definitions_repeat1] = "column_definitions_repeat1",
  [aux_sym_column_definition_repeat1] = "column_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_keyword_create] = sym_keyword_create,
  [sym_keyword_table] = sym_keyword_table,
  [aux_sym_keyword_temporary_token1] = aux_sym_keyword_temporary_token1,
  [aux_sym_keyword_temporary_token2] = aux_sym_keyword_temporary_token2,
  [sym_keyword_unlogged] = sym_keyword_unlogged,
  [sym_keyword_if] = sym_keyword_if,
  [sym_keyword_not] = sym_keyword_not,
  [sym_keyword_exists] = sym_keyword_exists,
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_constraint] = sym_keyword_constraint,
  [sym_keyword_default] = sym_keyword_default,
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
  [aux_sym_double_token1] = aux_sym_double_token1,
  [aux_sym_double_token2] = aux_sym_double_token2,
  [sym_keyword_boolean] = sym_keyword_boolean,
  [sym_keyword_smallint] = sym_keyword_smallint,
  [sym_keyword_integer] = sym_keyword_integer,
  [sym_keyword_bigint] = sym_keyword_bigint,
  [sym_keyword_decimal] = sym_keyword_decimal,
  [sym_keyword_numeric] = sym_keyword_numeric,
  [sym_keyword_real] = sym_keyword_real,
  [sym_keyword_smallserial] = sym_keyword_smallserial,
  [sym_keyword_serial] = sym_keyword_serial,
  [sym_keyword_bigserial] = sym_keyword_bigserial,
  [sym_keyword_money] = sym_keyword_money,
  [sym_keyword_text] = sym_keyword_text,
  [aux_sym_keyword_char_token1] = aux_sym_keyword_char_token1,
  [aux_sym_keyword_char_token2] = aux_sym_keyword_char_token2,
  [aux_sym_keyword_varchar_token1] = aux_sym_keyword_varchar_token1,
  [sym_keyword_bytea] = sym_keyword_bytea,
  [sym_keyword_date] = sym_keyword_date,
  [sym_keyword_datetime] = sym_keyword_datetime,
  [aux_sym_keyword_time_token1] = aux_sym_keyword_time_token1,
  [aux_sym_keyword_timestamp_token1] = aux_sym_keyword_timestamp_token1,
  [aux_sym_keyword_timestamptz_token1] = aux_sym_keyword_timestamptz_token1,
  [aux_sym__without_time_zone_token1] = aux_sym__without_time_zone_token1,
  [aux_sym__with_time_zone_token1] = aux_sym__with_time_zone_token1,
  [aux_sym__keyword_time_zone_token1] = aux_sym__keyword_time_zone_token1,
  [sym_keyword_uuid] = sym_keyword_uuid,
  [sym_keyword_xml] = sym_keyword_xml,
  [sym_keyword_json] = sym_keyword_json,
  [sym_keyword_jsonb] = sym_keyword_jsonb,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_marginalia_token1] = aux_sym_marginalia_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [sym__number] = sym__number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym__ddl_statement] = sym__ddl_statement,
  [sym__create_statement] = sym__create_statement,
  [sym_create_table] = sym_create_table,
  [sym_column_definitions] = sym_column_definitions,
  [sym_column_definition] = sym_column_definition,
  [sym_column_constraint] = sym_column_constraint,
  [sym_table_reference] = sym_table_reference,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__not_null] = sym__not_null,
  [sym_keyword_temporary] = sym_keyword_temporary,
  [sym__type] = sym__type,
  [sym__type_numeric] = sym__type_numeric,
  [sym_double] = sym_double,
  [sym_decimal] = sym_decimal,
  [sym_numeric] = sym_numeric,
  [sym__type_character] = sym__type_character,
  [sym_char] = sym_char,
  [sym_varchar] = sym_varchar,
  [sym__type_datetime] = sym__type_datetime,
  [sym__type_geometric] = sym__type_geometric,
  [sym__type_net] = sym__type_net,
  [sym__type_bit_string] = sym__type_bit_string,
  [sym__type_text_search] = sym__type_text_search,
  [sym_keyword_char] = sym_keyword_char,
  [sym_keyword_varchar] = sym_keyword_varchar,
  [sym_keyword_time] = sym_keyword_time,
  [sym_keyword_timestamp] = sym_keyword_timestamp,
  [sym_keyword_timestamptz] = sym_keyword_timestamptz,
  [sym__without_time_zone] = sym__without_time_zone,
  [sym__with_time_zone] = sym__with_time_zone,
  [sym__keyword_time_zone] = sym__keyword_time_zone,
  [sym_comment] = sym_comment,
  [sym_marginalia] = sym_marginalia,
  [sym__literal_string] = sym__literal_string,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_column_definitions_repeat1] = aux_sym_column_definitions_repeat1,
  [aux_sym_column_definition_repeat1] = aux_sym_column_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_create] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_temporary_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_temporary_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_unlogged] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_if] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_not] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_null] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_default] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_smallint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_bigint] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_real] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_smallserial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_serial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_bigserial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_money] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_varchar_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_bytea] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_date] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_datetime] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keyword_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamp_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamptz_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__without_time_zone_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__with_time_zone_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyword_time_zone_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_uuid] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_json] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_jsonb] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_marginalia_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__ddl_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__create_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_table] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_column_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__if_not_exists] = {
    .visible = false,
    .named = true,
  },
  [sym__not_null] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_temporary] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_numeric] = {
    .visible = false,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym__type_character] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym__type_datetime] = {
    .visible = false,
    .named = true,
  },
  [sym__type_geometric] = {
    .visible = false,
    .named = true,
  },
  [sym__type_net] = {
    .visible = false,
    .named = true,
  },
  [sym__type_bit_string] = {
    .visible = false,
    .named = true,
  },
  [sym__type_text_search] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_char] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_time] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_timestamptz] = {
    .visible = true,
    .named = true,
  },
  [sym__without_time_zone] = {
    .visible = false,
    .named = true,
  },
  [sym__with_time_zone] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_time_zone] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_marginalia] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_datatype = 1,
  field_name = 2,
  field_precision = 3,
  field_scale = 4,
  field_schema = 5,
  field_size = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_name] = "name",
  [field_precision] = "precision",
  [field_scale] = "scale",
  [field_schema] = "schema",
  [field_size] = "size",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_schema, 0},
  [3] =
    {field_datatype, 1},
    {field_name, 0},
  [5] =
    {field_precision, 2},
  [6] =
    {field_name, 1},
  [7] =
    {field_size, 2},
  [8] =
    {field_precision, 2},
    {field_scale, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [2] = sym_literal,
  },
  [6] = {
    [2] = sym_literal,
  },
  [7] = {
    [2] = sym_literal,
    [4] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_marginalia_token1);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'J') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead == 'V') ADVANCE(15);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(17);
      if (lookahead == 'Z') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'j') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead == 'z') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'Y') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == 'X') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'J') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead == 'V') ADVANCE(15);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(17);
      if (lookahead == 'Z') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'j') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead == 'z') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'M') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 59:
      if (lookahead == 'B') ADVANCE(121);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(122);
      if (lookahead == 'X') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'A') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == 'B') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(174);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(179);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 122:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(190);
      END_STATE();
    case 127:
      if (lookahead == 'D') ADVANCE(191);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(192);
      END_STATE();
    case 129:
      if (lookahead == 'H') ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 161:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 163:
      if (lookahead == 'N') ADVANCE(221);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 166:
      if (lookahead == 'A') ADVANCE(224);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'A') ADVANCE(225);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'M') ADVANCE(229);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(230);
      END_STATE();
    case 173:
      if (lookahead == 'L') ADVANCE(231);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 176:
      if (lookahead == 'G') ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(235);
      END_STATE();
    case 178:
      if (lookahead == 'Y') ADVANCE(236);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 181:
      if (lookahead == 'I') ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 183:
      if (lookahead == 'A') ADVANCE(239);
      END_STATE();
    case 184:
      if (lookahead == 'L') ADVANCE(240);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(242);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 190:
      if (lookahead == 'G') ADVANCE(244);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_keyword_uuid);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(245);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'O') ADVANCE(246);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 221:
      if (lookahead == 'T') ADVANCE(268);
      END_STATE();
    case 222:
      if (lookahead == 'R') ADVANCE(269);
      END_STATE();
    case 223:
      if (lookahead == 'A') ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 225:
      if (lookahead == 'C') ADVANCE(271);
      END_STATE();
    case 226:
      if (lookahead == 'R') ADVANCE(272);
      END_STATE();
    case 227:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 228:
      if (lookahead == 'I') ADVANCE(274);
      END_STATE();
    case 229:
      if (lookahead == 'A') ADVANCE(275);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(276);
      END_STATE();
    case 231:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'S') ADVANCE(278);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 237:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 238:
      if (lookahead == 'S') ADVANCE(281);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(282);
      END_STATE();
    case 240:
      if (lookahead == 'I') ADVANCE(283);
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 242:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 243:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 244:
      if (lookahead == 'G') ADVANCE(287);
      END_STATE();
    case 245:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 246:
      if (lookahead == 'U') ADVANCE(289);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 269:
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(308);
      END_STATE();
    case 271:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 272:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 274:
      if (lookahead == 'M') ADVANCE(311);
      END_STATE();
    case 275:
      if (lookahead == 'L') ADVANCE(312);
      END_STATE();
    case 276:
      if (lookahead == 'T') ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 280:
      if (lookahead == 'C') ADVANCE(315);
      END_STATE();
    case 281:
      if (lookahead == 'I') ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(317);
      END_STATE();
    case 284:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 285:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 286:
      if (lookahead == 'A') ADVANCE(320);
      END_STATE();
    case 287:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 288:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 307:
      if (lookahead == 'A') ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 309:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 310:
      if (lookahead == 'I') ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword_integer);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 316:
      if (lookahead == 'O') ADVANCE(338);
      END_STATE();
    case 317:
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(340);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(341);
      END_STATE();
    case 320:
      if (lookahead == 'M') ADVANCE(342);
      END_STATE();
    case 321:
      if (lookahead == 'D') ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__without_time_zone_token1);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 334:
      if (lookahead == 'L') ADVANCE(351);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(352);
      END_STATE();
    case 336:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 338:
      if (lookahead == 'N') ADVANCE(354);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 340:
      if (lookahead == 'I') ADVANCE(355);
      END_STATE();
    case 341:
      if (lookahead == 'Y') ADVANCE(356);
      END_STATE();
    case 342:
      if (lookahead == 'P') ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 349:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 355:
      if (lookahead == 'A') ADVANCE(362);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(363);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 362:
      if (lookahead == 'L') ADVANCE(366);
      END_STATE();
    case 363:
      if (lookahead == 'Z') ADVANCE(367);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 365:
      if (lookahead == 'z') ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_timestamptz_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {(TSStateId)(-1)},
  [110] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_marginalia] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
    [sym_keyword_table] = ACTIONS(1),
    [aux_sym_keyword_temporary_token1] = ACTIONS(1),
    [aux_sym_keyword_temporary_token2] = ACTIONS(1),
    [sym_keyword_unlogged] = ACTIONS(1),
    [sym_keyword_if] = ACTIONS(1),
    [sym_keyword_not] = ACTIONS(1),
    [sym_keyword_exists] = ACTIONS(1),
    [sym_keyword_null] = ACTIONS(1),
    [sym_keyword_constraint] = ACTIONS(1),
    [sym_keyword_default] = ACTIONS(1),
    [sym_keyword_true] = ACTIONS(1),
    [sym_keyword_false] = ACTIONS(1),
    [aux_sym_double_token1] = ACTIONS(1),
    [aux_sym_double_token2] = ACTIONS(1),
    [sym_keyword_boolean] = ACTIONS(1),
    [sym_keyword_smallint] = ACTIONS(1),
    [sym_keyword_integer] = ACTIONS(1),
    [sym_keyword_bigint] = ACTIONS(1),
    [sym_keyword_decimal] = ACTIONS(1),
    [sym_keyword_numeric] = ACTIONS(1),
    [sym_keyword_real] = ACTIONS(1),
    [sym_keyword_smallserial] = ACTIONS(1),
    [sym_keyword_serial] = ACTIONS(1),
    [sym_keyword_bigserial] = ACTIONS(1),
    [sym_keyword_money] = ACTIONS(1),
    [sym_keyword_text] = ACTIONS(1),
    [aux_sym_keyword_char_token1] = ACTIONS(1),
    [aux_sym_keyword_char_token2] = ACTIONS(1),
    [aux_sym_keyword_varchar_token1] = ACTIONS(1),
    [sym_keyword_bytea] = ACTIONS(1),
    [sym_keyword_date] = ACTIONS(1),
    [sym_keyword_datetime] = ACTIONS(1),
    [aux_sym_keyword_time_token1] = ACTIONS(1),
    [aux_sym_keyword_timestamp_token1] = ACTIONS(1),
    [aux_sym_keyword_timestamptz_token1] = ACTIONS(1),
    [aux_sym__without_time_zone_token1] = ACTIONS(1),
    [aux_sym__with_time_zone_token1] = ACTIONS(1),
    [aux_sym__keyword_time_zone_token1] = ACTIONS(1),
    [sym_keyword_uuid] = ACTIONS(1),
    [sym_keyword_xml] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
    [sym_keyword_jsonb] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(103),
    [sym_statement] = STATE(57),
    [sym__ddl_statement] = STATE(108),
    [sym__create_statement] = STATE(107),
    [sym_create_table] = STATE(104),
    [sym_comment] = STATE(1),
    [sym_marginalia] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_keyword_create] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      aux_sym_double_token1,
    ACTIONS(19), 1,
      sym_keyword_decimal,
    ACTIONS(21), 1,
      sym_keyword_numeric,
    ACTIONS(23), 1,
      sym_keyword_text,
    ACTIONS(25), 1,
      aux_sym_keyword_char_token1,
    ACTIONS(27), 1,
      aux_sym_keyword_char_token2,
    ACTIONS(29), 1,
      aux_sym_keyword_varchar_token1,
    ACTIONS(31), 1,
      sym_keyword_date,
    ACTIONS(33), 1,
      sym_keyword_datetime,
    ACTIONS(35), 1,
      aux_sym_keyword_time_token1,
    ACTIONS(37), 1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_timestamptz_token1,
    STATE(8), 1,
      sym__type,
    STATE(19), 1,
      sym_keyword_varchar,
    STATE(20), 1,
      sym_keyword_char,
    STATE(2), 2,
      sym_comment,
      sym_marginalia,
    STATE(49), 2,
      sym_char,
      sym_varchar,
    STATE(41), 3,
      sym_keyword_time,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
    STATE(46), 3,
      sym_double,
      sym_decimal,
      sym_numeric,
    ACTIONS(15), 5,
      sym_keyword_boolean,
      sym_keyword_money,
      sym_keyword_bytea,
      sym_keyword_uuid,
      sym_keyword_xml,
    ACTIONS(17), 7,
      sym_keyword_smallint,
      sym_keyword_integer,
      sym_keyword_bigint,
      sym_keyword_real,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
    STATE(45), 7,
      sym__type_numeric,
      sym__type_character,
      sym__type_datetime,
      sym__type_geometric,
      sym__type_net,
      sym__type_bit_string,
      sym__type_text_search,
  [95] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_time_token1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(41), 25,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      aux_sym_double_token1,
      sym_keyword_boolean,
      sym_keyword_smallint,
      sym_keyword_integer,
      sym_keyword_bigint,
      sym_keyword_decimal,
      sym_keyword_numeric,
      sym_keyword_real,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_money,
      sym_keyword_text,
      aux_sym_keyword_char_token1,
      aux_sym_keyword_varchar_token1,
      sym_keyword_bytea,
      sym_keyword_datetime,
      aux_sym_keyword_timestamptz_token1,
      sym_keyword_uuid,
      sym_keyword_xml,
  [139] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(47), 4,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_time_token1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(45), 25,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      aux_sym_double_token1,
      sym_keyword_boolean,
      sym_keyword_smallint,
      sym_keyword_integer,
      sym_keyword_bigint,
      sym_keyword_decimal,
      sym_keyword_numeric,
      sym_keyword_real,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
      sym_keyword_money,
      sym_keyword_text,
      aux_sym_keyword_char_token1,
      aux_sym_keyword_varchar_token1,
      sym_keyword_bytea,
      sym_keyword_datetime,
      aux_sym_keyword_timestamptz_token1,
      sym_keyword_uuid,
      sym_keyword_xml,
  [183] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(38), 1,
      sym__without_time_zone,
    STATE(44), 1,
      sym__with_time_zone,
    STATE(5), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(49), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [214] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(6), 2,
      sym_comment,
      sym_marginalia,
    STATE(24), 2,
      sym__without_time_zone,
      sym__with_time_zone,
    ACTIONS(55), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [243] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_keyword_not,
    ACTIONS(61), 1,
      sym_keyword_null,
    ACTIONS(63), 1,
      sym_keyword_constraint,
    ACTIONS(65), 1,
      sym_keyword_default,
    STATE(9), 1,
      aux_sym_column_definition_repeat1,
    STATE(22), 1,
      sym__not_null,
    STATE(39), 1,
      sym_column_constraint,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(7), 2,
      sym_comment,
      sym_marginalia,
  [279] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_keyword_not,
    ACTIONS(61), 1,
      sym_keyword_null,
    ACTIONS(63), 1,
      sym_keyword_constraint,
    ACTIONS(65), 1,
      sym_keyword_default,
    STATE(7), 1,
      aux_sym_column_definition_repeat1,
    STATE(22), 1,
      sym__not_null,
    STATE(39), 1,
      sym_column_constraint,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_comment,
      sym_marginalia,
  [315] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      sym_keyword_not,
    ACTIONS(74), 1,
      sym_keyword_null,
    ACTIONS(77), 1,
      sym_keyword_constraint,
    ACTIONS(80), 1,
      sym_keyword_default,
    STATE(22), 1,
      sym__not_null,
    STATE(39), 1,
      sym_column_constraint,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_column_definition_repeat1,
  [349] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_statement,
    STATE(104), 1,
      sym_create_table,
    STATE(107), 1,
      sym__create_statement,
    STATE(108), 1,
      sym__ddl_statement,
    STATE(10), 2,
      sym_comment,
      sym_marginalia,
  [384] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__literal_string,
    STATE(42), 1,
      sym_literal,
    STATE(43), 1,
      sym__expression,
    STATE(11), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [413] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__expression,
    STATE(25), 1,
      sym__literal_string,
    STATE(42), 1,
      sym_literal,
    STATE(12), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [442] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      sym_keyword_create,
    STATE(57), 1,
      sym_statement,
    STATE(104), 1,
      sym_create_table,
    STATE(107), 1,
      sym__create_statement,
    STATE(108), 1,
      sym__ddl_statement,
    STATE(13), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_source_file_repeat1,
  [475] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(97), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(99), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [515] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(101), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [535] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(17), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(106), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [557] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(18), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(110), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [579] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(19), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(114), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [601] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    STATE(20), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(118), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [623] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(120), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [642] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(122), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [661] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(124), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [680] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(126), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [699] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(128), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [718] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      sym__identifier,
    ACTIONS(132), 1,
      sym_keyword_if,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym__if_not_exists,
    STATE(67), 1,
      sym_identifier,
    STATE(71), 1,
      sym_table_reference,
    STATE(26), 2,
      sym_comment,
      sym_marginalia,
  [747] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(136), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [766] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(138), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [785] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(140), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [804] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(142), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [823] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(144), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [842] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(146), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [861] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(148), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [880] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(150), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [899] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(152), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [918] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(154), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [937] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(156), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [956] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(158), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [975] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(160), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [994] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(162), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1013] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(164), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1032] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(166), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1051] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(168), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1070] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(170), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1089] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(172), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1108] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(174), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1127] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      sym__identifier,
    ACTIONS(132), 1,
      sym_keyword_if,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym__if_not_exists,
    STATE(66), 1,
      sym_table_reference,
    STATE(67), 1,
      sym_identifier,
    STATE(47), 2,
      sym_comment,
      sym_marginalia,
  [1156] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(176), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1175] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(178), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
  [1194] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      sym_keyword_table,
    ACTIONS(182), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(184), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(186), 1,
      sym_keyword_unlogged,
    STATE(99), 1,
      sym_keyword_temporary,
    STATE(50), 2,
      sym_comment,
      sym_marginalia,
  [1220] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(59), 1,
      sym_column_definition,
    STATE(51), 2,
      sym_comment,
      sym_marginalia,
  [1246] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(70), 1,
      sym_column_definition,
    STATE(52), 2,
      sym_comment,
      sym_marginalia,
  [1269] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    STATE(67), 1,
      sym_identifier,
    STATE(71), 1,
      sym_table_reference,
    STATE(53), 2,
      sym_comment,
      sym_marginalia,
  [1292] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    STATE(65), 1,
      sym_table_reference,
    STATE(67), 1,
      sym_identifier,
    STATE(54), 2,
      sym_comment,
      sym_marginalia,
  [1315] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_keyword_not,
    ACTIONS(192), 1,
      sym_keyword_null,
    ACTIONS(194), 1,
      sym_keyword_default,
    STATE(48), 1,
      sym__not_null,
    STATE(55), 2,
      sym_comment,
      sym_marginalia,
  [1338] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_column_definitions_repeat1,
    STATE(56), 2,
      sym_comment,
      sym_marginalia,
  [1358] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1374] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(58), 2,
      sym_comment,
      sym_marginalia,
  [1394] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_column_definitions_repeat1,
    STATE(59), 2,
      sym_comment,
      sym_marginalia,
  [1414] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1430] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1446] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(62), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_column_definitions_repeat1,
  [1464] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    STATE(63), 2,
      sym_comment,
      sym_marginalia,
  [1484] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_comment,
      sym_marginalia,
  [1501] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_column_definitions,
    STATE(65), 2,
      sym_comment,
      sym_marginalia,
  [1518] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_column_definitions,
    STATE(66), 2,
      sym_comment,
      sym_marginalia,
  [1535] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(67), 2,
      sym_comment,
      sym_marginalia,
  [1552] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_keyword_time_token1,
    STATE(31), 1,
      sym__keyword_time_zone,
    STATE(68), 2,
      sym_comment,
      sym_marginalia,
  [1569] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      aux_sym_keyword_time_token1,
    STATE(30), 1,
      sym__keyword_time_zone,
    STATE(69), 2,
      sym_comment,
      sym_marginalia,
  [1586] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(70), 2,
      sym_comment,
      sym_marginalia,
  [1601] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_column_definitions,
    STATE(71), 2,
      sym_comment,
      sym_marginalia,
  [1618] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(72), 2,
      sym_comment,
      sym_marginalia,
  [1633] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_comment,
      sym_marginalia,
  [1650] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(74), 2,
      sym_comment,
      sym_marginalia,
  [1664] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(75), 2,
      sym_comment,
      sym_marginalia,
  [1678] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(76), 2,
      sym_comment,
      sym_marginalia,
  [1692] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(77), 2,
      sym_comment,
      sym_marginalia,
  [1706] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    STATE(78), 2,
      sym_comment,
      sym_marginalia,
  [1720] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      sym__number,
    STATE(79), 2,
      sym_comment,
      sym_marginalia,
  [1734] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym__number,
    STATE(80), 2,
      sym_comment,
      sym_marginalia,
  [1748] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      sym__number,
    STATE(81), 2,
      sym_comment,
      sym_marginalia,
  [1762] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(82), 2,
      sym_comment,
      sym_marginalia,
  [1776] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(83), 2,
      sym_comment,
      sym_marginalia,
  [1790] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      sym_keyword_null,
    STATE(84), 2,
      sym_comment,
      sym_marginalia,
  [1804] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 2,
      sym_comment,
      sym_marginalia,
  [1818] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(86), 2,
      sym_comment,
      sym_marginalia,
  [1832] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    STATE(87), 2,
      sym_comment,
      sym_marginalia,
  [1846] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      sym_keyword_exists,
    STATE(88), 2,
      sym_comment,
      sym_marginalia,
  [1860] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      aux_sym__literal_string_token1,
    STATE(89), 2,
      sym_comment,
      sym_marginalia,
  [1874] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(90), 2,
      sym_comment,
      sym_marginalia,
  [1888] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      sym__number,
    STATE(91), 2,
      sym_comment,
      sym_marginalia,
  [1902] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      aux_sym_identifier_token1,
    STATE(92), 2,
      sym_comment,
      sym_marginalia,
  [1916] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      aux_sym_double_token2,
    STATE(93), 2,
      sym_comment,
      sym_marginalia,
  [1930] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_comment,
      sym_marginalia,
  [1944] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      sym__number,
    STATE(95), 2,
      sym_comment,
      sym_marginalia,
  [1958] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      sym_keyword_not,
    STATE(96), 2,
      sym_comment,
      sym_marginalia,
  [1972] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      sym__number,
    STATE(97), 2,
      sym_comment,
      sym_marginalia,
  [1986] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym_marginalia_token1,
    STATE(98), 2,
      sym_comment,
      sym_marginalia,
  [2000] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      sym_keyword_table,
    STATE(99), 2,
      sym_comment,
      sym_marginalia,
  [2014] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      sym_keyword_table,
    STATE(100), 2,
      sym_comment,
      sym_marginalia,
  [2028] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_SLASH,
    STATE(101), 2,
      sym_comment,
      sym_marginalia,
  [2042] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    STATE(102), 2,
      sym_comment,
      sym_marginalia,
  [2056] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym_comment,
      sym_marginalia,
  [2070] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(104), 2,
      sym_comment,
      sym_marginalia,
  [2084] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(105), 2,
      sym_comment,
      sym_marginalia,
  [2098] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(106), 2,
      sym_comment,
      sym_marginalia,
  [2112] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(107), 2,
      sym_comment,
      sym_marginalia,
  [2126] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    STATE(108), 2,
      sym_comment,
      sym_marginalia,
  [2140] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [2144] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 139,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 384,
  [SMALL_STATE(12)] = 413,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 475,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 535,
  [SMALL_STATE(18)] = 557,
  [SMALL_STATE(19)] = 579,
  [SMALL_STATE(20)] = 601,
  [SMALL_STATE(21)] = 623,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 661,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 766,
  [SMALL_STATE(29)] = 785,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 880,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 918,
  [SMALL_STATE(37)] = 937,
  [SMALL_STATE(38)] = 956,
  [SMALL_STATE(39)] = 975,
  [SMALL_STATE(40)] = 994,
  [SMALL_STATE(41)] = 1013,
  [SMALL_STATE(42)] = 1032,
  [SMALL_STATE(43)] = 1051,
  [SMALL_STATE(44)] = 1070,
  [SMALL_STATE(45)] = 1089,
  [SMALL_STATE(46)] = 1108,
  [SMALL_STATE(47)] = 1127,
  [SMALL_STATE(48)] = 1156,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1194,
  [SMALL_STATE(51)] = 1220,
  [SMALL_STATE(52)] = 1246,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1292,
  [SMALL_STATE(55)] = 1315,
  [SMALL_STATE(56)] = 1338,
  [SMALL_STATE(57)] = 1358,
  [SMALL_STATE(58)] = 1374,
  [SMALL_STATE(59)] = 1394,
  [SMALL_STATE(60)] = 1414,
  [SMALL_STATE(61)] = 1430,
  [SMALL_STATE(62)] = 1446,
  [SMALL_STATE(63)] = 1464,
  [SMALL_STATE(64)] = 1484,
  [SMALL_STATE(65)] = 1501,
  [SMALL_STATE(66)] = 1518,
  [SMALL_STATE(67)] = 1535,
  [SMALL_STATE(68)] = 1552,
  [SMALL_STATE(69)] = 1569,
  [SMALL_STATE(70)] = 1586,
  [SMALL_STATE(71)] = 1601,
  [SMALL_STATE(72)] = 1618,
  [SMALL_STATE(73)] = 1633,
  [SMALL_STATE(74)] = 1650,
  [SMALL_STATE(75)] = 1664,
  [SMALL_STATE(76)] = 1678,
  [SMALL_STATE(77)] = 1692,
  [SMALL_STATE(78)] = 1706,
  [SMALL_STATE(79)] = 1720,
  [SMALL_STATE(80)] = 1734,
  [SMALL_STATE(81)] = 1748,
  [SMALL_STATE(82)] = 1762,
  [SMALL_STATE(83)] = 1776,
  [SMALL_STATE(84)] = 1790,
  [SMALL_STATE(85)] = 1804,
  [SMALL_STATE(86)] = 1818,
  [SMALL_STATE(87)] = 1832,
  [SMALL_STATE(88)] = 1846,
  [SMALL_STATE(89)] = 1860,
  [SMALL_STATE(90)] = 1874,
  [SMALL_STATE(91)] = 1888,
  [SMALL_STATE(92)] = 1902,
  [SMALL_STATE(93)] = 1916,
  [SMALL_STATE(94)] = 1930,
  [SMALL_STATE(95)] = 1944,
  [SMALL_STATE(96)] = 1958,
  [SMALL_STATE(97)] = 1972,
  [SMALL_STATE(98)] = 1986,
  [SMALL_STATE(99)] = 2000,
  [SMALL_STATE(100)] = 2014,
  [SMALL_STATE(101)] = 2028,
  [SMALL_STATE(102)] = 2042,
  [SMALL_STATE(103)] = 2056,
  [SMALL_STATE(104)] = 2070,
  [SMALL_STATE(105)] = 2084,
  [SMALL_STATE(106)] = 2098,
  [SMALL_STATE(107)] = 2112,
  [SMALL_STATE(108)] = 2126,
  [SMALL_STATE(109)] = 2140,
  [SMALL_STATE(110)] = 2144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(84),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_char, 1), REDUCE(sym_keyword_varchar, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_time_zone, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__without_time_zone, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyword_time_zone, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_datetime, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4, .production_id = 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_numeric, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_character, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(52),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginalia, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_plpgsql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
