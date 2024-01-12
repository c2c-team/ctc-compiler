
// Generated from ctc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ctcParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    DigitSequence = 51, Digit_sequence = 52, Public = 53, Private = 54, 
    Interface = 55, Class = 56, Enum = 57, Using = 58, Namespace = 59, Inline = 60, 
    Noexcept = 61, Use = 62, Compile_if = 63, Static = 64, Extern = 65, 
    Constexpr = 66, Consteval = 67, Dynamic_cast = 68, Void = 69, Auto = 70, 
    Char = 71, Bool = 72, Short = 73, Int = 74, Long = 75, Float = 76, Double = 77, 
    Double128 = 78, Unsigned = 79, Const = 80, Volatile = 81, IntegerConstant = 82, 
    FloatingConstant = 83, CharacterConstant = 84, EncodingPrefix = 85, 
    SCharSequence = 86, Identifier_non_digit = 87, Digit = 88
  };

  enum {
    RuleMain = 0, RuleStatement = 1, RuleAccess_modifier = 2, RuleInterface_element = 3, 
    RuleInterface_body = 4, RuleInterface_decl = 5, RuleEnum_modifier = 6, 
    RuleEnum_body = 7, RuleEnum_decl = 8, RuleUsing_decl = 9, RuleNamespace_decl = 10, 
    RuleFn_specifier = 11, RuleFn_decl = 12, RuleType_argument = 13, RuleType_argument_list = 14, 
    RuleArgumentExpressionList = 15, RuleUse_decl = 16, RuleCompile_if_predicate = 17, 
    RuleCctp_decl = 18, RuleStorage_specifier = 19, RuleVar_decl_specifier = 20, 
    RuleLambda_body = 21, RuleLambda_capture_modifier = 22, RuleLambda_capture_by = 23, 
    RuleLambda_expression = 24, RuleConstant = 25, RulePrimary_expression = 26, 
    RuleMultiplicativeExpression = 27, RuleAdditiveExpression = 28, RuleShiftExpression = 29, 
    RuleRelationalExpression = 30, RuleEqualityExpression = 31, RuleAndExpression = 32, 
    RuleExclusiveOrExpression = 33, RuleInclusiveOrExpression = 34, RuleLogicalAndExpression = 35, 
    RuleLogicalOrExpression = 36, RuleConditional_expression = 37, RuleString_literal = 38, 
    RuleAssignment_operator = 39, RulePostfix_expression = 40, RuleUnaryOperator = 41, 
    RuleCast_expression = 42, RuleUnary_expression = 43, RuleAssignment_expression = 44, 
    RuleExpression = 45, RuleType = 46, RuleIdentifier_specifier = 47, RuleUnsigned_specifier = 48, 
    RuleType_specifier = 49, RuleIdentifier = 50, RuleVar_decl = 51, RuleDeclarator = 52
  };

  explicit ctcParser(antlr4::TokenStream *input);

  ctcParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ctcParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MainContext;
  class StatementContext;
  class Access_modifierContext;
  class Interface_elementContext;
  class Interface_bodyContext;
  class Interface_declContext;
  class Enum_modifierContext;
  class Enum_bodyContext;
  class Enum_declContext;
  class Using_declContext;
  class Namespace_declContext;
  class Fn_specifierContext;
  class Fn_declContext;
  class Type_argumentContext;
  class Type_argument_listContext;
  class ArgumentExpressionListContext;
  class Use_declContext;
  class Compile_if_predicateContext;
  class Cctp_declContext;
  class Storage_specifierContext;
  class Var_decl_specifierContext;
  class Lambda_bodyContext;
  class Lambda_capture_modifierContext;
  class Lambda_capture_byContext;
  class Lambda_expressionContext;
  class ConstantContext;
  class Primary_expressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class Conditional_expressionContext;
  class String_literalContext;
  class Assignment_operatorContext;
  class Postfix_expressionContext;
  class UnaryOperatorContext;
  class Cast_expressionContext;
  class Unary_expressionContext;
  class Assignment_expressionContext;
  class ExpressionContext;
  class TypeContext;
  class Identifier_specifierContext;
  class Unsigned_specifierContext;
  class Type_specifierContext;
  class IdentifierContext;
  class Var_declContext;
  class DeclaratorContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_declContext *> interface_decl();
    Interface_declContext* interface_decl(size_t i);
    std::vector<Enum_declContext *> enum_decl();
    Enum_declContext* enum_decl(size_t i);
    std::vector<Using_declContext *> using_decl();
    Using_declContext* using_decl(size_t i);
    std::vector<Namespace_declContext *> namespace_decl();
    Namespace_declContext* namespace_decl(size_t i);
    std::vector<Cctp_declContext *> cctp_decl();
    Cctp_declContext* cctp_decl(size_t i);
    std::vector<Var_declContext *> var_decl();
    Var_declContext* var_decl(size_t i);
    std::vector<Fn_declContext *> fn_decl();
    Fn_declContext* fn_decl(size_t i);
    std::vector<Use_declContext *> use_decl();
    Use_declContext* use_decl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Access_modifierContext : public antlr4::ParserRuleContext {
  public:
    Access_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Private();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Access_modifierContext* access_modifier();

  class  Interface_elementContext : public antlr4::ParserRuleContext {
  public:
    Interface_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Access_modifierContext *access_modifier();
    Type_specifierContext *type_specifier();
    IdentifierContext *identifier();
    Type_argument_listContext *type_argument_list();
    Storage_specifierContext *storage_specifier();
    std::vector<Fn_specifierContext *> fn_specifier();
    Fn_specifierContext* fn_specifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_elementContext* interface_element();

  class  Interface_bodyContext : public antlr4::ParserRuleContext {
  public:
    Interface_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_elementContext *> interface_element();
    Interface_elementContext* interface_element(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_bodyContext* interface_body();

  class  Interface_declContext : public antlr4::ParserRuleContext {
  public:
    Interface_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    IdentifierContext *identifier();
    Interface_bodyContext *interface_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declContext* interface_decl();

  class  Enum_modifierContext : public antlr4::ParserRuleContext {
  public:
    Enum_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_modifierContext* enum_modifier();

  class  Enum_bodyContext : public antlr4::ParserRuleContext {
  public:
    Enum_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_bodyContext* enum_body();

  class  Enum_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    IdentifierContext *identifier();
    Enum_bodyContext *enum_body();
    Enum_modifierContext *enum_modifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_declContext* enum_decl();

  class  Using_declContext : public antlr4::ParserRuleContext {
  public:
    Using_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Namespace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_declContext* using_decl();

  class  Namespace_declContext : public antlr4::ParserRuleContext {
  public:
    Namespace_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    IdentifierContext *identifier();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Namespace_declContext* namespace_decl();

  class  Fn_specifierContext : public antlr4::ParserRuleContext {
  public:
    Fn_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Noexcept();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fn_specifierContext* fn_specifier();

  class  Fn_declContext : public antlr4::ParserRuleContext {
  public:
    Fn_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    IdentifierContext *identifier();
    Type_argument_listContext *type_argument_list();
    StatementContext *statement();
    Storage_specifierContext *storage_specifier();
    std::vector<Fn_specifierContext *> fn_specifier();
    Fn_specifierContext* fn_specifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fn_declContext* fn_decl();

  class  Type_argumentContext : public antlr4::ParserRuleContext {
  public:
    Type_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_argumentContext* type_argument();

  class  Type_argument_listContext : public antlr4::ParserRuleContext {
  public:
    Type_argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_argumentContext *> type_argument();
    Type_argumentContext* type_argument(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_argument_listContext* type_argument_list();

  class  ArgumentExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_expressionContext *> assignment_expression();
    Assignment_expressionContext* assignment_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentExpressionListContext* argumentExpressionList();

  class  Use_declContext : public antlr4::ParserRuleContext {
  public:
    Use_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Use();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_declContext* use_decl();

  class  Compile_if_predicateContext : public antlr4::ParserRuleContext {
  public:
    Compile_if_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compile_if_predicateContext* compile_if_predicate();

  class  Cctp_declContext : public antlr4::ParserRuleContext {
  public:
    Cctp_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Compile_if();
    Compile_if_predicateContext *compile_if_predicate();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cctp_declContext* cctp_decl();

  class  Storage_specifierContext : public antlr4::ParserRuleContext {
  public:
    Storage_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Extern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storage_specifierContext* storage_specifier();

  class  Var_decl_specifierContext : public antlr4::ParserRuleContext {
  public:
    Var_decl_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Constexpr();
    antlr4::tree::TerminalNode *Consteval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_decl_specifierContext* var_decl_specifier();

  class  Lambda_bodyContext : public antlr4::ParserRuleContext {
  public:
    Lambda_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lambda_bodyContext* lambda_body();

  class  Lambda_capture_modifierContext : public antlr4::ParserRuleContext {
  public:
    Lambda_capture_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lambda_capture_modifierContext* lambda_capture_modifier();

  class  Lambda_capture_byContext : public antlr4::ParserRuleContext {
  public:
    Lambda_capture_byContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Lambda_capture_modifierContext *> lambda_capture_modifier();
    Lambda_capture_modifierContext* lambda_capture_modifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lambda_capture_byContext* lambda_capture_by();

  class  Lambda_expressionContext : public antlr4::ParserRuleContext {
  public:
    Lambda_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Lambda_capture_byContext *lambda_capture_by();
    Type_argument_listContext *type_argument_list();
    Lambda_bodyContext *lambda_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lambda_expressionContext* lambda_expression();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerConstant();
    antlr4::tree::TerminalNode *FloatingConstant();
    antlr4::tree::TerminalNode *CharacterConstant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Primary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ConstantContext *constant();
    Lambda_expressionContext *lambda_expression();
    std::vector<String_literalContext *> string_literal();
    String_literalContext* string_literal(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_expressionContext* primary_expression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cast_expressionContext *> cast_expression();
    Cast_expressionContext* cast_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();

  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();

  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  Conditional_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    ExpressionContext *expression();
    Conditional_expressionContext *conditional_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_expressionContext* conditional_expression();

  class  String_literalContext : public antlr4::ParserRuleContext {
  public:
    String_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EncodingPrefix();
    antlr4::tree::TerminalNode *SCharSequence();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_literalContext* string_literal();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Postfix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Postfix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_expressionContext *primary_expression();
    std::vector<ArgumentExpressionListContext *> argumentExpressionList();
    ArgumentExpressionListContext* argumentExpressionList(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Postfix_expressionContext* postfix_expression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  Cast_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cast_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    Cast_expressionContext *cast_expression();
    antlr4::tree::TerminalNode *Dynamic_cast();
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *Digit_sequence();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_expressionContext* cast_expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_expressionContext *postfix_expression();
    UnaryOperatorContext *unaryOperator();
    Cast_expressionContext *cast_expression();
    Type_specifierContext *type_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  Assignment_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_expressionContext *conditional_expression();
    Unary_expressionContext *unary_expression();
    Assignment_operatorContext *assignment_operator();
    Assignment_expressionContext *assignment_expression();
    antlr4::tree::TerminalNode *Digit_sequence();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_expressionContext* assignment_expression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_expressionContext *> assignment_expression();
    Assignment_expressionContext* assignment_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Double128();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Identifier_specifierContext : public antlr4::ParserRuleContext {
  public:
    Identifier_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_specifierContext* identifier_specifier();

  class  Unsigned_specifierContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Unsigned();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_specifierContext* unsigned_specifier();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    Unsigned_specifierContext *unsigned_specifier();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();
    Identifier_specifierContext *identifier_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_specifierContext* type_specifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier_non_digit();
    antlr4::tree::TerminalNode* Identifier_non_digit(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Digit();
    antlr4::tree::TerminalNode* Digit(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();
  IdentifierContext* identifier(int precedence);
  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    Storage_specifierContext *storage_specifier();
    Var_decl_specifierContext *var_decl_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declContext* var_decl();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_specifierContext *> type_specifier();
    Type_specifierContext* type_specifier(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Assignment_operatorContext *> assignment_operator();
    Assignment_operatorContext* assignment_operator(size_t i);
    std::vector<Primary_expressionContext *> primary_expression();
    Primary_expressionContext* primary_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool identifierSempred(IdentifierContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

