
// Generated from ctc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ctcVisitor.h"


/**
 * This class provides an empty implementation of ctcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ctcBaseVisitor : public ctcVisitor {
public:

  virtual std::any visitMain(ctcParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ctcParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_modifier(ctcParser::Access_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterface_element(ctcParser::Interface_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterface_body(ctcParser::Interface_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterface_decl(ctcParser::Interface_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_modifier(ctcParser::Enum_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_body(ctcParser::Enum_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_decl(ctcParser::Enum_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsing_decl(ctcParser::Using_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespace_decl(ctcParser::Namespace_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFn_specifier(ctcParser::Fn_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFn_decl(ctcParser::Fn_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_argument(ctcParser::Type_argumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_argument_list(ctcParser::Type_argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentExpressionList(ctcParser::ArgumentExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse_decl(ctcParser::Use_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompile_if_predicate(ctcParser::Compile_if_predicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCctp_decl(ctcParser::Cctp_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorage_specifier(ctcParser::Storage_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl_specifier(ctcParser::Var_decl_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda_body(ctcParser::Lambda_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda_capture_modifier(ctcParser::Lambda_capture_modifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda_capture_by(ctcParser::Lambda_capture_byContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda_expression(ctcParser::Lambda_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(ctcParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_expression(ctcParser::Primary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(ctcParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(ctcParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(ctcParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(ctcParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(ctcParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(ctcParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(ctcParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(ctcParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(ctcParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(ctcParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional_expression(ctcParser::Conditional_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_literal(ctcParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_operator(ctcParser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_expression(ctcParser::Postfix_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(ctcParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast_expression(ctcParser::Cast_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_expression(ctcParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_expression(ctcParser::Assignment_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ctcParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ctcParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCv_specifier(ctcParser::Cv_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier_specifier(ctcParser::Identifier_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsigned_specifier(ctcParser::Unsigned_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_specifier(ctcParser::Type_specifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(ctcParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_decl(ctcParser::Var_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(ctcParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }


};
