grammar CtcLang;

// Parser

// $antlr-format alignTrailingComments true, columnLimit 150, minEmptyLines 1, maxEmptyLinesToKeep 1, reflowComments false, useTab false
// $antlr-format allowShortRulesOnASingleLine false, allowShortBlocksOnASingleLine true, alignSemicolons hanging, alignColons hanging

translationUnit
    : declarationseq? EOF
    ;

/*Expressions*/

primaryExpression
    : literal+
    | This
    | LeftParen expression RightParen
    | idExpression
    | lambdaExpression
    ;

idExpression
    : unqualifiedId
    | qualifiedId
    ;

unqualifiedId
    : Identifier
    | operatorFunctionId
    | conversionFunctionId
    | literalOperatorId
    | Tilde (className | decltypeSpecifier)
    | templateId
    ;

qualifiedId
    : nestedNameSpecifier Template? unqualifiedId
    ;

nestedNameSpecifier
    : (theTypeName | namespaceName | decltypeSpecifier)? Doublecolon
    | nestedNameSpecifier ( Identifier | Template? simpleTemplateId) Doublecolon
    ;

lambdaExpression
    : lambdaIntroducer lambdaDeclarator? compoundStatement
    ;

lambdaIntroducer
    : LeftBracket lambdaCapture? RightBracket
    ;

lambdaCapture
    : captureList
    | captureDefault (Comma captureList)?
    ;

captureDefault
    : And
    | Assign
    ;

captureList
    : capture (Comma capture)* Ellipsis?
    ;

capture
    : simpleCapture
    | initcapture
    ;

simpleCapture
    : And? Identifier
    | This
    ;

initcapture
    : And? Identifier initializer
    ;

lambdaDeclarator
    : LeftParen parameterDeclarationClause? RightParen Mutable? exceptionSpecification? attributeSpecifierSeq? trailingReturnType?
    ;

postfixExpression
    : primaryExpression
    | postfixExpression LeftBracket (expression | bracedInitList) RightBracket
    | postfixExpression LeftParen expressionList? RightParen
    | (simpleTypeSpecifier | typeNameSpecifier) (
        LeftParen expressionList? RightParen
        | bracedInitList
    )
    | postfixExpression (Dot | Arrow) (Template? idExpression | pseudoDestructorName)
    | postfixExpression (PlusPlus | MinusMinus)
    | (Bit_cast | Dynamic_cast | Static_cast | Reinterpret_cast | Const_cast) Less theTypeId Greater LeftParen expression RightParen
    | typeIdOfTheTypeId LeftParen (expression | theTypeId) RightParen
    ;

/*
 add a middle layer to eliminate duplicated function declarations
 */

typeIdOfTheTypeId
    : Typeid_
    ;

expressionList
    : initializerList
    ;

pseudoDestructorName
    : nestedNameSpecifier? (theTypeName Doublecolon)? Tilde theTypeName
    | nestedNameSpecifier Template simpleTemplateId Doublecolon Tilde theTypeName
    | Tilde decltypeSpecifier
    ;

unaryExpression
    : postfixExpression
    | (PlusPlus | MinusMinus | unaryOperator | Sizeof) unaryExpression
    | Sizeof (LeftParen theTypeId RightParen | Ellipsis LeftParen Identifier RightParen)
    | Alignof LeftParen theTypeId RightParen
    | noExceptExpression
    | newExpression_
    | deleteExpression
    ;

unaryOperator
    : Or
    | Star
    | And
    | Plus
    | Tilde
    | Minus
    | Not
    ;

newExpression_
    : Doublecolon? New newPlacement? (newTypeId | LeftParen theTypeId RightParen) newInitializer_?
    ;

newPlacement
    : LeftParen expressionList RightParen
    ;

newTypeId
    : typeSpecifierSeq newDeclarator_?
    ;

newDeclarator_
    : pointerOperator newDeclarator_?
    | noPointerNewDeclarator
    ;

noPointerNewDeclarator
    : LeftBracket expression RightBracket attributeSpecifierSeq?
    | noPointerNewDeclarator LeftBracket constantExpression RightBracket attributeSpecifierSeq?
    ;

