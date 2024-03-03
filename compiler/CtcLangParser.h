
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CtcLangParser : public antlr4::Parser {
public:
  enum {
    IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4, 
    BooleanLiteral = 5, PointerLiteral = 6, UserDefinedLiteral = 7, MultiLineMacro = 8, 
    Directive = 9, Alignas = 10, Alignof = 11, AsmMSVC = 12, Asm = 13, Auto = 14, 
    Bool = 15, Break = 16, Case = 17, Catch = 18, Char = 19, Char16 = 20, 
    Char32 = 21, Class = 22, Const = 23, Constexpr = 24, Const_cast = 25, 
    Bit_cast = 26, Continue = 27, Decltype = 28, Default = 29, Delete = 30, 
    Do = 31, Double = 32, Dynamic_cast = 33, Else = 34, Enum = 35, Explicit = 36, 
    Export = 37, Extern = 38, Internal = 39, False_ = 40, Final = 41, Float = 42, 
    For = 43, Goto = 44, If = 45, Inline = 46, Int = 47, Long = 48, Mutable = 49, 
    Namespace = 50, New = 51, Noexcept = 52, Nullptr = 53, Operator = 54, 
    Override = 55, Private = 56, Protected = 57, Public = 58, Interface = 59, 
    Reinterpret_cast = 60, Return = 61, Short = 62, Signed = 63, Sizeof = 64, 
    Static = 65, Static_assert = 66, Static_cast = 67, Record = 68, Struct = 69, 
    Switch = 70, Template = 71, This = 72, Thread_local = 73, Throw = 74, 
    True_ = 75, Try = 76, Typeid_ = 77, Typename_ = 78, Unsigned = 79, Using = 80, 
    Module = 81, Virtual = 82, Void = 83, Volatile = 84, Wchar = 85, While = 86, 
    LeftParen = 87, RightParen = 88, LeftBracket = 89, RightBracket = 90, 
    LeftBrace = 91, RightBrace = 92, Plus = 93, Minus = 94, Star = 95, Div = 96, 
    Mod = 97, Pipe = 98, Caret = 99, And = 100, Or = 101, Tilde = 102, Not = 103, 
    Assign = 104, Less = 105, Greater = 106, PlusAssign = 107, MinusAssign = 108, 
    StarAssign = 109, DivAssign = 110, ModAssign = 111, XorAssign = 112, 
    AndAssign = 113, OrAssign = 114, LeftShiftAssign = 115, RightShiftAssign = 116, 
    Equal = 117, NotEqual = 118, LessEqual = 119, GreaterEqual = 120, AndAnd = 121, 
    OrOr = 122, PlusPlus = 123, MinusMinus = 124, Comma = 125, ArrowStar = 126, 
    Arrow = 127, Question = 128, Colon = 129, Doublecolon = 130, Semi = 131, 
    Dot = 132, DotStar = 133, Ellipsis = 134, Identifier = 135, DecimalLiteral = 136, 
    OctalLiteral = 137, HexadecimalLiteral = 138, BinaryLiteral = 139, Integersuffix = 140, 
    UserDefinedIntegerLiteral = 141, UserDefinedFloatingLiteral = 142, UserDefinedStringLiteral = 143, 
    UserDefinedCharacterLiteral = 144, Whitespace = 145, Newline = 146, 
    BlockComment = 147, LineComment = 148
  };

  enum {
    RuleTranslationUnit = 0, RulePrimaryExpression = 1, RuleIdExpression = 2, 
    RuleUnqualifiedId = 3, RuleQualifiedId = 4, RuleNestedNameSpecifier = 5, 
    RuleLambdaExpression = 6, RuleLambdaIntroducer = 7, RuleLambdaCapture = 8, 
    RuleCaptureDefault = 9, RuleCaptureList = 10, RuleCapture = 11, RuleSimpleCapture = 12, 
    RuleInitcapture = 13, RuleLambdaDeclarator = 14, RulePostfixExpression = 15, 
    RuleTypeIdOfTheTypeId = 16, RuleExpressionList = 17, RulePseudoDestructorName = 18, 
    RuleUnaryExpression = 19, RuleUnaryOperator = 20, RuleNewExpression_ = 21, 
    RuleNewPlacement = 22, RuleNewTypeId = 23, RuleNewDeclarator_ = 24, 
    RuleNoPointerNewDeclarator = 25, RuleNewInitializer_ = 26, RuleDeleteExpression = 27, 
    RuleNoExceptExpression = 28, RuleCastExpression = 29, RulePointerMemberExpression = 30, 
    RuleMultiplicativeExpression = 31, RuleAdditiveExpression = 32, RuleShiftExpression = 33, 
    RuleShiftOperator = 34, RuleRelationalExpression = 35, RuleEqualityExpression = 36, 
    RuleAndExpression = 37, RuleExclusiveOrExpression = 38, RuleInclusiveOrExpression = 39, 
    RuleLogicalAndExpression = 40, RuleLogicalOrExpression = 41, RuleConditionalExpression = 42, 
    RuleAssignmentExpression = 43, RuleAssignmentOperator = 44, RuleExpression = 45, 
    RuleConstantExpression = 46, RuleStatement = 47, RuleLabeledStatement = 48, 
    RuleExpressionStatement = 49, RuleCompoundStatement = 50, RuleStatementSeq = 51, 
    RuleSelectionStatement = 52, RuleCondition = 53, RuleIterationStatement = 54, 
    RuleForInitStatement = 55, RuleForRangeDeclaration = 56, RuleForRangeInitializer = 57, 
    RuleJumpStatement = 58, RuleDeclarationStatement = 59, RuleDeclarationseq = 60, 
    RuleDeclaration = 61, RuleBlockDeclaration = 62, RuleModuleDefinition = 63, 
    RuleAliasDeclaration = 64, RuleSimpleDeclaration = 65, RuleStaticAssertDeclaration = 66, 
    RuleEmptyDeclaration_ = 67, RuleAttributeDeclaration = 68, RuleDeclSpecifier = 69, 
    RuleDeclSpecifierSeq = 70, RuleStorageClassSpecifier = 71, RuleFunctionSpecifier = 72, 
    RuleTypedefName = 73, RuleTypeSpecifier = 74, RuleTrailingTypeSpecifier = 75, 
    RuleTypeSpecifierSeq = 76, RuleTrailingTypeSpecifierSeq = 77, RuleSimpleTypeSignednessModifier = 78, 
    RuleSimpleTypeSpecifier = 79, RuleTheTypeName = 80, RuleDecltypeSpecifier = 81, 
    RuleElaboratedTypeSpecifier = 82, RuleEnumName = 83, RuleEnumSpecifier = 84, 
    RuleEnumHead = 85, RuleOpaqueEnumDeclaration = 86, RuleEnumkey = 87, 
    RuleEnumbase = 88, RuleEnumeratorList = 89, RuleEnumeratorDefinition = 90, 
    RuleEnumerator = 91, RuleNamespaceName = 92, RuleOriginalNamespaceName = 93, 
    RuleNamespaceDefinition = 94, RuleNamespaceAlias = 95, RuleNamespaceAliasDefinition = 96, 
    RuleQualifiednamespacespecifier = 97, RuleUsingDeclaration = 98, RuleUsingDirective = 99, 
    RuleUsingModuleDirective = 100, RuleAsmDefinition = 101, RuleLinkageSpecification = 102, 
    RuleAttributeSpecifierSeq = 103, RuleAttributeSpecifier = 104, RuleAlignmentspecifier = 105, 
    RuleAttributeList = 106, RuleAttribute = 107, RuleAttributeNamespace = 108, 
    RuleAttributeArgumentClause = 109, RuleBalancedTokenSeq = 110, RuleBalancedtoken = 111, 
    RuleInitDeclaratorList = 112, RuleInitDeclarator = 113, RuleDeclarator = 114, 
    RulePointerDeclarator = 115, RuleNoPointerDeclarator = 116, RuleParametersAndQualifiers = 117, 
    RuleTrailingReturnType = 118, RulePointerOperator = 119, RuleCvqualifierseq = 120, 
    RuleCvQualifier = 121, RuleRefqualifier = 122, RuleDeclaratorid = 123, 
    RuleTheTypeId = 124, RuleAbstractDeclarator = 125, RulePointerAbstractDeclarator = 126, 
    RuleNoPointerAbstractDeclarator = 127, RuleAbstractPackDeclarator = 128, 
    RuleNoPointerAbstractPackDeclarator = 129, RuleParameterDeclarationClause = 130, 
    RuleParameterDeclarationList = 131, RuleParameterDeclaration = 132, 
    RuleFunctionDefinition = 133, RuleFunctionBody = 134, RuleInitializer = 135, 
    RuleBraceOrEqualInitializer = 136, RuleInitializerClause = 137, RuleInitializerList = 138, 
    RuleBracedInitList = 139, RuleInterfaceHead = 140, RuleInterfaceSpecifier = 141, 
    RuleInterfacefunctionDefinition = 142, RuleInterfaceMemberSpecification = 143, 
    RuleRecordKey = 144, RuleRecordHead = 145, RuleRecordSpecifier = 146, 
    RuleRecordMemberSpecification = 147, RuleRecordMemberDeclaratorList = 148, 
    RuleClassName = 149, RuleClassSpecifier = 150, RuleClassHead = 151, 
    RuleClassHeadName = 152, RuleClassVirtSpecifier = 153, RuleClassKey = 154, 
    RuleMemberSpecification = 155, RuleMemberdeclaration = 156, RuleMemberDeclaratorList = 157, 
    RuleMemberDeclarator = 158, RuleVirtualSpecifierSeq = 159, RuleVirtualSpecifier = 160, 
    RulePureSpecifier = 161, RuleBaseClause = 162, RuleBaseSpecifierList = 163, 
    RuleBaseSpecifier = 164, RuleClassOrDeclType = 165, RuleBaseTypeSpecifier = 166, 
    RuleAccessSpecifier = 167, RuleConversionFunctionId = 168, RuleConversionTypeId = 169, 
    RuleConversionDeclarator = 170, RuleConstructorInitializer = 171, RuleMemInitializerList = 172, 
    RuleMemInitializer = 173, RuleMeminitializerid = 174, RuleOperatorFunctionId = 175, 
    RuleLiteralOperatorId = 176, RuleTemplateDeclaration = 177, RuleTemplateparameterList = 178, 
    RuleTemplateParameter = 179, RuleTypeParameter = 180, RuleSimpleTemplateId = 181, 
    RuleTemplateId = 182, RuleTemplateName = 183, RuleTemplateArgumentList = 184, 
    RuleTemplateArgument = 185, RuleTypeNameSpecifier = 186, RuleExplicitInstantiation = 187, 
    RuleExplicitSpecialization = 188, RuleTryBlock = 189, RuleFunctionTryBlock = 190, 
    RuleHandlerSeq = 191, RuleHandler = 192, RuleExceptionDeclaration = 193, 
    RuleThrowExpression = 194, RuleExceptionSpecification = 195, RuleDynamicExceptionSpecification = 196, 
    RuleTypeIdList = 197, RuleNoeExceptSpecification = 198, RuleTheOperator = 199, 
    RuleLiteral = 200
  };

  explicit CtcLangParser(antlr4::TokenStream *input);

  CtcLangParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CtcLangParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class TranslationUnitContext;
  class PrimaryExpressionContext;
  class IdExpressionContext;
  class UnqualifiedIdContext;
  class QualifiedIdContext;
  class NestedNameSpecifierContext;
  class LambdaExpressionContext;
  class LambdaIntroducerContext;
  class LambdaCaptureContext;
  class CaptureDefaultContext;
  class CaptureListContext;
  class CaptureContext;
  class SimpleCaptureContext;
  class InitcaptureContext;
  class LambdaDeclaratorContext;
  class PostfixExpressionContext;
  class TypeIdOfTheTypeIdContext;
  class ExpressionListContext;
  class PseudoDestructorNameContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class NewExpression_Context;
  class NewPlacementContext;
  class NewTypeIdContext;
  class NewDeclarator_Context;
  class NoPointerNewDeclaratorContext;
  class NewInitializer_Context;
  class DeleteExpressionContext;
  class NoExceptExpressionContext;
  class CastExpressionContext;
  class PointerMemberExpressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class ShiftOperatorContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class ConditionalExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class StatementContext;
  class LabeledStatementContext;
  class ExpressionStatementContext;
  class CompoundStatementContext;
  class StatementSeqContext;
  class SelectionStatementContext;
  class ConditionContext;
  class IterationStatementContext;
  class ForInitStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class JumpStatementContext;
  class DeclarationStatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockDeclarationContext;
  class ModuleDefinitionContext;
  class AliasDeclarationContext;
  class SimpleDeclarationContext;
  class StaticAssertDeclarationContext;
  class EmptyDeclaration_Context;
  class AttributeDeclarationContext;
  class DeclSpecifierContext;
  class DeclSpecifierSeqContext;
  class StorageClassSpecifierContext;
  class FunctionSpecifierContext;
  class TypedefNameContext;
  class TypeSpecifierContext;
  class TrailingTypeSpecifierContext;
  class TypeSpecifierSeqContext;
  class TrailingTypeSpecifierSeqContext;
  class SimpleTypeSignednessModifierContext;
  class SimpleTypeSpecifierContext;
  class TheTypeNameContext;
  class DecltypeSpecifierContext;
  class ElaboratedTypeSpecifierContext;
  class EnumNameContext;
  class EnumSpecifierContext;
  class EnumHeadContext;
  class OpaqueEnumDeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorListContext;
  class EnumeratorDefinitionContext;
  class EnumeratorContext;
  class NamespaceNameContext;
  class OriginalNamespaceNameContext;
  class NamespaceDefinitionContext;
  class NamespaceAliasContext;
  class NamespaceAliasDefinitionContext;
  class QualifiednamespacespecifierContext;
  class UsingDeclarationContext;
  class UsingDirectiveContext;
  class UsingModuleDirectiveContext;
  class AsmDefinitionContext;
  class LinkageSpecificationContext;
  class AttributeSpecifierSeqContext;
  class AttributeSpecifierContext;
  class AlignmentspecifierContext;
  class AttributeListContext;
  class AttributeContext;
  class AttributeNamespaceContext;
  class AttributeArgumentClauseContext;
  class BalancedTokenSeqContext;
  class BalancedtokenContext;
  class InitDeclaratorListContext;
  class InitDeclaratorContext;
  class DeclaratorContext;
  class PointerDeclaratorContext;
  class NoPointerDeclaratorContext;
  class ParametersAndQualifiersContext;
  class TrailingReturnTypeContext;
  class PointerOperatorContext;
  class CvqualifierseqContext;
  class CvQualifierContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class TheTypeIdContext;
  class AbstractDeclaratorContext;
  class PointerAbstractDeclaratorContext;
  class NoPointerAbstractDeclaratorContext;
  class AbstractPackDeclaratorContext;
  class NoPointerAbstractPackDeclaratorContext;
  class ParameterDeclarationClauseContext;
  class ParameterDeclarationListContext;
  class ParameterDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionBodyContext;
  class InitializerContext;
  class BraceOrEqualInitializerContext;
  class InitializerClauseContext;
  class InitializerListContext;
  class BracedInitListContext;
  class InterfaceHeadContext;
  class InterfaceSpecifierContext;
  class InterfacefunctionDefinitionContext;
  class InterfaceMemberSpecificationContext;
  class RecordKeyContext;
  class RecordHeadContext;
  class RecordSpecifierContext;
  class RecordMemberSpecificationContext;
  class RecordMemberDeclaratorListContext;
  class ClassNameContext;
  class ClassSpecifierContext;
  class ClassHeadContext;
  class ClassHeadNameContext;
  class ClassVirtSpecifierContext;
  class ClassKeyContext;
  class MemberSpecificationContext;
  class MemberdeclarationContext;
  class MemberDeclaratorListContext;
  class MemberDeclaratorContext;
  class VirtualSpecifierSeqContext;
  class VirtualSpecifierContext;
  class PureSpecifierContext;
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class ClassOrDeclTypeContext;
  class BaseTypeSpecifierContext;
  class AccessSpecifierContext;
  class ConversionFunctionIdContext;
  class ConversionTypeIdContext;
  class ConversionDeclaratorContext;
  class ConstructorInitializerContext;
  class MemInitializerListContext;
  class MemInitializerContext;
  class MeminitializeridContext;
  class OperatorFunctionIdContext;
  class LiteralOperatorIdContext;
  class TemplateDeclarationContext;
  class TemplateparameterListContext;
  class TemplateParameterContext;
  class TypeParameterContext;
  class SimpleTemplateIdContext;
  class TemplateIdContext;
  class TemplateNameContext;
  class TemplateArgumentListContext;
  class TemplateArgumentContext;
  class TypeNameSpecifierContext;
  class ExplicitInstantiationContext;
  class ExplicitSpecializationContext;
  class TryBlockContext;
  class FunctionTryBlockContext;
  class HandlerSeqContext;
  class HandlerContext;
  class ExceptionDeclarationContext;
  class ThrowExpressionContext;
  class ExceptionSpecificationContext;
  class DynamicExceptionSpecificationContext;
  class TypeIdListContext;
  class NoeExceptSpecificationContext;
  class TheOperatorContext;
  class LiteralContext; 

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationUnitContext* translationUnit();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();
    IdExpressionContext *idExpression();
    LambdaExpressionContext *lambdaExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();
    QualifiedIdContext *qualifiedId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdExpressionContext* idExpression();

  class  UnqualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    ConversionFunctionIdContext *conversionFunctionId();
    LiteralOperatorIdContext *literalOperatorId();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DecltypeSpecifierContext *decltypeSpecifier();
    TemplateIdContext *templateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedIdContext* unqualifiedId();

  class  QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();
    antlr4::tree::TerminalNode *Template();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdContext* qualifiedId();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Doublecolon();
    TheTypeNameContext *theTypeName();
    NamespaceNameContext *namespaceName();
    DecltypeSpecifierContext *decltypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();
    antlr4::tree::TerminalNode *Template();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaIntroducerContext *lambdaIntroducer();
    CompoundStatementContext *compoundStatement();
    LambdaDeclaratorContext *lambdaDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaIntroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    LambdaCaptureContext *lambdaCapture();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaIntroducerContext* lambdaIntroducer();

  class  LambdaCaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureListContext *captureList();
    CaptureDefaultContext *captureDefault();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaCaptureContext* lambdaCapture();

  class  CaptureDefaultContext : public antlr4::ParserRuleContext {
  public:
    CaptureDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Assign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureDefaultContext* captureDefault();

  class  CaptureListContext : public antlr4::ParserRuleContext {
  public:
    CaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaptureContext *> capture();
    CaptureContext* capture(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureListContext* captureList();

  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleCaptureContext *simpleCapture();
    InitcaptureContext *initcapture();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimpleCaptureContext : public antlr4::ParserRuleContext {
  public:
    SimpleCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *This();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleCaptureContext* simpleCapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *And();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitcaptureContext* initcapture();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *Mutable();
    ExceptionSpecificationContext *exceptionSpecification();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    TrailingReturnTypeContext *trailingReturnType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    TypeNameSpecifierContext *typeNameSpecifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BracedInitListContext *bracedInitList();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *Less();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Greater();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Bit_cast();
    antlr4::tree::TerminalNode *Dynamic_cast();
    antlr4::tree::TerminalNode *Static_cast();
    antlr4::tree::TerminalNode *Reinterpret_cast();
    antlr4::tree::TerminalNode *Const_cast();
    TypeIdOfTheTypeIdContext *typeIdOfTheTypeId();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Arrow();
    IdExpressionContext *idExpression();
    PseudoDestructorNameContext *pseudoDestructorName();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  TypeIdOfTheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TypeIdOfTheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdOfTheTypeIdContext* typeIdOfTheTypeId();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerListContext *initializerList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  PseudoDestructorNameContext : public antlr4::ParserRuleContext {
  public:
    PseudoDestructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    std::vector<TheTypeNameContext *> theTypeName();
    TheTypeNameContext* theTypeName(size_t i);
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Template();
    SimpleTemplateIdContext *simpleTemplateId();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudoDestructorNameContext* pseudoDestructorName();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryOperatorContext *unaryOperator();
    antlr4::tree::TerminalNode *Sizeof();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();
    NoExceptExpressionContext *noExceptExpression();
    NewExpression_Context *newExpression_();
    DeleteExpressionContext *deleteExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Not();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  NewExpression_Context : public antlr4::ParserRuleContext {
  public:
    NewExpression_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewTypeIdContext *newTypeId();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Doublecolon();
    NewPlacementContext *newPlacement();
    NewInitializer_Context *newInitializer_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewExpression_Context* newExpression_();

  class  NewPlacementContext : public antlr4::ParserRuleContext {
  public:
    NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewPlacementContext* newPlacement();

  class  NewTypeIdContext : public antlr4::ParserRuleContext {
  public:
    NewTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    NewDeclarator_Context *newDeclarator_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewTypeIdContext* newTypeId();

  class  NewDeclarator_Context : public antlr4::ParserRuleContext {
  public:
    NewDeclarator_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    NewDeclarator_Context *newDeclarator_();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewDeclarator_Context* newDeclarator_();

  class  NoPointerNewDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerNewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightBracket();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerNewDeclaratorContext* noPointerNewDeclarator();
  NoPointerNewDeclaratorContext* noPointerNewDeclarator(int precedence);
  class  NewInitializer_Context : public antlr4::ParserRuleContext {
  public:
    NewInitializer_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewInitializer_Context* newInitializer_();

  class  DeleteExpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteExpressionContext* deleteExpression();

  class  NoExceptExpressionContext : public antlr4::ParserRuleContext {
  public:
    NoExceptExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoExceptExpressionContext* noExceptExpression();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    CastExpressionContext *castExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  PointerMemberExpressionContext : public antlr4::ParserRuleContext {
  public:
    PointerMemberExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CastExpressionContext *> castExpression();
    CastExpressionContext* castExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DotStar();
    antlr4::tree::TerminalNode* DotStar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ArrowStar();
    antlr4::tree::TerminalNode* ArrowStar(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerMemberExpressionContext* pointerMemberExpression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerMemberExpressionContext *> pointerMemberExpression();
    PointerMemberExpressionContext* pointerMemberExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Star();
    antlr4::tree::TerminalNode* Star(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Div();
    antlr4::tree::TerminalNode* Div(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Mod();
    antlr4::tree::TerminalNode* Mod(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    std::vector<ShiftOperatorContext *> shiftOperator();
    ShiftOperatorContext* shiftOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LessEqual();
    antlr4::tree::TerminalNode* LessEqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GreaterEqual();
    antlr4::tree::TerminalNode* GreaterEqual(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Equal();
    antlr4::tree::TerminalNode* Equal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NotEqual();
    antlr4::tree::TerminalNode* NotEqual(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();

  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Caret();
    antlr4::tree::TerminalNode* Caret(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();

  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AndAnd();
    antlr4::tree::TerminalNode* AndAnd(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OrOr();
    antlr4::tree::TerminalNode* OrOr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *Question();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();
    ThrowExpressionContext *throwExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentExpressionContext *> assignmentExpression();
    AssignmentExpressionContext* assignmentExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    CompoundStatementContext *compoundStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    TryBlockContext *tryBlock();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Case();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Default();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementSeqContext *statementSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementSeqContext : public antlr4::ParserRuleContext {
  public:
    StatementSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementSeqContext* statementSeq();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *For();
    ForInitStatementContext *forInitStatement();
    ForRangeDeclarationContext *forRangeDeclaration();
    antlr4::tree::TerminalNode *Colon();
    ForRangeInitializerContext *forRangeInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    SimpleDeclarationContext *simpleDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitStatementContext* forInitStatement();

  class  ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    FunctionDefinitionContext *functionDefinition();
    TemplateDeclarationContext *templateDeclaration();
    ExplicitInstantiationContext *explicitInstantiation();
    ExplicitSpecializationContext *explicitSpecialization();
    LinkageSpecificationContext *linkageSpecification();
    ModuleDefinitionContext *moduleDefinition();
    NamespaceDefinitionContext *namespaceDefinition();
    EmptyDeclaration_Context *emptyDeclaration_();
    AttributeDeclarationContext *attributeDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    AsmDefinitionContext *asmDefinition();
    NamespaceAliasDefinitionContext *namespaceAliasDefinition();
    UsingDeclarationContext *usingDeclaration();
    UsingDirectiveContext *usingDirective();
    UsingModuleDirectiveContext *usingModuleDirective();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    OpaqueEnumDeclarationContext *opaqueEnumDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockDeclarationContext* blockDeclaration();

  class  ModuleDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Module();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDefinitionContext* moduleDefinition();

  class  AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasDeclarationContext* aliasDeclaration();

  class  SimpleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    DeclSpecifierSeqContext *declSpecifierSeq();
    InitDeclaratorListContext *initDeclaratorList();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  StaticAssertDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static_assert();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticAssertDeclarationContext* staticAssertDeclaration();

  class  EmptyDeclaration_Context : public antlr4::ParserRuleContext {
  public:
    EmptyDeclaration_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyDeclaration_Context* emptyDeclaration_();

  class  AttributeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeDeclarationContext* attributeDeclaration();

  class  DeclSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageClassSpecifierContext *storageClassSpecifier();
    TypeSpecifierContext *typeSpecifier();
    FunctionSpecifierContext *functionSpecifier();
    VirtualSpecifierSeqContext *virtualSpecifierSeq();
    antlr4::tree::TerminalNode *Constexpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierContext* declSpecifier();

  class  DeclSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierContext *> declSpecifier();
    DeclSpecifierContext* declSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierSeqContext* declSpecifierSeq();

  class  StorageClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Internal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageClassSpecifierContext* storageClassSpecifier();

  class  FunctionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  TypedefNameContext : public antlr4::ParserRuleContext {
  public:
    TypedefNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefNameContext* typedefName();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingTypeSpecifierContext *trailingTypeSpecifier();
    ClassSpecifierContext *classSpecifier();
    InterfaceSpecifierContext *interfaceSpecifier();
    RecordSpecifierContext *recordSpecifier();
    EnumSpecifierContext *enumSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TrailingTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    TypeNameSpecifierContext *typeNameSpecifier();
    CvQualifierContext *cvQualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingTypeSpecifierContext* trailingTypeSpecifier();

  class  TypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierSeqContext* typeSpecifierSeq();

  class  TrailingTypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TrailingTypeSpecifierContext *> trailingTypeSpecifier();
    TrailingTypeSpecifierContext* trailingTypeSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingTypeSpecifierSeqContext* trailingTypeSpecifierSeq();

  class  SimpleTypeSignednessModifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSignednessModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Signed();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSignednessModifierContext* simpleTypeSignednessModifier();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    SimpleTemplateIdContext *simpleTemplateId();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  TheTypeNameContext : public antlr4::ParserRuleContext {
  public:
    TheTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    EnumNameContext *enumName();
    TypedefNameContext *typedefName();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeNameContext* theTypeName();

  class  DecltypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Auto();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypeSpecifierContext* decltypeSpecifier();

  class  ElaboratedTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();
    NestedNameSpecifierContext *nestedNameSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedTypeSpecifierContext* elaboratedTypeSpecifier();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumNameContext* enumName();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumHeadContext* enumHead();

  class  OpaqueEnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueEnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    EnumbaseContext *enumbase();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueEnumDeclarationContext* opaqueEnumDeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeSpecifierSeqContext *typeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorListContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
    EnumeratorDefinitionContext* enumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorListContext* enumeratorList();

  class  EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    antlr4::tree::TerminalNode *Assign();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalNamespaceNameContext *originalNamespaceName();
    NamespaceAliasContext *namespaceAlias();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  OriginalNamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    OriginalNamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalNamespaceNameContext* originalNamespaceName();

  class  NamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CtcLangParser::DeclarationseqContext *namespaceBody = nullptr;
    NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Identifier();
    OriginalNamespaceNameContext *originalNamespaceName();
    DeclarationseqContext *declarationseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  NamespaceAliasContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasContext* namespaceAlias();

  class  NamespaceAliasDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasDefinitionContext* namespaceAliasDefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceNameContext *namespaceName();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  UsingDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    UnqualifiedIdContext *unqualifiedId();
    antlr4::tree::TerminalNode *Semi();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Typename_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDeclarationContext* usingDeclaration();

  class  UsingDirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDirectiveContext* usingDirective();

  class  UsingModuleDirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingModuleDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Module();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingModuleDirectiveContext* usingModuleDirective();

  class  AsmDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *AsmMSVC();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmDefinitionContext* asmDefinition();

  class  LinkageSpecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkageSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DeclarationContext *declaration();
    DeclarationseqContext *declarationseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkageSpecificationContext* linkageSpecification();

  class  AttributeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierSeqContext* attributeSpecifierSeq();

  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    AttributeListContext *attributeList();
    AlignmentspecifierContext *alignmentspecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alignas();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TheTypeIdContext *theTypeId();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentspecifierContext* alignmentspecifier();

  class  AttributeListContext : public antlr4::ParserRuleContext {
  public:
    AttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeListContext* attributeList();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeNamespaceContext *attributeNamespace();
    antlr4::tree::TerminalNode *Doublecolon();
    AttributeArgumentClauseContext *attributeArgumentClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AttributeNamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributeNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeNamespaceContext* attributeNamespace();

  class  AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BalancedTokenSeqContext *balancedTokenSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeArgumentClauseContext* attributeArgumentClause();

  class  BalancedTokenSeqContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BalancedtokenContext *> balancedtoken();
    BalancedtokenContext* balancedtoken(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedTokenSeqContext* balancedTokenSeq();

  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftParen();
    antlr4::tree::TerminalNode* LeftParen(size_t i);
    BalancedTokenSeqContext *balancedTokenSeq();
    std::vector<antlr4::tree::TerminalNode *> RightParen();
    antlr4::tree::TerminalNode* RightParen(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBrace();
    antlr4::tree::TerminalNode* LeftBrace(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBrace();
    antlr4::tree::TerminalNode* RightBrace(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenContext* balancedtoken();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorContext *> initDeclarator();
    InitDeclaratorContext* initDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorListContext* initDeclaratorList();

  class  InitDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorContext* initDeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerDeclaratorContext *pointerDeclarator();
    NoPointerDeclaratorContext *noPointerDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    TrailingReturnTypeContext *trailingReturnType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  PointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerDeclaratorContext *noPointerDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Const();
    antlr4::tree::TerminalNode* Const(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerDeclaratorContext* pointerDeclarator();

  class  NoPointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    PointerDeclaratorContext *pointerDeclarator();
    antlr4::tree::TerminalNode *RightParen();
    NoPointerDeclaratorContext *noPointerDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerDeclaratorContext* noPointerDeclarator();
  NoPointerDeclaratorContext* noPointerDeclarator(int precedence);
  class  ParametersAndQualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersAndQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    CvqualifierseqContext *cvqualifierseq();
    RefqualifierContext *refqualifier();
    ExceptionSpecificationContext *exceptionSpecification();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersAndQualifiersContext* parametersAndQualifiers();

  class  TrailingReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    TrailingTypeSpecifierSeqContext *trailingTypeSpecifierSeq();
    AbstractDeclaratorContext *abstractDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingReturnTypeContext* trailingReturnType();

  class  PointerOperatorContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *AndAnd();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Star();
    NestedNameSpecifierContext *nestedNameSpecifier();
    CvqualifierseqContext *cvqualifierseq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerOperatorContext* pointerOperator();

  class  CvqualifierseqContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CvQualifierContext *> cvQualifier();
    CvQualifierContext* cvQualifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierseqContext* cvqualifierseq();

  class  CvQualifierContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvQualifierContext* cvQualifier();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *AndAnd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratoridContext* declaratorid();

  class  TheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    AbstractDeclaratorContext *abstractDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeIdContext* theTypeId();

  class  AbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    TrailingReturnTypeContext *trailingReturnType();
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    AbstractPackDeclaratorContext *abstractPackDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  PointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerAbstractDeclaratorContext* pointerAbstractDeclarator();

  class  NoPointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<NoPointerAbstractDeclaratorContext *> noPointerAbstractDeclarator();
    NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator();
  NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator(int precedence);
  class  AbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractPackDeclaratorContext* abstractPackDeclarator();

  class  NoPointerAbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerAbstractPackDeclaratorContext* noPointerAbstractPackDeclarator();
  NoPointerAbstractPackDeclaratorContext* noPointerAbstractPackDeclarator(int precedence);
  class  ParameterDeclarationClauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationListContext *parameterDeclarationList();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationClauseContext* parameterDeclarationClause();

  class  ParameterDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationContext *> parameterDeclaration();
    ParameterDeclarationContext* parameterDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationListContext* parameterDeclarationList();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    AbstractDeclaratorContext *abstractDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionBodyContext *functionBody();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    ConstructorInitializerContext *constructorInitializer();
    FunctionTryBlockContext *functionTryBlock();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Delete();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceOrEqualInitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceOrEqualInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceOrEqualInitializerContext* braceOrEqualInitializer();

  class  InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerClauseContext* initializerClause();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerClauseContext *> initializerClause();
    InitializerClauseContext* initializerClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();

  class  BracedInitListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Dot();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedInitListContext* bracedInitList();

  class  InterfaceHeadContext : public antlr4::ParserRuleContext {
  public:
    InterfaceHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    ClassHeadNameContext *classHeadName();
    AccessSpecifierContext *accessSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceHeadContext* interfaceHead();

  class  InterfaceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    InterfaceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceHeadContext *interfaceHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<InterfaceMemberSpecificationContext *> interfaceMemberSpecification();
    InterfaceMemberSpecificationContext* interfaceMemberSpecification(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceSpecifierContext* interfaceSpecifier();

  class  InterfacefunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InterfacefunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();
    PureSpecifierContext *pureSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfacefunctionDefinitionContext* interfacefunctionDefinition();

  class  InterfaceMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfacefunctionDefinitionContext *interfacefunctionDefinition();
    AccessSpecifierContext *accessSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberSpecificationContext* interfaceMemberSpecification();

  class  RecordKeyContext : public antlr4::ParserRuleContext {
  public:
    RecordKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Record();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordKeyContext* recordKey();

  class  RecordHeadContext : public antlr4::ParserRuleContext {
  public:
    RecordHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RecordKeyContext *recordKey();
    ClassHeadNameContext *classHeadName();
    AccessSpecifierContext *accessSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordHeadContext* recordHead();

  class  RecordSpecifierContext : public antlr4::ParserRuleContext {
  public:
    RecordSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RecordHeadContext *recordHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<RecordMemberSpecificationContext *> recordMemberSpecification();
    RecordMemberSpecificationContext* recordMemberSpecification(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordSpecifierContext* recordSpecifier();

  class  RecordMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    RecordMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();
    RecordMemberDeclaratorListContext *recordMemberDeclaratorList();
    TemplateDeclarationContext *templateDeclaration();
    EmptyDeclaration_Context *emptyDeclaration_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordMemberSpecificationContext* recordMemberSpecification();

  class  RecordMemberDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    RecordMemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordMemberDeclaratorListContext* recordMemberDeclaratorList();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class  ClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    MemberSpecificationContext *memberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassSpecifierContext* classSpecifier();

  class  ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    AccessSpecifierContext *accessSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ClassHeadNameContext *classHeadName();
    BaseClauseContext *baseClause();
    ClassVirtSpecifierContext *classVirtSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadContext* classHead();

  class  ClassHeadNameContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadNameContext* classHeadName();

  class  ClassVirtSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassVirtSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassVirtSpecifierContext* classVirtSpecifier();

  class  ClassKeyContext : public antlr4::ParserRuleContext {
  public:
    ClassKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassKeyContext* classKey();

  class  MemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberdeclarationContext *> memberdeclaration();
    MemberdeclarationContext* memberdeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberSpecificationContext* memberSpecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();
    MemberDeclaratorListContext *memberDeclaratorList();
    FunctionDefinitionContext *functionDefinition();
    UsingDeclarationContext *usingDeclaration();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    TemplateDeclarationContext *templateDeclaration();
    antlr4::tree::TerminalNode *Colon();
    AliasDeclarationContext *aliasDeclaration();
    EmptyDeclaration_Context *emptyDeclaration_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclarationContext* memberdeclaration();

  class  MemberDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberDeclaratorContext *> memberDeclarator();
    MemberDeclaratorContext* memberDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorListContext* memberDeclaratorList();

  class  MemberDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    PureSpecifierContext *pureSpecifier();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *Colon();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorContext* memberDeclarator();

  class  VirtualSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VirtualSpecifierContext *> virtualSpecifier();
    VirtualSpecifierContext* virtualSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualSpecifierSeqContext* virtualSpecifierSeq();

  class  VirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualSpecifierContext* virtualSpecifier();

  class  PureSpecifierContext : public antlr4::ParserRuleContext {
  public:
    PureSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *IntegerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PureSpecifierContext* pureSpecifier();

  class  BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseClauseContext* baseClause();

  class  BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseSpecifierContext *> baseSpecifier();
    BaseSpecifierContext* baseSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierListContext* baseSpecifierList();

  class  BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeSpecifierContext *baseTypeSpecifier();
    antlr4::tree::TerminalNode *Virtual();
    AccessSpecifierContext *accessSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierContext* baseSpecifier();

  class  ClassOrDeclTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrDeclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();
    DecltypeSpecifierContext *decltypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrDeclTypeContext* classOrDeclType();

  class  BaseTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDeclTypeContext *classOrDeclType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseTypeSpecifierContext* baseTypeSpecifier();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class  ConversionFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversionTypeIdContext *conversionTypeId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionFunctionIdContext* conversionFunctionId();

  class  ConversionTypeIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    ConversionDeclaratorContext *conversionDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionTypeIdContext* conversionTypeId();

  class  ConversionDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    ConversionDeclaratorContext *conversionDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionDeclaratorContext* conversionDeclarator();

  class  ConstructorInitializerContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    MemInitializerListContext *memInitializerList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorInitializerContext* constructorInitializer();

  class  MemInitializerListContext : public antlr4::ParserRuleContext {
  public:
    MemInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemInitializerContext *> memInitializer();
    MemInitializerContext* memInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemInitializerListContext* memInitializerList();

  class  MemInitializerContext : public antlr4::ParserRuleContext {
  public:
    MemInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializeridContext *meminitializerid();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BracedInitListContext *bracedInitList();
    ExpressionListContext *expressionList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemInitializerContext* memInitializer();

  class  MeminitializeridContext : public antlr4::ParserRuleContext {
  public:
    MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDeclTypeContext *classOrDeclType();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializeridContext* meminitializerid();

  class  OperatorFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheOperatorContext *theOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorFunctionIdContext* operatorFunctionId();

  class  LiteralOperatorIdContext : public antlr4::ParserRuleContext {
  public:
    LiteralOperatorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralOperatorIdContext* literalOperatorId();

  class  TemplateDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplateDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterListContext *templateparameterList();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateDeclarationContext* templateDeclaration();

  class  TemplateparameterListContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateParameterContext *> templateParameter();
    TemplateParameterContext* templateParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterListContext* templateparameterList();

  class  TemplateParameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParameterContext *typeParameter();
    ParameterDeclarationContext *parameterDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateParameterContext* templateParameter();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Typename_();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterListContext *templateparameterList();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  SimpleTemplateIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTemplateIdContext* simpleTemplateId();

  class  TemplateIdContext : public antlr4::ParserRuleContext {
  public:
    TemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTemplateIdContext *simpleTemplateId();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    OperatorFunctionIdContext *operatorFunctionId();
    LiteralOperatorIdContext *literalOperatorId();
    TemplateArgumentListContext *templateArgumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateIdContext* templateId();

  class  TemplateNameContext : public antlr4::ParserRuleContext {
  public:
    TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateNameContext* templateName();

  class  TemplateArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateArgumentContext *> templateArgument();
    TemplateArgumentContext* templateArgument(size_t i);
    std::vector<AccessSpecifierContext *> accessSpecifier();
    AccessSpecifierContext* accessSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentListContext* templateArgumentList();

  class  TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ConstantExpressionContext *constantExpression();
    IdExpressionContext *idExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentContext* templateArgument();

  class  TypeNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typename_();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();
    antlr4::tree::TerminalNode *Template();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameSpecifierContext* typeNameSpecifier();

  class  ExplicitInstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitInstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitInstantiationContext* explicitInstantiation();

  class  ExplicitSpecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitSpecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitSpecializationContext* explicitSpecialization();

  class  TryBlockContext : public antlr4::ParserRuleContext {
  public:
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSeqContext *handlerSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryBlockContext* tryBlock();

  class  FunctionTryBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionTryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSeqContext *handlerSeq();
    ConstructorInitializerContext *constructorInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTryBlockContext* functionTryBlock();

  class  HandlerSeqContext : public antlr4::ParserRuleContext {
  public:
    HandlerSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HandlerContext *> handler();
    HandlerContext* handler(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerSeqContext* handlerSeq();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *LeftParen();
    ExceptionDeclarationContext *exceptionDeclaration();
    antlr4::tree::TerminalNode *RightParen();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerContext* handler();

  class  ExceptionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclaratorContext *declarator();
    AbstractDeclaratorContext *abstractDeclarator();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class  ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowExpressionContext* throwExpression();

  class  ExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DynamicExceptionSpecificationContext *dynamicExceptionSpecification();
    NoeExceptSpecificationContext *noeExceptSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionSpecificationContext* exceptionSpecification();

  class  DynamicExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    DynamicExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TypeIdListContext *typeIdList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DynamicExceptionSpecificationContext* dynamicExceptionSpecification();

  class  TypeIdListContext : public antlr4::ParserRuleContext {
  public:
    TypeIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdListContext* typeIdList();

  class  NoeExceptSpecificationContext : public antlr4::ParserRuleContext {
  public:
    NoeExceptSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoeExceptSpecificationContext* noeExceptSpecification();

  class  TheOperatorContext : public antlr4::ParserRuleContext {
  public:
    TheOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *AndAnd();
    antlr4::tree::TerminalNode *OrOr();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *ArrowStar();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheOperatorContext* theOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *FloatingLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *PointerLiteral();
    antlr4::tree::TerminalNode *UserDefinedLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

