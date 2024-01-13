
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
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, DigitSequence = 50, 
    Digit_sequence = 51, Identifier = 52, Public = 53, Private = 54, Interface = 55, 
    Class = 56, Enum = 57, Using = 58, Namespace = 59, Inline = 60, Noexcept = 61, 
    Use = 62, Compile_if = 63, Static = 64, Extern = 65, Constexpr = 66, 
    Consteval = 67, Dynamic_cast = 68, Void = 69, Auto = 70, Char = 71, 
    Bool = 72, Short = 73, Do = 74, While = 75, For = 76, Int = 77, Long = 78, 
    Float = 79, Double = 80, Double128 = 81, Unsigned = 82, Const = 83, 
    Volatile = 84, If = 85, Switch = 86, Break = 87, Continue = 88, Else = 89, 
    Default = 90, Case = 91, Return = 92, Override = 93, Asm = 94, Att = 95, 
    Intel = 96, Sealed = 97, IntegerConstant = 98, FloatingConstant = 99, 
    CharacterConstant = 100, EncodingPrefix = 101, SCharSequence = 102
  };

  enum {
    RuleMain = 0, RuleStatement = 1, RuleAsm_body = 2, RuleAsm_def = 3, 
    RuleClass_field_def = 4, RuleClass_method_def = 5, RuleClass_body = 6, 
    RuleClass_implement = 7, RuleClass_qualifier = 8, RuleClass_decl = 9, 
    RuleControl_flow_stmt = 10, RuleSwitch_case = 11, RuleSwitch_body = 12, 
    RuleSwitch_stmt = 13, RuleIf_stmt = 14, RuleDo_while_stmt = 15, RuleWhile_stmt = 16, 
    RuleForCondition = 17, RuleDeclarationSpecifiers = 18, RuleInitDeclaratorList = 19, 
    RuleInitDeclarator = 20, RuleInitializer = 21, RuleInitializerList = 22, 
    RuleDesignation = 23, RuleDesignatorList = 24, RuleDesignator = 25, 
    RuleDeclarator = 26, RuleConstantExpression = 27, RuleDeclarationSpecifier = 28, 
    RuleForDeclaration = 29, RuleForExpression = 30, RuleFor_stmt = 31, 
    RuleAccess_modifier = 32, RuleInterface_element = 33, RuleInterface_body = 34, 
    RuleInterface_decl = 35, RuleEnum_modifier = 36, RuleEnum_body = 37, 
    RuleEnum_decl = 38, RuleUsing_decl = 39, RuleNamespace_decl = 40, RuleFn_specifier = 41, 
    RuleFn_decl = 42, RuleType_argument = 43, RuleType_argument_list = 44, 
    RuleArgumentExpressionList = 45, RuleUse_decl = 46, RuleCompile_if_predicate = 47, 
    RuleCctp_decl = 48, RuleStorage_specifier = 49, RuleVar_decl_specifier = 50, 
    RuleLambda_body = 51, RuleLambda_capture_modifier = 52, RuleLambda_capture_by = 53, 
    RuleLambda_expression = 54, RuleConstant = 55, RulePrimary_expression = 56, 
    RuleMultiplicativeExpression = 57, RuleAdditiveExpression = 58, RuleShiftExpression = 59, 
    RuleRelationalExpression = 60, RuleEqualityExpression = 61, RuleAndExpression = 62, 
    RuleExclusiveOrExpression = 63, RuleInclusiveOrExpression = 64, RuleLogicalAndExpression = 65, 
    RuleLogicalOrExpression = 66, RuleConditional_expression = 67, RuleString_literal = 68, 
    RuleAssignment_operator = 69, RulePostfix_expression = 70, RuleUnaryOperator = 71, 
    RuleCast_expression = 72, RuleUnary_expression = 73, RuleAssignment_expression = 74, 
    RuleExpression = 75, RuleType = 76, RuleIdentifier_specifier = 77, RuleUnsigned_specifier = 78, 
    RuleType_qualifier = 79, RuleTypeQualifierList = 80, RulePointer = 81, 
    RuleSpecifierQualifierList = 82, RuleRefqualifier = 83, RuleAbstractDeclarator = 84, 
    RuleType_specifier = 85, RuleVar_decl = 86, RuleVdeclarator = 87
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
  class Asm_bodyContext;
  class Asm_defContext;
  class Class_field_defContext;
  class Class_method_defContext;
  class Class_bodyContext;
  class Class_implementContext;
  class Class_qualifierContext;
  class Class_declContext;
  class Control_flow_stmtContext;
  class Switch_caseContext;
  class Switch_bodyContext;
  class Switch_stmtContext;
  class If_stmtContext;
  class Do_while_stmtContext;
  class While_stmtContext;
  class ForConditionContext;
  class DeclarationSpecifiersContext;
  class InitDeclaratorListContext;
  class InitDeclaratorContext;
  class InitializerContext;
  class InitializerListContext;
  class DesignationContext;
  class DesignatorListContext;
  class DesignatorContext;
  class DeclaratorContext;
  class ConstantExpressionContext;
  class DeclarationSpecifierContext;
  class ForDeclarationContext;
  class ForExpressionContext;
  class For_stmtContext;
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
  class Type_qualifierContext;
  class TypeQualifierListContext;
  class PointerContext;
  class SpecifierQualifierListContext;
  class RefqualifierContext;
  class AbstractDeclaratorContext;
  class Type_specifierContext;
  class Var_declContext;
  class VdeclaratorContext; 

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
    std::vector<Asm_defContext *> asm_def();
    Asm_defContext* asm_def(size_t i);
    std::vector<Class_declContext *> class_decl();
    Class_declContext* class_decl(size_t i);
    std::vector<Control_flow_stmtContext *> control_flow_stmt();
    Control_flow_stmtContext* control_flow_stmt(size_t i);
    std::vector<Switch_stmtContext *> switch_stmt();
    Switch_stmtContext* switch_stmt(size_t i);
    std::vector<If_stmtContext *> if_stmt();
    If_stmtContext* if_stmt(size_t i);
    std::vector<Do_while_stmtContext *> do_while_stmt();
    Do_while_stmtContext* do_while_stmt(size_t i);
    std::vector<While_stmtContext *> while_stmt();
    While_stmtContext* while_stmt(size_t i);
    std::vector<For_stmtContext *> for_stmt();
    For_stmtContext* for_stmt(size_t i);
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

  class  Asm_bodyContext : public antlr4::ParserRuleContext {
  public:
    Asm_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asm_bodyContext* asm_body();

  class  Asm_defContext : public antlr4::ParserRuleContext {
  public:
    Asm_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    Asm_bodyContext *asm_body();
    antlr4::tree::TerminalNode *Volatile();
    antlr4::tree::TerminalNode *Att();
    antlr4::tree::TerminalNode *Intel();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asm_defContext* asm_def();

  class  Class_field_defContext : public antlr4::ParserRuleContext {
  public:
    Class_field_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *Identifier();
    Access_modifierContext *access_modifier();
    antlr4::tree::TerminalNode *Static();
    Assignment_expressionContext *assignment_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_field_defContext* class_field_def();

  class  Class_method_defContext : public antlr4::ParserRuleContext {
  public:
    Class_method_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *Identifier();
    Type_argument_listContext *type_argument_list();
    StatementContext *statement();
    Access_modifierContext *access_modifier();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Override();
    std::vector<Fn_specifierContext *> fn_specifier();
    Fn_specifierContext* fn_specifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_method_defContext* class_method_def();

  class  Class_bodyContext : public antlr4::ParserRuleContext {
  public:
    Class_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_field_defContext *> class_field_def();
    Class_field_defContext* class_field_def(size_t i);
    std::vector<Class_method_defContext *> class_method_def();
    Class_method_defContext* class_method_def(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_bodyContext* class_body();

  class  Class_implementContext : public antlr4::ParserRuleContext {
  public:
    Class_implementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_implementContext* class_implement();

  class  Class_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Class_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Sealed();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_qualifierContext* class_qualifier();

  class  Class_declContext : public antlr4::ParserRuleContext {
  public:
    Class_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    Class_bodyContext *class_body();
    Access_modifierContext *access_modifier();
    Class_qualifierContext *class_qualifier();
    Class_implementContext *class_implement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_declContext* class_decl();

  class  Control_flow_stmtContext : public antlr4::ParserRuleContext {
  public:
    Control_flow_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    Primary_expressionContext *primary_expression();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Control_flow_stmtContext* control_flow_stmt();

  class  Switch_caseContext : public antlr4::ParserRuleContext {
  public:
    Switch_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    Primary_expressionContext *primary_expression();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Default();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_caseContext* switch_case();

  class  Switch_bodyContext : public antlr4::ParserRuleContext {
  public:
    Switch_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Switch_caseContext *> switch_case();
    Switch_caseContext* switch_case(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_bodyContext* switch_body();

  class  Switch_stmtContext : public antlr4::ParserRuleContext {
  public:
    Switch_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    ExpressionContext *expression();
    Switch_bodyContext *switch_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_stmtContext* switch_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  Do_while_stmtContext : public antlr4::ParserRuleContext {
  public:
    Do_while_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_while_stmtContext* do_while_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    ExpressionContext *expression();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  ForConditionContext : public antlr4::ParserRuleContext {
  public:
    ForConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForDeclarationContext *forDeclaration();
    std::vector<ForExpressionContext *> forExpression();
    ForExpressionContext* forExpression(size_t i);
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForConditionContext* forCondition();

  class  DeclarationSpecifiersContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationSpecifierContext *> declarationSpecifier();
    DeclarationSpecifierContext* declarationSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSpecifiersContext* declarationSpecifiers();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorContext *> initDeclarator();
    InitDeclaratorContext* initDeclarator(size_t i);


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

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_expressionContext *assignment_expression();
    InitializerListContext *initializerList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerContext *> initializer();
    InitializerContext* initializer(size_t i);
    std::vector<DesignationContext *> designation();
    DesignationContext* designation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();

  class  DesignationContext : public antlr4::ParserRuleContext {
  public:
    DesignationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DesignatorListContext *designatorList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignationContext* designation();

  class  DesignatorListContext : public antlr4::ParserRuleContext {
  public:
    DesignatorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DesignatorContext *> designator();
    DesignatorContext* designator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignatorListContext* designatorList();

  class  DesignatorContext : public antlr4::ParserRuleContext {
  public:
    DesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignatorContext* designator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    PointerContext *pointer();
    RefqualifierContext *refqualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_expressionContext *conditional_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  DeclarationSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_specifierContext *storage_specifier();
    Type_qualifierContext *type_qualifier();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSpecifierContext* declarationSpecifier();

  class  ForDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    InitDeclaratorListContext *initDeclaratorList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForDeclarationContext* forDeclaration();

  class  ForExpressionContext : public antlr4::ParserRuleContext {
  public:
    ForExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_expressionContext *> assignment_expression();
    Assignment_expressionContext* assignment_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForExpressionContext* forExpression();

  class  For_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    ForConditionContext *forCondition();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stmtContext* for_stmt();

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
    antlr4::tree::TerminalNode *Identifier();
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
    antlr4::tree::TerminalNode *Identifier();
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
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_bodyContext* enum_body();

  class  Enum_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Identifier();
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
    antlr4::tree::TerminalNode *Identifier();
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *Namespace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_declContext* using_decl();

  class  Namespace_declContext : public antlr4::ParserRuleContext {
  public:
    Namespace_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
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
    antlr4::tree::TerminalNode *Identifier();
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
    antlr4::tree::TerminalNode *Identifier();


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
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_declContext* use_decl();

  class  Compile_if_predicateContext : public antlr4::ParserRuleContext {
  public:
    Compile_if_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


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
    antlr4::tree::TerminalNode *Identifier();


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
    antlr4::tree::TerminalNode *Identifier();
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
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);


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
    antlr4::tree::TerminalNode *Identifier();
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

  class  Type_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Type_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_qualifierContext* type_qualifier();

  class  TypeQualifierListContext : public antlr4::ParserRuleContext {
  public:
    TypeQualifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_qualifierContext *> type_qualifier();
    Type_qualifierContext* type_qualifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQualifierListContext* typeQualifierList();

  class  PointerContext : public antlr4::ParserRuleContext {
  public:
    PointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeQualifierListContext *> typeQualifierList();
    TypeQualifierListContext* typeQualifierList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerContext* pointer();

  class  SpecifierQualifierListContext : public antlr4::ParserRuleContext {
  public:
    SpecifierQualifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsigned_specifierContext *unsigned_specifier();
    TypeContext *type();
    Type_qualifierContext *type_qualifier();
    SpecifierQualifierListContext *specifierQualifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecifierQualifierListContext* specifierQualifierList();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  AbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerContext *pointer();
    RefqualifierContext *refqualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecifierQualifierListContext *specifierQualifierList();
    AbstractDeclaratorContext *abstractDeclarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_specifierContext* type_specifier();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VdeclaratorContext *vdeclarator();
    Storage_specifierContext *storage_specifier();
    Var_decl_specifierContext *var_decl_specifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declContext* var_decl();

  class  VdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    VdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_specifierContext *> type_specifier();
    Type_specifierContext* type_specifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<Assignment_expressionContext *> assignment_expression();
    Assignment_expressionContext* assignment_expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VdeclaratorContext* vdeclarator();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