newInitializer_
    : LeftParen expressionList? RightParen
    | bracedInitList
    ;

deleteExpression
    : Doublecolon? Delete (LeftBracket RightBracket)? castExpression
    ;

noExceptExpression
    : Noexcept LeftParen expression RightParen
    ;

castExpression
    : unaryExpression
    | LeftParen theTypeId RightParen castExpression
    ;

pointerMemberExpression
    : castExpression ((DotStar | ArrowStar) castExpression)*
    ;

multiplicativeExpression
    : pointerMemberExpression ((Star | Div | Mod) pointerMemberExpression)*
    ;

additiveExpression
    : multiplicativeExpression ((Plus | Minus) multiplicativeExpression)*
    ;

shiftExpression
    : additiveExpression (shiftOperator additiveExpression)*
    ;

shiftOperator
    : Greater Greater
    | Less Less
    ;

relationalExpression
    : shiftExpression ((Less | Greater | LessEqual | GreaterEqual) shiftExpression)*
    ;

equalityExpression
    : relationalExpression ((Equal | NotEqual) relationalExpression)*
    ;

andExpression
    : equalityExpression (And equalityExpression)*
    ;

exclusiveOrExpression
    : andExpression (Caret andExpression)*
    ;

inclusiveOrExpression
    : exclusiveOrExpression (Or exclusiveOrExpression)*
    ;

logicalAndExpression
    : inclusiveOrExpression (AndAnd inclusiveOrExpression)*
    ;

logicalOrExpression
    : logicalAndExpression (OrOr logicalAndExpression)*
    ;

conditionalExpression
    : logicalOrExpression (Question expression Colon assignmentExpression)?
    ;

assignmentExpression
    : conditionalExpression
    | logicalOrExpression assignmentOperator initializerClause
    | throwExpression
    ;

assignmentOperator
    : Assign
    | StarAssign
    | DivAssign
    | ModAssign
    | PlusAssign
    | MinusAssign
    | RightShiftAssign
    | LeftShiftAssign
    | AndAssign
    | XorAssign
    | OrAssign
    ;

expression
    : assignmentExpression (Comma assignmentExpression)*
    ;

constantExpression
    : conditionalExpression
    ;

/*Statements*/

statement
    : labeledStatement
    | declarationStatement
    | attributeSpecifierSeq? (
        expressionStatement
        | compoundStatement
        | selectionStatement
        | iterationStatement
        | jumpStatement
        | tryBlock
    )
    ;

labeledStatement
    : attributeSpecifierSeq? (Identifier | Case constantExpression | Default) Colon statement
    ;

expressionStatement
    : expression? Semi
    ;

compoundStatement
    : LeftBrace statementSeq? RightBrace
    ;

statementSeq
    : statement+
    ;

selectionStatement
    : If LeftParen condition RightParen statement (Else statement)?
    | Switch LeftParen condition RightParen statement
    ;

condition
    : expression
    | attributeSpecifierSeq? declSpecifierSeq declarator (
        Assign initializerClause
        | bracedInitList
    )
    ;

iterationStatement
    : While LeftParen condition RightParen statement
    | Do statement While LeftParen expression RightParen Semi
    | For LeftParen (
        forInitStatement condition? Semi expression?
        | forRangeDeclaration Colon forRangeInitializer
    ) RightParen statement
    ;

forInitStatement
    : expressionStatement
    | simpleDeclaration
    ;

forRangeDeclaration
    : attributeSpecifierSeq? declSpecifierSeq declarator
    ;

forRangeInitializer
    : expression
    | bracedInitList
    ;

jumpStatement
    : (Break | Continue | Return (expression | bracedInitList)? | Goto Identifier) Semi
    ;

declarationStatement
    : blockDeclaration
    ;

/*Declarations*/

declarationseq
    : declaration+
    ;

declaration
    : blockDeclaration
    | functionDefinition
    | templateDeclaration
    | explicitInstantiation
    | explicitSpecialization
    | linkageSpecification
    | moduleDefinition
    | namespaceDefinition
    | emptyDeclaration_
    | attributeDeclaration
    ;

