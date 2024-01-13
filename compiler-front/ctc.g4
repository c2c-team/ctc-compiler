grammar ctc;

main: statement EOF;

statement: (asm_def | class_decl | control_flow_stmt | switch_stmt | if_stmt | do_while_stmt | while_stmt | for_stmt | interface_decl | enum_decl | using_decl | namespace_decl | cctp_decl | var_decl | fn_decl | use_decl )* ;

asm_body:
    '{' ~( '}' )* '}'
    ;

asm_def:
    Asm (Att | Intel)? Volatile? asm_body ';'?
    ;

class_field_def:
    access_modifier? Static? type_specifier Identifier ('=' assignment_expression)? ';'
    ;

class_method_def:
    access_modifier? Static? Override? type_specifier Identifier '(' type_argument_list ')' fn_specifier* '{' statement '}'
    ;

class_body:
    '{' (class_field_def | class_method_def)* '}'
    ;

class_implement:
    ':' Identifier (',' Identifier)*
    ;

class_qualifier:
    Sealed
    ;

class_decl:
    access_modifier? class_qualifier? Class Identifier class_implement? class_body ';'?
    ;

control_flow_stmt:
    Return primary_expression? ';'
    | Break ';'
    | Continue ';'
    ;

switch_case:
    Case primary_expression ':' (statement)?
    | Default ':' statement
    ;

switch_body:
    '{' switch_case* '}' 
    ;

switch_stmt:
    Switch '(' expression ')' switch_body
    ;

if_stmt:
    If '(' expression ')' '{' statement '}' (Else '{' statement '}' )?
    ;

do_while_stmt:
    Do '{' statement '}' While '(' expression ')' ';'
    ;

while_stmt:
    While '(' expression ')' '{' statement '}'
    ;

forCondition
    : (forDeclaration | expression?) ';' forExpression? ';' forExpression?
    ;

declarationSpecifiers
    : declarationSpecifier+
    ;

initDeclaratorList
    : initDeclarator (',' initDeclarator)*
    ;

initDeclarator
    : declarator ('=' initializer)?
    ;

initializer
    : assignment_expression
    | '{' initializerList ','? '}'
    ;

initializerList
    : designation? initializer (',' designation? initializer)*
    ;

designation
    : designatorList '='
    ;

designatorList
    : designator+
    ;

designator
    : '[' constantExpression ']'
    | '.' Identifier
    ;

declarator
    : (pointer | refqualifier)? Identifier
    ;

constantExpression
    : conditional_expression
    ;

declarationSpecifier
    : storage_specifier
    | type_qualifier
    | type
    ;

forDeclaration
    : declarationSpecifiers initDeclaratorList?
    ;

forExpression
    : assignment_expression (',' assignment_expression)*
    ;

for_stmt:
    For '(' forCondition ')' '{' statement '}' 
    ;

access_modifier:
    Public
    | Private
    ;


interface_element:
    access_modifier storage_specifier? type_specifier Identifier '(' type_argument_list ')' fn_specifier* ';'
    ;

interface_body:
    interface_element*
    ;

interface_decl:
    Interface Identifier '{' interface_body '}' ';'?
    ;

enum_modifier:
    Class
    ;

enum_body:
    Identifier (',' Identifier)*
    ;

enum_decl:
    Enum enum_modifier? Identifier '{' enum_body '}' ';'?
    ;

using_decl:
    Using
    
    (Identifier ';'
    | Identifier '=' type_specifier ';'
    | 'namespace' Identifier ';'
    ) 
    ;

namespace_decl:
    Namespace Identifier '{' statement '}'
    | 'namespace' Identifier ';'
    ;

fn_specifier:
    Inline
    | Noexcept
    ;

fn_decl:
    storage_specifier? type_specifier Identifier '(' type_argument_list ')' fn_specifier* '{' statement '}'
    | storage_specifier? type_specifier Identifier '(' type_argument_list ')' fn_specifier* ';' // Forward Declaration
    ;

type_argument:
    type Identifier? 
    ;

type_argument_list:
    type_argument (',' type_argument)*
    ;

argumentExpressionList
    : assignment_expression (',' assignment_expression)*
    ;

use_decl:
    Use Identifier ';'
    ;

compile_if_predicate:
    Identifier
    | '!' Identifier
    ;

cctp_decl:
    Compile_if '<' compile_if_predicate '>' '{' statement '}'
    ;

storage_specifier:
    Static
    | Extern
    ;

var_decl_specifier:
    Constexpr
    | Consteval
    ;

