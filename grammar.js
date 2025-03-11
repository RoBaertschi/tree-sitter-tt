/**
 * @file tt
 * @author RoBaertschi
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PrecLowest = 0;
const PrecComparison = 1;
const PrecSum = 2;
const PrecProduct = 3;
const PrecAssignment = 4;

module.exports = grammar({
  name: "tt",
  extras: $ => [$.comment, /\s/],

  rules: {
    program: $ => repeat($._declaration),
    _declaration: $ => choice($.function_declaration),
    function_declaration: $ => seq(
      "fn",
      field("name", $.identifier),
      $.parameter_list,
      ":",
      field("return_type", $.type),
      "=",
      $._expression,
      ";",
    ),
    parameter: $ => seq(field("name", $.identifier), ":", field("type", $.identifier)),
    parameter_list: $ => seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), optional(","), ")"),
    identifier: _ => /[a-zA-Z][a-zA-Z0-9]*/,
    _expression: $ => choice($.number, $.boolean, $.binary_expression, $.grouped_expression, $.block_expression, $.if_expression, $.variable_reference, $.variable_declaration, $.assignment_expression, $.function_call),
    number: _ => /[0-9]+/,
    boolean: _ => choice("true", "false"),
    binary_expression: $ => choice(
      prec.left(PrecComparison, seq($._expression, field("operator", "!="), $._expression)),
      prec.left(PrecComparison, seq($._expression, field("operator", "=="), $._expression)),
      prec.left(PrecComparison, seq($._expression, field("operator", "<"), $._expression)),
      prec.left(PrecComparison, seq($._expression, field("operator", "<="), $._expression)),
      prec.left(PrecComparison, seq($._expression, field("operator", ">"), $._expression)),
      prec.left(PrecComparison, seq($._expression, field("operator", ">="), $._expression)),
      prec.left(PrecSum, seq($._expression, field("operator", "+"), $._expression)),
      prec.left(PrecSum, seq($._expression, field("operator", "-"), $._expression)),
      prec.left(PrecProduct, seq($._expression, field("operator", "*"), $._expression)),
      prec.left(PrecProduct, seq($._expression, field("operator", "/"), $._expression)),
    ),
    assignment_expression: $ => prec.left(PrecAssignment, seq(field("lhs", $._expression), "=", field("rhs", $._expression))),
    variable_reference: $ => $.identifier,
    variable_declaration: $ => seq(field("name", $.identifier), ":", field("type", optional($.type)), "=", field("initializing_expression", $._expression)),
    grouped_expression: $ => seq("(", $._expression, ")"),
    block_expression: $ => seq("{", repeat(seq($._expression, ";")), field("return_expression", optional($._expression)), "}"),
    if_expression: $ => prec.left(seq(
      "if",
      field("condition", $._expression),
      choice(seq("in", field("then", $._expression)), field("then", $.block_expression)),
      field("else", optional(seq("else", $._expression)))
    )),
    argument_list: $ => seq("(", optional(seq($._expression, repeat(seq(",", $._expression)))), optional(","), ")"),
    function_call: $ => seq(field("function_name", $.identifier), $.argument_list),
    comment: _ => token(seq("//", /[^\n]*/)),
    type: $ => $.identifier,
  }
});