blockDeclaration
    : simpleDeclaration
    | asmDefinition
    | namespaceAliasDefinition
    | usingDeclaration
    | usingDirective
    | usingModuleDirective
    | staticAssertDeclaration
    | aliasDeclaration
    | opaqueEnumDeclaration
    ;

moduleDefinition
    :
      Module Identifier Semi
    ;

aliasDeclaration
    : Using Identifier attributeSpecifierSeq? Assign theTypeId Semi
    ;

simpleDeclaration
    : declSpecifierSeq? initDeclaratorList? Semi
    | attributeSpecifierSeq declSpecifierSeq? initDeclaratorList Semi
    ;

staticAssertDeclaration
    : Static_assert LeftParen constantExpression Comma StringLiteral RightParen Semi
    ;

emptyDeclaration_
    : Semi
    ;

attributeDeclaration
    : attributeSpecifierSeq Semi
    ;

declSpecifier
    : storageClassSpecifier
    | typeSpecifier
    | functionSpecifier
    | virtualSpecifierSeq
    | Constexpr
    ;

declSpecifierSeq
    : declSpecifier+? attributeSpecifierSeq?
    ;

storageClassSpecifier
    : Static
    | Thread_local
    | Extern
    | Internal
    ;

functionSpecifier
    : Inline
    | Virtual
    | Explicit
    ;

typedefName
    : Identifier
    ;

typeSpecifier
    : trailingTypeSpecifier
    | classSpecifier
    | interfaceSpecifier
    | recordSpecifier
    | enumSpecifier
    ;

trailingTypeSpecifier
    : simpleTypeSpecifier
    | elaboratedTypeSpecifier
    | typeNameSpecifier
    | cvQualifier
    ;

typeSpecifierSeq
    : typeSpecifier+ attributeSpecifierSeq?
    ;

trailingTypeSpecifierSeq
    : trailingTypeSpecifier+ attributeSpecifierSeq?
    ;

simpleTypeSignednessModifier
    : Unsigned
    | Signed
    ;

simpleTypeSpecifier
    : nestedNameSpecifier? theTypeName
    | nestedNameSpecifier Template simpleTemplateId
    | Char
    | Char16
    | Char32
    | Wchar
    | Bool
    | Short
    | Int
    | Long
    | Float
    | Signed
    | Unsigned
    | Float
    | Double
    | Void
    | Auto
    | decltypeSpecifier
    ;

theTypeName
    : className
    | enumName
    | typedefName
    | simpleTemplateId
    ;

decltypeSpecifier
    : Decltype LeftParen (expression | Auto) RightParen
    ;

elaboratedTypeSpecifier
    : classKey (
        attributeSpecifierSeq? nestedNameSpecifier? Identifier
        | simpleTemplateId
        | nestedNameSpecifier Template? simpleTemplateId
    )
    | Enum nestedNameSpecifier? Identifier
    ;

enumName
    : Identifier
    ;

enumSpecifier
    : enumHead LeftBrace (enumeratorList Comma?)? RightBrace
    ;

enumHead
    : enumkey attributeSpecifierSeq? (nestedNameSpecifier? Identifier)? enumbase?
    ;

opaqueEnumDeclaration
    : enumkey attributeSpecifierSeq? Identifier enumbase? Semi
    ;

enumkey
    : Enum (Class | Struct)?
    ;

enumbase
    : Colon typeSpecifierSeq
    ;

enumeratorList
    : enumeratorDefinition (Comma enumeratorDefinition)*
    ;

enumeratorDefinition
    : enumerator (Assign constantExpression)?
    ;

enumerator
    : Identifier
    ;

namespaceName
    : originalNamespaceName
    | namespaceAlias
    ;

originalNamespaceName
    : Identifier
    ;

namespaceDefinition
    : Inline? Namespace (Identifier | originalNamespaceName)? LeftBrace namespaceBody = declarationseq? RightBrace
    ;

namespaceAlias
    : Identifier
    ;

namespaceAliasDefinition
    : Namespace Identifier Assign qualifiednamespacespecifier Semi
    ;

