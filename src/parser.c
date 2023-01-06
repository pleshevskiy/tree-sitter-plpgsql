#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym__identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_DOT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  sym_keyword_create = 7,
  sym_keyword_table = 8,
  aux_sym_keyword_temporary_token1 = 9,
  aux_sym_keyword_temporary_token2 = 10,
  sym_keyword_unlogged = 11,
  sym_keyword_if = 12,
  sym_keyword_not = 13,
  sym_keyword_exists = 14,
  anon_sym_DASH_DASH = 15,
  aux_sym_comment_token1 = 16,
  anon_sym_SLASH_STAR = 17,
  aux_sym_marginalia_token1 = 18,
  anon_sym_SLASH = 19,
  anon_sym_DQUOTE = 20,
  sym_source_file = 21,
  sym_statement = 22,
  sym__ddl_statement = 23,
  sym__create_statement = 24,
  sym_create_table = 25,
  sym_table_reference = 26,
  sym_column_definitions = 27,
  sym_column_definition = 28,
  sym_keyword_temporary = 29,
  sym__if_not_exists = 30,
  sym_comment = 31,
  sym_marginalia = 32,
  sym_identifier = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_column_definitions_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_keyword_create] = "keyword_create",
  [sym_keyword_table] = "keyword_table",
  [aux_sym_keyword_temporary_token1] = "keyword_temporary_token1",
  [aux_sym_keyword_temporary_token2] = "keyword_temporary_token2",
  [sym_keyword_unlogged] = "keyword_unlogged",
  [sym_keyword_if] = "keyword_if",
  [sym_keyword_not] = "keyword_not",
  [sym_keyword_exists] = "keyword_exists",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_marginalia_token1] = "marginalia_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym__ddl_statement] = "_ddl_statement",
  [sym__create_statement] = "_create_statement",
  [sym_create_table] = "create_table",
  [sym_table_reference] = "table_reference",
  [sym_column_definitions] = "column_definitions",
  [sym_column_definition] = "column_definition",
  [sym_keyword_temporary] = "keyword_temporary",
  [sym__if_not_exists] = "_if_not_exists",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_keyword_create] = sym_keyword_create,
  [sym_keyword_table] = sym_keyword_table,
  [aux_sym_keyword_temporary_token1] = aux_sym_keyword_temporary_token1,
  [aux_sym_keyword_temporary_token2] = aux_sym_keyword_temporary_token2,
  [sym_keyword_unlogged] = sym_keyword_unlogged,
  [sym_keyword_if] = sym_keyword_if,
  [sym_keyword_not] = sym_keyword_not,
  [sym_keyword_exists] = sym_keyword_exists,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_marginalia_token1] = aux_sym_marginalia_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym__ddl_statement] = sym__ddl_statement,
  [sym__create_statement] = sym__create_statement,
  [sym_create_table] = sym_create_table,
  [sym_table_reference] = sym_table_reference,
  [sym_column_definitions] = sym_column_definitions,
  [sym_column_definition] = sym_column_definition,
  [sym_keyword_temporary] = sym_keyword_temporary,
  [sym__if_not_exists] = sym__if_not_exists,
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
  [anon_sym_DOT] = {
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
  [sym_table_reference] = {
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
  [sym_keyword_temporary] = {
    .visible = true,
    .named = true,
  },
  [sym__if_not_exists] = {
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
  field_name = 1,
  field_schema = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_schema] = "schema",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_schema, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
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
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
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
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 1:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'X') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'F') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_keyword_if);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keyword_not);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token2);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'G') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keyword_create);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keyword_exists);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keyword_unlogged);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_keyword_temporary_token1);
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
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
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
  [47] = {(TSStateId)(-1)},
  [48] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_marginalia] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_keyword_create] = ACTIONS(1),
    [sym_keyword_table] = ACTIONS(1),
    [aux_sym_keyword_temporary_token1] = ACTIONS(1),
    [aux_sym_keyword_temporary_token2] = ACTIONS(1),
    [sym_keyword_unlogged] = ACTIONS(1),
    [sym_keyword_if] = ACTIONS(1),
    [sym_keyword_not] = ACTIONS(1),
    [sym_keyword_exists] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_statement] = STATE(18),
    [sym__ddl_statement] = STATE(44),
    [sym__create_statement] = STATE(42),
    [sym_create_table] = STATE(41),
    [sym_comment] = STATE(1),
    [sym_marginalia] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_keyword_create] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      sym_keyword_create,
    STATE(18), 1,
      sym_statement,
    STATE(41), 1,
      sym_create_table,
    STATE(42), 1,
      sym__create_statement,
    STATE(44), 1,
      sym__ddl_statement,
    STATE(2), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_source_file_repeat1,
  [33] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      sym_keyword_create,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(18), 1,
      sym_statement,
    STATE(41), 1,
      sym_create_table,
    STATE(42), 1,
      sym__create_statement,
    STATE(44), 1,
      sym__ddl_statement,
    STATE(3), 2,
      sym_comment,
      sym_marginalia,
  [68] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_keyword_if,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym__if_not_exists,
    STATE(23), 1,
      sym_table_reference,
    STATE(25), 1,
      sym_identifier,
    STATE(4), 2,
      sym_comment,
      sym_marginalia,
  [97] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym__identifier,
    ACTIONS(25), 1,
      sym_keyword_if,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym__if_not_exists,
    STATE(24), 1,
      sym_table_reference,
    STATE(25), 1,
      sym_identifier,
    STATE(5), 2,
      sym_comment,
      sym_marginalia,
  [126] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym_keyword_table,
    ACTIONS(31), 1,
      aux_sym_keyword_temporary_token1,
    ACTIONS(33), 1,
      aux_sym_keyword_temporary_token2,
    ACTIONS(35), 1,
      sym_keyword_unlogged,
    STATE(35), 1,
      sym_keyword_temporary,
    STATE(6), 2,
      sym_comment,
      sym_marginalia,
  [152] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_column_definition,
    STATE(21), 1,
      sym_identifier,
    STATE(7), 2,
      sym_comment,
      sym_marginalia,
  [178] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(23), 1,
      sym_table_reference,
    STATE(25), 1,
      sym_identifier,
    STATE(8), 2,
      sym_comment,
      sym_marginalia,
  [201] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(41), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [218] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(22), 1,
      sym_table_reference,
    STATE(25), 1,
      sym_identifier,
    STATE(10), 2,
      sym_comment,
      sym_marginalia,
  [241] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
    STATE(26), 1,
      sym_column_definition,
    STATE(11), 2,
      sym_comment,
      sym_marginalia,
  [264] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(43), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [281] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_column_definitions_repeat1,
    STATE(13), 2,
      sym_comment,
      sym_marginalia,
  [301] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym_comment,
      sym_marginalia,
      aux_sym_column_definitions_repeat1,
  [319] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_column_definitions_repeat1,
    STATE(15), 2,
      sym_comment,
      sym_marginalia,
  [339] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [355] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(40), 1,
      sym_identifier,
    STATE(17), 2,
      sym_comment,
      sym_marginalia,
  [375] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [391] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_comment,
      sym_marginalia,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_keyword_create,
  [407] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 2,
      anon_sym_DQUOTE,
      sym__identifier,
    STATE(20), 2,
      sym_comment,
      sym_marginalia,
  [422] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(21), 2,
      sym_comment,
      sym_marginalia,
  [437] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_column_definitions,
    STATE(22), 2,
      sym_comment,
      sym_marginalia,
  [454] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_column_definitions,
    STATE(23), 2,
      sym_comment,
      sym_marginalia,
  [471] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_column_definitions,
    STATE(24), 2,
      sym_comment,
      sym_marginalia,
  [488] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(25), 2,
      sym_comment,
      sym_marginalia,
  [505] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_comment,
      sym_marginalia,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    STATE(27), 2,
      sym_comment,
      sym_marginalia,
  [534] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(28), 2,
      sym_comment,
      sym_marginalia,
  [548] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      sym_keyword_exists,
    STATE(29), 2,
      sym_comment,
      sym_marginalia,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    STATE(30), 2,
      sym_comment,
      sym_marginalia,
  [576] = 4,
    ACTIONS(80), 1,
      anon_sym_DASH_DASH,
    ACTIONS(82), 1,
      aux_sym_comment_token1,
    ACTIONS(84), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_comment,
      sym_marginalia,
  [590] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      sym__identifier,
    STATE(32), 2,
      sym_comment,
      sym_marginalia,
  [604] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      sym_keyword_not,
    STATE(33), 2,
      sym_comment,
      sym_marginalia,
  [618] = 4,
    ACTIONS(80), 1,
      anon_sym_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_marginalia_token1,
    STATE(34), 2,
      sym_comment,
      sym_marginalia,
  [632] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      sym_keyword_table,
    STATE(35), 2,
      sym_comment,
      sym_marginalia,
  [646] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      sym_keyword_table,
    STATE(36), 2,
      sym_comment,
      sym_marginalia,
  [660] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      anon_sym_SLASH,
    STATE(37), 2,
      sym_comment,
      sym_marginalia,
  [674] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(38), 2,
      sym_comment,
      sym_marginalia,
  [688] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(39), 2,
      sym_comment,
      sym_marginalia,
  [702] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_comment,
      sym_marginalia,
  [716] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    STATE(41), 2,
      sym_comment,
      sym_marginalia,
  [730] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    STATE(42), 2,
      sym_comment,
      sym_marginalia,
  [744] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(43), 2,
      sym_comment,
      sym_marginalia,
  [758] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(44), 2,
      sym_comment,
      sym_marginalia,
  [772] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    STATE(45), 2,
      sym_comment,
      sym_marginalia,
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(46), 2,
      sym_comment,
      sym_marginalia,
  [800] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [804] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 391,
  [SMALL_STATE(20)] = 407,
  [SMALL_STATE(21)] = 422,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 454,
  [SMALL_STATE(24)] = 471,
  [SMALL_STATE(25)] = 488,
  [SMALL_STATE(26)] = 505,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 562,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 632,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 660,
  [SMALL_STATE(38)] = 674,
  [SMALL_STATE(39)] = 688,
  [SMALL_STATE(40)] = 702,
  [SMALL_STATE(41)] = 716,
  [SMALL_STATE(42)] = 730,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 758,
  [SMALL_STATE(45)] = 772,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 800,
  [SMALL_STATE(48)] = 804,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_definitions_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_not_exists, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definition, 1, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_temporary, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_definitions, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__create_statement, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ddl_statement, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table, 6),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginalia, 3),
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
