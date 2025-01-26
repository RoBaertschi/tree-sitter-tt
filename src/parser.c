#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  sym_identifier = 6,
  sym_number = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_EQ_EQ = 15,
  sym_program = 16,
  sym__declaration = 17,
  sym_function_declaration = 18,
  sym__expression = 19,
  sym_boolean = 20,
  sym_binary_expression = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [sym_program] = "program",
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_program] = sym_program,
  [sym__declaration] = sym__declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_operator = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operator, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '!', 2,
        '(', 14,
        ')', 15,
        '*', 25,
        '+', 23,
        '-', 24,
        '/', 26,
        ';', 18,
        '=', 17,
        'f', 5,
        't', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__declaration] = STATE(13),
    [sym_function_declaration] = STATE(13),
    [anon_sym_fn] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 7,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
  [10] = 4,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(13), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
  [26] = 3,
    ACTIONS(11), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(13), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(15), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
  [40] = 2,
    ACTIONS(13), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(15), 5,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [52] = 1,
    ACTIONS(15), 7,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
  [62] = 3,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 3,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
  [75] = 3,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 3,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
  [88] = 3,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 3,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
  [101] = 3,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
  [114] = 1,
    ACTIONS(27), 1,
      sym_identifier,
  [118] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [122] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [126] = 1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
  [130] = 1,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
  [134] = 1,
    ACTIONS(37), 1,
      anon_sym_EQ,
  [138] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 126,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 134,
  [SMALL_STATE(17)] = 138,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tt(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