qualifiednamespacespecifier
    : nestedNameSpecifier? namespaceName
    ;

usingDeclaration
    : Using (Typename_? nestedNameSpecifier | Doublecolon) unqualifiedId Semi
    ;

usingDirective
    : attributeSpecifierSeq? Using Namespace nestedNameSpecifier? namespaceName Semi
    ;

usingModuleDirective
    :
      Using Module namespaceName Semi
    ;

asmDefinition
    : Asm LeftParen StringLiteral RightParen Semi
    | AsmMSVC LeftBrace StringLiteral RightBrace Semi
    ;

linkageSpecification
    : Extern StringLiteral (LeftBrace declarationseq? RightBrace | declaration)
    ;

attributeSpecifierSeq
    : attributeSpecifier+
    ;

attributeSpecifier
    : LeftBracket LeftBracket attributeList? RightBracket RightBracket
    | alignmentspecifier
    ;

alignmentspecifier
    : Alignas LeftParen (theTypeId | constantExpression) Ellipsis? RightParen
    ;

attributeList
    : attribute (Comma attribute)* Ellipsis?
    ;

attribute
    : (attributeNamespace Doublecolon)? Identifier attributeArgumentClause?
    ;

attributeNamespace
    : Identifier
    ;

attributeArgumentClause
    : LeftParen balancedTokenSeq? RightParen
    ;

balancedTokenSeq
    : balancedtoken+
    ;

balancedtoken
    : LeftParen balancedTokenSeq RightParen
    | LeftBracket balancedTokenSeq RightBracket
    | LeftBrace balancedTokenSeq RightBrace
    | ~(LeftParen | RightParen | LeftBrace | RightBrace | LeftBracket | RightBracket)+
    ;

/*Declarators*/

initDeclaratorList
    : initDeclarator (Comma initDeclarator)*
    ;

initDeclarator
    : declarator initializer?
    ;

declarator
    : pointerDeclarator
    | noPointerDeclarator parametersAndQualifiers trailingReturnType
    ;

pointerDeclarator
    : (pointerOperator Const?)* noPointerDeclarator
    ;

