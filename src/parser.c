#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  sym_program = 18,
  sym__declaration = 19,
  sym_function_declaration = 20,
  sym__expression = 21,
  sym_boolean = 22,
  sym_binary_expression = 23,
  sym_grouped_expression = 24,
  sym_block_expression = 25,
  aux_sym_block_expression_repeat1 = 26,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_program] = "program",
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_grouped_expression] = "grouped_expression",
  [sym_block_expression] = "block_expression",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_program] = sym_program,
  [sym__declaration] = sym__declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_grouped_expression] = sym_grouped_expression,
  [sym_block_expression] = sym_block_expression,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_grouped_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_operator = 2,
  field_return_expression = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_operator] = "operator",
  [field_return_expression] = "return_expression",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_return_expression, 1},
  [2] =
    {field_operator, 1},
  [3] =
    {field_return_expression, 2},
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
        '{', 29,
        '}', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 2,
        ')', 15,
        '*', 25,
        '+', 23,
        '-', 24,
        '/', 26,
        ';', 18,
        '=', 3,
        '}', 30,
      );
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
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(25),
    [sym__declaration] = STATE(26),
    [sym_function_declaration] = STATE(26),
    [anon_sym_fn] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_number,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_expression_repeat1,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [27] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [54] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      sym_number,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_expression_repeat1,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [81] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [102] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [123] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [144] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [165] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 5,
      sym__expression,
      sym_boolean,
      sym_binary_expression,
      sym_grouped_expression,
      sym_block_expression,
  [186] = 1,
    ACTIONS(43), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [198] = 1,
    ACTIONS(45), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [210] = 1,
    ACTIONS(47), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [222] = 1,
    ACTIONS(49), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [234] = 1,
    ACTIONS(51), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [246] = 3,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(53), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACE,
  [262] = 2,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(53), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [276] = 1,
    ACTIONS(53), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [288] = 1,
    ACTIONS(59), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
  [300] = 5,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [319] = 5,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [338] = 4,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [354] = 4,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [370] = 4,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [386] = 1,
    ACTIONS(31), 6,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [395] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [399] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [403] = 1,
    ACTIONS(77), 1,
      sym_identifier,
  [407] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [411] = 1,
    ACTIONS(81), 1,
      anon_sym_EQ,
  [415] = 1,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
  [419] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 399,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 419,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 4, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 1),
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
