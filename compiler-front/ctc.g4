grammar ctc;

main: statement EOF;

statement: ( interface_decl | enum_decl | using_decl | namespace_decl | cctp_decl | var_decl | fn_decl | use_decl )* ;

access_modifier:
    'public'
    | 'private'
    ;


interface_element:
    access_modifier storage_specifier? type_specifier identifier '(' type_argument_list ')' fn_specifier* ';'
    ;

interface_body:
    interface_element*
    ;

interface_decl:
    'interface' identifier '{' interface_body '}' ';'?
    ;

enum_modifier:
    'class'
    ;

enum_body:
    identifier (',' identifier)*
    ;

enum_decl:
    'enum' enum_modifier? identifier '{' enum_body '}' ';'?
    ;

using_decl:
    'using'
    
    (identifier ';'
    | 'namespace' identifier ';'
    ) 
    ;

namespace_decl:
    'namespace' identifier '{' statement '}'
    | 'namespace' identifier ';'
    ;

fn_specifier:
    'inline'
    | 'noexcept'
    ;

fn_decl:
    storage_specifier? type_specifier identifier '(' type_argument_list ')' fn_specifier* '{' statement '}'
    | storage_specifier? type_specifier identifier '(' type_argument_list ')' fn_specifier* ';' // Forward Declaration
    ;

type_argument:
    type identifier? 
    ;

type_argument_list:
    type_argument (',' type_argument)*
    ;

argumentExpressionList
    : assignment_expression (',' assignment_expression)*
    ;

use_decl:
    'use' identifier ';'
    ;

compile_if_predicate:
    identifier
    | '!' identifier
    ;

cctp_decl:
    'compile_if' '<' compile_if_predicate '>' '{' statement '}'
    ;

storage_specifier:
    'static'
    | 'extern'
    ;

var_decl_specifier:
    'constexpr'
    | 'consteval'
    ;

lambda_body:
    '{' statement '}'
    ;

lambda_capture_modifier:
    '&' identifier 
    | identifier
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
    identifier
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
    primary_expression ( '(' argumentExpressionList ')' | ('.' | '->') identifier | '++' | '--' )*
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
    | 'dynamic_cast' '<' type_specifier '>' '(' cast_expression ')'
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
    identifier
    | 'void'
    | 'auto'
    | 'char'
    | 'bool'
    | 'short'
    | 'int'
    | 'long'
    | 'float'
    | 'double'
    | 'double128'
    ;

cv_specifier:
    'const'
    | 'volatile'
    ;

identifier_specifier:
    '*'
    | '**'
    | '&'
    ;

unsigned_specifier:
    'unsigned'
    ;

type_specifier:
    unsigned_specifier? cv_specifier? type identifier_specifier?
    ;

fragment Identifier_non_digit:
    [a-zA-Z_]
    ;

fragment Digit:
    [0-9]
    ;

identifier:
    Identifier_non_digit (Identifier_non_digit | Digit)*
    | identifier '::' identifier
    ;

var_decl:
    storage_specifier? var_decl_specifier? declarator; 

declarator:
    type_specifier identifier (assignment_operator primary_expression)? ( ',' type_specifier identifier (assignment_operator primary_expression)? ) ';'
    ;

