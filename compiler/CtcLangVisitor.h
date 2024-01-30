
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CtcLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CtcLangParser.
 */
class  CtcLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CtcLangParser.
   */
    virtual std::any visitTranslationUnit(CtcLangParser::TranslationUnitContext *context) = 0;

    virtual std::any visitPrimaryExpression(CtcLangParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitIdExpression(CtcLangParser::IdExpressionContext *context) = 0;

    virtual std::any visitUnqualifiedId(CtcLangParser::UnqualifiedIdContext *context) = 0;

    virtual std::any visitQualifiedId(CtcLangParser::QualifiedIdContext *context) = 0;

    virtual std::any visitNestedNameSpecifier(CtcLangParser::NestedNameSpecifierContext *context) = 0;

    virtual std::any visitLambdaExpression(CtcLangParser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaIntroducer(CtcLangParser::LambdaIntroducerContext *context) = 0;

    virtual std::any visitLambdaCapture(CtcLangParser::LambdaCaptureContext *context) = 0;

    virtual std::any visitCaptureDefault(CtcLangParser::CaptureDefaultContext *context) = 0;

    virtual std::any visitCaptureList(CtcLangParser::CaptureListContext *context) = 0;

    virtual std::any visitCapture(CtcLangParser::CaptureContext *context) = 0;

    virtual std::any visitSimpleCapture(CtcLangParser::SimpleCaptureContext *context) = 0;

    virtual std::any visitInitcapture(CtcLangParser::InitcaptureContext *context) = 0;

    virtual std::any visitLambdaDeclarator(CtcLangParser::LambdaDeclaratorContext *context) = 0;

    virtual std::any visitPostfixExpression(CtcLangParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitTypeIdOfTheTypeId(CtcLangParser::TypeIdOfTheTypeIdContext *context) = 0;

    virtual std::any visitExpressionList(CtcLangParser::ExpressionListContext *context) = 0;

    virtual std::any visitPseudoDestructorName(CtcLangParser::PseudoDestructorNameContext *context) = 0;

    virtual std::any visitUnaryExpression(CtcLangParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitUnaryOperator(CtcLangParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitNewExpression_(CtcLangParser::NewExpression_Context *context) = 0;

    virtual std::any visitNewPlacement(CtcLangParser::NewPlacementContext *context) = 0;

    virtual std::any visitNewTypeId(CtcLangParser::NewTypeIdContext *context) = 0;

    virtual std::any visitNewDeclarator_(CtcLangParser::NewDeclarator_Context *context) = 0;

    virtual std::any visitNoPointerNewDeclarator(CtcLangParser::NoPointerNewDeclaratorContext *context) = 0;

    virtual std::any visitNewInitializer_(CtcLangParser::NewInitializer_Context *context) = 0;

    virtual std::any visitDeleteExpression(CtcLangParser::DeleteExpressionContext *context) = 0;

    virtual std::any visitNoExceptExpression(CtcLangParser::NoExceptExpressionContext *context) = 0;

    virtual std::any visitCastExpression(CtcLangParser::CastExpressionContext *context) = 0;

    virtual std::any visitPointerMemberExpression(CtcLangParser::PointerMemberExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(CtcLangParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(CtcLangParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(CtcLangParser::ShiftExpressionContext *context) = 0;

    virtual std::any visitShiftOperator(CtcLangParser::ShiftOperatorContext *context) = 0;

    virtual std::any visitRelationalExpression(CtcLangParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(CtcLangParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(CtcLangParser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(CtcLangParser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(CtcLangParser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(CtcLangParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(CtcLangParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(CtcLangParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(CtcLangParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAssignmentOperator(CtcLangParser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitExpression(CtcLangParser::ExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(CtcLangParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitStatement(CtcLangParser::StatementContext *context) = 0;

    virtual std::any visitLabeledStatement(CtcLangParser::LabeledStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(CtcLangParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(CtcLangParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementSeq(CtcLangParser::StatementSeqContext *context) = 0;

    virtual std::any visitSelectionStatement(CtcLangParser::SelectionStatementContext *context) = 0;

    virtual std::any visitCondition(CtcLangParser::ConditionContext *context) = 0;

    virtual std::any visitIterationStatement(CtcLangParser::IterationStatementContext *context) = 0;

    virtual std::any visitForInitStatement(CtcLangParser::ForInitStatementContext *context) = 0;

    virtual std::any visitForRangeDeclaration(CtcLangParser::ForRangeDeclarationContext *context) = 0;

    virtual std::any visitForRangeInitializer(CtcLangParser::ForRangeInitializerContext *context) = 0;

    virtual std::any visitJumpStatement(CtcLangParser::JumpStatementContext *context) = 0;

    virtual std::any visitDeclarationStatement(CtcLangParser::DeclarationStatementContext *context) = 0;

    virtual std::any visitDeclarationseq(CtcLangParser::DeclarationseqContext *context) = 0;

    virtual std::any visitDeclaration(CtcLangParser::DeclarationContext *context) = 0;

    virtual std::any visitBlockDeclaration(CtcLangParser::BlockDeclarationContext *context) = 0;

    virtual std::any visitAliasDeclaration(CtcLangParser::AliasDeclarationContext *context) = 0;

    virtual std::any visitSimpleDeclaration(CtcLangParser::SimpleDeclarationContext *context) = 0;

    virtual std::any visitStaticAssertDeclaration(CtcLangParser::StaticAssertDeclarationContext *context) = 0;

    virtual std::any visitEmptyDeclaration_(CtcLangParser::EmptyDeclaration_Context *context) = 0;

    virtual std::any visitAttributeDeclaration(CtcLangParser::AttributeDeclarationContext *context) = 0;

    virtual std::any visitDeclSpecifier(CtcLangParser::DeclSpecifierContext *context) = 0;

    virtual std::any visitDeclSpecifierSeq(CtcLangParser::DeclSpecifierSeqContext *context) = 0;

    virtual std::any visitStorageClassSpecifier(CtcLangParser::StorageClassSpecifierContext *context) = 0;

    virtual std::any visitFunctionSpecifier(CtcLangParser::FunctionSpecifierContext *context) = 0;

    virtual std::any visitTypedefName(CtcLangParser::TypedefNameContext *context) = 0;

    virtual std::any visitTypeSpecifier(CtcLangParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifier(CtcLangParser::TrailingTypeSpecifierContext *context) = 0;

    virtual std::any visitTypeSpecifierSeq(CtcLangParser::TypeSpecifierSeqContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifierSeq(CtcLangParser::TrailingTypeSpecifierSeqContext *context) = 0;

    virtual std::any visitSimpleTypeLengthModifier(CtcLangParser::SimpleTypeLengthModifierContext *context) = 0;

    virtual std::any visitSimpleTypeSignednessModifier(CtcLangParser::SimpleTypeSignednessModifierContext *context) = 0;

    virtual std::any visitSimpleTypeSpecifier(CtcLangParser::SimpleTypeSpecifierContext *context) = 0;

    virtual std::any visitTheTypeName(CtcLangParser::TheTypeNameContext *context) = 0;

    virtual std::any visitDecltypeSpecifier(CtcLangParser::DecltypeSpecifierContext *context) = 0;

    virtual std::any visitElaboratedTypeSpecifier(CtcLangParser::ElaboratedTypeSpecifierContext *context) = 0;

    virtual std::any visitEnumName(CtcLangParser::EnumNameContext *context) = 0;

    virtual std::any visitEnumSpecifier(CtcLangParser::EnumSpecifierContext *context) = 0;

    virtual std::any visitEnumHead(CtcLangParser::EnumHeadContext *context) = 0;

    virtual std::any visitOpaqueEnumDeclaration(CtcLangParser::OpaqueEnumDeclarationContext *context) = 0;

    virtual std::any visitEnumkey(CtcLangParser::EnumkeyContext *context) = 0;

    virtual std::any visitEnumbase(CtcLangParser::EnumbaseContext *context) = 0;

    virtual std::any visitEnumeratorList(CtcLangParser::EnumeratorListContext *context) = 0;

    virtual std::any visitEnumeratorDefinition(CtcLangParser::EnumeratorDefinitionContext *context) = 0;

    virtual std::any visitEnumerator(CtcLangParser::EnumeratorContext *context) = 0;

    virtual std::any visitNamespaceName(CtcLangParser::NamespaceNameContext *context) = 0;

    virtual std::any visitOriginalNamespaceName(CtcLangParser::OriginalNamespaceNameContext *context) = 0;

    virtual std::any visitNamespaceDefinition(CtcLangParser::NamespaceDefinitionContext *context) = 0;

    virtual std::any visitNamespaceAlias(CtcLangParser::NamespaceAliasContext *context) = 0;

    virtual std::any visitNamespaceAliasDefinition(CtcLangParser::NamespaceAliasDefinitionContext *context) = 0;

    virtual std::any visitQualifiednamespacespecifier(CtcLangParser::QualifiednamespacespecifierContext *context) = 0;

    virtual std::any visitUsingDeclaration(CtcLangParser::UsingDeclarationContext *context) = 0;

    virtual std::any visitUsingDirective(CtcLangParser::UsingDirectiveContext *context) = 0;

    virtual std::any visitAsmDefinition(CtcLangParser::AsmDefinitionContext *context) = 0;

    virtual std::any visitLinkageSpecification(CtcLangParser::LinkageSpecificationContext *context) = 0;

    virtual std::any visitAttributeSpecifierSeq(CtcLangParser::AttributeSpecifierSeqContext *context) = 0;

    virtual std::any visitAttributeSpecifier(CtcLangParser::AttributeSpecifierContext *context) = 0;

    virtual std::any visitAlignmentspecifier(CtcLangParser::AlignmentspecifierContext *context) = 0;

    virtual std::any visitAttributeList(CtcLangParser::AttributeListContext *context) = 0;

    virtual std::any visitAttribute(CtcLangParser::AttributeContext *context) = 0;

    virtual std::any visitAttributeNamespace(CtcLangParser::AttributeNamespaceContext *context) = 0;

    virtual std::any visitAttributeArgumentClause(CtcLangParser::AttributeArgumentClauseContext *context) = 0;

    virtual std::any visitBalancedTokenSeq(CtcLangParser::BalancedTokenSeqContext *context) = 0;

    virtual std::any visitBalancedtoken(CtcLangParser::BalancedtokenContext *context) = 0;

    virtual std::any visitInitDeclaratorList(CtcLangParser::InitDeclaratorListContext *context) = 0;

    virtual std::any visitInitDeclarator(CtcLangParser::InitDeclaratorContext *context) = 0;

    virtual std::any visitDeclarator(CtcLangParser::DeclaratorContext *context) = 0;

    virtual std::any visitPointerDeclarator(CtcLangParser::PointerDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerDeclarator(CtcLangParser::NoPointerDeclaratorContext *context) = 0;

    virtual std::any visitParametersAndQualifiers(CtcLangParser::ParametersAndQualifiersContext *context) = 0;

    virtual std::any visitTrailingReturnType(CtcLangParser::TrailingReturnTypeContext *context) = 0;

    virtual std::any visitPointerOperator(CtcLangParser::PointerOperatorContext *context) = 0;

    virtual std::any visitCvqualifierseq(CtcLangParser::CvqualifierseqContext *context) = 0;

    virtual std::any visitCvQualifier(CtcLangParser::CvQualifierContext *context) = 0;

    virtual std::any visitRefqualifier(CtcLangParser::RefqualifierContext *context) = 0;

    virtual std::any visitDeclaratorid(CtcLangParser::DeclaratoridContext *context) = 0;

    virtual std::any visitTheTypeId(CtcLangParser::TheTypeIdContext *context) = 0;

    virtual std::any visitAbstractDeclarator(CtcLangParser::AbstractDeclaratorContext *context) = 0;

    virtual std::any visitPointerAbstractDeclarator(CtcLangParser::PointerAbstractDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerAbstractDeclarator(CtcLangParser::NoPointerAbstractDeclaratorContext *context) = 0;

    virtual std::any visitAbstractPackDeclarator(CtcLangParser::AbstractPackDeclaratorContext *context) = 0;

    virtual std::any visitNoPointerAbstractPackDeclarator(CtcLangParser::NoPointerAbstractPackDeclaratorContext *context) = 0;

    virtual std::any visitParameterDeclarationClause(CtcLangParser::ParameterDeclarationClauseContext *context) = 0;

    virtual std::any visitParameterDeclarationList(CtcLangParser::ParameterDeclarationListContext *context) = 0;

    virtual std::any visitParameterDeclaration(CtcLangParser::ParameterDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(CtcLangParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionBody(CtcLangParser::FunctionBodyContext *context) = 0;

    virtual std::any visitInitializer(CtcLangParser::InitializerContext *context) = 0;

    virtual std::any visitBraceOrEqualInitializer(CtcLangParser::BraceOrEqualInitializerContext *context) = 0;

    virtual std::any visitInitializerClause(CtcLangParser::InitializerClauseContext *context) = 0;

    virtual std::any visitInitializerList(CtcLangParser::InitializerListContext *context) = 0;

    virtual std::any visitBracedInitList(CtcLangParser::BracedInitListContext *context) = 0;

    virtual std::any visitInterfaceHead(CtcLangParser::InterfaceHeadContext *context) = 0;

    virtual std::any visitInterfaceSpecifier(CtcLangParser::InterfaceSpecifierContext *context) = 0;

    virtual std::any visitInterfacefunctionDefinition(CtcLangParser::InterfacefunctionDefinitionContext *context) = 0;

    virtual std::any visitInterfaceMemberSpecification(CtcLangParser::InterfaceMemberSpecificationContext *context) = 0;

    virtual std::any visitRecordKey(CtcLangParser::RecordKeyContext *context) = 0;

    virtual std::any visitRecordHead(CtcLangParser::RecordHeadContext *context) = 0;

    virtual std::any visitRecordSpecifier(CtcLangParser::RecordSpecifierContext *context) = 0;

    virtual std::any visitRecordMemberSpecification(CtcLangParser::RecordMemberSpecificationContext *context) = 0;

    virtual std::any visitRecordMemberDeclaratorList(CtcLangParser::RecordMemberDeclaratorListContext *context) = 0;

    virtual std::any visitClassName(CtcLangParser::ClassNameContext *context) = 0;

    virtual std::any visitClassSpecifier(CtcLangParser::ClassSpecifierContext *context) = 0;

    virtual std::any visitClassHead(CtcLangParser::ClassHeadContext *context) = 0;

    virtual std::any visitClassHeadName(CtcLangParser::ClassHeadNameContext *context) = 0;

    virtual std::any visitClassVirtSpecifier(CtcLangParser::ClassVirtSpecifierContext *context) = 0;

    virtual std::any visitClassKey(CtcLangParser::ClassKeyContext *context) = 0;

    virtual std::any visitMemberSpecification(CtcLangParser::MemberSpecificationContext *context) = 0;

    virtual std::any visitMemberdeclaration(CtcLangParser::MemberdeclarationContext *context) = 0;

    virtual std::any visitMemberDeclaratorList(CtcLangParser::MemberDeclaratorListContext *context) = 0;

    virtual std::any visitMemberDeclarator(CtcLangParser::MemberDeclaratorContext *context) = 0;

    virtual std::any visitVirtualSpecifierSeq(CtcLangParser::VirtualSpecifierSeqContext *context) = 0;

    virtual std::any visitVirtualSpecifier(CtcLangParser::VirtualSpecifierContext *context) = 0;

    virtual std::any visitPureSpecifier(CtcLangParser::PureSpecifierContext *context) = 0;

    virtual std::any visitBaseClause(CtcLangParser::BaseClauseContext *context) = 0;

    virtual std::any visitBaseSpecifierList(CtcLangParser::BaseSpecifierListContext *context) = 0;

    virtual std::any visitBaseSpecifier(CtcLangParser::BaseSpecifierContext *context) = 0;

    virtual std::any visitClassOrDeclType(CtcLangParser::ClassOrDeclTypeContext *context) = 0;

    virtual std::any visitBaseTypeSpecifier(CtcLangParser::BaseTypeSpecifierContext *context) = 0;

    virtual std::any visitAccessSpecifier(CtcLangParser::AccessSpecifierContext *context) = 0;

    virtual std::any visitConversionFunctionId(CtcLangParser::ConversionFunctionIdContext *context) = 0;

    virtual std::any visitConversionTypeId(CtcLangParser::ConversionTypeIdContext *context) = 0;

    virtual std::any visitConversionDeclarator(CtcLangParser::ConversionDeclaratorContext *context) = 0;

    virtual std::any visitConstructorInitializer(CtcLangParser::ConstructorInitializerContext *context) = 0;

    virtual std::any visitMemInitializerList(CtcLangParser::MemInitializerListContext *context) = 0;

    virtual std::any visitMemInitializer(CtcLangParser::MemInitializerContext *context) = 0;

    virtual std::any visitMeminitializerid(CtcLangParser::MeminitializeridContext *context) = 0;

    virtual std::any visitOperatorFunctionId(CtcLangParser::OperatorFunctionIdContext *context) = 0;

    virtual std::any visitLiteralOperatorId(CtcLangParser::LiteralOperatorIdContext *context) = 0;

    virtual std::any visitTemplateDeclaration(CtcLangParser::TemplateDeclarationContext *context) = 0;

    virtual std::any visitTemplateparameterList(CtcLangParser::TemplateparameterListContext *context) = 0;

    virtual std::any visitTemplateParameter(CtcLangParser::TemplateParameterContext *context) = 0;

    virtual std::any visitTypeParameter(CtcLangParser::TypeParameterContext *context) = 0;

    virtual std::any visitSimpleTemplateId(CtcLangParser::SimpleTemplateIdContext *context) = 0;

    virtual std::any visitTemplateId(CtcLangParser::TemplateIdContext *context) = 0;

    virtual std::any visitTemplateName(CtcLangParser::TemplateNameContext *context) = 0;

    virtual std::any visitTemplateArgumentList(CtcLangParser::TemplateArgumentListContext *context) = 0;

    virtual std::any visitTemplateArgument(CtcLangParser::TemplateArgumentContext *context) = 0;

    virtual std::any visitTypeNameSpecifier(CtcLangParser::TypeNameSpecifierContext *context) = 0;

    virtual std::any visitExplicitInstantiation(CtcLangParser::ExplicitInstantiationContext *context) = 0;

    virtual std::any visitExplicitSpecialization(CtcLangParser::ExplicitSpecializationContext *context) = 0;

    virtual std::any visitTryBlock(CtcLangParser::TryBlockContext *context) = 0;

    virtual std::any visitFunctionTryBlock(CtcLangParser::FunctionTryBlockContext *context) = 0;

    virtual std::any visitHandlerSeq(CtcLangParser::HandlerSeqContext *context) = 0;

    virtual std::any visitHandler(CtcLangParser::HandlerContext *context) = 0;

    virtual std::any visitExceptionDeclaration(CtcLangParser::ExceptionDeclarationContext *context) = 0;

    virtual std::any visitThrowExpression(CtcLangParser::ThrowExpressionContext *context) = 0;

    virtual std::any visitExceptionSpecification(CtcLangParser::ExceptionSpecificationContext *context) = 0;

    virtual std::any visitDynamicExceptionSpecification(CtcLangParser::DynamicExceptionSpecificationContext *context) = 0;

    virtual std::any visitTypeIdList(CtcLangParser::TypeIdListContext *context) = 0;

    virtual std::any visitNoeExceptSpecification(CtcLangParser::NoeExceptSpecificationContext *context) = 0;

    virtual std::any visitTheOperator(CtcLangParser::TheOperatorContext *context) = 0;

    virtual std::any visitLiteral(CtcLangParser::LiteralContext *context) = 0;


};

