#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  aux_sym_double_token1 = 15,
  aux_sym_double_token2 = 16,
  sym_keyword_boolean = 17,
  sym_keyword_smallint = 18,
  sym_keyword_integer = 19,
  sym_keyword_bigint = 20,
  sym_keyword_decimal = 21,
  sym_keyword_numeric = 22,
  sym_keyword_real = 23,
  sym_keyword_smallserial = 24,
  sym_keyword_serial = 25,
  sym_keyword_bigserial = 26,
  sym_keyword_money = 27,
  sym_keyword_text = 28,
  aux_sym_keyword_char_token1 = 29,
  aux_sym_keyword_char_token2 = 30,
  aux_sym_keyword_varchar_token1 = 31,
  sym_keyword_bytea = 32,
  sym_keyword_date = 33,
  sym_keyword_datetime = 34,
  aux_sym_keyword_time_token1 = 35,
  aux_sym_keyword_timestamp_token1 = 36,
  aux_sym_keyword_timestamptz_token1 = 37,
  sym__keyword_without = 38,
  sym__keyword_with = 39,
  aux_sym__keyword_time_zone_token1 = 40,
  sym_keyword_uuid = 41,
  sym_keyword_xml = 42,
  sym_keyword_json = 43,
  sym_keyword_jsonb = 44,
  anon_sym_DASH_DASH = 45,
  aux_sym_comment_token1 = 46,
  anon_sym_SLASH_STAR = 47,
  aux_sym_marginalia_token1 = 48,
  anon_sym_SLASH = 49,
  sym__number = 50,
  anon_sym_DQUOTE = 51,
  sym_source_file = 52,
  sym_statement = 53,
  sym__ddl_statement = 54,
  sym__create_statement = 55,
  sym_create_table = 56,
  sym_column_definitions = 57,
  sym_column_definition = 58,
  sym_table_reference = 59,
  sym__if_not_exists = 60,
  sym_keyword_temporary = 61,
  sym__type = 62,
  sym__type_numeric = 63,
  sym_double = 64,
  sym_decimal = 65,
  sym_numeric = 66,
  sym__type_character = 67,
  sym_char = 68,
  sym_varchar = 69,
  sym__type_datetime = 70,
  sym__type_geometric = 71,
  sym__type_net = 72,
  sym__type_bit_string = 73,
  sym__type_text_search = 74,
  sym_keyword_char = 75,
  sym_keyword_varchar = 76,
  sym_keyword_time = 77,
  sym_keyword_timestamp = 78,
  sym_keyword_timestamptz = 79,
  sym__without_time_zone = 80,
  sym__with_time_zone = 81,
  sym__keyword_time_zone = 82,
  sym_comment = 83,
  sym_marginalia = 84,
  sym_identifier = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_column_definitions_repeat1 = 87,
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
  [sym__keyword_without] = "_keyword_without",
  [sym__keyword_with] = "_keyword_with",
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
  [sym__number] = "literal",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym__ddl_statement] = "_ddl_statement",
  [sym__create_statement] = "_create_statement",
  [sym_create_table] = "create_table",
  [sym_column_definitions] = "column_definitions",
  [sym_column_definition] = "column_definition",
  [sym_table_reference] = "table_reference",
  [sym__if_not_exists] = "_if_not_exists",
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
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_column_definitions_repeat1] = "column_definitions_repeat1",
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
  [sym__keyword_without] = sym__keyword_without,
  [sym__keyword_with] = sym__keyword_with,
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
  [sym__number] = sym__number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym__ddl_statement] = sym__ddl_statement,
  [sym__create_statement] = sym__create_statement,
  [sym_create_table] = sym_create_table,
  [sym_column_definitions] = sym_column_definitions,
  [sym_column_definition] = sym_column_definition,
  [sym_table_reference] = sym_table_reference,
  [sym__if_not_exists] = sym__if_not_exists,
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
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_column_definitions_repeat1] = aux_sym_column_definitions_repeat1,
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
  [sym__keyword_without] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_with] = {
    .visible = false,
    .named = true,
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
  [sym__number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__if_not_exists] = {
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
  [6] = {.index = 7, .length = 2},
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
    {field_size, 2},
  [7] =
    {field_precision, 2},
    {field_scale, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_marginalia_token1);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
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
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'J') ADVANCE(6);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(16);
      if (lookahead == 'Z') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'j') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == 'z') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'Y') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == 'X') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'J') ADVANCE(6);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(16);
      if (lookahead == 'Z') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'j') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == 'z') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(110);
      if (lookahead == 'X') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 98:
      if (lookahead == 'B') ADVANCE(153);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(159);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 'D') ADVANCE(168);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'H') ADVANCE(170);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_keyword_xml);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 148:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 152:
      if (lookahead == 'M') ADVANCE(202);
      END_STATE();
    case 153:
      if (lookahead == 'L') ADVANCE(203);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 155:
      if (lookahead == 'G') ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'B') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 'Y') ADVANCE(207);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'I') ADVANCE(209);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_real);
      END_STATE();
    case 161:
      if (lookahead == 'A') ADVANCE(210);
      END_STATE();
    case 162:
      if (lookahead == 'L') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(213);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_text);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 'S') ADVANCE(214);
      END_STATE();
    case 167:
      if (lookahead == 'G') ADVANCE(215);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_keyword_uuid);
      END_STATE();
    case 169:
      if (lookahead == 'H') ADVANCE(216);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__keyword_with);
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__keyword_time_zone_token1);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_keyword_char_token2);
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_keyword_date);
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_keyword_json);
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_keyword_time_token1);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__keyword_with);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 196:
      if (lookahead == 'R') ADVANCE(238);
      END_STATE();
    case 197:
      if (lookahead == 'A') ADVANCE(239);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_keyword_bytea);
      END_STATE();
    case 199:
      if (lookahead == 'C') ADVANCE(240);
      END_STATE();
    case 200:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(242);
      END_STATE();
    case 202:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 203:
      if (lookahead == 'E') ADVANCE(244);
      END_STATE();
    case 204:
      if (lookahead == 'S') ADVANCE(245);
      END_STATE();
    case 205:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_jsonb);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_money);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 209:
      if (lookahead == 'S') ADVANCE(248);
      END_STATE();
    case 210:
      if (lookahead == 'L') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 213:
      if (lookahead == 'R') ADVANCE(252);
      END_STATE();
    case 214:
      if (lookahead == 'T') ADVANCE(253);
      END_STATE();
    case 215:
      if (lookahead == 'G') ADVANCE(254);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(255);
      END_STATE();
    case 217:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_keyword_bigint);
      END_STATE();
    case 238:
      if (lookahead == 'I') ADVANCE(272);
      END_STATE();
    case 239:
      if (lookahead == 'N') ADVANCE(273);
      END_STATE();
    case 240:
      if (lookahead == 'T') ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(275);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(276);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_double_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 246:
      if (lookahead == 'R') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 'C') ADVANCE(278);
      END_STATE();
    case 248:
      if (lookahead == 'I') ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_serial);
      END_STATE();
    case 250:
      if (lookahead == 'N') ADVANCE(280);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 252:
      if (lookahead == 'A') ADVANCE(282);
      END_STATE();
    case 253:
      if (lookahead == 'A') ADVANCE(283);
      END_STATE();
    case 254:
      if (lookahead == 'E') ADVANCE(284);
      END_STATE();
    case 255:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 260:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 272:
      if (lookahead == 'A') ADVANCE(296);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_boolean);
      END_STATE();
    case 274:
      if (lookahead == 'E') ADVANCE(297);
      END_STATE();
    case 275:
      if (lookahead == 'E') ADVANCE(298);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_decimal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_integer);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_numeric);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(299);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(300);
      END_STATE();
    case 281:
      if (lookahead == 'R') ADVANCE(301);
      END_STATE();
    case 282:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 283:
      if (lookahead == 'M') ADVANCE(303);
      END_STATE();
    case 284:
      if (lookahead == 'D') ADVANCE(304);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keyword_varchar_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__keyword_without);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 296:
      if (lookahead == 'L') ADVANCE(311);
      END_STATE();
    case 297:
      if (lookahead == 'R') ADVANCE(312);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_keyword_datetime);
      END_STATE();
    case 299:
      if (lookahead == 'N') ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_smallint);
      END_STATE();
    case 301:
      if (lookahead == 'I') ADVANCE(314);
      END_STATE();
    case 302:
      if (lookahead == 'Y') ADVANCE(315);
      END_STATE();
    case 303:
      if (lookahead == 'P') ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_bigserial);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keyword_char_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_double_token2);
      END_STATE();
    case 314:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 'T') ADVANCE(320);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keyword_timestamp_token1);
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 319:
      if (lookahead == 'L') ADVANCE(323);
      END_STATE();
    case 320:
      if (lookahead == 'Z') ADVANCE(324);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 322:
      if (lookahead == 'z') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_keyword_smallserial);
      END_STATE();
    case 324:
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
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 1},
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
  [91] = {(TSStateId)(-1)},
  [92] = {(TSStateId)(-1)},
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
    [sym__keyword_without] = ACTIONS(1),
    [sym__keyword_with] = ACTIONS(1),
    [aux_sym__keyword_time_zone_token1] = ACTIONS(1),
    [sym_keyword_uuid] = ACTIONS(1),
    [sym_keyword_xml] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
    [sym_keyword_jsonb] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_statement] = STATE(25),
    [sym__ddl_statement] = STATE(84),
    [sym__create_statement] = STATE(68),
    [sym_create_table] = STATE(69),
    [sym_comment] = STATE(1),
    [sym_marginalia] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_keyword_create] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__type] = STATE(58),
    [sym__type_numeric] = STATE(46),
    [sym_double] = STATE(30),
    [sym_decimal] = STATE(30),
    [sym_numeric] = STATE(30),
    [sym__type_character] = STATE(46),
    [sym_char] = STATE(50),
    [sym_varchar] = STATE(50),
    [sym__type_datetime] = STATE(46),
    [sym__type_geometric] = STATE(46),
    [sym__type_net] = STATE(46),
    [sym__type_bit_string] = STATE(46),
    [sym__type_text_search] = STATE(46),
    [sym_keyword_char] = STATE(27),
    [sym_keyword_varchar] = STATE(29),
    [sym_keyword_time] = STATE(54),
    [sym_keyword_timestamp] = STATE(54),
    [sym_keyword_timestamptz] = STATE(54),
    [sym_comment] = STATE(2),
    [sym_marginalia] = STATE(2),
    [aux_sym_double_token1] = ACTIONS(13),
    [sym_keyword_boolean] = ACTIONS(15),
    [sym_keyword_smallint] = ACTIONS(17),
    [sym_keyword_integer] = ACTIONS(17),
    [sym_keyword_bigint] = ACTIONS(17),
    [sym_keyword_decimal] = ACTIONS(19),
    [sym_keyword_numeric] = ACTIONS(21),
    [sym_keyword_real] = ACTIONS(17),
    [sym_keyword_smallserial] = ACTIONS(17),
    [sym_keyword_serial] = ACTIONS(17),
    [sym_keyword_bigserial] = ACTIONS(17),
    [sym_keyword_money] = ACTIONS(15),
    [sym_keyword_text] = ACTIONS(23),
    [aux_sym_keyword_char_token1] = ACTIONS(25),
    [aux_sym_keyword_char_token2] = ACTIONS(27),
    [aux_sym_keyword_varchar_token1] = ACTIONS(29),
    [sym_keyword_bytea] = ACTIONS(15),
    [sym_keyword_date] = ACTIONS(31),
    [sym_keyword_datetime] = ACTIONS(33),
    [aux_sym_keyword_time_token1] = ACTIONS(35),
    [aux_sym_keyword_timestamp_token1] = ACTIONS(37),
    [aux_sym_keyword_timestamptz_token1] = ACTIONS(39),
    [sym_keyword_uuid] = ACTIONS(15),
    [sym_keyword_xml] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
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
    ACTIONS(41), 22,
      anon_sym_LPAREN,
      anon_sym_DOT,
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
  [41] = 5,
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
    ACTIONS(45), 22,
      anon_sym_LPAREN,
      anon_sym_DOT,
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
  [82] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(25), 1,
      sym_statement,
    STATE(68), 1,
      sym__create_statement,
    STATE(69), 1,
      sym_create_table,
    STATE(84), 1,
      sym__ddl_statement,
    STATE(5), 2,
      sym_comment,
      sym_marginalia,
  [117] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_keyword_create,
    STATE(25), 1,
      sym_statement,
    STATE(68), 1,
      sym__create_statement,
    STATE(69), 1,
      sym_create_table,
    STATE(84), 1,
      sym__ddl_statement,
    STATE(6), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_source_file_repeat1,
  [150] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      sym_keyword_if,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym__if_not_exists,
    STATE(38), 1,
      sym_identifier,
    STATE(42), 1,
      sym_table_reference,
    STATE(7), 2,
      sym_comment,
      sym_marginalia,
  [179] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      sym_keyword_if,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym__if_not_exists,
    STATE(32), 1,
      sym_table_reference,
    STATE(38), 1,
      sym_identifier,
    STATE(8), 2,
      sym_comment,
      sym_marginalia,
  [208] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym__keyword_without,
    ACTIONS(69), 1,
      sym__keyword_with,
    STATE(49), 1,
      sym__with_time_zone,
    STATE(51), 1,
      sym__without_time_zone,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_comment,
      sym_marginalia,
  [235] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym__keyword_without,
    ACTIONS(69), 1,
      sym__keyword_with,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(10), 2,
      sym_comment,
      sym_marginalia,
    STATE(52), 2,
      sym__without_time_zone,
      sym__with_time_zone,
  [260] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(26), 1,
      sym_column_definition,
    STATE(11), 2,
      sym_comment,
      sym_marginalia,
  [286] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      sym_keyword_table,
    ACTIONS(79), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(81), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(83), 1,
      sym_keyword_unlogged,
    STATE(75), 1,
      sym_keyword_temporary,
    STATE(12), 2,
      sym_comment,
      sym_marginalia,
  [312] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(31), 1,
      sym_column_definition,
    STATE(13), 2,
      sym_comment,
      sym_marginalia,
  [335] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(32), 1,
      sym_table_reference,
    STATE(38), 1,
      sym_identifier,
    STATE(14), 2,
      sym_comment,
      sym_marginalia,
  [358] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(41), 1,
      sym_table_reference,
    STATE(15), 2,
      sym_comment,
      sym_marginalia,
  [381] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(85), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [397] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_comment,
      sym_marginalia,
  [415] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_comment,
      sym_marginalia,
  [433] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [449] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(20), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_column_definitions_repeat1,
  [467] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(103), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [483] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_column_definitions_repeat1,
    STATE(22), 2,
      sym_comment,
      sym_marginalia,
  [503] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    STATE(23), 2,
      sym_comment,
      sym_marginalia,
  [523] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(109), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [539] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [555] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_column_definitions_repeat1,
    STATE(26), 2,
      sym_comment,
      sym_marginalia,
  [575] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(27), 2,
      sym_comment,
      sym_marginalia,
  [593] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [609] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(29), 2,
      sym_comment,
      sym_marginalia,
  [627] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(30), 2,
      sym_comment,
      sym_marginalia,
  [642] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym_comment,
      sym_marginalia,
  [657] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_column_definitions,
    STATE(32), 2,
      sym_comment,
      sym_marginalia,
  [674] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(33), 2,
      sym_comment,
      sym_marginalia,
  [689] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(34), 2,
      sym_comment,
      sym_marginalia,
  [704] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym_comment,
      sym_marginalia,
  [719] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_comment,
      sym_marginalia,
  [734] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(37), 2,
      sym_comment,
      sym_marginalia,
  [749] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(38), 2,
      sym_comment,
      sym_marginalia,
  [766] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_comment,
      sym_marginalia,
  [781] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(40), 2,
      sym_comment,
      sym_marginalia,
  [796] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_column_definitions,
    STATE(41), 2,
      sym_comment,
      sym_marginalia,
  [813] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_column_definitions,
    STATE(42), 2,
      sym_comment,
      sym_marginalia,
  [830] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(43), 2,
      sym_comment,
      sym_marginalia,
  [845] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(44), 2,
      sym_comment,
      sym_marginalia,
  [860] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_comment,
      sym_marginalia,
  [875] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_comment,
      sym_marginalia,
  [890] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_comment,
      sym_marginalia,
  [907] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(48), 2,
      sym_comment,
      sym_marginalia,
  [924] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym_comment,
      sym_marginalia,
  [939] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(50), 2,
      sym_comment,
      sym_marginalia,
  [954] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(51), 2,
      sym_comment,
      sym_marginalia,
  [969] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(52), 2,
      sym_comment,
      sym_marginalia,
  [984] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_keyword_time_token1,
    STATE(44), 1,
      sym__keyword_time_zone,
    STATE(53), 2,
      sym_comment,
      sym_marginalia,
  [1001] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(54), 2,
      sym_comment,
      sym_marginalia,
  [1016] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_keyword_time_token1,
    STATE(45), 1,
      sym__keyword_time_zone,
    STATE(55), 2,
      sym_comment,
      sym_marginalia,
  [1033] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(56), 2,
      sym_comment,
      sym_marginalia,
  [1048] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(57), 2,
      sym_comment,
      sym_marginalia,
  [1063] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(58), 2,
      sym_comment,
      sym_marginalia,
  [1078] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      aux_sym_double_token2,
    STATE(59), 2,
      sym_comment,
      sym_marginalia,
  [1092] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      sym__number,
    STATE(60), 2,
      sym_comment,
      sym_marginalia,
  [1106] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(61), 2,
      sym_comment,
      sym_marginalia,
  [1120] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    STATE(62), 2,
      sym_comment,
      sym_marginalia,
  [1134] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(63), 2,
      sym_comment,
      sym_marginalia,
  [1148] = 4,
    ACTIONS(191), 1,
      anon_sym_DASH_DASH,
    ACTIONS(193), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      aux_sym_marginalia_token1,
    STATE(64), 2,
      sym_comment,
      sym_marginalia,
  [1162] = 4,
    ACTIONS(191), 1,
      anon_sym_DASH_DASH,
    ACTIONS(193), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      aux_sym_comment_token1,
    STATE(65), 2,
      sym_comment,
      sym_marginalia,
  [1176] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      sym__number,
    STATE(66), 2,
      sym_comment,
      sym_marginalia,
  [1190] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__number,
    STATE(67), 2,
      sym_comment,
      sym_marginalia,
  [1204] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    STATE(68), 2,
      sym_comment,
      sym_marginalia,
  [1218] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(69), 2,
      sym_comment,
      sym_marginalia,
  [1232] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym_comment,
      sym_marginalia,
  [1246] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(71), 2,
      sym_comment,
      sym_marginalia,
  [1260] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym_keyword_table,
    STATE(72), 2,
      sym_comment,
      sym_marginalia,
  [1274] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      sym__number,
    STATE(73), 2,
      sym_comment,
      sym_marginalia,
  [1288] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      sym__number,
    STATE(74), 2,
      sym_comment,
      sym_marginalia,
  [1302] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      sym_keyword_table,
    STATE(75), 2,
      sym_comment,
      sym_marginalia,
  [1316] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    STATE(76), 2,
      sym_comment,
      sym_marginalia,
  [1330] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      aux_sym__keyword_time_zone_token1,
    STATE(77), 2,
      sym_comment,
      sym_marginalia,
  [1344] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym_keyword_not,
    STATE(78), 2,
      sym_comment,
      sym_marginalia,
  [1358] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(79), 2,
      sym_comment,
      sym_marginalia,
  [1372] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(80), 2,
      sym_comment,
      sym_marginalia,
  [1386] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(81), 2,
      sym_comment,
      sym_marginalia,
  [1400] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      sym__number,
    STATE(82), 2,
      sym_comment,
      sym_marginalia,
  [1414] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      sym__identifier,
    STATE(83), 2,
      sym_comment,
      sym_marginalia,
  [1428] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(84), 2,
      sym_comment,
      sym_marginalia,
  [1442] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    STATE(85), 2,
      sym_comment,
      sym_marginalia,
  [1456] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(86), 2,
      sym_comment,
      sym_marginalia,
  [1470] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(87), 2,
      sym_comment,
      sym_marginalia,
  [1484] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym_keyword_exists,
    STATE(88), 2,
      sym_comment,
      sym_marginalia,
  [1498] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_comment,
      sym_marginalia,
  [1512] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_comment,
      sym_marginalia,
  [1526] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [1530] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 312,
  [SMALL_STATE(14)] = 335,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 381,
  [SMALL_STATE(17)] = 397,
  [SMALL_STATE(18)] = 415,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 449,
  [SMALL_STATE(21)] = 467,
  [SMALL_STATE(22)] = 483,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 523,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 575,
  [SMALL_STATE(28)] = 593,
  [SMALL_STATE(29)] = 609,
  [SMALL_STATE(30)] = 627,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 657,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 689,
  [SMALL_STATE(35)] = 704,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 734,
  [SMALL_STATE(38)] = 749,
  [SMALL_STATE(39)] = 766,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 813,
  [SMALL_STATE(43)] = 830,
  [SMALL_STATE(44)] = 845,
  [SMALL_STATE(45)] = 860,
  [SMALL_STATE(46)] = 875,
  [SMALL_STATE(47)] = 890,
  [SMALL_STATE(48)] = 907,
  [SMALL_STATE(49)] = 924,
  [SMALL_STATE(50)] = 939,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 969,
  [SMALL_STATE(53)] = 984,
  [SMALL_STATE(54)] = 1001,
  [SMALL_STATE(55)] = 1016,
  [SMALL_STATE(56)] = 1033,
  [SMALL_STATE(57)] = 1048,
  [SMALL_STATE(58)] = 1063,
  [SMALL_STATE(59)] = 1078,
  [SMALL_STATE(60)] = 1092,
  [SMALL_STATE(61)] = 1106,
  [SMALL_STATE(62)] = 1120,
  [SMALL_STATE(63)] = 1134,
  [SMALL_STATE(64)] = 1148,
  [SMALL_STATE(65)] = 1162,
  [SMALL_STATE(66)] = 1176,
  [SMALL_STATE(67)] = 1190,
  [SMALL_STATE(68)] = 1204,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1232,
  [SMALL_STATE(71)] = 1246,
  [SMALL_STATE(72)] = 1260,
  [SMALL_STATE(73)] = 1274,
  [SMALL_STATE(74)] = 1288,
  [SMALL_STATE(75)] = 1302,
  [SMALL_STATE(76)] = 1316,
  [SMALL_STATE(77)] = 1330,
  [SMALL_STATE(78)] = 1344,
  [SMALL_STATE(79)] = 1358,
  [SMALL_STATE(80)] = 1372,
  [SMALL_STATE(81)] = 1386,
  [SMALL_STATE(82)] = 1400,
  [SMALL_STATE(83)] = 1414,
  [SMALL_STATE(84)] = 1428,
  [SMALL_STATE(85)] = 1442,
  [SMALL_STATE(86)] = 1456,
  [SMALL_STATE(87)] = 1470,
  [SMALL_STATE(88)] = 1484,
  [SMALL_STATE(89)] = 1498,
  [SMALL_STATE(90)] = 1512,
  [SMALL_STATE(91)] = 1526,
  [SMALL_STATE(92)] = 1530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_char, 1), REDUCE(sym_keyword_varchar, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_char, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_varchar, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_numeric, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 6, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 6, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varchar, 4, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 4, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyword_time_zone, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 4, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__with_time_zone, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__without_time_zone, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_character, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamp, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_time, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_datetime, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_timestamptz, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 2, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginalia, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
