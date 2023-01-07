#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  aux_sym_double_token1 = 7,
  aux_sym_double_token2 = 8,
  aux_sym__without_time_zone_token1 = 9,
  aux_sym__with_time_zone_token1 = 10,
  aux_sym__keyword_time_zone_token1 = 11,
  aux_sym__keyword_time_zone_token2 = 12,
  sym_keyword_create = 13,
  sym_keyword_table = 14,
  aux_sym_keyword_temporary_token1 = 15,
  aux_sym_keyword_temporary_token2 = 16,
  sym_keyword_unlogged = 17,
  sym_keyword_if = 18,
  sym_keyword_not = 19,
  sym_keyword_exists = 20,
  sym_keyword_null = 21,
  sym_keyword_constraint = 22,
  sym_keyword_default = 23,
  sym_keyword_true = 24,
  sym_keyword_false = 25,
  sym_keyword_nulls = 26,
  sym_keyword_distinct = 27,
  sym_keyword_unique = 28,
  aux_sym_keyword_primary_key_token1 = 29,
  aux_sym_keyword_primary_key_token2 = 30,
  sym_keyword_xml = 31,
  sym_keyword_uuid = 32,
  sym_keyword_json = 33,
  sym_keyword_jsonb = 34,
  sym_keyword_boolean = 35,
  sym_keyword_smallint = 36,
  sym_keyword_integer = 37,
  sym_keyword_bigint = 38,
  sym_keyword_decimal = 39,
  sym_keyword_numeric = 40,
  sym_keyword_real = 41,
  sym_keyword_smallserial = 42,
  sym_keyword_serial = 43,
  sym_keyword_bigserial = 44,
  sym_keyword_money = 45,
  sym_keyword_text = 46,
  aux_sym_keyword_char_token1 = 47,
  aux_sym_keyword_char_token2 = 48,
  aux_sym_keyword_varchar_token1 = 49,
  sym_keyword_bytea = 50,
  sym_keyword_date = 51,
  sym_keyword_datetime = 52,
  aux_sym_keyword_timestamp_token1 = 53,
  aux_sym_keyword_timestamptz_token1 = 54,
  anon_sym_DASH_DASH = 55,
  aux_sym_line_comment_token1 = 56,
  anon_sym_SLASH_STAR = 57,
  aux_sym_block_comment_token1 = 58,
  anon_sym_SLASH = 59,
  anon_sym_SQUOTE = 60,
  aux_sym__literal_string_token1 = 61,
  sym__number = 62,
  anon_sym_DQUOTE = 63,
  aux_sym_identifier_token1 = 64,
  sym_source_file = 65,
  sym_statement = 66,
  sym__ddl_statement = 67,
  sym__create_statement = 68,
  sym_create_table = 69,
  sym_column_definitions = 70,
  sym_column_definition = 71,
  sym_column_constraint = 72,
  sym_table_reference = 73,
  sym__expression = 74,
  sym_literal = 75,
  sym__type = 76,
  sym__type_numeric = 77,
  sym_double = 78,
  sym_decimal = 79,
  sym_numeric = 80,
  sym__type_character = 81,
  sym_char = 82,
  sym_varchar = 83,
  sym__type_datetime = 84,
  sym__type_geometric = 85,
  sym__type_net = 86,
  sym__type_bit_string = 87,
  sym__type_text_search = 88,
  sym__if_not_exists = 89,
  sym__not_null = 90,
  sym__without_time_zone = 91,
  sym__with_time_zone = 92,
  sym__keyword_time_zone = 93,
  sym_keyword_temporary = 94,
  sym_keyword_primary_key = 95,
  sym_keyword_char = 96,
  sym_keyword_varchar = 97,
  sym_keyword_time = 98,
  sym_keyword_timestamp = 99,
  sym_keyword_timestamptz = 100,
  sym_line_comment = 101,
  sym_block_comment = 102,
  sym__literal_string = 103,
  sym_identifier = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_column_definitions_repeat1 = 106,
  aux_sym_column_definition_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [aux_sym_double_token1] = "double_token1",
  [aux_sym_double_token2] = "double_token2",
  [aux_sym__without_time_zone_token1] = "_without_time_zone_token1",
  [aux_sym__with_time_zone_token1] = "_with_time_zone_token1",
  [aux_sym__keyword_time_zone_token1] = "_keyword_time_zone_token1",
  [aux_sym__keyword_time_zone_token2] = "_keyword_time_zone_token2",
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
  [aux_sym_keyword_primary_key_token1] = "keyword_primary_key_token1",
  [aux_sym_keyword_primary_key_token2] = "keyword_primary_key_token2",
  [sym_keyword_xml] = "keyword_xml",
  [sym_keyword_uuid] = "keyword_uuid",
  [sym_keyword_json] = "keyword_json",
  [sym_keyword_jsonb] = "keyword_jsonb",
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
  [aux_sym_keyword_timestamp_token1] = "keyword_timestamp_token1",
  [aux_sym_keyword_timestamptz_token1] = "keyword_timestamptz_token1",
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
  [sym__if_not_exists] = "_if_not_exists",
  [sym__not_null] = "_not_null",
  [sym__without_time_zone] = "_without_time_zone",
  [sym__with_time_zone] = "_with_time_zone",
  [sym__keyword_time_zone] = "_keyword_time_zone",
  [sym_keyword_temporary] = "keyword_temporary",
  [sym_keyword_primary_key] = "keyword_primary_key",
  [sym_keyword_char] = "keyword_char",
  [sym_keyword_varchar] = "keyword_varchar",
  [sym_keyword_time] = "keyword_time",
  [sym_keyword_timestamp] = "keyword_timestamp",
  [sym_keyword_timestamptz] = "keyword_timestamptz",
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
  [aux_sym_double_token1] = aux_sym_double_token1,
  [aux_sym_double_token2] = aux_sym_double_token2,
  [aux_sym__without_time_zone_token1] = aux_sym__without_time_zone_token1,
  [aux_sym__with_time_zone_token1] = aux_sym__with_time_zone_token1,
  [aux_sym__keyword_time_zone_token1] = aux_sym__keyword_time_zone_token1,
  [aux_sym__keyword_time_zone_token2] = aux_sym__keyword_time_zone_token2,
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
  [aux_sym_keyword_primary_key_token1] = aux_sym_keyword_primary_key_token1,
  [aux_sym_keyword_primary_key_token2] = aux_sym_keyword_primary_key_token2,
  [sym_keyword_xml] = sym_keyword_xml,
  [sym_keyword_uuid] = sym_keyword_uuid,
  [sym_keyword_json] = sym_keyword_json,
  [sym_keyword_jsonb] = sym_keyword_jsonb,
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
  [aux_sym_keyword_timestamp_token1] = aux_sym_keyword_timestamp_token1,
  [aux_sym_keyword_timestamptz_token1] = aux_sym_keyword_timestamptz_token1,
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
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__not_null] = sym__not_null,
  [sym__without_time_zone] = sym__without_time_zone,
  [sym__with_time_zone] = sym__with_time_zone,
  [sym__keyword_time_zone] = sym__keyword_time_zone,
  [sym_keyword_temporary] = sym_keyword_temporary,
  [sym_keyword_primary_key] = sym_keyword_primary_key,
  [sym_keyword_char] = sym_keyword_char,
  [sym_keyword_varchar] = sym_keyword_varchar,
  [sym_keyword_time] = sym_keyword_time,
  [sym_keyword_timestamp] = sym_keyword_timestamp,
  [sym_keyword_timestamptz] = sym_keyword_timestamptz,
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
  [aux_sym_double_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_token2] = {
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
  [aux_sym__keyword_time_zone_token2] = {
    .visible = false,
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
  [aux_sym_keyword_primary_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_primary_key_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_uuid] = {
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
  [aux_sym_keyword_timestamp_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_timestamptz_token1] = {
    .visible = false,
    .named = false,
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
  [sym__if_not_exists] = {
    .visible = false,
    .named = true,
  },
  [sym__not_null] = {
    .visible = false,
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
  [sym_keyword_temporary] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_primary_key] = {
    .visible = true,
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
  [121] = 121,
  [122] = 122,
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
      if (lookahead == 'K') ADVANCE(8);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'V') ADVANCE(16);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(18);
      if (lookahead == 'Z') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'j') ADVANCE(26);
      if (lookahead == 'k') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'z') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'Y') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == 'H') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == 'X') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'J') ADVANCE(7);
      if (lookahead == 'K') ADVANCE(8);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == 'V') ADVANCE(16);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(18);
      if (lookahead == 'Z') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'j') ADVANCE(26);
      if (lookahead == 'k') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'z') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 55:
      if (lookahead == 'Y') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(131);
      if (lookahead == 'X') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'M') ADVANCE(133);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(176);
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(181);
      END_STATE();
    case 110:
      if (lookahead == 'A') ADVANCE(182);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(184);
      END_STATE();
    case 113:
      if (lookahead == 'A') ADVANCE(185);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 'B') ADVANCE(187);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(191);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_keyword_primary_key_token2);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 126:
      if (lookahead == 'M') ADVANCE(196);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(200);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 135:
      if (lookahead == 'Q') ADVANCE(205);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(206);
      END_STATE();
    case 137:
      if (lookahead == 'D') ADVANCE(207);
      END_STATE();
    case 138:
      if (lookahead == 'C') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == 'H') ADVANCE(209);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 170:
      if (lookahead == 'q') ADVANCE(237);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 176:
      if (lookahead == 'N') ADVANCE(241);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'A') ADVANCE(244);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'A') ADVANCE(245);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(248);
      END_STATE();
    case 184:
      if (lookahead == 'M') ADVANCE(249);
      END_STATE();
    case 185:
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 186:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(252);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(253);
      END_STATE();
    case 189:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 190:
      if (lookahead == 'G') ADVANCE(255);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(256);
      END_STATE();
    case 192:
      if (lookahead == 'Y') ADVANCE(257);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 'S') ADVANCE(258);
      END_STATE();
    case 194:
      if (lookahead == 'R') ADVANCE(259);
      END_STATE();
    case 195:
      if (lookahead == 'I') ADVANCE(260);
      END_STATE();
    case 196:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 198:
      if (lookahead == 'A') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 'L') ADVANCE(263);
      END_STATE();
    case 200:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      if (lookahead == 'S') ADVANCE(266);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 205:
      if (lookahead == 'U') ADVANCE(267);
      END_STATE();
    case 206:
      if (lookahead == 'G') ADVANCE(268);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_uuid);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(269);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'O') ADVANCE(270);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token2);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 241:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 242:
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 243:
      if (lookahead == 'A') ADVANCE(297);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 245:
      if (lookahead == 'C') ADVANCE(298);
      END_STATE();
    case 246:
      if (lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 248:
      if (lookahead == 'I') ADVANCE(301);
      END_STATE();
    case 249:
      if (lookahead == 'A') ADVANCE(302);
      END_STATE();
    case 250:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 251:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 253:
      if (lookahead == 'S') ADVANCE(306);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 255:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_nulls);
      END_STATE();
    case 259:
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 260:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 261:
      if (lookahead == 'R') ADVANCE(310);
      END_STATE();
    case 262:
      if (lookahead == 'L') ADVANCE(311);
      END_STATE();
    case 263:
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'S') ADVANCE(313);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 265:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 266:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 267:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 268:
      if (lookahead == 'G') ADVANCE(317);
      END_STATE();
    case 269:
      if (lookahead == 'A') ADVANCE(318);
      END_STATE();
    case 270:
      if (lookahead == 'U') ADVANCE(319);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 296:
      if (lookahead == 'I') ADVANCE(339);
      END_STATE();
    case 297:
      if (lookahead == 'N') ADVANCE(340);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(341);
      END_STATE();
    case 299:
      if (lookahead == 'A') ADVANCE(342);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 301:
      if (lookahead == 'M') ADVANCE(343);
      END_STATE();
    case 302:
      if (lookahead == 'L') ADVANCE(344);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 304:
      if (lookahead == 'C') ADVANCE(346);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(347);
      END_STATE();
    case 308:
      if (lookahead == 'C') ADVANCE(348);
      END_STATE();
    case 309:
      if (lookahead == 'I') ADVANCE(349);
      END_STATE();
    case 310:
      if (lookahead == 'Y') ADVANCE(350);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 312:
      if (lookahead == 'N') ADVANCE(351);
      END_STATE();
    case 313:
      if (lookahead == 'E') ADVANCE(352);
      END_STATE();
    case 314:
      if (lookahead == 'A') ADVANCE(353);
      END_STATE();
    case 315:
      if (lookahead == 'A') ADVANCE(354);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword_unique);
      END_STATE();
    case 317:
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(356);
      END_STATE();
    case 319:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 331:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 339:
      if (lookahead == 'A') ADVANCE(369);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 341:
      if (lookahead == 'E') ADVANCE(370);
      END_STATE();
    case 342:
      if (lookahead == 'I') ADVANCE(371);
      END_STATE();
    case 343:
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(373);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_integer);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 349:
      if (lookahead == 'O') ADVANCE(374);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keyword_primary_key_token1);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(375);
      END_STATE();
    case 352:
      if (lookahead == 'R') ADVANCE(376);
      END_STATE();
    case 353:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 354:
      if (lookahead == 'M') ADVANCE(378);
      END_STATE();
    case 355:
      if (lookahead == 'D') ADVANCE(379);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__without_time_zone_token1);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 367:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 369:
      if (lookahead == 'L') ADVANCE(387);
      END_STATE();
    case 370:
      if (lookahead == 'R') ADVANCE(388);
      END_STATE();
    case 371:
      if (lookahead == 'N') ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 374:
      if (lookahead == 'N') ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 376:
      if (lookahead == 'I') ADVANCE(391);
      END_STATE();
    case 377:
      if (lookahead == 'Y') ADVANCE(392);
      END_STATE();
    case 378:
      if (lookahead == 'P') ADVANCE(393);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 385:
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 391:
      if (lookahead == 'A') ADVANCE(398);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(399);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 398:
      if (lookahead == 'L') ADVANCE(402);
      END_STATE();
    case 399:
      if (lookahead == 'Z') ADVANCE(403);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 401:
      if (lookahead == 'z') ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 403:
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
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {(TSStateId)(-1)},
  [122] = {(TSStateId)(-1)},
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
    [aux_sym_double_token1] = ACTIONS(1),
    [aux_sym_double_token2] = ACTIONS(1),
    [aux_sym__without_time_zone_token1] = ACTIONS(1),
    [aux_sym__with_time_zone_token1] = ACTIONS(1),
    [aux_sym__keyword_time_zone_token1] = ACTIONS(1),
    [aux_sym__keyword_time_zone_token2] = ACTIONS(1),
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
    [aux_sym_keyword_primary_key_token1] = ACTIONS(1),
    [aux_sym_keyword_primary_key_token2] = ACTIONS(1),
    [sym_keyword_xml] = ACTIONS(1),
    [sym_keyword_uuid] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
    [sym_keyword_jsonb] = ACTIONS(1),
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
    [aux_sym_keyword_timestamp_token1] = ACTIONS(1),
    [aux_sym_keyword_timestamptz_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_statement] = STATE(68),
    [sym__ddl_statement] = STATE(116),
    [sym__create_statement] = STATE(114),
    [sym_create_table] = STATE(111),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(43),
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
    ACTIONS(15), 1,
      aux_sym__keyword_time_zone_token1,
    ACTIONS(21), 1,
      sym_keyword_decimal,
    ACTIONS(23), 1,
      sym_keyword_numeric,
    ACTIONS(25), 1,
      sym_keyword_text,
    ACTIONS(27), 1,
      aux_sym_keyword_char_token1,
    ACTIONS(29), 1,
      aux_sym_keyword_char_token2,
    ACTIONS(31), 1,
      aux_sym_keyword_varchar_token1,
    ACTIONS(33), 1,
      sym_keyword_date,
    ACTIONS(35), 1,
      sym_keyword_datetime,
    ACTIONS(37), 1,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(39), 1,
      aux_sym_keyword_timestamptz_token1,
    STATE(6), 1,
      sym__type,
    STATE(15), 1,
      sym_keyword_varchar,
    STATE(16), 1,
      sym_keyword_char,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(51), 2,
      sym_char,
      sym_varchar,
    STATE(26), 3,
      sym_keyword_time,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
    STATE(48), 3,
      sym_double,
      sym_decimal,
      sym_numeric,
    ACTIONS(17), 5,
      sym_keyword_xml,
      sym_keyword_uuid,
      sym_keyword_boolean,
      sym_keyword_money,
      sym_keyword_bytea,
    ACTIONS(19), 7,
      sym_keyword_smallint,
      sym_keyword_integer,
      sym_keyword_bigint,
      sym_keyword_real,
      sym_keyword_smallserial,
      sym_keyword_serial,
      sym_keyword_bigserial,
    STATE(47), 7,
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
      aux_sym__keyword_time_zone_token1,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(41), 27,
      anon_sym_LPAREN,
      anon_sym_DOT,
      aux_sym_double_token1,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
      sym_keyword_xml,
      sym_keyword_uuid,
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
  [141] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 4,
      aux_sym__keyword_time_zone_token1,
      aux_sym_keyword_char_token2,
      sym_keyword_date,
      aux_sym_keyword_timestamp_token1,
    ACTIONS(45), 27,
      anon_sym_LPAREN,
      anon_sym_DOT,
      aux_sym_double_token1,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
      sym_keyword_xml,
      sym_keyword_uuid,
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
  [187] = 7,
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
    STATE(39), 2,
      sym__without_time_zone,
      sym__with_time_zone,
    ACTIONS(49), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [218] = 13,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      sym_keyword_not,
    ACTIONS(59), 1,
      sym_keyword_null,
    ACTIONS(61), 1,
      sym_keyword_constraint,
    ACTIONS(63), 1,
      sym_keyword_default,
    ACTIONS(65), 1,
      sym_keyword_unique,
    ACTIONS(67), 1,
      aux_sym_keyword_primary_key_token1,
    STATE(8), 1,
      aux_sym_column_definition_repeat1,
    STATE(31), 1,
      sym_column_constraint,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 2,
      sym__not_null,
      sym_keyword_primary_key,
  [261] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(20), 1,
      sym__with_time_zone,
    STATE(37), 1,
      sym__without_time_zone,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [294] = 13,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      sym_keyword_not,
    ACTIONS(59), 1,
      sym_keyword_null,
    ACTIONS(61), 1,
      sym_keyword_constraint,
    ACTIONS(63), 1,
      sym_keyword_default,
    ACTIONS(65), 1,
      sym_keyword_unique,
    ACTIONS(67), 1,
      aux_sym_keyword_primary_key_token1,
    STATE(9), 1,
      aux_sym_column_definition_repeat1,
    STATE(31), 1,
      sym_column_constraint,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 2,
      sym__not_null,
      sym_keyword_primary_key,
  [337] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_keyword_not,
    ACTIONS(78), 1,
      sym_keyword_null,
    ACTIONS(81), 1,
      sym_keyword_constraint,
    ACTIONS(84), 1,
      sym_keyword_default,
    ACTIONS(87), 1,
      sym_keyword_unique,
    ACTIONS(90), 1,
      aux_sym_keyword_primary_key_token1,
    STATE(31), 1,
      sym_column_constraint,
    ACTIONS(73), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym__not_null,
      sym_keyword_primary_key,
    STATE(9), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definition_repeat1,
  [378] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [400] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [422] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [444] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [468] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [492] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [516] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [540] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      sym_keyword_null,
    ACTIONS(120), 1,
      sym_keyword_nulls,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [566] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      sym_keyword_null,
    ACTIONS(126), 1,
      sym_keyword_nulls,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [592] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [613] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [634] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      sym_keyword_create,
    STATE(68), 1,
      sym_statement,
    STATE(111), 1,
      sym_create_table,
    STATE(114), 1,
      sym__create_statement,
    STATE(116), 1,
      sym__ddl_statement,
    STATE(21), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [667] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [688] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [709] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [730] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [751] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [772] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [793] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [814] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [835] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [856] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [877] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [898] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym__literal_string,
    STATE(24), 1,
      sym_literal,
    STATE(25), 1,
      sym__expression,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [927] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [948] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(116), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [969] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [990] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1011] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      sym__literal_string,
    STATE(24), 1,
      sym_literal,
    STATE(46), 1,
      sym__expression,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [1040] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1061] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1082] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1103] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1124] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_statement,
    STATE(111), 1,
      sym_create_table,
    STATE(114), 1,
      sym__create_statement,
    STATE(116), 1,
      sym__ddl_statement,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [1159] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1180] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1201] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1222] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1243] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1264] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1285] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1306] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1327] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1348] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1369] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      aux_sym_keyword_primary_key_token1,
  [1390] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      sym_keyword_not,
    ACTIONS(67), 1,
      aux_sym_keyword_primary_key_token1,
    ACTIONS(202), 1,
      sym_keyword_null,
    ACTIONS(204), 1,
      sym_keyword_default,
    ACTIONS(206), 1,
      sym_keyword_unique,
    STATE(35), 2,
      sym__not_null,
      sym_keyword_primary_key,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1420] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      sym__identifier,
    ACTIONS(210), 1,
      sym_keyword_if,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym__if_not_exists,
    STATE(75), 1,
      sym_table_reference,
    STATE(77), 1,
      sym_identifier,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [1449] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      sym__identifier,
    ACTIONS(210), 1,
      sym_keyword_if,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym__if_not_exists,
    STATE(77), 1,
      sym_identifier,
    STATE(81), 1,
      sym_table_reference,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [1478] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(66), 1,
      sym_column_definition,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [1504] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      sym_keyword_table,
    ACTIONS(220), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(222), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(224), 1,
      sym_keyword_unlogged,
    STATE(104), 1,
      sym_keyword_temporary,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [1530] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(78), 1,
      sym_column_definition,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [1553] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym_table_reference,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [1576] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    STATE(77), 1,
      sym_identifier,
    STATE(81), 1,
      sym_table_reference,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
  [1599] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1615] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(64), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definitions_repeat1,
  [1633] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1649] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_column_definitions_repeat1,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
  [1669] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
  [1689] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [1705] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
  [1725] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_column_definitions_repeat1,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
  [1745] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym_keyword_not,
    ACTIONS(245), 1,
      sym_keyword_distinct,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
  [1762] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(29), 1,
      sym__keyword_time_zone,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
  [1779] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(28), 1,
      sym__keyword_time_zone,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
  [1796] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
  [1813] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_column_definitions,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
  [1830] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      sym_keyword_not,
    ACTIONS(257), 1,
      sym_keyword_distinct,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
  [1847] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
  [1864] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
  [1879] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
  [1894] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_column_definitions,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
  [1911] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_column_definitions,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
  [1928] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_line_comment,
      sym_block_comment,
  [1945] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
  [1959] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      sym__number,
    STATE(84), 2,
      sym_line_comment,
      sym_block_comment,
  [1973] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      sym__number,
    STATE(85), 2,
      sym_line_comment,
      sym_block_comment,
  [1987] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym__number,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
  [2001] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      aux_sym__keyword_time_zone_token2,
    STATE(87), 2,
      sym_line_comment,
      sym_block_comment,
  [2015] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
  [2029] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      sym_keyword_exists,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
  [2043] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
  [2057] = 4,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      aux_sym__literal_string_token1,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
  [2071] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
  [2085] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      sym_keyword_null,
    STATE(93), 2,
      sym_line_comment,
      sym_block_comment,
  [2099] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(94), 2,
      sym_line_comment,
      sym_block_comment,
  [2113] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      sym__number,
    STATE(95), 2,
      sym_line_comment,
      sym_block_comment,
  [2127] = 4,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      aux_sym_identifier_token1,
    STATE(96), 2,
      sym_line_comment,
      sym_block_comment,
  [2141] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(97), 2,
      sym_line_comment,
      sym_block_comment,
  [2155] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(98), 2,
      sym_line_comment,
      sym_block_comment,
  [2169] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      sym_keyword_not,
    STATE(99), 2,
      sym_line_comment,
      sym_block_comment,
  [2183] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      sym__number,
    STATE(100), 2,
      sym_line_comment,
      sym_block_comment,
  [2197] = 4,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      aux_sym_block_comment_token1,
    STATE(101), 2,
      sym_line_comment,
      sym_block_comment,
  [2211] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      aux_sym_keyword_primary_key_token2,
    STATE(102), 2,
      sym_line_comment,
      sym_block_comment,
  [2225] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      sym__number,
    STATE(103), 2,
      sym_line_comment,
      sym_block_comment,
  [2239] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      sym_keyword_table,
    STATE(104), 2,
      sym_line_comment,
      sym_block_comment,
  [2253] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      sym_keyword_table,
    STATE(105), 2,
      sym_line_comment,
      sym_block_comment,
  [2267] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(106), 2,
      sym_line_comment,
      sym_block_comment,
  [2281] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    STATE(107), 2,
      sym_line_comment,
      sym_block_comment,
  [2295] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      sym_keyword_distinct,
    STATE(108), 2,
      sym_line_comment,
      sym_block_comment,
  [2309] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      anon_sym_SLASH,
    STATE(109), 2,
      sym_line_comment,
      sym_block_comment,
  [2323] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      aux_sym_double_token2,
    STATE(110), 2,
      sym_line_comment,
      sym_block_comment,
  [2337] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    STATE(111), 2,
      sym_line_comment,
      sym_block_comment,
  [2351] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(112), 2,
      sym_line_comment,
      sym_block_comment,
  [2365] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_line_comment,
      sym_block_comment,
  [2379] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(114), 2,
      sym_line_comment,
      sym_block_comment,
  [2393] = 4,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      aux_sym_line_comment_token1,
    STATE(115), 2,
      sym_line_comment,
      sym_block_comment,
  [2407] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(116), 2,
      sym_line_comment,
      sym_block_comment,
  [2421] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(117), 2,
      sym_line_comment,
      sym_block_comment,
  [2435] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(118), 2,
      sym_line_comment,
      sym_block_comment,
  [2449] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(119), 2,
      sym_line_comment,
      sym_block_comment,
  [2463] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      sym_keyword_distinct,
    STATE(120), 2,
      sym_line_comment,
      sym_block_comment,
  [2477] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [2481] = 1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 141,
  [SMALL_STATE(5)] = 187,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 444,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 516,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 566,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 667,
  [SMALL_STATE(23)] = 688,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 751,
  [SMALL_STATE(27)] = 772,
  [SMALL_STATE(28)] = 793,
  [SMALL_STATE(29)] = 814,
  [SMALL_STATE(30)] = 835,
  [SMALL_STATE(31)] = 856,
  [SMALL_STATE(32)] = 877,
  [SMALL_STATE(33)] = 898,
  [SMALL_STATE(34)] = 927,
  [SMALL_STATE(35)] = 948,
  [SMALL_STATE(36)] = 969,
  [SMALL_STATE(37)] = 990,
  [SMALL_STATE(38)] = 1011,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1061,
  [SMALL_STATE(41)] = 1082,
  [SMALL_STATE(42)] = 1103,
  [SMALL_STATE(43)] = 1124,
  [SMALL_STATE(44)] = 1159,
  [SMALL_STATE(45)] = 1180,
  [SMALL_STATE(46)] = 1201,
  [SMALL_STATE(47)] = 1222,
  [SMALL_STATE(48)] = 1243,
  [SMALL_STATE(49)] = 1264,
  [SMALL_STATE(50)] = 1285,
  [SMALL_STATE(51)] = 1306,
  [SMALL_STATE(52)] = 1327,
  [SMALL_STATE(53)] = 1348,
  [SMALL_STATE(54)] = 1369,
  [SMALL_STATE(55)] = 1390,
  [SMALL_STATE(56)] = 1420,
  [SMALL_STATE(57)] = 1449,
  [SMALL_STATE(58)] = 1478,
  [SMALL_STATE(59)] = 1504,
  [SMALL_STATE(60)] = 1530,
  [SMALL_STATE(61)] = 1553,
  [SMALL_STATE(62)] = 1576,
  [SMALL_STATE(63)] = 1599,
  [SMALL_STATE(64)] = 1615,
  [SMALL_STATE(65)] = 1633,
  [SMALL_STATE(66)] = 1649,
  [SMALL_STATE(67)] = 1669,
  [SMALL_STATE(68)] = 1689,
  [SMALL_STATE(69)] = 1705,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1745,
  [SMALL_STATE(72)] = 1762,
  [SMALL_STATE(73)] = 1779,
  [SMALL_STATE(74)] = 1796,
  [SMALL_STATE(75)] = 1813,
  [SMALL_STATE(76)] = 1830,
  [SMALL_STATE(77)] = 1847,
  [SMALL_STATE(78)] = 1864,
  [SMALL_STATE(79)] = 1879,
  [SMALL_STATE(80)] = 1894,
  [SMALL_STATE(81)] = 1911,
  [SMALL_STATE(82)] = 1928,
  [SMALL_STATE(83)] = 1945,
  [SMALL_STATE(84)] = 1959,
  [SMALL_STATE(85)] = 1973,
  [SMALL_STATE(86)] = 1987,
  [SMALL_STATE(87)] = 2001,
  [SMALL_STATE(88)] = 2015,
  [SMALL_STATE(89)] = 2029,
  [SMALL_STATE(90)] = 2043,
  [SMALL_STATE(91)] = 2057,
  [SMALL_STATE(92)] = 2071,
  [SMALL_STATE(93)] = 2085,
  [SMALL_STATE(94)] = 2099,
  [SMALL_STATE(95)] = 2113,
  [SMALL_STATE(96)] = 2127,
  [SMALL_STATE(97)] = 2141,
  [SMALL_STATE(98)] = 2155,
  [SMALL_STATE(99)] = 2169,
  [SMALL_STATE(100)] = 2183,
  [SMALL_STATE(101)] = 2197,
  [SMALL_STATE(102)] = 2211,
  [SMALL_STATE(103)] = 2225,
  [SMALL_STATE(104)] = 2239,
  [SMALL_STATE(105)] = 2253,
  [SMALL_STATE(106)] = 2267,
  [SMALL_STATE(107)] = 2281,
  [SMALL_STATE(108)] = 2295,
  [SMALL_STATE(109)] = 2309,
  [SMALL_STATE(110)] = 2323,
  [SMALL_STATE(111)] = 2337,
  [SMALL_STATE(112)] = 2351,
  [SMALL_STATE(113)] = 2365,
  [SMALL_STATE(114)] = 2379,
  [SMALL_STATE(115)] = 2393,
  [SMALL_STATE(116)] = 2407,
  [SMALL_STATE(117)] = 2421,
  [SMALL_STATE(118)] = 2435,
  [SMALL_STATE(119)] = 2449,
  [SMALL_STATE(120)] = 2463,
  [SMALL_STATE(121)] = 2477,
  [SMALL_STATE(122)] = 2481,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(93),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(34),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(67),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(33),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(18),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(102),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_char, 1), REDUCE(sym_keyword_varchar, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyword_time_zone, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_primary_key, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_datetime, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_time_zone, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__without_time_zone, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 6, .production_id = 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4, .production_id = 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_numeric, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_character, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 5, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(60),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
