
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once

#include "CtcLangVisitor.h"
#include "antlr4-runtime.h"

/**
 * This class provides an empty implementation of CtcLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class CtcLangBaseVisitor : public CtcLangVisitor
{
  public:
    virtual std::any visitTranslationUnit(CtcLangParser::TranslationUnitContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryExpression(CtcLangParser::PrimaryExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIdExpression(CtcLangParser::IdExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnqualifiedId(CtcLangParser::UnqualifiedIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitQualifiedId(CtcLangParser::QualifiedIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNestedNameSpecifier(
        CtcLangParser::NestedNameSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaExpression(CtcLangParser::LambdaExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaIntroducer(CtcLangParser::LambdaIntroducerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaCapture(CtcLangParser::LambdaCaptureContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCaptureDefault(CtcLangParser::CaptureDefaultContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCaptureList(CtcLangParser::CaptureListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCapture(CtcLangParser::CaptureContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleCapture(CtcLangParser::SimpleCaptureContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitcapture(CtcLangParser::InitcaptureContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaDeclarator(CtcLangParser::LambdaDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostfixExpression(CtcLangParser::PostfixExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeIdOfTheTypeId(CtcLangParser::TypeIdOfTheTypeIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpressionList(CtcLangParser::ExpressionListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPseudoDestructorName(
        CtcLangParser::PseudoDestructorNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnaryExpression(CtcLangParser::UnaryExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnaryOperator(CtcLangParser::UnaryOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNewExpression_(CtcLangParser::NewExpression_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNewPlacement(CtcLangParser::NewPlacementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNewTypeId(CtcLangParser::NewTypeIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNewDeclarator_(CtcLangParser::NewDeclarator_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoPointerNewDeclarator(
        CtcLangParser::NoPointerNewDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNewInitializer_(CtcLangParser::NewInitializer_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeleteExpression(CtcLangParser::DeleteExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoExceptExpression(CtcLangParser::NoExceptExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCastExpression(CtcLangParser::CastExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPointerMemberExpression(
        CtcLangParser::PointerMemberExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMultiplicativeExpression(
        CtcLangParser::MultiplicativeExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAdditiveExpression(CtcLangParser::AdditiveExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitShiftExpression(CtcLangParser::ShiftExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitShiftOperator(CtcLangParser::ShiftOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRelationalExpression(
        CtcLangParser::RelationalExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEqualityExpression(CtcLangParser::EqualityExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAndExpression(CtcLangParser::AndExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExclusiveOrExpression(
        CtcLangParser::ExclusiveOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInclusiveOrExpression(
        CtcLangParser::InclusiveOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLogicalAndExpression(
        CtcLangParser::LogicalAndExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLogicalOrExpression(
        CtcLangParser::LogicalOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConditionalExpression(
        CtcLangParser::ConditionalExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignmentExpression(
        CtcLangParser::AssignmentExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignmentOperator(CtcLangParser::AssignmentOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpression(CtcLangParser::ExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstantExpression(CtcLangParser::ConstantExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatement(CtcLangParser::StatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLabeledStatement(CtcLangParser::LabeledStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpressionStatement(
        CtcLangParser::ExpressionStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCompoundStatement(CtcLangParser::CompoundStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatementSeq(CtcLangParser::StatementSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSelectionStatement(CtcLangParser::SelectionStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCondition(CtcLangParser::ConditionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIterationStatement(CtcLangParser::IterationStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForInitStatement(CtcLangParser::ForInitStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForRangeDeclaration(
        CtcLangParser::ForRangeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForRangeInitializer(
        CtcLangParser::ForRangeInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitJumpStatement(CtcLangParser::JumpStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclarationStatement(
        CtcLangParser::DeclarationStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclarationseq(CtcLangParser::DeclarationseqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclaration(CtcLangParser::DeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlockDeclaration(CtcLangParser::BlockDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAliasDeclaration(CtcLangParser::AliasDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleDeclaration(CtcLangParser::SimpleDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStaticAssertDeclaration(
        CtcLangParser::StaticAssertDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEmptyDeclaration_(CtcLangParser::EmptyDeclaration_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeDeclaration(
        CtcLangParser::AttributeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclSpecifier(CtcLangParser::DeclSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclSpecifierSeq(CtcLangParser::DeclSpecifierSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStorageClassSpecifier(
        CtcLangParser::StorageClassSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFunctionSpecifier(CtcLangParser::FunctionSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypedefName(CtcLangParser::TypedefNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeSpecifier(CtcLangParser::TypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTrailingTypeSpecifier(
        CtcLangParser::TrailingTypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeSpecifierSeq(CtcLangParser::TypeSpecifierSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTrailingTypeSpecifierSeq(
        CtcLangParser::TrailingTypeSpecifierSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleTypeLengthModifier(
        CtcLangParser::SimpleTypeLengthModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleTypeSignednessModifier(
        CtcLangParser::SimpleTypeSignednessModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleTypeSpecifier(
        CtcLangParser::SimpleTypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTheTypeName(CtcLangParser::TheTypeNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDecltypeSpecifier(CtcLangParser::DecltypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElaboratedTypeSpecifier(
        CtcLangParser::ElaboratedTypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumName(CtcLangParser::EnumNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumSpecifier(CtcLangParser::EnumSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumHead(CtcLangParser::EnumHeadContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitOpaqueEnumDeclaration(
        CtcLangParser::OpaqueEnumDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumkey(CtcLangParser::EnumkeyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumbase(CtcLangParser::EnumbaseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumeratorList(CtcLangParser::EnumeratorListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumeratorDefinition(
        CtcLangParser::EnumeratorDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumerator(CtcLangParser::EnumeratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNamespaceName(CtcLangParser::NamespaceNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitOriginalNamespaceName(
        CtcLangParser::OriginalNamespaceNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNamespaceDefinition(
        CtcLangParser::NamespaceDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNamespaceAlias(CtcLangParser::NamespaceAliasContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNamespaceAliasDefinition(
        CtcLangParser::NamespaceAliasDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitQualifiednamespacespecifier(
        CtcLangParser::QualifiednamespacespecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUsingDeclaration(CtcLangParser::UsingDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUsingDirective(CtcLangParser::UsingDirectiveContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAsmDefinition(CtcLangParser::AsmDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLinkageSpecification(
        CtcLangParser::LinkageSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeSpecifierSeq(
        CtcLangParser::AttributeSpecifierSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeSpecifier(CtcLangParser::AttributeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAlignmentspecifier(CtcLangParser::AlignmentspecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeList(CtcLangParser::AttributeListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttribute(CtcLangParser::AttributeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeNamespace(CtcLangParser::AttributeNamespaceContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAttributeArgumentClause(
        CtcLangParser::AttributeArgumentClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBalancedTokenSeq(CtcLangParser::BalancedTokenSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBalancedtoken(CtcLangParser::BalancedtokenContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitDeclaratorList(CtcLangParser::InitDeclaratorListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitDeclarator(CtcLangParser::InitDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclarator(CtcLangParser::DeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPointerDeclarator(CtcLangParser::PointerDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoPointerDeclarator(
        CtcLangParser::NoPointerDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitParametersAndQualifiers(
        CtcLangParser::ParametersAndQualifiersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTrailingReturnType(CtcLangParser::TrailingReturnTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPointerOperator(CtcLangParser::PointerOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCvqualifierseq(CtcLangParser::CvqualifierseqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCvQualifier(CtcLangParser::CvQualifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRefqualifier(CtcLangParser::RefqualifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDeclaratorid(CtcLangParser::DeclaratoridContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTheTypeId(CtcLangParser::TheTypeIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAbstractDeclarator(CtcLangParser::AbstractDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPointerAbstractDeclarator(
        CtcLangParser::PointerAbstractDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoPointerAbstractDeclarator(
        CtcLangParser::NoPointerAbstractDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAbstractPackDeclarator(
        CtcLangParser::AbstractPackDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoPointerAbstractPackDeclarator(
        CtcLangParser::NoPointerAbstractPackDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitParameterDeclarationClause(
        CtcLangParser::ParameterDeclarationClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitParameterDeclarationList(
        CtcLangParser::ParameterDeclarationListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitParameterDeclaration(
        CtcLangParser::ParameterDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFunctionDefinition(CtcLangParser::FunctionDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFunctionBody(CtcLangParser::FunctionBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitializer(CtcLangParser::InitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBraceOrEqualInitializer(
        CtcLangParser::BraceOrEqualInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitializerClause(CtcLangParser::InitializerClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInitializerList(CtcLangParser::InitializerListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBracedInitList(CtcLangParser::BracedInitListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceHead(CtcLangParser::InterfaceHeadContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceSpecifier(CtcLangParser::InterfaceSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfacefunctionDefinition(
        CtcLangParser::InterfacefunctionDefinitionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMemberSpecification(
        CtcLangParser::InterfaceMemberSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordKey(CtcLangParser::RecordKeyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordHead(CtcLangParser::RecordHeadContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordSpecifier(CtcLangParser::RecordSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordMemberSpecification(
        CtcLangParser::RecordMemberSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordMemberDeclaratorList(
        CtcLangParser::RecordMemberDeclaratorListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassName(CtcLangParser::ClassNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassSpecifier(CtcLangParser::ClassSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassHead(CtcLangParser::ClassHeadContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassHeadName(CtcLangParser::ClassHeadNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassVirtSpecifier(CtcLangParser::ClassVirtSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassKey(CtcLangParser::ClassKeyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemberSpecification(
        CtcLangParser::MemberSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemberdeclaration(CtcLangParser::MemberdeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemberDeclaratorList(
        CtcLangParser::MemberDeclaratorListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemberDeclarator(CtcLangParser::MemberDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVirtualSpecifierSeq(
        CtcLangParser::VirtualSpecifierSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVirtualSpecifier(CtcLangParser::VirtualSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPureSpecifier(CtcLangParser::PureSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBaseClause(CtcLangParser::BaseClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBaseSpecifierList(CtcLangParser::BaseSpecifierListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBaseSpecifier(CtcLangParser::BaseSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassOrDeclType(CtcLangParser::ClassOrDeclTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBaseTypeSpecifier(CtcLangParser::BaseTypeSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAccessSpecifier(CtcLangParser::AccessSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConversionFunctionId(
        CtcLangParser::ConversionFunctionIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConversionTypeId(CtcLangParser::ConversionTypeIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConversionDeclarator(
        CtcLangParser::ConversionDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorInitializer(
        CtcLangParser::ConstructorInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemInitializerList(CtcLangParser::MemInitializerListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemInitializer(CtcLangParser::MemInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMeminitializerid(CtcLangParser::MeminitializeridContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitOperatorFunctionId(CtcLangParser::OperatorFunctionIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLiteralOperatorId(CtcLangParser::LiteralOperatorIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateDeclaration(
        CtcLangParser::TemplateDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateparameterList(
        CtcLangParser::TemplateparameterListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateParameter(CtcLangParser::TemplateParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameter(CtcLangParser::TypeParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleTemplateId(CtcLangParser::SimpleTemplateIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateId(CtcLangParser::TemplateIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateName(CtcLangParser::TemplateNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateArgumentList(
        CtcLangParser::TemplateArgumentListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTemplateArgument(CtcLangParser::TemplateArgumentContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeNameSpecifier(CtcLangParser::TypeNameSpecifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExplicitInstantiation(
        CtcLangParser::ExplicitInstantiationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExplicitSpecialization(
        CtcLangParser::ExplicitSpecializationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTryBlock(CtcLangParser::TryBlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFunctionTryBlock(CtcLangParser::FunctionTryBlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitHandlerSeq(CtcLangParser::HandlerSeqContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitHandler(CtcLangParser::HandlerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExceptionDeclaration(
        CtcLangParser::ExceptionDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitThrowExpression(CtcLangParser::ThrowExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExceptionSpecification(
        CtcLangParser::ExceptionSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDynamicExceptionSpecification(
        CtcLangParser::DynamicExceptionSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeIdList(CtcLangParser::TypeIdListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNoeExceptSpecification(
        CtcLangParser::NoeExceptSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTheOperator(CtcLangParser::TheOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLiteral(CtcLangParser::LiteralContext *ctx) override
    {
        return visitChildren(ctx);
    }
};
