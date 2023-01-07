#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 10

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
  sym_keyword_primary = 29,
  sym_keyword_foreign = 30,
  sym_keyword_key = 31,
  sym_keyword_references = 32,
  sym_keyword_on = 33,
  sym_keyword_no = 34,
  sym_keyword_delete = 35,
  sym_keyword_update = 36,
  sym_keyword_match = 37,
  sym_keyword_full = 38,
  sym_keyword_partial = 39,
  sym_keyword_simple = 40,
  sym_keyword_action = 41,
  sym_keyword_set = 42,
  sym_keyword_restrict = 43,
  sym_keyword_cascade = 44,
  sym_keyword_xml = 45,
  sym_keyword_uuid = 46,
  sym_keyword_json = 47,
  sym_keyword_jsonb = 48,
  sym_keyword_boolean = 49,
  sym_keyword_smallint = 50,
  sym_keyword_integer = 51,
  sym_keyword_bigint = 52,
  sym_keyword_decimal = 53,
  sym_keyword_numeric = 54,
  sym_keyword_real = 55,
  sym_keyword_smallserial = 56,
  sym_keyword_serial = 57,
  sym_keyword_bigserial = 58,
  sym_keyword_money = 59,
  sym_keyword_text = 60,
  aux_sym_keyword_char_token1 = 61,
  aux_sym_keyword_char_token2 = 62,
  aux_sym_keyword_varchar_token1 = 63,
  sym_keyword_bytea = 64,
  sym_keyword_date = 65,
  sym_keyword_datetime = 66,
  aux_sym_keyword_timestamp_token1 = 67,
  aux_sym_keyword_timestamptz_token1 = 68,
  anon_sym_DASH_DASH = 69,
  aux_sym_line_comment_token1 = 70,
  anon_sym_SLASH_STAR = 71,
  aux_sym_block_comment_token1 = 72,
  anon_sym_SLASH = 73,
  anon_sym_SQUOTE = 74,
  aux_sym__literal_string_token1 = 75,
  sym__number = 76,
  anon_sym_DQUOTE = 77,
  aux_sym_identifier_token1 = 78,
  sym_source_file = 79,
  sym_statement = 80,
  sym__ddl_statement = 81,
  sym__create_statement = 82,
  sym_create_table = 83,
  sym_column_definitions = 84,
  sym_column_definition = 85,
  sym_column_constraint = 86,
  sym__foreign_key_match = 87,
  sym__foreign_key_on_delete = 88,
  sym__foreign_key_on_update = 89,
  sym_referencial_action = 90,
  sym_table_reference = 91,
  sym__expression = 92,
  sym_literal = 93,
  sym__type = 94,
  sym__type_numeric = 95,
  sym_double = 96,
  sym_decimal = 97,
  sym_numeric = 98,
  sym__type_character = 99,
  sym_char = 100,
  sym_varchar = 101,
  sym__type_datetime = 102,
  sym__type_geometric = 103,
  sym__type_net = 104,
  sym__type_bit_string = 105,
  sym__type_text_search = 106,
  sym__primary_key = 107,
  sym__if_not_exists = 108,
  sym__not_null = 109,
  sym__without_time_zone = 110,
  sym__with_time_zone = 111,
  sym__keyword_time_zone = 112,
  sym_keyword_temporary = 113,
  sym_keyword_char = 114,
  sym_keyword_varchar = 115,
  sym_keyword_time = 116,
  sym_keyword_timestamp = 117,
  sym_keyword_timestamptz = 118,
  sym_line_comment = 119,
  sym_block_comment = 120,
  sym__literal_string = 121,
  sym_identifier = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_column_definitions_repeat1 = 124,
  aux_sym_column_definition_repeat1 = 125,
  aux_sym_referencial_action_repeat1 = 126,
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
  [sym_keyword_primary] = "keyword_primary",
  [sym_keyword_foreign] = "keyword_foreign",
  [sym_keyword_key] = "keyword_key",
  [sym_keyword_references] = "keyword_references",
  [sym_keyword_on] = "keyword_on",
  [sym_keyword_no] = "keyword_no",
  [sym_keyword_delete] = "keyword_delete",
  [sym_keyword_update] = "keyword_update",
  [sym_keyword_match] = "keyword_match",
  [sym_keyword_full] = "keyword_full",
  [sym_keyword_partial] = "keyword_partial",
  [sym_keyword_simple] = "keyword_simple",
  [sym_keyword_action] = "keyword_action",
  [sym_keyword_set] = "keyword_set",
  [sym_keyword_restrict] = "keyword_restrict",
  [sym_keyword_cascade] = "keyword_cascade",
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
  [sym__foreign_key_match] = "_foreign_key_match",
  [sym__foreign_key_on_delete] = "_foreign_key_on_delete",
  [sym__foreign_key_on_update] = "_foreign_key_on_update",
  [sym_referencial_action] = "referencial_action",
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
  [sym__primary_key] = "_primary_key",
  [sym__if_not_exists] = "_if_not_exists",
  [sym__not_null] = "_not_null",
  [sym__without_time_zone] = "_without_time_zone",
  [sym__with_time_zone] = "_with_time_zone",
  [sym__keyword_time_zone] = "_keyword_time_zone",
  [sym_keyword_temporary] = "keyword_temporary",
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
  [aux_sym_referencial_action_repeat1] = "referencial_action_repeat1",
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
  [sym_keyword_primary] = sym_keyword_primary,
  [sym_keyword_foreign] = sym_keyword_foreign,
  [sym_keyword_key] = sym_keyword_key,
  [sym_keyword_references] = sym_keyword_references,
  [sym_keyword_on] = sym_keyword_on,
  [sym_keyword_no] = sym_keyword_no,
  [sym_keyword_delete] = sym_keyword_delete,
  [sym_keyword_update] = sym_keyword_update,
  [sym_keyword_match] = sym_keyword_match,
  [sym_keyword_full] = sym_keyword_full,
  [sym_keyword_partial] = sym_keyword_partial,
  [sym_keyword_simple] = sym_keyword_simple,
  [sym_keyword_action] = sym_keyword_action,
  [sym_keyword_set] = sym_keyword_set,
  [sym_keyword_restrict] = sym_keyword_restrict,
  [sym_keyword_cascade] = sym_keyword_cascade,
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
  [sym__foreign_key_match] = sym__foreign_key_match,
  [sym__foreign_key_on_delete] = sym__foreign_key_on_delete,
  [sym__foreign_key_on_update] = sym__foreign_key_on_update,
  [sym_referencial_action] = sym_referencial_action,
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
  [sym__primary_key] = sym__primary_key,
  [sym__if_not_exists] = sym__if_not_exists,
  [sym__not_null] = sym__not_null,
  [sym__without_time_zone] = sym__without_time_zone,
  [sym__with_time_zone] = sym__with_time_zone,
  [sym__keyword_time_zone] = sym__keyword_time_zone,
  [sym_keyword_temporary] = sym_keyword_temporary,
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
  [aux_sym_referencial_action_repeat1] = aux_sym_referencial_action_repeat1,
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
  [sym_keyword_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_foreign] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_key] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_references] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_on] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_no] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_update] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_match] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_full] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_action] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_set] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_restrict] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_cascade] = {
    .visible = true,
    .named = true,
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
  [sym__foreign_key_match] = {
    .visible = false,
    .named = true,
  },
  [sym__foreign_key_on_delete] = {
    .visible = false,
    .named = true,
  },
  [sym__foreign_key_on_update] = {
    .visible = false,
    .named = true,
  },
  [sym_referencial_action] = {
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
  [sym__primary_key] = {
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
  [aux_sym_referencial_action_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_datatype = 1,
  field_name = 2,
  field_precision = 3,
  field_refcolumn = 4,
  field_scale = 5,
  field_schema = 6,
  field_size = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_name] = "name",
  [field_precision] = "precision",
  [field_refcolumn] = "refcolumn",
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
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
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
  [10] =
    {field_refcolumn, 3},
  [11] =
    {field_name, 1},
    {field_refcolumn, 5},
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
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'J') ADVANCE(8);
      if (lookahead == 'K') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'V') ADVANCE(18);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'X') ADVANCE(20);
      if (lookahead == 'Z') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'j') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(41);
      if (lookahead == 'z') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'Y') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == 'X') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(80);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'J') ADVANCE(8);
      if (lookahead == 'K') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'V') ADVANCE(18);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == 'X') ADVANCE(20);
      if (lookahead == 'Z') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'j') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(41);
      if (lookahead == 'z') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 63:
      if (lookahead == 'Y') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'M') ADVANCE(151);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keyword_on);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == 'X') ADVANCE(164);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'U') ADVANCE(166);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(167);
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_keyword_no);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(222);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(225);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(227);
      END_STATE();
    case 133:
      if (lookahead == 'A') ADVANCE(228);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 135:
      if (lookahead == 'I') ADVANCE(230);
      END_STATE();
    case 136:
      if (lookahead == 'A') ADVANCE(231);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 139:
      if (lookahead == 'B') ADVANCE(234);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(235);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(237);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(238);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(240);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_keyword_key);
      END_STATE();
    case 147:
      if (lookahead == 'C') ADVANCE(241);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 150:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 153:
      if (lookahead == 'C') ADVANCE(246);
      END_STATE();
    case 154:
      if (lookahead == 'M') ADVANCE(247);
      END_STATE();
    case 155:
      if (lookahead == 'L') ADVANCE(248);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(249);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 158:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_set);
      END_STATE();
    case 160:
      if (lookahead == 'P') ADVANCE(252);
      END_STATE();
    case 161:
      if (lookahead == 'L') ADVANCE(253);
      END_STATE();
    case 162:
      if (lookahead == 'L') ADVANCE(254);
      END_STATE();
    case 163:
      if (lookahead == 'P') ADVANCE(255);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(256);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'Q') ADVANCE(259);
      END_STATE();
    case 168:
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 169:
      if (lookahead == 'A') ADVANCE(261);
      END_STATE();
    case 170:
      if (lookahead == 'D') ADVANCE(262);
      END_STATE();
    case 171:
      if (lookahead == 'C') ADVANCE(263);
      END_STATE();
    case 172:
      if (lookahead == 'H') ADVANCE(264);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 213:
      if (lookahead == 'q') ADVANCE(301);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 220:
      if (lookahead == 'O') ADVANCE(306);
      END_STATE();
    case 221:
      if (lookahead == 'N') ADVANCE(307);
      END_STATE();
    case 222:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 223:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 225:
      if (lookahead == 'A') ADVANCE(311);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'A') ADVANCE(312);
      END_STATE();
    case 227:
      if (lookahead == 'T') ADVANCE(313);
      END_STATE();
    case 228:
      if (lookahead == 'T') ADVANCE(314);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 230:
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 231:
      if (lookahead == 'U') ADVANCE(317);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(318);
      END_STATE();
    case 233:
      if (lookahead == 'I') ADVANCE(319);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 235:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(322);
      END_STATE();
    case 237:
      if (lookahead == 'I') ADVANCE(323);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 239:
      if (lookahead == 'G') ADVANCE(324);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(325);
      END_STATE();
    case 241:
      if (lookahead == 'H') ADVANCE(326);
      END_STATE();
    case 242:
      if (lookahead == 'Y') ADVANCE(327);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 'S') ADVANCE(328);
      END_STATE();
    case 244:
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 245:
      if (lookahead == 'I') ADVANCE(330);
      END_STATE();
    case 246:
      if (lookahead == 'I') ADVANCE(331);
      END_STATE();
    case 247:
      if (lookahead == 'A') ADVANCE(332);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 249:
      if (lookahead == 'R') ADVANCE(333);
      END_STATE();
    case 250:
      if (lookahead == 'R') ADVANCE(334);
      END_STATE();
    case 251:
      if (lookahead == 'A') ADVANCE(335);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(336);
      END_STATE();
    case 253:
      if (lookahead == 'L') ADVANCE(337);
      END_STATE();
    case 254:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(339);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 259:
      if (lookahead == 'U') ADVANCE(341);
      END_STATE();
    case 260:
      if (lookahead == 'G') ADVANCE(342);
      END_STATE();
    case 261:
      if (lookahead == 'T') ADVANCE(343);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_keyword_uuid);
      END_STATE();
    case 263:
      if (lookahead == 'H') ADVANCE(344);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'O') ADVANCE(345);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token2);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(355);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 284:
      if (lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(325);
      END_STATE();
    case 286:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 287:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_null);
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(375);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(377);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__with_time_zone_token1);
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 306:
      if (lookahead == 'N') ADVANCE(379);
      END_STATE();
    case 307:
      if (lookahead == 'T') ADVANCE(380);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(381);
      END_STATE();
    case 309:
      if (lookahead == 'A') ADVANCE(382);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 311:
      if (lookahead == 'D') ADVANCE(383);
      END_STATE();
    case 312:
      if (lookahead == 'C') ADVANCE(384);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(385);
      END_STATE();
    case 314:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 315:
      if (lookahead == 'I') ADVANCE(387);
      END_STATE();
    case 316:
      if (lookahead == 'A') ADVANCE(388);
      END_STATE();
    case 317:
      if (lookahead == 'L') ADVANCE(389);
      END_STATE();
    case 318:
      if (lookahead == 'E') ADVANCE(390);
      END_STATE();
    case 319:
      if (lookahead == 'N') ADVANCE(391);
      END_STATE();
    case 320:
      if (lookahead == 'E') ADVANCE(392);
      END_STATE();
    case 321:
      if (lookahead == 'S') ADVANCE(393);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 323:
      if (lookahead == 'G') ADVANCE(394);
      END_STATE();
    case 324:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_keyword_match);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_keyword_nulls);
      END_STATE();
    case 329:
      if (lookahead == 'I') ADVANCE(396);
      END_STATE();
    case 330:
      if (lookahead == 'A') ADVANCE(397);
      END_STATE();
    case 331:
      if (lookahead == 'S') ADVANCE(398);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(399);
      END_STATE();
    case 333:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 334:
      if (lookahead == 'I') ADVANCE(401);
      END_STATE();
    case 335:
      if (lookahead == 'L') ADVANCE(402);
      END_STATE();
    case 336:
      if (lookahead == 'E') ADVANCE(403);
      END_STATE();
    case 337:
      if (lookahead == 'I') ADVANCE(404);
      if (lookahead == 'S') ADVANCE(405);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(406);
      END_STATE();
    case 340:
      if (lookahead == 'T') ADVANCE(407);
      END_STATE();
    case 341:
      if (lookahead == 'E') ADVANCE(408);
      END_STATE();
    case 342:
      if (lookahead == 'G') ADVANCE(409);
      END_STATE();
    case 343:
      if (lookahead == 'E') ADVANCE(410);
      END_STATE();
    case 344:
      if (lookahead == 'A') ADVANCE(411);
      END_STATE();
    case 345:
      if (lookahead == 'U') ADVANCE(412);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_action);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 381:
      if (lookahead == 'I') ADVANCE(437);
      END_STATE();
    case 382:
      if (lookahead == 'N') ADVANCE(438);
      END_STATE();
    case 383:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(440);
      END_STATE();
    case 385:
      if (lookahead == 'A') ADVANCE(441);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 387:
      if (lookahead == 'M') ADVANCE(442);
      END_STATE();
    case 388:
      if (lookahead == 'L') ADVANCE(443);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(444);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_delete);
      END_STATE();
    case 391:
      if (lookahead == 'C') ADVANCE(445);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 394:
      if (lookahead == 'N') ADVANCE(446);
      END_STATE();
    case 395:
      if (lookahead == 'R') ADVANCE(447);
      END_STATE();
    case 396:
      if (lookahead == 'C') ADVANCE(448);
      END_STATE();
    case 397:
      if (lookahead == 'L') ADVANCE(449);
      END_STATE();
    case 398:
      if (lookahead == 'I') ADVANCE(450);
      END_STATE();
    case 399:
      if (lookahead == 'Y') ADVANCE(451);
      END_STATE();
    case 400:
      if (lookahead == 'N') ADVANCE(452);
      END_STATE();
    case 401:
      if (lookahead == 'C') ADVANCE(453);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword_simple);
      END_STATE();
    case 404:
      if (lookahead == 'N') ADVANCE(454);
      END_STATE();
    case 405:
      if (lookahead == 'E') ADVANCE(455);
      END_STATE();
    case 406:
      if (lookahead == 'A') ADVANCE(456);
      END_STATE();
    case 407:
      if (lookahead == 'A') ADVANCE(457);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_unique);
      END_STATE();
    case 409:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_update);
      END_STATE();
    case 411:
      if (lookahead == 'R') ADVANCE(459);
      END_STATE();
    case 412:
      if (lookahead == 'T') ADVANCE(460);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 427:
      if (lookahead == 'y') ADVANCE(451);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 429:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 437:
      if (lookahead == 'A') ADVANCE(474);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_cascade);
      END_STATE();
    case 440:
      if (lookahead == 'E') ADVANCE(475);
      END_STATE();
    case 441:
      if (lookahead == 'I') ADVANCE(476);
      END_STATE();
    case 442:
      if (lookahead == 'E') ADVANCE(477);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_default);
      END_STATE();
    case 445:
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_foreign);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_integer);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_partial);
      END_STATE();
    case 450:
      if (lookahead == 'O') ADVANCE(479);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_primary);
      END_STATE();
    case 452:
      if (lookahead == 'C') ADVANCE(480);
      END_STATE();
    case 453:
      if (lookahead == 'T') ADVANCE(481);
      END_STATE();
    case 454:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 455:
      if (lookahead == 'R') ADVANCE(483);
      END_STATE();
    case 456:
      if (lookahead == 'R') ADVANCE(484);
      END_STATE();
    case 457:
      if (lookahead == 'M') ADVANCE(485);
      END_STATE();
    case 458:
      if (lookahead == 'D') ADVANCE(486);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__without_time_zone_token1);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 472:
      if (lookahead == 'm') ADVANCE(494);
      END_STATE();
    case 473:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 474:
      if (lookahead == 'L') ADVANCE(495);
      END_STATE();
    case 475:
      if (lookahead == 'R') ADVANCE(496);
      END_STATE();
    case 476:
      if (lookahead == 'N') ADVANCE(497);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_distinct);
      END_STATE();
    case 479:
      if (lookahead == 'N') ADVANCE(498);
      END_STATE();
    case 480:
      if (lookahead == 'E') ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_restrict);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 483:
      if (lookahead == 'I') ADVANCE(500);
      END_STATE();
    case 484:
      if (lookahead == 'Y') ADVANCE(501);
      END_STATE();
    case 485:
      if (lookahead == 'P') ADVANCE(502);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(501);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      END_STATE();
    case 497:
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 499:
      if (lookahead == 'S') ADVANCE(508);
      END_STATE();
    case 500:
      if (lookahead == 'A') ADVANCE(509);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(510);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_constraint);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_references);
      END_STATE();
    case 509:
      if (lookahead == 'L') ADVANCE(513);
      END_STATE();
    case 510:
      if (lookahead == 'Z') ADVANCE(514);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 512:
      if (lookahead == 'z') ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 514:
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
  [101] = {.lex_state = 0},
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
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {(TSStateId)(-1)},
  [180] = {(TSStateId)(-1)},
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
    [sym_keyword_primary] = ACTIONS(1),
    [sym_keyword_foreign] = ACTIONS(1),
    [sym_keyword_key] = ACTIONS(1),
    [sym_keyword_references] = ACTIONS(1),
    [sym_keyword_on] = ACTIONS(1),
    [sym_keyword_no] = ACTIONS(1),
    [sym_keyword_delete] = ACTIONS(1),
    [sym_keyword_update] = ACTIONS(1),
    [sym_keyword_match] = ACTIONS(1),
    [sym_keyword_full] = ACTIONS(1),
    [sym_keyword_partial] = ACTIONS(1),
    [sym_keyword_simple] = ACTIONS(1),
    [sym_keyword_action] = ACTIONS(1),
    [sym_keyword_set] = ACTIONS(1),
    [sym_keyword_restrict] = ACTIONS(1),
    [sym_keyword_cascade] = ACTIONS(1),
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
    [sym_source_file] = STATE(175),
    [sym_statement] = STATE(91),
    [sym__ddl_statement] = STATE(169),
    [sym__create_statement] = STATE(164),
    [sym_create_table] = STATE(161),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(64),
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
    STATE(9), 1,
      sym__type,
    STATE(11), 1,
      sym_keyword_char,
    STATE(22), 1,
      sym_keyword_varchar,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(51), 2,
      sym_char,
      sym_varchar,
    STATE(48), 3,
      sym_double,
      sym_decimal,
      sym_numeric,
    STATE(55), 3,
      sym_keyword_time,
      sym_keyword_timestamp,
      sym_keyword_timestamptz,
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
    ACTIONS(41), 32,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      aux_sym_double_token1,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
      sym_keyword_match,
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
  [146] = 5,
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
    ACTIONS(45), 32,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      aux_sym_double_token1,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
      sym_keyword_match,
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
  [197] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(45), 1,
      sym__with_time_zone,
    STATE(49), 1,
      sym__without_time_zone,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(49), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [231] = 14,
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
      sym_keyword_primary,
    ACTIONS(69), 1,
      sym_keyword_references,
    STATE(7), 1,
      aux_sym_column_definition_repeat1,
    STATE(32), 1,
      sym_column_constraint,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(42), 2,
      sym__primary_key,
      sym__not_null,
  [277] = 13,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      sym_keyword_not,
    ACTIONS(76), 1,
      sym_keyword_null,
    ACTIONS(79), 1,
      sym_keyword_constraint,
    ACTIONS(82), 1,
      sym_keyword_default,
    ACTIONS(85), 1,
      sym_keyword_unique,
    ACTIONS(88), 1,
      sym_keyword_primary,
    ACTIONS(91), 1,
      sym_keyword_references,
    STATE(32), 1,
      sym_column_constraint,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(42), 2,
      sym__primary_key,
      sym__not_null,
    STATE(7), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definition_repeat1,
  [321] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym__without_time_zone_token1,
    ACTIONS(53), 1,
      aux_sym__with_time_zone_token1,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 2,
      sym__without_time_zone,
      sym__with_time_zone,
    ACTIONS(94), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [353] = 14,
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
      sym_keyword_primary,
    ACTIONS(69), 1,
      sym_keyword_references,
    STATE(6), 1,
      aux_sym_column_definition_repeat1,
    STATE(32), 1,
      sym_column_constraint,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(42), 2,
      sym__primary_key,
      sym__not_null,
  [399] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [425] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [450] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [473] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [496] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [519] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [542] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [567] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [590] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [615] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [638] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [661] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [684] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [709] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      sym_keyword_null,
    ACTIONS(137), 1,
      sym_keyword_nulls,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [736] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      sym_keyword_null,
    ACTIONS(143), 1,
      sym_keyword_nulls,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [763] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
      sym_keyword_on,
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [808] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [830] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [852] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [874] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [896] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [918] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [940] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [962] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [984] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1028] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1050] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1072] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1094] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1116] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1138] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1160] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1182] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1204] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1226] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1248] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1270] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1292] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1314] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1336] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1358] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1380] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1402] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1424] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1446] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1468] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1490] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1512] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1534] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(213), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1556] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1578] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1600] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_keyword_not,
      sym_keyword_null,
      sym_keyword_constraint,
      sym_keyword_default,
      sym_keyword_unique,
      sym_keyword_primary,
      sym_keyword_references,
  [1622] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      aux_sym_source_file_repeat1,
    STATE(91), 1,
      sym_statement,
    STATE(161), 1,
      sym_create_table,
    STATE(164), 1,
      sym__create_statement,
    STATE(169), 1,
      sym__ddl_statement,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
  [1657] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym_keyword_create,
    STATE(91), 1,
      sym_statement,
    STATE(161), 1,
      sym_create_table,
    STATE(164), 1,
      sym__create_statement,
    STATE(169), 1,
      sym__ddl_statement,
    STATE(65), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [1690] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      sym_keyword_not,
    ACTIONS(67), 1,
      sym_keyword_primary,
    ACTIONS(229), 1,
      sym_keyword_null,
    ACTIONS(231), 1,
      sym_keyword_default,
    ACTIONS(233), 1,
      sym_keyword_unique,
    ACTIONS(235), 1,
      sym_keyword_references,
    STATE(62), 2,
      sym__primary_key,
      sym__not_null,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
  [1723] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym__literal_string,
    STATE(38), 1,
      sym__expression,
    STATE(43), 1,
      sym_literal,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [1752] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym__literal_string,
    STATE(37), 1,
      sym__expression,
    STATE(43), 1,
      sym_literal,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 4,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
      sym__number,
  [1781] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_if,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_identifier,
    STATE(84), 1,
      sym__if_not_exists,
    STATE(134), 1,
      sym_table_reference,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
  [1810] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_keyword_on,
    ACTIONS(251), 1,
      sym_keyword_match,
    STATE(103), 1,
      sym__foreign_key_match,
    STATE(120), 1,
      sym__foreign_key_on_delete,
    STATE(121), 1,
      sym__foreign_key_on_update,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
  [1839] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym_keyword_if,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym__if_not_exists,
    STATE(82), 1,
      sym_identifier,
    STATE(130), 1,
      sym_table_reference,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
  [1868] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    ACTIONS(251), 1,
      sym_keyword_match,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym__foreign_key_match,
    STATE(107), 1,
      sym__foreign_key_on_delete,
    STATE(135), 1,
      sym__foreign_key_on_update,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
  [1897] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      sym_keyword_table,
    ACTIONS(257), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(259), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(261), 1,
      sym_keyword_unlogged,
    STATE(151), 1,
      sym_keyword_temporary,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
  [1923] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    ACTIONS(251), 1,
      sym_keyword_match,
    STATE(93), 1,
      sym__foreign_key_match,
    STATE(116), 1,
      sym__foreign_key_on_update,
    STATE(117), 1,
      sym__foreign_key_on_delete,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
  [1949] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    ACTIONS(251), 1,
      sym_keyword_match,
    STATE(96), 1,
      sym__foreign_key_match,
    STATE(125), 1,
      sym__foreign_key_on_update,
    STATE(127), 1,
      sym__foreign_key_on_delete,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
  [1975] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(86), 1,
      sym_column_definition,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
  [2001] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      sym_keyword_no,
    ACTIONS(269), 1,
      sym_keyword_set,
    STATE(19), 1,
      sym_referencial_action,
    ACTIONS(271), 2,
      sym_keyword_restrict,
      sym_keyword_cascade,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
  [2025] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      sym_keyword_no,
    ACTIONS(269), 1,
      sym_keyword_set,
    STATE(17), 1,
      sym_referencial_action,
    ACTIONS(271), 2,
      sym_keyword_restrict,
      sym_keyword_cascade,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
  [2049] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(113), 1,
      sym_column_definition,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
  [2072] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    STATE(122), 1,
      sym_table_reference,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
  [2095] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(70), 1,
      sym_table_reference,
    STATE(82), 1,
      sym_identifier,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
  [2118] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(82), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 3,
      anon_sym_LPAREN,
      sym_keyword_on,
      sym_keyword_match,
  [2137] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(72), 1,
      sym_table_reference,
    STATE(82), 1,
      sym_identifier,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
  [2160] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(82), 1,
      sym_identifier,
    STATE(130), 1,
      sym_table_reference,
    STATE(84), 2,
      sym_line_comment,
      sym_block_comment,
  [2183] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_column_definitions_repeat1,
    STATE(85), 2,
      sym_line_comment,
      sym_block_comment,
  [2203] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_column_definitions_repeat1,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
  [2223] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(87), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_referencial_action_repeat1,
  [2241] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [2257] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_referencial_action_repeat1,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
  [2277] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
  [2297] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [2313] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_referencial_action_repeat1,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
  [2333] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    STATE(114), 1,
      sym__foreign_key_on_update,
    STATE(115), 1,
      sym__foreign_key_on_delete,
    STATE(93), 2,
      sym_line_comment,
      sym_block_comment,
  [2353] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    STATE(94), 2,
      sym_line_comment,
      sym_block_comment,
  [2373] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(92), 1,
      sym_identifier,
    STATE(95), 2,
      sym_line_comment,
      sym_block_comment,
  [2393] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    STATE(123), 1,
      sym__foreign_key_on_update,
    STATE(124), 1,
      sym__foreign_key_on_delete,
    STATE(96), 2,
      sym_line_comment,
      sym_block_comment,
  [2413] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [2429] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    STATE(106), 1,
      sym__foreign_key_on_update,
    STATE(129), 1,
      sym__foreign_key_on_delete,
    STATE(98), 2,
      sym_line_comment,
      sym_block_comment,
  [2449] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(152), 1,
      sym_identifier,
    STATE(99), 2,
      sym_line_comment,
      sym_block_comment,
  [2469] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(156), 1,
      sym_identifier,
    STATE(100), 2,
      sym_line_comment,
      sym_block_comment,
  [2489] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
    STATE(101), 2,
      sym_line_comment,
      sym_block_comment,
  [2509] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 3,
      sym_keyword_full,
      sym_keyword_partial,
      sym_keyword_simple,
  [2525] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      sym_keyword_on,
    STATE(132), 1,
      sym__foreign_key_on_delete,
    STATE(133), 1,
      sym__foreign_key_on_update,
    STATE(103), 2,
      sym_line_comment,
      sym_block_comment,
  [2545] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 3,
      anon_sym_LPAREN,
      sym_keyword_on,
      sym_keyword_match,
  [2561] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(105), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_column_definitions_repeat1,
  [2579] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(59), 1,
      sym__foreign_key_on_delete,
    STATE(106), 2,
      sym_line_comment,
      sym_block_comment,
  [2596] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(53), 1,
      sym__foreign_key_on_update,
    STATE(107), 2,
      sym_line_comment,
      sym_block_comment,
  [2613] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(31), 1,
      sym__keyword_time_zone,
    STATE(108), 2,
      sym_line_comment,
      sym_block_comment,
  [2630] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(109), 2,
      sym_line_comment,
      sym_block_comment,
  [2645] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(63), 1,
      sym__keyword_time_zone,
    STATE(110), 2,
      sym_line_comment,
      sym_block_comment,
  [2662] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_line_comment,
      sym_block_comment,
  [2679] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(112), 2,
      sym_line_comment,
      sym_block_comment,
  [2696] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(113), 2,
      sym_line_comment,
      sym_block_comment,
  [2711] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(44), 1,
      sym__foreign_key_on_delete,
    STATE(114), 2,
      sym_line_comment,
      sym_block_comment,
  [2728] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(44), 1,
      sym__foreign_key_on_update,
    STATE(115), 2,
      sym_line_comment,
      sym_block_comment,
  [2745] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(35), 1,
      sym__foreign_key_on_delete,
    STATE(116), 2,
      sym_line_comment,
      sym_block_comment,
  [2762] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(35), 1,
      sym__foreign_key_on_update,
    STATE(117), 2,
      sym_line_comment,
      sym_block_comment,
  [2779] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      sym_keyword_not,
    ACTIONS(325), 1,
      sym_keyword_distinct,
    STATE(118), 2,
      sym_line_comment,
      sym_block_comment,
  [2796] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      sym_keyword_delete,
    ACTIONS(329), 1,
      sym_keyword_update,
    STATE(119), 2,
      sym_line_comment,
      sym_block_comment,
  [2813] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(34), 1,
      sym__foreign_key_on_update,
    STATE(120), 2,
      sym_line_comment,
      sym_block_comment,
  [2830] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(34), 1,
      sym__foreign_key_on_delete,
    STATE(121), 2,
      sym_line_comment,
      sym_block_comment,
  [2847] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_column_definitions,
    STATE(122), 2,
      sym_line_comment,
      sym_block_comment,
  [2864] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(54), 1,
      sym__foreign_key_on_delete,
    STATE(123), 2,
      sym_line_comment,
      sym_block_comment,
  [2881] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(54), 1,
      sym__foreign_key_on_update,
    STATE(124), 2,
      sym_line_comment,
      sym_block_comment,
  [2898] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(60), 1,
      sym__foreign_key_on_delete,
    STATE(125), 2,
      sym_line_comment,
      sym_block_comment,
  [2915] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      sym_keyword_not,
    ACTIONS(335), 1,
      sym_keyword_distinct,
    STATE(126), 2,
      sym_line_comment,
      sym_block_comment,
  [2932] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(60), 1,
      sym__foreign_key_on_update,
    STATE(127), 2,
      sym_line_comment,
      sym_block_comment,
  [2949] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(128), 2,
      sym_line_comment,
      sym_block_comment,
  [2964] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(59), 1,
      sym__foreign_key_on_update,
    STATE(129), 2,
      sym_line_comment,
      sym_block_comment,
  [2981] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_column_definitions,
    STATE(130), 2,
      sym_line_comment,
      sym_block_comment,
  [2998] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 2,
      sym_keyword_null,
      sym_keyword_default,
    STATE(131), 2,
      sym_line_comment,
      sym_block_comment,
  [3013] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym_keyword_on,
    STATE(52), 1,
      sym__foreign_key_on_update,
    STATE(132), 2,
      sym_line_comment,
      sym_block_comment,
  [3030] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(52), 1,
      sym__foreign_key_on_delete,
    STATE(133), 2,
      sym_line_comment,
      sym_block_comment,
  [3047] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_column_definitions,
    STATE(134), 2,
      sym_line_comment,
      sym_block_comment,
  [3064] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_keyword_on,
    STATE(53), 1,
      sym__foreign_key_on_delete,
    STATE(135), 2,
      sym_line_comment,
      sym_block_comment,
  [3081] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(136), 2,
      sym_line_comment,
      sym_block_comment,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    STATE(137), 2,
      sym_line_comment,
      sym_block_comment,
  [3109] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(138), 2,
      sym_line_comment,
      sym_block_comment,
  [3123] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(139), 2,
      sym_line_comment,
      sym_block_comment,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      sym_keyword_distinct,
    STATE(140), 2,
      sym_line_comment,
      sym_block_comment,
  [3151] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      sym_keyword_exists,
    STATE(141), 2,
      sym_line_comment,
      sym_block_comment,
  [3165] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      sym__number,
    STATE(142), 2,
      sym_line_comment,
      sym_block_comment,
  [3179] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(143), 2,
      sym_line_comment,
      sym_block_comment,
  [3193] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      sym__number,
    STATE(144), 2,
      sym_line_comment,
      sym_block_comment,
  [3207] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      sym_keyword_action,
    STATE(145), 2,
      sym_line_comment,
      sym_block_comment,
  [3221] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      sym_keyword_update,
    STATE(146), 2,
      sym_line_comment,
      sym_block_comment,
  [3235] = 4,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH,
    ACTIONS(363), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      aux_sym_identifier_token1,
    STATE(147), 2,
      sym_line_comment,
      sym_block_comment,
  [3249] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      sym_keyword_not,
    STATE(148), 2,
      sym_line_comment,
      sym_block_comment,
  [3263] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      aux_sym__keyword_time_zone_token2,
    STATE(149), 2,
      sym_line_comment,
      sym_block_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym__number,
    STATE(150), 2,
      sym_line_comment,
      sym_block_comment,
  [3291] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      sym_keyword_table,
    STATE(151), 2,
      sym_line_comment,
      sym_block_comment,
  [3305] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_line_comment,
      sym_block_comment,
  [3319] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(377), 1,
      sym_keyword_on,
    STATE(153), 2,
      sym_line_comment,
      sym_block_comment,
  [3333] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      sym__number,
    STATE(154), 2,
      sym_line_comment,
      sym_block_comment,
  [3347] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      sym__number,
    STATE(155), 2,
      sym_line_comment,
      sym_block_comment,
  [3361] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(156), 2,
      sym_line_comment,
      sym_block_comment,
  [3375] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(157), 2,
      sym_line_comment,
      sym_block_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      sym_keyword_table,
    STATE(158), 2,
      sym_line_comment,
      sym_block_comment,
  [3403] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      sym_keyword_delete,
    STATE(159), 2,
      sym_line_comment,
      sym_block_comment,
  [3417] = 4,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH,
    ACTIONS(363), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      aux_sym_block_comment_token1,
    STATE(160), 2,
      sym_line_comment,
      sym_block_comment,
  [3431] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(161), 2,
      sym_line_comment,
      sym_block_comment,
  [3445] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(162), 2,
      sym_line_comment,
      sym_block_comment,
  [3459] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(163), 2,
      sym_line_comment,
      sym_block_comment,
  [3473] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(164), 2,
      sym_line_comment,
      sym_block_comment,
  [3487] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      sym_keyword_null,
    STATE(165), 2,
      sym_line_comment,
      sym_block_comment,
  [3501] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(166), 2,
      sym_line_comment,
      sym_block_comment,
  [3515] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    STATE(167), 2,
      sym_line_comment,
      sym_block_comment,
  [3529] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(405), 1,
      sym_keyword_distinct,
    STATE(168), 2,
      sym_line_comment,
      sym_block_comment,
  [3543] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    STATE(169), 2,
      sym_line_comment,
      sym_block_comment,
  [3557] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 1,
      sym_keyword_key,
    STATE(170), 2,
      sym_line_comment,
      sym_block_comment,
  [3571] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(171), 2,
      sym_line_comment,
      sym_block_comment,
  [3585] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 1,
      aux_sym_double_token2,
    STATE(172), 2,
      sym_line_comment,
      sym_block_comment,
  [3599] = 4,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH,
    ACTIONS(363), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 1,
      aux_sym__literal_string_token1,
    STATE(173), 2,
      sym_line_comment,
      sym_block_comment,
  [3613] = 4,
    ACTIONS(361), 1,
      anon_sym_DASH_DASH,
    ACTIONS(363), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(417), 1,
      aux_sym_line_comment_token1,
    STATE(174), 2,
      sym_line_comment,
      sym_block_comment,
  [3627] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(175), 2,
      sym_line_comment,
      sym_block_comment,
  [3641] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    STATE(176), 2,
      sym_line_comment,
      sym_block_comment,
  [3655] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    STATE(177), 2,
      sym_line_comment,
      sym_block_comment,
  [3669] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(425), 1,
      sym__number,
    STATE(178), 2,
      sym_line_comment,
      sym_block_comment,
  [3683] = 1,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [3687] = 1,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 321,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 399,
  [SMALL_STATE(11)] = 425,
  [SMALL_STATE(12)] = 450,
  [SMALL_STATE(13)] = 473,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 519,
  [SMALL_STATE(16)] = 542,
  [SMALL_STATE(17)] = 567,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 661,
  [SMALL_STATE(22)] = 684,
  [SMALL_STATE(23)] = 709,
  [SMALL_STATE(24)] = 736,
  [SMALL_STATE(25)] = 763,
  [SMALL_STATE(26)] = 786,
  [SMALL_STATE(27)] = 808,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 852,
  [SMALL_STATE(30)] = 874,
  [SMALL_STATE(31)] = 896,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 940,
  [SMALL_STATE(34)] = 962,
  [SMALL_STATE(35)] = 984,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1028,
  [SMALL_STATE(38)] = 1050,
  [SMALL_STATE(39)] = 1072,
  [SMALL_STATE(40)] = 1094,
  [SMALL_STATE(41)] = 1116,
  [SMALL_STATE(42)] = 1138,
  [SMALL_STATE(43)] = 1160,
  [SMALL_STATE(44)] = 1182,
  [SMALL_STATE(45)] = 1204,
  [SMALL_STATE(46)] = 1226,
  [SMALL_STATE(47)] = 1248,
  [SMALL_STATE(48)] = 1270,
  [SMALL_STATE(49)] = 1292,
  [SMALL_STATE(50)] = 1314,
  [SMALL_STATE(51)] = 1336,
  [SMALL_STATE(52)] = 1358,
  [SMALL_STATE(53)] = 1380,
  [SMALL_STATE(54)] = 1402,
  [SMALL_STATE(55)] = 1424,
  [SMALL_STATE(56)] = 1446,
  [SMALL_STATE(57)] = 1468,
  [SMALL_STATE(58)] = 1490,
  [SMALL_STATE(59)] = 1512,
  [SMALL_STATE(60)] = 1534,
  [SMALL_STATE(61)] = 1556,
  [SMALL_STATE(62)] = 1578,
  [SMALL_STATE(63)] = 1600,
  [SMALL_STATE(64)] = 1622,
  [SMALL_STATE(65)] = 1657,
  [SMALL_STATE(66)] = 1690,
  [SMALL_STATE(67)] = 1723,
  [SMALL_STATE(68)] = 1752,
  [SMALL_STATE(69)] = 1781,
  [SMALL_STATE(70)] = 1810,
  [SMALL_STATE(71)] = 1839,
  [SMALL_STATE(72)] = 1868,
  [SMALL_STATE(73)] = 1897,
  [SMALL_STATE(74)] = 1923,
  [SMALL_STATE(75)] = 1949,
  [SMALL_STATE(76)] = 1975,
  [SMALL_STATE(77)] = 2001,
  [SMALL_STATE(78)] = 2025,
  [SMALL_STATE(79)] = 2049,
  [SMALL_STATE(80)] = 2072,
  [SMALL_STATE(81)] = 2095,
  [SMALL_STATE(82)] = 2118,
  [SMALL_STATE(83)] = 2137,
  [SMALL_STATE(84)] = 2160,
  [SMALL_STATE(85)] = 2183,
  [SMALL_STATE(86)] = 2203,
  [SMALL_STATE(87)] = 2223,
  [SMALL_STATE(88)] = 2241,
  [SMALL_STATE(89)] = 2257,
  [SMALL_STATE(90)] = 2277,
  [SMALL_STATE(91)] = 2297,
  [SMALL_STATE(92)] = 2313,
  [SMALL_STATE(93)] = 2333,
  [SMALL_STATE(94)] = 2353,
  [SMALL_STATE(95)] = 2373,
  [SMALL_STATE(96)] = 2393,
  [SMALL_STATE(97)] = 2413,
  [SMALL_STATE(98)] = 2429,
  [SMALL_STATE(99)] = 2449,
  [SMALL_STATE(100)] = 2469,
  [SMALL_STATE(101)] = 2489,
  [SMALL_STATE(102)] = 2509,
  [SMALL_STATE(103)] = 2525,
  [SMALL_STATE(104)] = 2545,
  [SMALL_STATE(105)] = 2561,
  [SMALL_STATE(106)] = 2579,
  [SMALL_STATE(107)] = 2596,
  [SMALL_STATE(108)] = 2613,
  [SMALL_STATE(109)] = 2630,
  [SMALL_STATE(110)] = 2645,
  [SMALL_STATE(111)] = 2662,
  [SMALL_STATE(112)] = 2679,
  [SMALL_STATE(113)] = 2696,
  [SMALL_STATE(114)] = 2711,
  [SMALL_STATE(115)] = 2728,
  [SMALL_STATE(116)] = 2745,
  [SMALL_STATE(117)] = 2762,
  [SMALL_STATE(118)] = 2779,
  [SMALL_STATE(119)] = 2796,
  [SMALL_STATE(120)] = 2813,
  [SMALL_STATE(121)] = 2830,
  [SMALL_STATE(122)] = 2847,
  [SMALL_STATE(123)] = 2864,
  [SMALL_STATE(124)] = 2881,
  [SMALL_STATE(125)] = 2898,
  [SMALL_STATE(126)] = 2915,
  [SMALL_STATE(127)] = 2932,
  [SMALL_STATE(128)] = 2949,
  [SMALL_STATE(129)] = 2964,
  [SMALL_STATE(130)] = 2981,
  [SMALL_STATE(131)] = 2998,
  [SMALL_STATE(132)] = 3013,
  [SMALL_STATE(133)] = 3030,
  [SMALL_STATE(134)] = 3047,
  [SMALL_STATE(135)] = 3064,
  [SMALL_STATE(136)] = 3081,
  [SMALL_STATE(137)] = 3095,
  [SMALL_STATE(138)] = 3109,
  [SMALL_STATE(139)] = 3123,
  [SMALL_STATE(140)] = 3137,
  [SMALL_STATE(141)] = 3151,
  [SMALL_STATE(142)] = 3165,
  [SMALL_STATE(143)] = 3179,
  [SMALL_STATE(144)] = 3193,
  [SMALL_STATE(145)] = 3207,
  [SMALL_STATE(146)] = 3221,
  [SMALL_STATE(147)] = 3235,
  [SMALL_STATE(148)] = 3249,
  [SMALL_STATE(149)] = 3263,
  [SMALL_STATE(150)] = 3277,
  [SMALL_STATE(151)] = 3291,
  [SMALL_STATE(152)] = 3305,
  [SMALL_STATE(153)] = 3319,
  [SMALL_STATE(154)] = 3333,
  [SMALL_STATE(155)] = 3347,
  [SMALL_STATE(156)] = 3361,
  [SMALL_STATE(157)] = 3375,
  [SMALL_STATE(158)] = 3389,
  [SMALL_STATE(159)] = 3403,
  [SMALL_STATE(160)] = 3417,
  [SMALL_STATE(161)] = 3431,
  [SMALL_STATE(162)] = 3445,
  [SMALL_STATE(163)] = 3459,
  [SMALL_STATE(164)] = 3473,
  [SMALL_STATE(165)] = 3487,
  [SMALL_STATE(166)] = 3501,
  [SMALL_STATE(167)] = 3515,
  [SMALL_STATE(168)] = 3529,
  [SMALL_STATE(169)] = 3543,
  [SMALL_STATE(170)] = 3557,
  [SMALL_STATE(171)] = 3571,
  [SMALL_STATE(172)] = 3585,
  [SMALL_STATE(173)] = 3599,
  [SMALL_STATE(174)] = 3613,
  [SMALL_STATE(175)] = 3627,
  [SMALL_STATE(176)] = 3641,
  [SMALL_STATE(177)] = 3655,
  [SMALL_STATE(178)] = 3669,
  [SMALL_STATE(179)] = 3683,
  [SMALL_STATE(180)] = 3687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(165),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(94),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(68),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(24),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(170),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 2), SHIFT_REPEAT(81),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referencial_action, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_char, 1), REDUCE(sym_keyword_varchar, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_key_on_update, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_key_on_delete, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referencial_action, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referencial_action, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 3, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_constraint, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referencial_action, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_key, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_null, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_time_zone, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definition_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 9, .production_id = 9),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 10, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 5, .production_id = 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_numeric, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_character, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 6, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 8, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_datetime, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyword_time_zone, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 7, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 7, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__without_time_zone, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_referencial_action_repeat1, 2), SHIFT_REPEAT(90),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_referencial_action_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_key_match, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
