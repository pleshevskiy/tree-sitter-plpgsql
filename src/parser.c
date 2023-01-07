#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  sym_keyword_nulls = 20,
  sym_keyword_distinct = 21,
  sym_keyword_unique = 22,
  aux_sym_double_token1 = 23,
  aux_sym_double_token2 = 24,
  sym_keyword_boolean = 25,
  sym_keyword_smallint = 26,
  sym_keyword_integer = 27,
  sym_keyword_bigint = 28,
  sym_keyword_decimal = 29,
  sym_keyword_numeric = 30,
  sym_keyword_real = 31,
  sym_keyword_smallserial = 32,
  sym_keyword_serial = 33,
  sym_keyword_bigserial = 34,
  sym_keyword_money = 35,
  sym_keyword_text = 36,
  aux_sym_keyword_char_token1 = 37,
  aux_sym_keyword_char_token2 = 38,
  aux_sym_keyword_varchar_token1 = 39,
  sym_keyword_bytea = 40,
  sym_keyword_date = 41,
  sym_keyword_datetime = 42,
  aux_sym_keyword_time_token1 = 43,
  aux_sym_keyword_timestamp_token1 = 44,
  aux_sym_keyword_timestamptz_token1 = 45,
  aux_sym__without_time_zone_token1 = 46,
  aux_sym__with_time_zone_token1 = 47,
  aux_sym__keyword_time_zone_token1 = 48,
  sym_keyword_uuid = 49,
  sym_keyword_xml = 50,
  sym_keyword_json = 51,
  sym_keyword_jsonb = 52,
  anon_sym_DASH_DASH = 53,
  aux_sym_line_comment_token1 = 54,
  anon_sym_SLASH_STAR = 55,
  aux_sym_block_comment_token1 = 56,
  anon_sym_SLASH = 57,
  anon_sym_SQUOTE = 58,
  aux_sym__literal_string_token1 = 59,
  sym__number = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_identifier_token1 = 62,
  sym_source_file = 63,
  sym_statement = 64,
  sym__ddl_statement = 65,
  sym__create_statement = 66,
  sym_create_table = 67,
  sym_column_definitions = 68,
  sym_column_definition = 69,
  sym_column_constraint = 70,
  sym_table_reference = 71,
  sym__expression = 72,
  sym_literal = 73,
  sym__if_not_exists = 74,
  sym__not_null = 75,
  sym_keyword_temporary = 76,
  sym__type = 77,
  sym__type_numeric = 78,
  sym_double = 79,
  sym_decimal = 80,
  sym_numeric = 81,
  sym__type_character = 82,
  sym_char = 83,
  sym_varchar = 84,
  sym__type_datetime = 85,
  sym__type_geometric = 86,
  sym__type_net = 87,
  sym__type_bit_string = 88,
  sym__type_text_search = 89,
  sym_keyword_char = 90,
  sym_keyword_varchar = 91,
  sym_keyword_time = 92,
  sym_keyword_timestamp = 93,
  sym_keyword_timestamptz = 94,
  sym__without_time_zone = 95,
  sym__with_time_zone = 96,
  sym__keyword_time_zone = 97,
  sym_line_comment = 98,
  sym_block_comment = 99,
  sym__literal_string = 100,
  sym_identifier = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym_column_definitions_repeat1 = 103,
  aux_sym_column_definition_repeat1 = 104,
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
  [sym_keyword_nulls] = "keyword_nulls",
  [sym_keyword_distinct] = "keyword_distinct",
  [sym_keyword_unique] = "keyword_unique",
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
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
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
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
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
  [sym_keyword_nulls] = sym_keyword_nulls,
  [sym_keyword_distinct] = sym_keyword_distinct,
  [sym_keyword_unique] = sym_keyword_unique,
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
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
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
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
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
  [sym_keyword_nulls] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_unique] = {
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
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
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
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
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
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
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
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == 'X') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(100);
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
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(113);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(119);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 60:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'X') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(170);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 103:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(173);
      END_STATE();
    case 105:
      if (lookahead == 'S') ADVANCE(174);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(175);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 109:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(179);
      END_STATE();
    case 111:
      if (lookahead == 'B') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 113:
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(188);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(191);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(194);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'Q') ADVANCE(197);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(198);
      END_STATE();
    case 131:
      if (lookahead == 'D') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'H') ADVANCE(201);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'q') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 169:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(234);
      END_STATE();
    case 172:
      if (lookahead == 'A') ADVANCE(235);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'A') ADVANCE(236);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 177:
      if (lookahead == 'M') ADVANCE(240);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(241);
      END_STATE();
    case 179:
      if (lookahead == 'I') ADVANCE(242);
      END_STATE();
    case 180:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 183:
      if (lookahead == 'G') ADVANCE(246);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(247);
      END_STATE();
    case 185:
      if (lookahead == 'Y') ADVANCE(248);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 'S') ADVANCE(249);
      END_STATE();
    case 187:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 188:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 190:
      if (lookahead == 'A') ADVANCE(252);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(253);
      END_STATE();
    case 192:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(255);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 197:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_uuid);
      END_STATE();
    case 200:
      if (lookahead == 'H') ADVANCE(259);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(284);
      END_STATE();
    case 233:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 234:
      if (lookahead == 'A') ADVANCE(286);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 236:
      if (lookahead == 'C') ADVANCE(287);
      END_STATE();
    case 237:
      if (lookahead == 'R') ADVANCE(288);
      END_STATE();
    case 238:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 239:
      if (lookahead == 'I') ADVANCE(290);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(291);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'N') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'E') ADVANCE(294);
      END_STATE();
    case 244:
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_nulls);
      END_STATE();
    case 250:
      if (lookahead == 'I') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == 'S') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'I') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(301);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'E') ADVANCE(304);
      END_STATE();
    case 258:
      if (lookahead == 'G') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'A') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'U') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 285:
      if (lookahead == 'I') ADVANCE(326);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(328);
      END_STATE();
    case 288:
      if (lookahead == 'A') ADVANCE(329);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 290:
      if (lookahead == 'M') ADVANCE(330);
      END_STATE();
    case 291:
      if (lookahead == 'L') ADVANCE(331);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(332);
      END_STATE();
    case 293:
      if (lookahead == 'C') ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 296:
      if (lookahead == 'R') ADVANCE(334);
      END_STATE();
    case 297:
      if (lookahead == 'C') ADVANCE(335);
      END_STATE();
    case 298:
      if (lookahead == 'I') ADVANCE(336);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 300:
      if (lookahead == 'N') ADVANCE(337);
      END_STATE();
    case 301:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 302:
      if (lookahead == 'A') ADVANCE(339);
      END_STATE();
    case 303:
      if (lookahead == 'A') ADVANCE(340);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_unique);
      END_STATE();
    case 305:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(342);
      END_STATE();
    case 307:
      if (lookahead == 'T') ADVANCE(343);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 326:
      if (lookahead == 'A') ADVANCE(355);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 328:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 329:
      if (lookahead == 'I') ADVANCE(357);
      END_STATE();
    case 330:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 333:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keyword_integer);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 336:
      if (lookahead == 'O') ADVANCE(360);
      END_STATE();
    case 337:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(362);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(363);
      END_STATE();
    case 340:
      if (lookahead == 'M') ADVANCE(364);
      END_STATE();
    case 341:
      if (lookahead == 'D') ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__without_time_zone_token1);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 355:
      if (lookahead == 'L') ADVANCE(373);
      END_STATE();
    case 356:
      if (lookahead == 'R') ADVANCE(374);
      END_STATE();
    case 357:
      if (lookahead == 'N') ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 360:
      if (lookahead == 'N') ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 362:
      if (lookahead == 'I') ADVANCE(377);
      END_STATE();
    case 363:
      if (lookahead == 'Y') ADVANCE(378);
      END_STATE();
    case 364:
      if (lookahead == 'P') ADVANCE(379);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 371:
      if (lookahead == 'y') ADVANCE(378);
      END_STATE();
    case 372:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 377:
      if (lookahead == 'A') ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(385);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 384:
      if (lookahead == 'L') ADVANCE(388);
      END_STATE();
    case 385:
      if (lookahead == 'Z') ADVANCE(389);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 387:
      if (lookahead == 'z') ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 389:
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
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {(TSStateId)(-1)},
  [120] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
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
    [sym_keyword_nulls] = ACTIONS(1),
    [sym_keyword_distinct] = ACTIONS(1),
    [sym_keyword_unique] = ACTIONS(1),
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
    [sym_source_file] = STATE(91),
    [sym_statement] = STATE(66),
    [sym__ddl_statement] = STATE(88),
    [sym__create_statement] = STATE(85),
    [sym_create_table] = STATE(100),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    STATE(9), 1,
      sym__type,
    STATE(10), 1,
      sym_keyword_char,
    STATE(13), 1,
      sym_keyword_varchar,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 2,
      sym_char,
      sym_varchar,
    STATE(51), 3,
      sym_double,
      sym_decimal,
      sym_numeric,
    STATE(53), 3,
      sym_keyword_time,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
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
    STATE(50), 7,
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
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 4,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_time_token1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(41), 26,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
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
  [140] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 4,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_time_token1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(45), 26,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
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
  [185] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(38), 2,
      sym__without_time_zone,
      sym__with_time_zone,
    ACTIONS(49), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [215] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(35), 1,
      sym__with_time_zone,
    STATE(37), 1,
      sym__without_time_zone,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [247] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym_keyword_not,
    ACTIONS(62), 1,
      sym_keyword_null,
    ACTIONS(65), 1,
      sym_keyword_constraint,
    ACTIONS(68), 1,
      sym_keyword_default,
    ACTIONS(71), 1,
      sym_keyword_unique,
    STATE(31), 1,
      sym_column_constraint,
    STATE(32), 1,
      sym__not_null,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definition_repeat1,
  [284] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      sym_keyword_not,
    ACTIONS(78), 1,
      sym_keyword_null,
    ACTIONS(80), 1,
      sym_keyword_constraint,
    ACTIONS(82), 1,
      sym_keyword_default,
    ACTIONS(84), 1,
      sym_keyword_unique,
    STATE(7), 1,
      aux_sym_column_definition_repeat1,
    STATE(31), 1,
      sym_column_constraint,
    STATE(32), 1,
      sym__not_null,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
  [323] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      sym_keyword_not,
    ACTIONS(78), 1,
      sym_keyword_null,
    ACTIONS(80), 1,
      sym_keyword_constraint,
    ACTIONS(82), 1,
      sym_keyword_default,
    ACTIONS(84), 1,
      sym_keyword_unique,
    STATE(8), 1,
      aux_sym_column_definition_repeat1,
    STATE(31), 1,
      sym_column_constraint,
    STATE(32), 1,
      sym__not_null,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
  [362] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [385] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(66), 1,
      sym_statement,
    STATE(85), 1,
      sym__create_statement,
    STATE(88), 1,
      sym__ddl_statement,
    STATE(100), 1,
      sym_create_table,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
  [420] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      sym_keyword_null,
    ACTIONS(98), 1,
      sym_keyword_nulls,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [445] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [468] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__expression,
    STATE(24), 1,
      sym_literal,
    STATE(39), 1,
      sym__literal_string,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [497] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [518] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(112), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [541] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [562] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      sym_keyword_create,
    STATE(66), 1,
      sym_statement,
    STATE(85), 1,
      sym__create_statement,
    STATE(88), 1,
      sym__ddl_statement,
    STATE(100), 1,
      sym_create_table,
    STATE(18), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [595] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym_keyword_null,
    ACTIONS(128), 1,
      sym_keyword_nulls,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [620] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [641] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [664] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_literal,
    STATE(39), 1,
      sym__literal_string,
    STATE(43), 1,
      sym__expression,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [693] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [713] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [733] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [793] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [813] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [833] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [853] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [873] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [893] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [913] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [933] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [953] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [973] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [993] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1013] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1033] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1053] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1073] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1093] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1113] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1133] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1153] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1173] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1193] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1213] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1233] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1253] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1273] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1293] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
  [1313] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_if,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym__if_not_exists,
    STATE(75), 1,
      sym_identifier,
    STATE(80), 1,
      sym_table_reference,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
  [1342] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym__identifier,
    ACTIONS(197), 1,
      sym_keyword_if,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym__if_not_exists,
    STATE(71), 1,
      sym_table_reference,
    STATE(75), 1,
      sym_identifier,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1371] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym_keyword_table,
    ACTIONS(203), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(205), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(207), 1,
      sym_keyword_unlogged,
    STATE(109), 1,
      sym_keyword_temporary,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [1397] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      sym_keyword_not,
    ACTIONS(209), 1,
      sym_keyword_null,
    ACTIONS(211), 1,
      sym_keyword_default,
    ACTIONS(213), 1,
      sym_keyword_unique,
    STATE(48), 1,
      sym__not_null,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [1423] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(65), 1,
      sym_column_definition,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [1449] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(79), 1,
      sym_column_definition,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [1472] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    STATE(71), 1,
      sym_table_reference,
    STATE(75), 1,
      sym_identifier,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [1495] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    STATE(72), 1,
      sym_table_reference,
    STATE(75), 1,
      sym_identifier,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [1518] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    STATE(112), 1,
      sym_identifier,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
  [1538] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_column_definitions_repeat1,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
  [1558] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1574] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_column_definitions_repeat1,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
  [1594] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1610] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym__identifier,
    STATE(57), 1,
      sym_identifier,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
  [1630] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(68), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definitions_repeat1,
  [1648] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1664] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_keyword_time_token1,
    STATE(30), 1,
      sym__keyword_time_zone,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
  [1681] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_column_definitions,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
  [1698] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_column_definitions,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
  [1715] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      aux_sym_keyword_time_token1,
    STATE(29), 1,
      sym__keyword_time_zone,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
  [1732] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
  [1747] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
  [1764] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 1,
      sym_keyword_not,
    ACTIONS(248), 1,
      sym_keyword_distinct,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
  [1781] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
  [1798] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
  [1815] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
  [1830] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_column_definitions,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
  [1847] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(258), 1,
      sym_keyword_not,
    ACTIONS(260), 1,
      sym_keyword_distinct,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
  [1864] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(82), 2,
      sym_line_comment,
      sym_block_comment,
  [1878] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
  [1892] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(266), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(84), 2,
      sym_line_comment,
      sym_block_comment,
  [1906] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(85), 2,
      sym_line_comment,
      sym_block_comment,
  [1920] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(270), 1,
      sym__number,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
  [1934] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(272), 1,
      sym__number,
    STATE(87), 2,
      sym_line_comment,
      sym_block_comment,
  [1948] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
  [1962] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      sym_keyword_not,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
  [1976] = 4,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    ACTIONS(280), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(282), 1,
      aux_sym__literal_string_token1,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
  [1990] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
  [2004] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 1,
      sym__number,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
  [2018] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      sym__number,
    STATE(93), 2,
      sym_line_comment,
      sym_block_comment,
  [2032] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(94), 2,
      sym_line_comment,
      sym_block_comment,
  [2046] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_line_comment,
      sym_block_comment,
  [2060] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(96), 2,
      sym_line_comment,
      sym_block_comment,
  [2074] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(296), 1,
      sym__number,
    STATE(97), 2,
      sym_line_comment,
      sym_block_comment,
  [2088] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    STATE(98), 2,
      sym_line_comment,
      sym_block_comment,
  [2102] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      sym__number,
    STATE(99), 2,
      sym_line_comment,
      sym_block_comment,
  [2116] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    STATE(100), 2,
      sym_line_comment,
      sym_block_comment,
  [2130] = 4,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    ACTIONS(280), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_identifier_token1,
    STATE(101), 2,
      sym_line_comment,
      sym_block_comment,
  [2144] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      anon_sym_SLASH,
    STATE(102), 2,
      sym_line_comment,
      sym_block_comment,
  [2158] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(308), 1,
      sym_keyword_table,
    STATE(103), 2,
      sym_line_comment,
      sym_block_comment,
  [2172] = 4,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    ACTIONS(280), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      aux_sym_block_comment_token1,
    STATE(104), 2,
      sym_line_comment,
      sym_block_comment,
  [2186] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    STATE(105), 2,
      sym_line_comment,
      sym_block_comment,
  [2200] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      sym_keyword_distinct,
    STATE(106), 2,
      sym_line_comment,
      sym_block_comment,
  [2214] = 4,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    ACTIONS(280), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(316), 1,
      aux_sym_line_comment_token1,
    STATE(107), 2,
      sym_line_comment,
      sym_block_comment,
  [2228] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      aux_sym_double_token2,
    STATE(108), 2,
      sym_line_comment,
      sym_block_comment,
  [2242] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      sym_keyword_table,
    STATE(109), 2,
      sym_line_comment,
      sym_block_comment,
  [2256] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 1,
      sym_keyword_null,
    STATE(110), 2,
      sym_line_comment,
      sym_block_comment,
  [2270] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_line_comment,
      sym_block_comment,
  [2284] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(112), 2,
      sym_line_comment,
      sym_block_comment,
  [2298] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(113), 2,
      sym_line_comment,
      sym_block_comment,
  [2312] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(114), 2,
      sym_line_comment,
      sym_block_comment,
  [2326] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(115), 2,
      sym_line_comment,
      sym_block_comment,
  [2340] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(116), 2,
      sym_line_comment,
      sym_block_comment,
  [2354] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      sym_keyword_exists,
    STATE(117), 2,
      sym_line_comment,
      sym_block_comment,
  [2368] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(338), 1,
      sym_keyword_distinct,
    STATE(118), 2,
      sym_line_comment,
      sym_block_comment,
  [2382] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [2386] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 215,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 362,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 562,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 641,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 693,
  [SMALL_STATE(24)] = 713,
  [SMALL_STATE(25)] = 733,
  [SMALL_STATE(26)] = 753,
  [SMALL_STATE(27)] = 773,
  [SMALL_STATE(28)] = 793,
  [SMALL_STATE(29)] = 813,
  [SMALL_STATE(30)] = 833,
  [SMALL_STATE(31)] = 853,
  [SMALL_STATE(32)] = 873,
  [SMALL_STATE(33)] = 893,
  [SMALL_STATE(34)] = 913,
  [SMALL_STATE(35)] = 933,
  [SMALL_STATE(36)] = 953,
  [SMALL_STATE(37)] = 973,
  [SMALL_STATE(38)] = 993,
  [SMALL_STATE(39)] = 1013,
  [SMALL_STATE(40)] = 1033,
  [SMALL_STATE(41)] = 1053,
  [SMALL_STATE(42)] = 1073,
  [SMALL_STATE(43)] = 1093,
  [SMALL_STATE(44)] = 1113,
  [SMALL_STATE(45)] = 1133,
  [SMALL_STATE(46)] = 1153,
  [SMALL_STATE(47)] = 1173,
  [SMALL_STATE(48)] = 1193,
  [SMALL_STATE(49)] = 1213,
  [SMALL_STATE(50)] = 1233,
  [SMALL_STATE(51)] = 1253,
  [SMALL_STATE(52)] = 1273,
  [SMALL_STATE(53)] = 1293,
  [SMALL_STATE(54)] = 1313,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1371,
  [SMALL_STATE(57)] = 1397,
  [SMALL_STATE(58)] = 1423,
  [SMALL_STATE(59)] = 1449,
  [SMALL_STATE(60)] = 1472,
  [SMALL_STATE(61)] = 1495,
  [SMALL_STATE(62)] = 1518,
  [SMALL_STATE(63)] = 1538,
  [SMALL_STATE(64)] = 1558,
  [SMALL_STATE(65)] = 1574,
  [SMALL_STATE(66)] = 1594,
  [SMALL_STATE(67)] = 1610,
  [SMALL_STATE(68)] = 1630,
  [SMALL_STATE(69)] = 1648,
  [SMALL_STATE(70)] = 1664,
  [SMALL_STATE(71)] = 1681,
  [SMALL_STATE(72)] = 1698,
  [SMALL_STATE(73)] = 1715,
  [SMALL_STATE(74)] = 1732,
  [SMALL_STATE(75)] = 1747,
  [SMALL_STATE(76)] = 1764,
  [SMALL_STATE(77)] = 1781,
  [SMALL_STATE(78)] = 1798,
  [SMALL_STATE(79)] = 1815,
  [SMALL_STATE(80)] = 1830,
  [SMALL_STATE(81)] = 1847,
  [SMALL_STATE(82)] = 1864,
  [SMALL_STATE(83)] = 1878,
  [SMALL_STATE(84)] = 1892,
  [SMALL_STATE(85)] = 1906,
  [SMALL_STATE(86)] = 1920,
  [SMALL_STATE(87)] = 1934,
  [SMALL_STATE(88)] = 1948,
  [SMALL_STATE(89)] = 1962,
  [SMALL_STATE(90)] = 1976,
  [SMALL_STATE(91)] = 1990,
  [SMALL_STATE(92)] = 2004,
  [SMALL_STATE(93)] = 2018,
  [SMALL_STATE(94)] = 2032,
  [SMALL_STATE(95)] = 2046,
  [SMALL_STATE(96)] = 2060,
  [SMALL_STATE(97)] = 2074,
  [SMALL_STATE(98)] = 2088,
  [SMALL_STATE(99)] = 2102,
  [SMALL_STATE(100)] = 2116,
  [SMALL_STATE(101)] = 2130,
  [SMALL_STATE(102)] = 2144,
  [SMALL_STATE(103)] = 2158,
  [SMALL_STATE(104)] = 2172,
  [SMALL_STATE(105)] = 2186,
  [SMALL_STATE(106)] = 2200,
  [SMALL_STATE(107)] = 2214,
  [SMALL_STATE(108)] = 2228,
  [SMALL_STATE(109)] = 2242,
  [SMALL_STATE(110)] = 2256,
  [SMALL_STATE(111)] = 2270,
  [SMALL_STATE(112)] = 2284,
  [SMALL_STATE(113)] = 2298,
  [SMALL_STATE(114)] = 2312,
  [SMALL_STATE(115)] = 2326,
  [SMALL_STATE(116)] = 2340,
  [SMALL_STATE(117)] = 2354,
  [SMALL_STATE(118)] = 2368,
  [SMALL_STATE(119)] = 2382,
  [SMALL_STATE(120)] = 2386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(110),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(32),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(67),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_char, 1), REDUCE(sym_keyword_varchar, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 6, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 5, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_time_zone, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__without_time_zone, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyword_time_zone, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_numeric, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_character, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_datetime, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