noPointerDeclarator
    : declaratorid attributeSpecifierSeq?
    | noPointerDeclarator (
        parametersAndQualifiers
        | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | LeftParen pointerDeclarator RightParen
    ;

parametersAndQualifiers
    : LeftParen parameterDeclarationClause? RightParen cvqualifierseq? refqualifier? exceptionSpecification? attributeSpecifierSeq?
    ;

trailingReturnType
    : Arrow trailingTypeSpecifierSeq abstractDeclarator?
    ;

pointerOperator
    : (And | AndAnd) attributeSpecifierSeq?
    | nestedNameSpecifier? Star attributeSpecifierSeq? cvqualifierseq?
    ;

cvqualifierseq
    : cvQualifier+
    ;

cvQualifier
    : Const
    | Volatile
    ;

refqualifier
    : And
    | AndAnd
    ;

declaratorid
    : Ellipsis? idExpression
    ;

theTypeId
    : typeSpecifierSeq abstractDeclarator?
    ;

abstractDeclarator
    : pointerAbstractDeclarator
    | noPointerAbstractDeclarator? parametersAndQualifiers trailingReturnType
    | abstractPackDeclarator
    ;

pointerAbstractDeclarator
    : noPointerAbstractDeclarator
    | pointerOperator+ noPointerAbstractDeclarator?
    ;

noPointerAbstractDeclarator
    : noPointerAbstractDeclarator (
        parametersAndQualifiers
        | noPointerAbstractDeclarator LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | parametersAndQualifiers
    | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    | LeftParen pointerAbstractDeclarator RightParen
    ;

abstractPackDeclarator
    : pointerOperator* noPointerAbstractPackDeclarator
    ;

noPointerAbstractPackDeclarator
    : noPointerAbstractPackDeclarator (
        parametersAndQualifiers
        | LeftBracket constantExpression? RightBracket attributeSpecifierSeq?
    )
    | Ellipsis
    ;

parameterDeclarationClause
    : parameterDeclarationList (Comma? Ellipsis)?
    ;

parameterDeclarationList
    : parameterDeclaration (Comma parameterDeclaration)*
    ;

parameterDeclaration
    : attributeSpecifierSeq? declSpecifierSeq (declarator | abstractDeclarator?) (
        Assign initializerClause
    )?
    ;

functionDefinition
    : attributeSpecifierSeq? declSpecifierSeq? declarator functionBody
    ;

functionBody
    : constructorInitializer? compoundStatement
    | functionTryBlock
    | Assign (Default | Delete) Semi
    ;

initializer
    : braceOrEqualInitializer
    | LeftParen expressionList RightParen
    ;

braceOrEqualInitializer
    : Assign initializerClause
    | bracedInitList
    ;

initializerClause
    : assignmentExpression
    | bracedInitList
    ;

initializerList
    : initializerClause Ellipsis? (Comma initializerClause Ellipsis?)*
    ;

bracedInitList
    : LeftBrace ( (initializerList | Dot? Identifier Assign initializerClause) Comma?)? RightBrace
    ;

/* Interfaces */

interfaceHead
    :
        accessSpecifier? Interface classHeadName
    ;

interfaceSpecifier
    :
        interfaceHead LeftBrace (interfaceMemberSpecification+)? RightBrace
    ;


interfacefunctionDefinition
    : attributeSpecifierSeq? declSpecifierSeq? declarator pureSpecifier? Semi
    ;


interfaceMemberSpecification:
    accessSpecifier? interfacefunctionDefinition
    ;

/* Records */

recordKey: (Struct | Record);

recordHead
    :
        accessSpecifier? recordKey classHeadName 
    ;

recordSpecifier
    :
        recordHead LeftBrace (recordMemberSpecification+)? RightBrace
    ;

recordMemberSpecification
    : attributeSpecifierSeq? declSpecifierSeq? recordMemberDeclaratorList? Semi
    | templateDeclaration
    | emptyDeclaration_
    ;

recordMemberDeclaratorList
    :
        declarator        
    ;

/*Classes*/

className
    : Identifier
    | simpleTemplateId
    ;

classSpecifier
    : classHead LeftBrace memberSpecification? RightBrace
    ;

classHead
    : accessSpecifier? classKey attributeSpecifierSeq? (classHeadName classVirtSpecifier?)? baseClause?
    ;

classHeadName
    : nestedNameSpecifier? className
    ;

classVirtSpecifier
    : Final
    ;

classKey
    : Class
    ;

memberSpecification
    : (memberdeclaration)+
    ;

memberdeclaration
    : accessSpecifier? attributeSpecifierSeq? declSpecifierSeq? memberDeclaratorList? Semi
    | accessSpecifier? functionDefinition
    | accessSpecifier? usingDeclaration
    | staticAssertDeclaration
    | (accessSpecifier Colon)?  templateDeclaration
    | aliasDeclaration
    | emptyDeclaration_
    ;

memberDeclaratorList
    : memberDeclarator (Comma memberDeclarator)*
    ;

memberDeclarator
    : declarator (
        pureSpecifier
        | braceOrEqualInitializer
    )
    | declarator
    | Identifier? attributeSpecifierSeq? Colon constantExpression
    ;

virtualSpecifierSeq
    : virtualSpecifier+
    ;

virtualSpecifier
    : Override
    | Final
    ;

/*
 purespecifier: Assign '0'//Conflicts with the lexer ;
 */

pureSpecifier
    : Assign IntegerLiteral
    ;

/*Derived classes*/

baseClause
    : Colon baseSpecifierList
    ;

baseSpecifierList
    : baseSpecifier Ellipsis? (Comma baseSpecifier Ellipsis?)*
    ;

baseSpecifier
    : attributeSpecifierSeq? (
        baseTypeSpecifier
        | Virtual accessSpecifier? baseTypeSpecifier
        | accessSpecifier Virtual? baseTypeSpecifier
    )
    ;

classOrDeclType
    : nestedNameSpecifier? className
    | decltypeSpecifier
    ;

baseTypeSpecifier
    : classOrDeclType
    ;

accessSpecifier
    : Private
    | Protected
    | Public
    ;

/*Special member functions*/

conversionFunctionId
    : Operator conversionTypeId
    ;

conversionTypeId
    : typeSpecifierSeq conversionDeclarator?
    ;

conversionDeclarator
    : pointerOperator conversionDeclarator?
    ;

constructorInitializer
    : Colon memInitializerList
    ;

memInitializerList
    : memInitializer Ellipsis? (Comma memInitializer Ellipsis?)*
    ;

memInitializer
    : meminitializerid (LeftParen expressionList? RightParen | bracedInitList)
    ;

meminitializerid
    : classOrDeclType
    | Identifier
    ;

/*Overloading*/

operatorFunctionId
    : Operator theOperator
    ;

literalOperatorId
    : Operator (StringLiteral Identifier | UserDefinedStringLiteral)
    ;

/*Templates*/

templateDeclaration
    : Template Less templateparameterList Greater declaration
    ;

templateparameterList
    : templateParameter (Comma templateParameter)*
    ;

templateParameter
    : typeParameter
    | parameterDeclaration
    ;

typeParameter
    : ((Template Less templateparameterList Greater)? Class | Typename_) (
        Ellipsis? Identifier?
        | Identifier? Assign theTypeId
    )
    ;

simpleTemplateId
    : templateName Less templateArgumentList? Greater
    ;

templateId
    : simpleTemplateId
    | (operatorFunctionId | literalOperatorId) Less templateArgumentList? Greater
    ;

templateName
    : Identifier
    ;

templateArgumentList
    : accessSpecifier? templateArgument Ellipsis? (Comma accessSpecifier? templateArgument Ellipsis?)*
    ;

templateArgument
    : theTypeId
    | constantExpression
    | idExpression
    ;

typeNameSpecifier
    : Typename_ nestedNameSpecifier (Identifier | Template? simpleTemplateId)
    ;

explicitInstantiation
    : Extern? Template declaration
    ;

explicitSpecialization
    : Template Less Greater declaration
    ;

/*Exception handling*/

tryBlock
    : Try compoundStatement handlerSeq
    ;

functionTryBlock
    : Try constructorInitializer? compoundStatement handlerSeq
    ;

handlerSeq
    : handler+
    ;

handler
    : Catch LeftParen exceptionDeclaration RightParen compoundStatement
    ;

exceptionDeclaration
    : attributeSpecifierSeq? typeSpecifierSeq (declarator | abstractDeclarator)?
    | Ellipsis
    ;

throwExpression
    : Throw assignmentExpression?
    ;

exceptionSpecification
    : dynamicExceptionSpecification
    | noeExceptSpecification
    ;

dynamicExceptionSpecification
    : Throw LeftParen typeIdList? RightParen
    ;

typeIdList
    : theTypeId Ellipsis? (Comma theTypeId Ellipsis?)*
    ;

noeExceptSpecification
    : Noexcept LeftParen constantExpression RightParen
    | Noexcept
    ;

/*Preprocessing directives*/

/*Lexer*/

theOperator
    : New (LeftBracket RightBracket)?
    | Delete (LeftBracket RightBracket)?
    | Plus
    | Minus
    | Star
    | Div
    | Mod
    | Caret
    | And
    | Or
    | Tilde
    | Not
    | Assign
    | Greater
    | Less
    | GreaterEqual
    | PlusAssign
    | MinusAssign
    | StarAssign
    | ModAssign
    | XorAssign
    | AndAssign
    | OrAssign
    | Less Less
    | Greater Greater
    | RightShiftAssign
    | LeftShiftAssign
    | Equal
    | NotEqual
    | LessEqual
    | AndAnd
    | OrOr
    | PlusPlus
    | MinusMinus
    | Comma
    | ArrowStar
    | Arrow
    | LeftParen RightParen
    | LeftBracket RightBracket
    ;

literal
    : IntegerLiteral
    | CharacterLiteral
    | FloatingLiteral
    | StringLiteral
    | BooleanLiteral
    | PointerLiteral
    | UserDefinedLiteral
    ;

// Lexer

IntegerLiteral:
    DecimalLiteral Integersuffix?
    | OctalLiteral Integersuffix?
    | HexadecimalLiteral Integersuffix?
    | BinaryLiteral Integersuffix?
;

CharacterLiteral: ('u' | 'U' | 'L')? '\'' Cchar+ '\'';

FloatingLiteral:
    Fractionalconstant Exponentpart? Floatingsuffix?
    | Digitsequence Exponentpart Floatingsuffix?
;

StringLiteral: Encodingprefix? (Rawstring | '"' Schar* '"');

BooleanLiteral: False_ | True_;

PointerLiteral: Nullptr;

UserDefinedLiteral:
    UserDefinedIntegerLiteral
    | UserDefinedFloatingLiteral
    | UserDefinedStringLiteral
    | UserDefinedCharacterLiteral
;

MultiLineMacro: '#' (~[\n]*? '\\' '\r'? '\n')+ ~ [\n]+ -> channel (HIDDEN);

Directive: '#' ~ [\n]* -> channel (HIDDEN);
/*Keywords*/

Alignas: 'alignas';

Alignof: 'alignof';

AsmMSVC: '__asm__';

Asm: 'asm';

Auto: 'auto';

Bool: 'bool';

Break: 'break';

Case: 'case';

Catch: 'catch';

Char: 'char';

Char16: 'char16_t';

Char32: 'char32_t';

Class: 'class';

Const: 'const';

Constexpr: 'constexpr';

Const_cast: 'const_cast';

Bit_cast: 'bit_cast';

Continue: 'continue';

Decltype: 'decltype';

Default: 'default';

Delete: 'delete';

Do: 'do';

Double: 'double';

Dynamic_cast: 'dynamic_cast';

Else: 'else';

Enum: 'enum';

Explicit: 'explicit';

Export: 'export';

Extern: 'extern';

Internal: 'internal';

//DO NOT RENAME - PYTHON NEEDS True and False
False_: 'false';

Final: 'final';

Float: 'float';

For: 'for';

Goto: 'goto';

If: 'if';

Inline: 'inline';

Int: 'int';

Long: 'long';

Mutable: 'mutable';

Namespace: 'namespace';

New: 'new';

Noexcept: 'noexcept';

Nullptr: 'nullptr';

Operator: 'operator';

Override: 'override';

Private: 'private';

Protected: 'protected';

Public: 'public';

Interface: 'interface';

Reinterpret_cast: 'reinterpret_cast';

Return: 'return';

Short: 'short';

Signed: 'signed';

Sizeof: 'sizeof';

Static: 'static';

Static_assert: 'static_assert';

Static_cast: 'static_cast';

Record: 'record';

Struct: 'struct';

Switch: 'switch';

Template: 'template';

This: 'this';

Thread_local: 'thread_local';

Throw: 'throw';

//DO NOT RENAME - PYTHON NEEDS True and False
True_: 'true';

Try: 'try';

Typeid_: 'typeid';

Typename_: 'typename';

Unsigned: 'unsigned';

Using: 'using';

Module: 'module';

Virtual: 'virtual';

Void: 'void';

Volatile: 'volatile';

Wchar: 'wchar_t';

While: 'while';
/*Operators*/

LeftParen: '(';

RightParen: ')';

LeftBracket: '[';

RightBracket: ']';

LeftBrace: '{';

RightBrace: '}';

Plus: '+';

Minus: '-';

Star: '*';

Div: '/';

Mod: '%';

Pipe: '|>';

Caret: '^';

And: '&';

Or: '|';

Tilde: '~';

Not: '!' | 'not';

Assign: '=';

Less: '<';

Greater: '>';

PlusAssign: '+=';

MinusAssign: '-=';

StarAssign: '*=';

DivAssign: '/=';

ModAssign: '%=';

XorAssign: '^=';

AndAssign: '&=';

OrAssign: '|=';

LeftShiftAssign: '<<=';

RightShiftAssign: '>>=';

Equal: '==';

NotEqual: '!=';

LessEqual: '<=';

GreaterEqual: '>=';

AndAnd: '&&' | 'and';

OrOr: '||' | 'or';

PlusPlus: '++';

MinusMinus: '--';

Comma: ',';

ArrowStar: '->*';

Arrow: '->';

Question: '?';

Colon: ':';

Doublecolon: '::';

Semi: ';';

Dot: '.';

DotStar: '.*';

Ellipsis: '...';

fragment Hexquad: HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT;

fragment Universalcharactername: '\\u' Hexquad | '\\U' Hexquad Hexquad;

Identifier:
    /*
	 Identifiernondigit | Identifier Identifiernondigit | Identifier DIGIT
	 */ Identifiernondigit (Identifiernondigit | DIGIT)*
;

fragment Identifiernondigit: NONDIGIT | Universalcharactername;

fragment NONDIGIT: [a-zA-Z_];

fragment DIGIT: [0-9];

DecimalLiteral: NONZERODIGIT ('\''? DIGIT)*;

OctalLiteral: '0' ('\''? OCTALDIGIT)*;

HexadecimalLiteral: ('0x' | '0X') HEXADECIMALDIGIT ( '\''? HEXADECIMALDIGIT)*;

BinaryLiteral: ('0b' | '0B') BINARYDIGIT ('\''? BINARYDIGIT)*;

fragment NONZERODIGIT: [1-9];

fragment OCTALDIGIT: [0-7];

fragment HEXADECIMALDIGIT: [0-9a-fA-F];

fragment BINARYDIGIT: [01];

Integersuffix:
    Unsignedsuffix Longsuffix?
    | Unsignedsuffix Longlongsuffix?
    | Longsuffix Unsignedsuffix?
    | Longlongsuffix Unsignedsuffix?
;

fragment Unsignedsuffix: [uU];

fragment Longsuffix: [lL];

fragment Longlongsuffix: 'll' | 'LL';

fragment Cchar: ~ ['\\\r\n] | Escapesequence | Universalcharactername;

fragment Escapesequence: Simpleescapesequence | Octalescapesequence | Hexadecimalescapesequence;

fragment Simpleescapesequence:
    '\\\''
    | '\\"'
    | '\\?'
    | '\\\\'
    | '\\a'
    | '\\b'
    | '\\f'
    | '\\n'
    | '\\r'
    | '\\' ('\r' '\n'? | '\n')
    | '\\t'
    | '\\v'
;

fragment Octalescapesequence:
    '\\' OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT OCTALDIGIT
;

fragment Hexadecimalescapesequence: '\\x' HEXADECIMALDIGIT+;

fragment Fractionalconstant: Digitsequence? '.' Digitsequence | Digitsequence '.';

fragment Exponentpart: 'e' SIGN? Digitsequence | 'E' SIGN? Digitsequence;

fragment SIGN: [+-];

fragment Digitsequence: DIGIT ('\''? DIGIT)*;

fragment Floatingsuffix: [flFL];

fragment Encodingprefix: 'u8' | 'u' | 'U' | 'L';

fragment Schar: ~ ["\\\r\n] | Escapesequence | Universalcharactername;

fragment Rawstring: 'R"' ( '\\' ["()] | ~[\r\n (])*? '(' ~[)]*? ')' ( '\\' ["()] | ~[\r\n "])*? '"';

UserDefinedIntegerLiteral:
    DecimalLiteral Udsuffix
    | OctalLiteral Udsuffix
    | HexadecimalLiteral Udsuffix
    | BinaryLiteral Udsuffix
;

UserDefinedFloatingLiteral:
    Fractionalconstant Exponentpart? Udsuffix
    | Digitsequence Exponentpart Udsuffix
;

UserDefinedStringLiteral: StringLiteral Udsuffix;

UserDefinedCharacterLiteral: CharacterLiteral Udsuffix;

fragment Udsuffix: Identifier;

Whitespace: [ \t]+ -> skip;

Newline: ('\r' '\n'? | '\n') -> skip;

BlockComment: '/*' .*? '*/' -> skip;

LineComment: '//' ~ [\r\n]* -> skip;