lambda_body:
    '{' statement '}'
    ;

lambda_capture_modifier:
    '&' Identifier 
    | Identifier
    | 'this'
    ;

lambda_capture_by:
    '[' lambda_capture_modifier (',' lambda_capture_modifier)* ']'
    ;

lambda_expression:
    'fun' lambda_capture_by '(' type_argument_list ')' lambda_body
    ;

constant
    : IntegerConstant
    | FloatingConstant
    //|   EnumerationConstant
    | CharacterConstant
    ;

fragment IntegerConstant
    : DecimalConstant IntegerSuffix?
    | OctalConstant IntegerSuffix?
    | HexadecimalConstant IntegerSuffix?
    | BinaryConstant
    ;

fragment BinaryConstant
    : '0' [bB] [0-1]+
    ;

fragment DecimalConstant
    : NonzeroDigit Digit*
    ;

fragment OctalConstant
    : '0' OctalDigit*
    ;

fragment HexadecimalConstant
    : HexadecimalPrefix HexadecimalDigit+
    ;

fragment HexadecimalPrefix
    : '0' [xX]
    ;

fragment NonzeroDigit
    : [1-9]
    ;

fragment OctalDigit
    : [0-7]
    ;

fragment HexadecimalDigit
    : [0-9a-fA-F]
    ;

fragment IntegerSuffix
    : UnsignedSuffix LongSuffix?
    | UnsignedSuffix LongLongSuffix
    | LongSuffix UnsignedSuffix?
    | LongLongSuffix UnsignedSuffix?
    ;

fragment UnsignedSuffix
    : [uU]
    ;

fragment LongSuffix
    : [lL]
    ;

fragment LongLongSuffix
    : 'll'
    | 'LL'
    ;

fragment FloatingConstant
    : DecimalFloatingConstant
    | HexadecimalFloatingConstant
    ;

fragment DecimalFloatingConstant
    : FractionalConstant ExponentPart? FloatingSuffix?
    | DigitSequence ExponentPart FloatingSuffix?
    ;

fragment HexadecimalFloatingConstant
    : HexadecimalPrefix (HexadecimalFractionalConstant | HexadecimalDigitSequence) BinaryExponentPart FloatingSuffix?
    ;

fragment FractionalConstant
    : DigitSequence? '.' DigitSequence
    | DigitSequence '.'
    ;

fragment ExponentPart
    : [eE] Sign? DigitSequence
    ;

fragment Sign
    : [+-]
    ;

DigitSequence
    : Digit+
    ;

fragment HexadecimalFractionalConstant
    : HexadecimalDigitSequence? '.' HexadecimalDigitSequence
    | HexadecimalDigitSequence '.'
    ;

fragment BinaryExponentPart
   : [pP] Sign? DigitSequence
    ;

fragment HexadecimalDigitSequence
    : HexadecimalDigit+
    ;

fragment FloatingSuffix
    : [flFL]
    ;


primary_expression:
    Identifier
    | constant
    | lambda_expression
    | string_literal+
    | '(' expression ')' 
    ;

multiplicativeExpression
    : cast_expression (('*' | '/' | '%') cast_expression)*
    ;

additiveExpression
    : multiplicativeExpression (('+' | '-') multiplicativeExpression)*
    ;

shiftExpression
    : additiveExpression (('<<' | '>>') additiveExpression)*
    ;

relationalExpression
    : shiftExpression (('<' | '>' | '<=' | '>=') shiftExpression)*
    ;

equalityExpression
    : relationalExpression (('==' | '!=') relationalExpression)*
    ;

andExpression
    : equalityExpression ('&' equalityExpression)*
    ;

exclusiveOrExpression
    : andExpression ('^' andExpression)*
    ;

inclusiveOrExpression
    : exclusiveOrExpression ('|' exclusiveOrExpression)*
    ;

logicalAndExpression
    : inclusiveOrExpression ('&&' inclusiveOrExpression)*
    ;

logicalOrExpression
    : logicalAndExpression ('||' logicalAndExpression)*
    ;

conditional_expression
    : logicalOrExpression ('?' expression ':' conditional_expression)?
    ;

fragment CharacterConstant
    : '\'' CCharSequence '\''
    | 'L\'' CCharSequence '\''
    | 'u\'' CCharSequence '\''
    | 'U\'' CCharSequence '\''
    ;

fragment CCharSequence
    : CChar+
    ;

