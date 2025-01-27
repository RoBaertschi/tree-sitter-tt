/**
 * @file tt
 * @author RoBaertschi
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tt",

  rules: {
    program: $ => $._declaration,
    _declaration: $ => choice($.function_declaration),
    function_declaration: $ => seq(
      "fn",
      field("name", $.identifier),
      "(",
      ")",
      "=",
      $._expression,
      ";",
    ),
    identifier: _ => /[a-zA-Z][a-zA-Z0-9]*/,
    _expression: $ => choice($.number, $.boolean, $.binary_expression, $.grouped_expression, $.block_expression),
    number: _ => /[0-9]+/,
    boolean: _ => choice("true", "false"),
    binary_expression: $ => choice(
      prec.left(1, seq($._expression, field("operator", "!="), $._expression)),
      prec.left(1, seq($._expression, field("operator", "=="), $._expression)),
      prec.left(1, seq($._expression, field("operator", "<"), $._expression)),
      prec.left(1, seq($._expression, field("operator", "<="), $._expression)),
      prec.left(1, seq($._expression, field("operator", ">"), $._expression)),
      prec.left(1, seq($._expression, field("operator", ">="), $._expression)),
      prec.left(2, seq($._expression, field("operator", "+"), $._expression)),
      prec.left(2, seq($._expression, field("operator", "-"), $._expression)),
      prec.left(3, seq($._expression, field("operator", "*"), $._expression)),
      prec.left(3, seq($._expression, field("operator", "/"), $._expression)),
    ),
    grouped_expression: $ => seq("(", $._expression, ")"),
    block_expression: $ => seq("{", repeat(seq($._expression, ";")), field("return_expression", optional($._expression)), "}"),
  }
});
