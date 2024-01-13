
// Generated from ctc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ctcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ctcParser.
 */
class  ctcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ctcParser.
   */
    virtual std::any visitMain(ctcParser::MainContext *context) = 0;

    virtual std::any visitStatement(ctcParser::StatementContext *context) = 0;

    virtual std::any visitAsm_body(ctcParser::Asm_bodyContext *context) = 0;

    virtual std::any visitAsm_def(ctcParser::Asm_defContext *context) = 0;

    virtual std::any visitClass_field_def(ctcParser::Class_field_defContext *context) = 0;

    virtual std::any visitClass_method_def(ctcParser::Class_method_defContext *context) = 0;

    virtual std::any visitClass_body(ctcParser::Class_bodyContext *context) = 0;

    virtual std::any visitClass_implement(ctcParser::Class_implementContext *context) = 0;

    virtual std::any visitClass_qualifier(ctcParser::Class_qualifierContext *context) = 0;

    virtual std::any visitClass_decl(ctcParser::Class_declContext *context) = 0;

    virtual std::any visitControl_flow_stmt(ctcParser::Control_flow_stmtContext *context) = 0;

    virtual std::any visitSwitch_case(ctcParser::Switch_caseContext *context) = 0;

    virtual std::any visitSwitch_body(ctcParser::Switch_bodyContext *context) = 0;

    virtual std::any visitSwitch_stmt(ctcParser::Switch_stmtContext *context) = 0;

    virtual std::any visitIf_stmt(ctcParser::If_stmtContext *context) = 0;

    virtual std::any visitDo_while_stmt(ctcParser::Do_while_stmtContext *context) = 0;

    virtual std::any visitWhile_stmt(ctcParser::While_stmtContext *context) = 0;

    virtual std::any visitForCondition(ctcParser::ForConditionContext *context) = 0;

    virtual std::any visitDeclarationSpecifiers(ctcParser::DeclarationSpecifiersContext *context) = 0;

    virtual std::any visitInitDeclaratorList(ctcParser::InitDeclaratorListContext *context) = 0;

    virtual std::any visitInitDeclarator(ctcParser::InitDeclaratorContext *context) = 0;

    virtual std::any visitInitializer(ctcParser::InitializerContext *context) = 0;

    virtual std::any visitInitializerList(ctcParser::InitializerListContext *context) = 0;

    virtual std::any visitDesignation(ctcParser::DesignationContext *context) = 0;

    virtual std::any visitDesignatorList(ctcParser::DesignatorListContext *context) = 0;

    virtual std::any visitDesignator(ctcParser::DesignatorContext *context) = 0;

    virtual std::any visitDeclarator(ctcParser::DeclaratorContext *context) = 0;

    virtual std::any visitConstantExpression(ctcParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitDeclarationSpecifier(ctcParser::DeclarationSpecifierContext *context) = 0;

    virtual std::any visitForDeclaration(ctcParser::ForDeclarationContext *context) = 0;

    virtual std::any visitForExpression(ctcParser::ForExpressionContext *context) = 0;

    virtual std::any visitFor_stmt(ctcParser::For_stmtContext *context) = 0;

    virtual std::any visitAccess_modifier(ctcParser::Access_modifierContext *context) = 0;

    virtual std::any visitInterface_element(ctcParser::Interface_elementContext *context) = 0;

    virtual std::any visitInterface_body(ctcParser::Interface_bodyContext *context) = 0;

    virtual std::any visitInterface_decl(ctcParser::Interface_declContext *context) = 0;

    virtual std::any visitEnum_modifier(ctcParser::Enum_modifierContext *context) = 0;

    virtual std::any visitEnum_body(ctcParser::Enum_bodyContext *context) = 0;

    virtual std::any visitEnum_decl(ctcParser::Enum_declContext *context) = 0;

    virtual std::any visitUsing_decl(ctcParser::Using_declContext *context) = 0;

    virtual std::any visitNamespace_decl(ctcParser::Namespace_declContext *context) = 0;

    virtual std::any visitFn_specifier(ctcParser::Fn_specifierContext *context) = 0;

    virtual std::any visitFn_decl(ctcParser::Fn_declContext *context) = 0;

    virtual std::any visitType_argument(ctcParser::Type_argumentContext *context) = 0;

    virtual std::any visitType_argument_list(ctcParser::Type_argument_listContext *context) = 0;

    virtual std::any visitArgumentExpressionList(ctcParser::ArgumentExpressionListContext *context) = 0;

    virtual std::any visitUse_decl(ctcParser::Use_declContext *context) = 0;

    virtual std::any visitCompile_if_predicate(ctcParser::Compile_if_predicateContext *context) = 0;

    virtual std::any visitCctp_decl(ctcParser::Cctp_declContext *context) = 0;

    virtual std::any visitStorage_specifier(ctcParser::Storage_specifierContext *context) = 0;

    virtual std::any visitVar_decl_specifier(ctcParser::Var_decl_specifierContext *context) = 0;

    virtual std::any visitLambda_body(ctcParser::Lambda_bodyContext *context) = 0;

    virtual std::any visitLambda_capture_modifier(ctcParser::Lambda_capture_modifierContext *context) = 0;

    virtual std::any visitLambda_capture_by(ctcParser::Lambda_capture_byContext *context) = 0;

    virtual std::any visitLambda_expression(ctcParser::Lambda_expressionContext *context) = 0;

    virtual std::any visitConstant(ctcParser::ConstantContext *context) = 0;

    virtual std::any visitPrimary_expression(ctcParser::Primary_expressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(ctcParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(ctcParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(ctcParser::ShiftExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(ctcParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(ctcParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(ctcParser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(ctcParser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(ctcParser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(ctcParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(ctcParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitConditional_expression(ctcParser::Conditional_expressionContext *context) = 0;

    virtual std::any visitString_literal(ctcParser::String_literalContext *context) = 0;

    virtual std::any visitAssignment_operator(ctcParser::Assignment_operatorContext *context) = 0;

    virtual std::any visitPostfix_expression(ctcParser::Postfix_expressionContext *context) = 0;

    virtual std::any visitUnaryOperator(ctcParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitCast_expression(ctcParser::Cast_expressionContext *context) = 0;

    virtual std::any visitUnary_expression(ctcParser::Unary_expressionContext *context) = 0;

    virtual std::any visitAssignment_expression(ctcParser::Assignment_expressionContext *context) = 0;

    virtual std::any visitExpression(ctcParser::ExpressionContext *context) = 0;

    virtual std::any visitType(ctcParser::TypeContext *context) = 0;

    virtual std::any visitIdentifier_specifier(ctcParser::Identifier_specifierContext *context) = 0;

    virtual std::any visitUnsigned_specifier(ctcParser::Unsigned_specifierContext *context) = 0;

    virtual std::any visitType_qualifier(ctcParser::Type_qualifierContext *context) = 0;

    virtual std::any visitTypeQualifierList(ctcParser::TypeQualifierListContext *context) = 0;

    virtual std::any visitPointer(ctcParser::PointerContext *context) = 0;

    virtual std::any visitSpecifierQualifierList(ctcParser::SpecifierQualifierListContext *context) = 0;

    virtual std::any visitRefqualifier(ctcParser::RefqualifierContext *context) = 0;

    virtual std::any visitAbstractDeclarator(ctcParser::AbstractDeclaratorContext *context) = 0;

    virtual std::any visitType_specifier(ctcParser::Type_specifierContext *context) = 0;

    virtual std::any visitVar_decl(ctcParser::Var_declContext *context) = 0;

    virtual std::any visitVdeclarator(ctcParser::VdeclaratorContext *context) = 0;


};