fragment CChar
    : ~['\\\r\n]
    | EscapeSequence
    ;

fragment EscapeSequence
    : SimpleEscapeSequence
    | OctalEscapeSequence
    | HexadecimalEscapeSequence
   // | UniversalCharacterName
    ;

fragment SimpleEscapeSequence
    : '\\' ['"?abfnrtv\\]
    ;

fragment OctalEscapeSequence
    : '\\' OctalDigit OctalDigit? OctalDigit?
    ;

fragment HexadecimalEscapeSequence
    : '\\x' HexadecimalDigit+
    ;

string_literal
    : EncodingPrefix? '"' SCharSequence? '"'
    ;

fragment EncodingPrefix
    : 'u8'
    | 'u'
    | 'U'
    | 'L'
    ;

fragment SCharSequence
    : SChar+
    ;

fragment SChar
    : ~["\\\r\n]
    | EscapeSequence
    | '\\\n'   // Added line
    | '\\\r\n' // Added line
    ;

assignment_operator: 
    '='
    | '*='
    | '/='
    | '%='
    | '+='
    | '-='
    | '<<='
    | '>>='
    | '&='
    | '^='
    | '|='
    ;

postfix_expression:
    primary_expression ( '(' argumentExpressionList ')' | ('.' | '->') Identifier | '++' | '--' )*
    ;

unaryOperator: 
    '&'
    | '*'
    | '+'
    | '-'
    | '~'
    | '!'
    ;

cast_expression:
    '(' type_specifier ')' cast_expression
    | Dynamic_cast '<' type_specifier '>' '(' cast_expression ')'
    | unary_expression
    | Digit_sequence
    ;

unary_expression:
    ('++' | '--' | 'sizeof')* (postfix_expression | unaryOperator cast_expression | 'sizeof' type_specifier)
    ;

assignment_expression:
    conditional_expression
    | unary_expression assignment_operator assignment_expression
    | Digit_sequence
    ;

Digit_sequence:
    Digit+
    ;

expression:
    assignment_expression (',' assignment_expression)*
    ;


type:
    Identifier
    | Void
    | Auto
    | Char
    | Bool
    | Short
    | Int
    | Long
    | Float
    | Double
    | Double128
    ;

identifier_specifier:
    '*' ('*')*
    ;

unsigned_specifier:
    Unsigned
    ;

type_qualifier:
    Const
    | Volatile
    ;

typeQualifierList
    : type_qualifier+
    ;

pointer
    : ('*' typeQualifierList?)+
    ;

specifierQualifierList:
    (unsigned_specifier | type | type_qualifier) specifierQualifierList?
    ;

refqualifier:
    '&'
    | '&&'
    ;

abstractDeclarator
    : pointer
    | refqualifier
    ;

type_specifier:
    specifierQualifierList abstractDeclarator?
    ;

fragment Identifier_non_digit:
    [a-zA-Z_]
    ;

fragment Digit:
    [0-9]
    ;

Identifier:
    Identifier_non_digit (Identifier_non_digit | Digit)*
    | Identifier_non_digit (Identifier_non_digit | Digit)* '::' Identifier
    ;

var_decl:
    storage_specifier? var_decl_specifier? vdeclarator; 

vdeclarator:
    type_specifier Identifier ('=' assignment_expression)? ( ',' type_specifier Identifier ('=' assignment_expression)? )* ';'
    ;

Public: 'public' ;
Private: 'private' ;
Interface: 'interface' ;
Class: 'class' ;
Enum: 'enum' ;
Using: 'using' ;
Namespace: 'namespace' ;
Inline: 'inline' ;
Noexcept: 'noexcept' ;
Use: 'use' ;
Compile_if: 'compile_if' ;
Static: 'static' ;
Extern: 'extern' ;
Constexpr: 'constexpr' ;
Consteval: 'consteval' ;
Dynamic_cast: 'dynamic_cast' ;
Void: 'void' ;
Auto: 'auto' ;
Char: 'char' ;
Bool: 'bool' ;
Short: 'short' ;
Do: 'do';
While: 'while';
For: 'for';
Int: 'int' ;
Long: 'long' ;
Float: 'float' ;
Double: 'double' ;
Double128: 'double128' ;
Unsigned: 'unsigned' ;
Const: 'const' ;
Volatile: 'volatile' ;
If: 'if';
Switch: 'switch';
Break: 'break';
Continue: 'continue';
Else: 'else';
Default: 'default';
Case: 'case';
Return: 'return';
Override: 'override';
Asm: '__asm__';
Att: 'at';
Intel: 'intel';
