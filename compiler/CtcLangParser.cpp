
// Generated from CtcLang.g4 by ANTLR 4.13.1

#include "CtcLangVisitor.h"

#include "CtcLangParser.h"

using namespace antlrcpp;

using namespace antlr4;

namespace
{

    struct CtcLangParserStaticData final
    {
        CtcLangParserStaticData(std::vector<std::string> ruleNames,
                                std::vector<std::string> literalNames,
                                std::vector<std::string> symbolicNames)
            : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
              symbolicNames(std::move(symbolicNames)),
              vocabulary(this->literalNames, this->symbolicNames)
        {
        }

        CtcLangParserStaticData(const CtcLangParserStaticData &) = delete;
        CtcLangParserStaticData(CtcLangParserStaticData &&) = delete;
        CtcLangParserStaticData &operator=(const CtcLangParserStaticData &) = delete;
        CtcLangParserStaticData &operator=(CtcLangParserStaticData &&) = delete;

        std::vector<antlr4::dfa::DFA> decisionToDFA;
        antlr4::atn::PredictionContextCache sharedContextCache;
        const std::vector<std::string> ruleNames;
        const std::vector<std::string> literalNames;
        const std::vector<std::string> symbolicNames;
        const antlr4::dfa::Vocabulary vocabulary;
        antlr4::atn::SerializedATNView serializedATN;
        std::unique_ptr<antlr4::atn::ATN> atn;
    };

    ::antlr4::internal::OnceFlag ctclangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
    static thread_local
#endif
        CtcLangParserStaticData *ctclangParserStaticData = nullptr;

    void ctclangParserInitialize()
    {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
        if (ctclangParserStaticData != nullptr)
        {
            return;
        }
#else
        assert(ctclangParserStaticData == nullptr);
#endif
        auto staticData = std::make_unique<CtcLangParserStaticData>(
            std::vector<std::string>{"translationUnit",
                                     "primaryExpression",
                                     "idExpression",
                                     "unqualifiedId",
                                     "qualifiedId",
                                     "nestedNameSpecifier",
                                     "lambdaExpression",
                                     "lambdaIntroducer",
                                     "lambdaCapture",
                                     "captureDefault",
                                     "captureList",
                                     "capture",
                                     "simpleCapture",
                                     "initcapture",
                                     "lambdaDeclarator",
                                     "postfixExpression",
                                     "typeIdOfTheTypeId",
                                     "expressionList",
                                     "pseudoDestructorName",
                                     "unaryExpression",
                                     "unaryOperator",
                                     "newExpression_",
                                     "newPlacement",
                                     "newTypeId",
                                     "newDeclarator_",
                                     "noPointerNewDeclarator",
                                     "newInitializer_",
                                     "deleteExpression",
                                     "noExceptExpression",
                                     "castExpression",
                                     "pointerMemberExpression",
                                     "multiplicativeExpression",
                                     "additiveExpression",
                                     "shiftExpression",
                                     "shiftOperator",
                                     "relationalExpression",
                                     "equalityExpression",
                                     "andExpression",
                                     "exclusiveOrExpression",
                                     "inclusiveOrExpression",
                                     "logicalAndExpression",
                                     "logicalOrExpression",
                                     "conditionalExpression",
                                     "assignmentExpression",
                                     "assignmentOperator",
                                     "expression",
                                     "constantExpression",
                                     "statement",
                                     "labeledStatement",
                                     "expressionStatement",
                                     "compoundStatement",
                                     "statementSeq",
                                     "selectionStatement",
                                     "condition",
                                     "iterationStatement",
                                     "forInitStatement",
                                     "forRangeDeclaration",
                                     "forRangeInitializer",
                                     "jumpStatement",
                                     "declarationStatement",
                                     "declarationseq",
                                     "declaration",
                                     "blockDeclaration",
                                     "aliasDeclaration",
                                     "simpleDeclaration",
                                     "staticAssertDeclaration",
                                     "emptyDeclaration_",
                                     "attributeDeclaration",
                                     "declSpecifier",
                                     "declSpecifierSeq",
                                     "storageClassSpecifier",
                                     "functionSpecifier",
                                     "typedefName",
                                     "typeSpecifier",
                                     "trailingTypeSpecifier",
                                     "typeSpecifierSeq",
                                     "trailingTypeSpecifierSeq",
                                     "simpleTypeLengthModifier",
                                     "simpleTypeSignednessModifier",
                                     "simpleTypeSpecifier",
                                     "theTypeName",
                                     "decltypeSpecifier",
                                     "elaboratedTypeSpecifier",
                                     "enumName",
                                     "enumSpecifier",
                                     "enumHead",
                                     "opaqueEnumDeclaration",
                                     "enumkey",
                                     "enumbase",
                                     "enumeratorList",
                                     "enumeratorDefinition",
                                     "enumerator",
                                     "namespaceName",
                                     "originalNamespaceName",
                                     "namespaceDefinition",
                                     "namespaceAlias",
                                     "namespaceAliasDefinition",
                                     "qualifiednamespacespecifier",
                                     "usingDeclaration",
                                     "usingDirective",
                                     "asmDefinition",
                                     "linkageSpecification",
                                     "attributeSpecifierSeq",
                                     "attributeSpecifier",
                                     "alignmentspecifier",
                                     "attributeList",
                                     "attribute",
                                     "attributeNamespace",
                                     "attributeArgumentClause",
                                     "balancedTokenSeq",
                                     "balancedtoken",
                                     "initDeclaratorList",
                                     "initDeclarator",
                                     "declarator",
                                     "pointerDeclarator",
                                     "noPointerDeclarator",
                                     "parametersAndQualifiers",
                                     "trailingReturnType",
                                     "pointerOperator",
                                     "cvqualifierseq",
                                     "cvQualifier",
                                     "refqualifier",
                                     "declaratorid",
                                     "theTypeId",
                                     "abstractDeclarator",
                                     "pointerAbstractDeclarator",
                                     "noPointerAbstractDeclarator",
                                     "abstractPackDeclarator",
                                     "noPointerAbstractPackDeclarator",
                                     "parameterDeclarationClause",
                                     "parameterDeclarationList",
                                     "parameterDeclaration",
                                     "functionDefinition",
                                     "functionBody",
                                     "initializer",
                                     "braceOrEqualInitializer",
                                     "initializerClause",
                                     "initializerList",
                                     "bracedInitList",
                                     "interfaceHead",
                                     "interfaceSpecifier",
                                     "interfacefunctionDefinition",
                                     "interfaceMemberSpecification",
                                     "recordKey",
                                     "recordHead",
                                     "recordSpecifier",
                                     "recordMemberSpecification",
                                     "recordMemberDeclaratorList",
                                     "className",
                                     "classSpecifier",
                                     "classHead",
                                     "classHeadName",
                                     "classVirtSpecifier",
                                     "classKey",
                                     "memberSpecification",
                                     "memberdeclaration",
                                     "memberDeclaratorList",
                                     "memberDeclarator",
                                     "virtualSpecifierSeq",
                                     "virtualSpecifier",
                                     "pureSpecifier",
                                     "baseClause",
                                     "baseSpecifierList",
                                     "baseSpecifier",
                                     "classOrDeclType",
                                     "baseTypeSpecifier",
                                     "accessSpecifier",
                                     "conversionFunctionId",
                                     "conversionTypeId",
                                     "conversionDeclarator",
                                     "constructorInitializer",
                                     "memInitializerList",
                                     "memInitializer",
                                     "meminitializerid",
                                     "operatorFunctionId",
                                     "literalOperatorId",
                                     "templateDeclaration",
                                     "templateparameterList",
                                     "templateParameter",
                                     "typeParameter",
                                     "simpleTemplateId",
                                     "templateId",
                                     "templateName",
                                     "templateArgumentList",
                                     "templateArgument",
                                     "typeNameSpecifier",
                                     "explicitInstantiation",
                                     "explicitSpecialization",
                                     "tryBlock",
                                     "functionTryBlock",
                                     "handlerSeq",
                                     "handler",
                                     "exceptionDeclaration",
                                     "throwExpression",
                                     "exceptionSpecification",
                                     "dynamicExceptionSpecification",
                                     "typeIdList",
                                     "noeExceptSpecification",
                                     "theOperator",
                                     "literal"},
            std::vector<std::string>{"",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "",
                                     "'alignas'",
                                     "'alignof'",
                                     "'__asm__'",
                                     "'asm'",
                                     "'auto'",
                                     "'bool'",
                                     "'break'",
                                     "'case'",
                                     "'catch'",
                                     "'char'",
                                     "'char16_t'",
                                     "'char32_t'",
                                     "'class'",
                                     "'const'",
                                     "'constexpr'",
                                     "'const_cast'",
                                     "'bit_cast'",
                                     "'continue'",
                                     "'decltype'",
                                     "'default'",
                                     "'delete'",
                                     "'do'",
                                     "'double'",
                                     "'dynamic_cast'",
                                     "'else'",
                                     "'enum'",
                                     "'explicit'",
                                     "'export'",
                                     "'extern'",
                                     "'false'",
                                     "'final'",
                                     "'float'",
                                     "'for'",
                                     "'goto'",
                                     "'if'",
                                     "'inline'",
                                     "'int'",
                                     "'long'",
                                     "'mutable'",
                                     "'namespace'",
                                     "'new'",
                                     "'noexcept'",
                                     "'nullptr'",
                                     "'operator'",
                                     "'override'",
                                     "'private'",
                                     "'protected'",
                                     "'public'",
                                     "'interface'",
                                     "'reinterpret_cast'",
                                     "'return'",
                                     "'short'",
                                     "'signed'",
                                     "'sizeof'",
                                     "'static'",
                                     "'static_assert'",
                                     "'static_cast'",
                                     "'record'",
                                     "'struct'",
                                     "'switch'",
                                     "'template'",
                                     "'this'",
                                     "'thread_local'",
                                     "'throw'",
                                     "'true'",
                                     "'try'",
                                     "'typeid'",
                                     "'typename'",
                                     "'unsigned'",
                                     "'using'",
                                     "'virtual'",
                                     "'void'",
                                     "'volatile'",
                                     "'wchar_t'",
                                     "'while'",
                                     "'('",
                                     "')'",
                                     "'['",
                                     "']'",
                                     "'{'",
                                     "'}'",
                                     "'+'",
                                     "'-'",
                                     "'*'",
                                     "'/'",
                                     "'%'",
                                     "'^'",
                                     "'&'",
                                     "'|'",
                                     "'~'",
                                     "",
                                     "'='",
                                     "'<'",
                                     "'>'",
                                     "'+='",
                                     "'-='",
                                     "'*='",
                                     "'/='",
                                     "'%='",
                                     "'^='",
                                     "'&='",
                                     "'|='",
                                     "'<<='",
                                     "'>>='",
                                     "'=='",
                                     "'!='",
                                     "'<='",
                                     "'>='",
                                     "",
                                     "",
                                     "'++'",
                                     "'--'",
                                     "','",
                                     "'->*'",
                                     "'->'",
                                     "'\\u003F'",
                                     "':'",
                                     "'::'",
                                     "';'",
                                     "'.'",
                                     "'.*'",
                                     "'...'"},
            std::vector<std::string>{"",
                                     "IntegerLiteral",
                                     "CharacterLiteral",
                                     "FloatingLiteral",
                                     "StringLiteral",
                                     "BooleanLiteral",
                                     "PointerLiteral",
                                     "UserDefinedLiteral",
                                     "MultiLineMacro",
                                     "Directive",
                                     "Alignas",
                                     "Alignof",
                                     "AsmMSVC",
                                     "Asm",
                                     "Auto",
                                     "Bool",
                                     "Break",
                                     "Case",
                                     "Catch",
                                     "Char",
                                     "Char16",
                                     "Char32",
                                     "Class",
                                     "Const",
                                     "Constexpr",
                                     "Const_cast",
                                     "Bit_cast",
                                     "Continue",
                                     "Decltype",
                                     "Default",
                                     "Delete",
                                     "Do",
                                     "Double",
                                     "Dynamic_cast",
                                     "Else",
                                     "Enum",
                                     "Explicit",
                                     "Export",
                                     "Extern",
                                     "False_",
                                     "Final",
                                     "Float",
                                     "For",
                                     "Goto",
                                     "If",
                                     "Inline",
                                     "Int",
                                     "Long",
                                     "Mutable",
                                     "Namespace",
                                     "New",
                                     "Noexcept",
                                     "Nullptr",
                                     "Operator",
                                     "Override",
                                     "Private",
                                     "Protected",
                                     "Public",
                                     "Interface",
                                     "Reinterpret_cast",
                                     "Return",
                                     "Short",
                                     "Signed",
                                     "Sizeof",
                                     "Static",
                                     "Static_assert",
                                     "Static_cast",
                                     "Record",
                                     "Struct",
                                     "Switch",
                                     "Template",
                                     "This",
                                     "Thread_local",
                                     "Throw",
                                     "True_",
                                     "Try",
                                     "Typeid_",
                                     "Typename_",
                                     "Unsigned",
                                     "Using",
                                     "Virtual",
                                     "Void",
                                     "Volatile",
                                     "Wchar",
                                     "While",
                                     "LeftParen",
                                     "RightParen",
                                     "LeftBracket",
                                     "RightBracket",
                                     "LeftBrace",
                                     "RightBrace",
                                     "Plus",
                                     "Minus",
                                     "Star",
                                     "Div",
                                     "Mod",
                                     "Caret",
                                     "And",
                                     "Or",
                                     "Tilde",
                                     "Not",
                                     "Assign",
                                     "Less",
                                     "Greater",
                                     "PlusAssign",
                                     "MinusAssign",
                                     "StarAssign",
                                     "DivAssign",
                                     "ModAssign",
                                     "XorAssign",
                                     "AndAssign",
                                     "OrAssign",
                                     "LeftShiftAssign",
                                     "RightShiftAssign",
                                     "Equal",
                                     "NotEqual",
                                     "LessEqual",
                                     "GreaterEqual",
                                     "AndAnd",
                                     "OrOr",
                                     "PlusPlus",
                                     "MinusMinus",
                                     "Comma",
                                     "ArrowStar",
                                     "Arrow",
                                     "Question",
                                     "Colon",
                                     "Doublecolon",
                                     "Semi",
                                     "Dot",
                                     "DotStar",
                                     "Ellipsis",
                                     "Identifier",
                                     "DecimalLiteral",
                                     "OctalLiteral",
                                     "HexadecimalLiteral",
                                     "BinaryLiteral",
                                     "Integersuffix",
                                     "UserDefinedIntegerLiteral",
                                     "UserDefinedFloatingLiteral",
                                     "UserDefinedStringLiteral",
                                     "UserDefinedCharacterLiteral",
                                     "Whitespace",
                                     "Newline",
                                     "BlockComment",
                                     "LineComment"});
        static const int32_t serializedATNSegment[] = {
            4,    1,    145,  2182, 2,    0,    7,    0,    2,    1,    7,    1,    2,    2,
            7,    2,    2,    3,    7,    3,    2,    4,    7,    4,    2,    5,    7,    5,
            2,    6,    7,    6,    2,    7,    7,    7,    2,    8,    7,    8,    2,    9,
            7,    9,    2,    10,   7,    10,   2,    11,   7,    11,   2,    12,   7,    12,
            2,    13,   7,    13,   2,    14,   7,    14,   2,    15,   7,    15,   2,    16,
            7,    16,   2,    17,   7,    17,   2,    18,   7,    18,   2,    19,   7,    19,
            2,    20,   7,    20,   2,    21,   7,    21,   2,    22,   7,    22,   2,    23,
            7,    23,   2,    24,   7,    24,   2,    25,   7,    25,   2,    26,   7,    26,
            2,    27,   7,    27,   2,    28,   7,    28,   2,    29,   7,    29,   2,    30,
            7,    30,   2,    31,   7,    31,   2,    32,   7,    32,   2,    33,   7,    33,
            2,    34,   7,    34,   2,    35,   7,    35,   2,    36,   7,    36,   2,    37,
            7,    37,   2,    38,   7,    38,   2,    39,   7,    39,   2,    40,   7,    40,
            2,    41,   7,    41,   2,    42,   7,    42,   2,    43,   7,    43,   2,    44,
            7,    44,   2,    45,   7,    45,   2,    46,   7,    46,   2,    47,   7,    47,
            2,    48,   7,    48,   2,    49,   7,    49,   2,    50,   7,    50,   2,    51,
            7,    51,   2,    52,   7,    52,   2,    53,   7,    53,   2,    54,   7,    54,
            2,    55,   7,    55,   2,    56,   7,    56,   2,    57,   7,    57,   2,    58,
            7,    58,   2,    59,   7,    59,   2,    60,   7,    60,   2,    61,   7,    61,
            2,    62,   7,    62,   2,    63,   7,    63,   2,    64,   7,    64,   2,    65,
            7,    65,   2,    66,   7,    66,   2,    67,   7,    67,   2,    68,   7,    68,
            2,    69,   7,    69,   2,    70,   7,    70,   2,    71,   7,    71,   2,    72,
            7,    72,   2,    73,   7,    73,   2,    74,   7,    74,   2,    75,   7,    75,
            2,    76,   7,    76,   2,    77,   7,    77,   2,    78,   7,    78,   2,    79,
            7,    79,   2,    80,   7,    80,   2,    81,   7,    81,   2,    82,   7,    82,
            2,    83,   7,    83,   2,    84,   7,    84,   2,    85,   7,    85,   2,    86,
            7,    86,   2,    87,   7,    87,   2,    88,   7,    88,   2,    89,   7,    89,
            2,    90,   7,    90,   2,    91,   7,    91,   2,    92,   7,    92,   2,    93,
            7,    93,   2,    94,   7,    94,   2,    95,   7,    95,   2,    96,   7,    96,
            2,    97,   7,    97,   2,    98,   7,    98,   2,    99,   7,    99,   2,    100,
            7,    100,  2,    101,  7,    101,  2,    102,  7,    102,  2,    103,  7,    103,
            2,    104,  7,    104,  2,    105,  7,    105,  2,    106,  7,    106,  2,    107,
            7,    107,  2,    108,  7,    108,  2,    109,  7,    109,  2,    110,  7,    110,
            2,    111,  7,    111,  2,    112,  7,    112,  2,    113,  7,    113,  2,    114,
            7,    114,  2,    115,  7,    115,  2,    116,  7,    116,  2,    117,  7,    117,
            2,    118,  7,    118,  2,    119,  7,    119,  2,    120,  7,    120,  2,    121,
            7,    121,  2,    122,  7,    122,  2,    123,  7,    123,  2,    124,  7,    124,
            2,    125,  7,    125,  2,    126,  7,    126,  2,    127,  7,    127,  2,    128,
            7,    128,  2,    129,  7,    129,  2,    130,  7,    130,  2,    131,  7,    131,
            2,    132,  7,    132,  2,    133,  7,    133,  2,    134,  7,    134,  2,    135,
            7,    135,  2,    136,  7,    136,  2,    137,  7,    137,  2,    138,  7,    138,
            2,    139,  7,    139,  2,    140,  7,    140,  2,    141,  7,    141,  2,    142,
            7,    142,  2,    143,  7,    143,  2,    144,  7,    144,  2,    145,  7,    145,
            2,    146,  7,    146,  2,    147,  7,    147,  2,    148,  7,    148,  2,    149,
            7,    149,  2,    150,  7,    150,  2,    151,  7,    151,  2,    152,  7,    152,
            2,    153,  7,    153,  2,    154,  7,    154,  2,    155,  7,    155,  2,    156,
            7,    156,  2,    157,  7,    157,  2,    158,  7,    158,  2,    159,  7,    159,
            2,    160,  7,    160,  2,    161,  7,    161,  2,    162,  7,    162,  2,    163,
            7,    163,  2,    164,  7,    164,  2,    165,  7,    165,  2,    166,  7,    166,
            2,    167,  7,    167,  2,    168,  7,    168,  2,    169,  7,    169,  2,    170,
            7,    170,  2,    171,  7,    171,  2,    172,  7,    172,  2,    173,  7,    173,
            2,    174,  7,    174,  2,    175,  7,    175,  2,    176,  7,    176,  2,    177,
            7,    177,  2,    178,  7,    178,  2,    179,  7,    179,  2,    180,  7,    180,
            2,    181,  7,    181,  2,    182,  7,    182,  2,    183,  7,    183,  2,    184,
            7,    184,  2,    185,  7,    185,  2,    186,  7,    186,  2,    187,  7,    187,
            2,    188,  7,    188,  2,    189,  7,    189,  2,    190,  7,    190,  2,    191,
            7,    191,  2,    192,  7,    192,  2,    193,  7,    193,  2,    194,  7,    194,
            2,    195,  7,    195,  2,    196,  7,    196,  2,    197,  7,    197,  2,    198,
            7,    198,  2,    199,  7,    199,  1,    0,    3,    0,    402,  8,    0,    1,
            0,    1,    0,    1,    1,    4,    1,    407,  8,    1,    11,   1,    12,   1,
            408,  1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
            1,    3,    1,    418,  8,    1,    1,    2,    1,    2,    3,    2,    422,  8,
            2,    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
            3,    3,    3,    431,  8,    3,    1,    3,    3,    3,    434,  8,    3,    1,
            4,    1,    4,    3,    4,    438,  8,    4,    1,    4,    1,    4,    1,    5,
            1,    5,    1,    5,    1,    5,    3,    5,    446,  8,    5,    1,    5,    1,
            5,    1,    5,    1,    5,    1,    5,    3,    5,    453,  8,    5,    1,    5,
            3,    5,    456,  8,    5,    1,    5,    5,    5,    459,  8,    5,    10,   5,
            12,   5,    462,  9,    5,    1,    6,    1,    6,    3,    6,    466,  8,    6,
            1,    6,    1,    6,    1,    7,    1,    7,    3,    7,    472,  8,    7,    1,
            7,    1,    7,    1,    8,    1,    8,    1,    8,    1,    8,    3,    8,    480,
            8,    8,    3,    8,    482,  8,    8,    1,    9,    1,    9,    1,    10,   1,
            10,   1,    10,   5,    10,   489,  8,    10,   10,   10,   12,   10,   492,  9,
            10,   1,    10,   3,    10,   495,  8,    10,   1,    11,   1,    11,   3,    11,
            499,  8,    11,   1,    12,   3,    12,   502,  8,    12,   1,    12,   1,    12,
            3,    12,   506,  8,    12,   1,    13,   3,    13,   509,  8,    13,   1,    13,
            1,    13,   1,    13,   1,    14,   1,    14,   3,    14,   516,  8,    14,   1,
            14,   1,    14,   3,    14,   520,  8,    14,   1,    14,   3,    14,   523,  8,
            14,   1,    14,   3,    14,   526,  8,    14,   1,    14,   3,    14,   529,  8,
            14,   1,    15,   1,    15,   1,    15,   1,    15,   3,    15,   535,  8,    15,
            1,    15,   1,    15,   3,    15,   539,  8,    15,   1,    15,   1,    15,   3,
            15,   543,  8,    15,   1,    15,   1,    15,   1,    15,   1,    15,   1,    15,
            1,    15,   1,    15,   1,    15,   1,    15,   1,    15,   1,    15,   1,    15,
            3,    15,   557,  8,    15,   1,    15,   1,    15,   3,    15,   561,  8,    15,
            1,    15,   1,    15,   1,    15,   1,    15,   3,    15,   567,  8,    15,   1,
            15,   1,    15,   1,    15,   1,    15,   1,    15,   3,    15,   574,  8,    15,
            1,    15,   1,    15,   1,    15,   1,    15,   3,    15,   580,  8,    15,   1,
            15,   1,    15,   3,    15,   584,  8,    15,   1,    15,   1,    15,   5,    15,
            588,  8,    15,   10,   15,   12,   15,   591,  9,    15,   1,    16,   1,    16,
            1,    17,   1,    17,   1,    18,   3,    18,   598,  8,    18,   1,    18,   1,
            18,   1,    18,   3,    18,   603,  8,    18,   1,    18,   1,    18,   1,    18,
            1,    18,   1,    18,   1,    18,   1,    18,   1,    18,   1,    18,   1,    18,
            1,    18,   3,    18,   616,  8,    18,   1,    19,   1,    19,   1,    19,   1,
            19,   1,    19,   3,    19,   623,  8,    19,   1,    19,   1,    19,   1,    19,
            1,    19,   1,    19,   1,    19,   1,    19,   1,    19,   1,    19,   1,    19,
            3,    19,   635,  8,    19,   1,    19,   1,    19,   1,    19,   1,    19,   1,
            19,   1,    19,   1,    19,   1,    19,   3,    19,   645,  8,    19,   1,    20,
            1,    20,   1,    21,   3,    21,   650,  8,    21,   1,    21,   1,    21,   3,
            21,   654,  8,    21,   1,    21,   1,    21,   1,    21,   1,    21,   1,    21,
            3,    21,   661,  8,    21,   1,    21,   3,    21,   664,  8,    21,   1,    22,
            1,    22,   1,    22,   1,    22,   1,    23,   1,    23,   3,    23,   672,  8,
            23,   1,    24,   1,    24,   3,    24,   676,  8,    24,   1,    24,   3,    24,
            679,  8,    24,   1,    25,   1,    25,   1,    25,   1,    25,   1,    25,   3,
            25,   686,  8,    25,   1,    25,   1,    25,   1,    25,   1,    25,   1,    25,
            3,    25,   693,  8,    25,   5,    25,   695,  8,    25,   10,   25,   12,   25,
            698,  9,    25,   1,    26,   1,    26,   3,    26,   702,  8,    26,   1,    26,
            1,    26,   3,    26,   706,  8,    26,   1,    27,   3,    27,   709,  8,    27,
            1,    27,   1,    27,   1,    27,   3,    27,   714,  8,    27,   1,    27,   1,
            27,   1,    28,   1,    28,   1,    28,   1,    28,   1,    28,   1,    29,   1,
            29,   1,    29,   1,    29,   1,    29,   1,    29,   3,    29,   729,  8,    29,
            1,    30,   1,    30,   1,    30,   5,    30,   734,  8,    30,   10,   30,   12,
            30,   737,  9,    30,   1,    31,   1,    31,   1,    31,   5,    31,   742,  8,
            31,   10,   31,   12,   31,   745,  9,    31,   1,    32,   1,    32,   1,    32,
            5,    32,   750,  8,    32,   10,   32,   12,   32,   753,  9,    32,   1,    33,
            1,    33,   1,    33,   1,    33,   5,    33,   759,  8,    33,   10,   33,   12,
            33,   762,  9,    33,   1,    34,   1,    34,   1,    34,   1,    34,   3,    34,
            768,  8,    34,   1,    35,   1,    35,   1,    35,   5,    35,   773,  8,    35,
            10,   35,   12,   35,   776,  9,    35,   1,    36,   1,    36,   1,    36,   5,
            36,   781,  8,    36,   10,   36,   12,   36,   784,  9,    36,   1,    37,   1,
            37,   1,    37,   5,    37,   789,  8,    37,   10,   37,   12,   37,   792,  9,
            37,   1,    38,   1,    38,   1,    38,   5,    38,   797,  8,    38,   10,   38,
            12,   38,   800,  9,    38,   1,    39,   1,    39,   1,    39,   5,    39,   805,
            8,    39,   10,   39,   12,   39,   808,  9,    39,   1,    40,   1,    40,   1,
            40,   5,    40,   813,  8,    40,   10,   40,   12,   40,   816,  9,    40,   1,
            41,   1,    41,   1,    41,   5,    41,   821,  8,    41,   10,   41,   12,   41,
            824,  9,    41,   1,    42,   1,    42,   1,    42,   1,    42,   1,    42,   1,
            42,   3,    42,   832,  8,    42,   1,    43,   1,    43,   1,    43,   1,    43,
            1,    43,   1,    43,   3,    43,   840,  8,    43,   1,    44,   1,    44,   1,
            45,   1,    45,   1,    45,   5,    45,   847,  8,    45,   10,   45,   12,   45,
            850,  9,    45,   1,    46,   1,    46,   1,    47,   1,    47,   1,    47,   3,
            47,   857,  8,    47,   1,    47,   1,    47,   1,    47,   1,    47,   1,    47,
            1,    47,   3,    47,   865,  8,    47,   3,    47,   867,  8,    47,   1,    48,
            3,    48,   870,  8,    48,   1,    48,   1,    48,   1,    48,   1,    48,   3,
            48,   876,  8,    48,   1,    48,   1,    48,   1,    48,   1,    49,   3,    49,
            882,  8,    49,   1,    49,   1,    49,   1,    50,   1,    50,   3,    50,   888,
            8,    50,   1,    50,   1,    50,   1,    51,   4,    51,   893,  8,    51,   11,
            51,   12,   51,   894,  1,    52,   1,    52,   1,    52,   1,    52,   1,    52,
            1,    52,   1,    52,   3,    52,   904,  8,    52,   1,    52,   1,    52,   1,
            52,   1,    52,   1,    52,   1,    52,   3,    52,   912,  8,    52,   1,    53,
            1,    53,   3,    53,   916,  8,    53,   1,    53,   1,    53,   1,    53,   1,
            53,   1,    53,   3,    53,   923,  8,    53,   3,    53,   925,  8,    53,   1,
            54,   1,    54,   1,    54,   1,    54,   1,    54,   1,    54,   1,    54,   1,
            54,   1,    54,   1,    54,   1,    54,   1,    54,   1,    54,   1,    54,   1,
            54,   1,    54,   1,    54,   1,    54,   3,    54,   945,  8,    54,   1,    54,
            1,    54,   3,    54,   949,  8,    54,   1,    54,   1,    54,   1,    54,   1,
            54,   3,    54,   955,  8,    54,   1,    54,   1,    54,   1,    54,   3,    54,
            960,  8,    54,   1,    55,   1,    55,   3,    55,   964,  8,    55,   1,    56,
            3,    56,   967,  8,    56,   1,    56,   1,    56,   1,    56,   1,    57,   1,
            57,   3,    57,   974,  8,    57,   1,    58,   1,    58,   1,    58,   1,    58,
            1,    58,   3,    58,   981,  8,    58,   1,    58,   1,    58,   3,    58,   985,
            8,    58,   1,    58,   1,    58,   1,    59,   1,    59,   1,    60,   4,    60,
            992,  8,    60,   11,   60,   12,   60,   993,  1,    61,   1,    61,   1,    61,
            1,    61,   1,    61,   1,    61,   1,    61,   1,    61,   1,    61,   3,    61,
            1005, 8,    61,   1,    62,   1,    62,   1,    62,   1,    62,   1,    62,   1,
            62,   1,    62,   1,    62,   3,    62,   1015, 8,    62,   1,    63,   1,    63,
            1,    63,   3,    63,   1020, 8,    63,   1,    63,   1,    63,   1,    63,   1,
            63,   1,    64,   3,    64,   1027, 8,    64,   1,    64,   3,    64,   1030, 8,
            64,   1,    64,   1,    64,   1,    64,   3,    64,   1035, 8,    64,   1,    64,
            1,    64,   1,    64,   3,    64,   1040, 8,    64,   1,    65,   1,    65,   1,
            65,   1,    65,   1,    65,   1,    65,   1,    65,   1,    65,   1,    66,   1,
            66,   1,    67,   1,    67,   1,    67,   1,    68,   1,    68,   1,    68,   1,
            68,   1,    68,   3,    68,   1060, 8,    68,   1,    69,   4,    69,   1063, 8,
            69,   11,   69,   12,   69,   1064, 1,    69,   3,    69,   1068, 8,    69,   1,
            70,   1,    70,   1,    71,   1,    71,   1,    72,   1,    72,   1,    73,   1,
            73,   1,    73,   1,    73,   1,    73,   3,    73,   1081, 8,    73,   1,    74,
            1,    74,   1,    74,   1,    74,   3,    74,   1087, 8,    74,   1,    75,   4,
            75,   1090, 8,    75,   11,   75,   12,   75,   1091, 1,    75,   3,    75,   1095,
            8,    75,   1,    76,   4,    76,   1098, 8,    76,   11,   76,   12,   76,   1099,
            1,    76,   3,    76,   1103, 8,    76,   1,    77,   1,    77,   1,    78,   1,
            78,   1,    79,   3,    79,   1110, 8,    79,   1,    79,   1,    79,   1,    79,
            1,    79,   1,    79,   1,    79,   1,    79,   1,    79,   1,    79,   1,    79,
            1,    79,   1,    79,   1,    79,   1,    79,   1,    79,   1,    79,   1,    79,
            1,    79,   1,    79,   1,    79,   1,    79,   3,    79,   1133, 8,    79,   1,
            80,   1,    80,   1,    80,   1,    80,   3,    80,   1139, 8,    80,   1,    81,
            1,    81,   1,    81,   1,    81,   3,    81,   1145, 8,    81,   1,    81,   1,
            81,   1,    82,   1,    82,   3,    82,   1151, 8,    82,   1,    82,   3,    82,
            1154, 8,    82,   1,    82,   1,    82,   1,    82,   1,    82,   3,    82,   1160,
            8,    82,   1,    82,   1,    82,   3,    82,   1164, 8,    82,   1,    82,   1,
            82,   3,    82,   1168, 8,    82,   1,    82,   3,    82,   1171, 8,    82,   1,
            83,   1,    83,   1,    84,   1,    84,   1,    84,   1,    84,   3,    84,   1179,
            8,    84,   3,    84,   1181, 8,    84,   1,    84,   1,    84,   1,    85,   1,
            85,   3,    85,   1187, 8,    85,   1,    85,   3,    85,   1190, 8,    85,   1,
            85,   3,    85,   1193, 8,    85,   1,    85,   3,    85,   1196, 8,    85,   1,
            86,   1,    86,   3,    86,   1200, 8,    86,   1,    86,   1,    86,   3,    86,
            1204, 8,    86,   1,    86,   1,    86,   1,    87,   1,    87,   3,    87,   1210,
            8,    87,   1,    88,   1,    88,   1,    88,   1,    89,   1,    89,   1,    89,
            5,    89,   1218, 8,    89,   10,   89,   12,   89,   1221, 9,    89,   1,    90,
            1,    90,   1,    90,   3,    90,   1226, 8,    90,   1,    91,   1,    91,   1,
            92,   1,    92,   3,    92,   1232, 8,    92,   1,    93,   1,    93,   1,    94,
            3,    94,   1237, 8,    94,   1,    94,   1,    94,   1,    94,   3,    94,   1242,
            8,    94,   1,    94,   1,    94,   3,    94,   1246, 8,    94,   1,    94,   1,
            94,   1,    95,   1,    95,   1,    96,   1,    96,   1,    96,   1,    96,   1,
            96,   1,    96,   1,    97,   3,    97,   1259, 8,    97,   1,    97,   1,    97,
            1,    98,   1,    98,   3,    98,   1265, 8,    98,   1,    98,   1,    98,   3,
            98,   1269, 8,    98,   1,    98,   1,    98,   1,    98,   1,    99,   3,    99,
            1275, 8,    99,   1,    99,   1,    99,   1,    99,   3,    99,   1280, 8,    99,
            1,    99,   1,    99,   1,    99,   1,    100,  1,    100,  1,    100,  1,    100,
            1,    100,  1,    100,  1,    100,  1,    100,  1,    100,  1,    100,  3,    100,
            1295, 8,    100,  1,    101,  1,    101,  1,    101,  1,    101,  3,    101,  1301,
            8,    101,  1,    101,  1,    101,  3,    101,  1305, 8,    101,  1,    102,  4,
            102,  1308, 8,    102,  11,   102,  12,   102,  1309, 1,    103,  1,    103,  1,
            103,  3,    103,  1315, 8,    103,  1,    103,  1,    103,  1,    103,  3,    103,
            1320, 8,    103,  1,    104,  1,    104,  1,    104,  1,    104,  3,    104,  1326,
            8,    104,  1,    104,  3,    104,  1329, 8,    104,  1,    104,  1,    104,  1,
            105,  1,    105,  1,    105,  5,    105,  1336, 8,    105,  10,   105,  12,   105,
            1339, 9,    105,  1,    105,  3,    105,  1342, 8,    105,  1,    106,  1,    106,
            1,    106,  3,    106,  1347, 8,    106,  1,    106,  1,    106,  3,    106,  1351,
            8,    106,  1,    107,  1,    107,  1,    108,  1,    108,  3,    108,  1357, 8,
            108,  1,    108,  1,    108,  1,    109,  4,    109,  1362, 8,    109,  11,   109,
            12,   109,  1363, 1,    110,  1,    110,  1,    110,  1,    110,  1,    110,  1,
            110,  1,    110,  1,    110,  1,    110,  1,    110,  1,    110,  1,    110,  1,
            110,  4,    110,  1379, 8,    110,  11,   110,  12,   110,  1380, 3,    110,  1383,
            8,    110,  1,    111,  1,    111,  1,    111,  5,    111,  1388, 8,    111,  10,
            111,  12,   111,  1391, 9,    111,  1,    112,  1,    112,  3,    112,  1395, 8,
            112,  1,    113,  1,    113,  1,    113,  1,    113,  1,    113,  3,    113,  1402,
            8,    113,  1,    114,  1,    114,  3,    114,  1406, 8,    114,  5,    114,  1408,
            8,    114,  10,   114,  12,   114,  1411, 9,    114,  1,    114,  1,    114,  1,
            115,  1,    115,  1,    115,  3,    115,  1418, 8,    115,  1,    115,  1,    115,
            1,    115,  1,    115,  3,    115,  1424, 8,    115,  1,    115,  1,    115,  1,
            115,  1,    115,  3,    115,  1430, 8,    115,  1,    115,  1,    115,  3,    115,
            1434, 8,    115,  3,    115,  1436, 8,    115,  5,    115,  1438, 8,    115,  10,
            115,  12,   115,  1441, 9,    115,  1,    116,  1,    116,  3,    116,  1445, 8,
            116,  1,    116,  1,    116,  3,    116,  1449, 8,    116,  1,    116,  3,    116,
            1452, 8,    116,  1,    116,  3,    116,  1455, 8,    116,  1,    116,  3,    116,
            1458, 8,    116,  1,    117,  1,    117,  1,    117,  3,    117,  1463, 8,    117,
            1,    118,  1,    118,  3,    118,  1467, 8,    118,  1,    118,  3,    118,  1470,
            8,    118,  1,    118,  1,    118,  3,    118,  1474, 8,    118,  1,    118,  3,
            118,  1477, 8,    118,  3,    118,  1479, 8,    118,  1,    119,  4,    119,  1482,
            8,    119,  11,   119,  12,   119,  1483, 1,    120,  1,    120,  1,    121,  1,
            121,  1,    122,  3,    122,  1491, 8,    122,  1,    122,  1,    122,  1,    123,
            1,    123,  3,    123,  1497, 8,    123,  1,    124,  1,    124,  3,    124,  1501,
            8,    124,  1,    124,  1,    124,  1,    124,  1,    124,  3,    124,  1507, 8,
            124,  1,    125,  1,    125,  4,    125,  1511, 8,    125,  11,   125,  12,   125,
            1512, 1,    125,  3,    125,  1516, 8,    125,  3,    125,  1518, 8,    125,  1,
            126,  1,    126,  1,    126,  1,    126,  3,    126,  1524, 8,    126,  1,    126,
            1,    126,  3,    126,  1528, 8,    126,  1,    126,  1,    126,  1,    126,  1,
            126,  3,    126,  1534, 8,    126,  1,    126,  1,    126,  1,    126,  1,    126,
            1,    126,  3,    126,  1541, 8,    126,  1,    126,  1,    126,  3,    126,  1545,
            8,    126,  3,    126,  1547, 8,    126,  5,    126,  1549, 8,    126,  10,   126,
            12,   126,  1552, 9,    126,  1,    127,  5,    127,  1555, 8,    127,  10,   127,
            12,   127,  1558, 9,    127,  1,    127,  1,    127,  1,    128,  1,    128,  1,
            128,  1,    128,  1,    128,  1,    128,  1,    128,  3,    128,  1569, 8,    128,
            1,    128,  1,    128,  3,    128,  1573, 8,    128,  3,    128,  1575, 8,    128,
            5,    128,  1577, 8,    128,  10,   128,  12,   128,  1580, 9,    128,  1,    129,
            1,    129,  3,    129,  1584, 8,    129,  1,    129,  3,    129,  1587, 8,    129,
            1,    130,  1,    130,  1,    130,  5,    130,  1592, 8,    130,  10,   130,  12,
            130,  1595, 9,    130,  1,    131,  3,    131,  1598, 8,    131,  1,    131,  1,
            131,  1,    131,  3,    131,  1603, 8,    131,  3,    131,  1605, 8,    131,  1,
            131,  1,    131,  3,    131,  1609, 8,    131,  1,    132,  3,    132,  1612, 8,
            132,  1,    132,  3,    132,  1615, 8,    132,  1,    132,  1,    132,  1,    132,
            1,    133,  3,    133,  1621, 8,    133,  1,    133,  1,    133,  1,    133,  1,
            133,  1,    133,  3,    133,  1628, 8,    133,  1,    134,  1,    134,  1,    134,
            1,    134,  1,    134,  3,    134,  1635, 8,    134,  1,    135,  1,    135,  1,
            135,  3,    135,  1640, 8,    135,  1,    136,  1,    136,  3,    136,  1644, 8,
            136,  1,    137,  1,    137,  3,    137,  1648, 8,    137,  1,    137,  1,    137,
            1,    137,  3,    137,  1653, 8,    137,  5,    137,  1655, 8,    137,  10,   137,
            12,   137,  1658, 9,    137,  1,    138,  1,    138,  1,    138,  3,    138,  1663,
            8,    138,  1,    138,  1,    138,  1,    138,  3,    138,  1668, 8,    138,  1,
            138,  3,    138,  1671, 8,    138,  3,    138,  1673, 8,    138,  1,    138,  1,
            138,  1,    139,  3,    139,  1678, 8,    139,  1,    139,  1,    139,  1,    139,
            1,    140,  1,    140,  1,    140,  4,    140,  1686, 8,    140,  11,   140,  12,
            140,  1687, 3,    140,  1690, 8,    140,  1,    140,  1,    140,  1,    141,  3,
            141,  1695, 8,    141,  1,    141,  3,    141,  1698, 8,    141,  1,    141,  1,
            141,  3,    141,  1702, 8,    141,  1,    141,  1,    141,  1,    142,  3,    142,
            1707, 8,    142,  1,    142,  1,    142,  1,    143,  1,    143,  1,    144,  3,
            144,  1714, 8,    144,  1,    144,  1,    144,  1,    144,  1,    145,  1,    145,
            1,    145,  4,    145,  1722, 8,    145,  11,   145,  12,   145,  1723, 3,    145,
            1726, 8,    145,  1,    145,  1,    145,  1,    146,  3,    146,  1731, 8,    146,
            1,    146,  3,    146,  1734, 8,    146,  1,    146,  3,    146,  1737, 8,    146,
            1,    146,  1,    146,  1,    146,  3,    146,  1742, 8,    146,  1,    147,  1,
            147,  1,    148,  1,    148,  3,    148,  1748, 8,    148,  1,    149,  1,    149,
            1,    149,  3,    149,  1753, 8,    149,  1,    149,  1,    149,  1,    150,  3,
            150,  1758, 8,    150,  1,    150,  1,    150,  3,    150,  1762, 8,    150,  1,
            150,  1,    150,  3,    150,  1766, 8,    150,  3,    150,  1768, 8,    150,  1,
            150,  3,    150,  1771, 8,    150,  1,    151,  3,    151,  1774, 8,    151,  1,
            151,  1,    151,  1,    152,  1,    152,  1,    153,  1,    153,  1,    154,  4,
            154,  1783, 8,    154,  11,   154,  12,   154,  1784, 1,    155,  3,    155,  1788,
            8,    155,  1,    155,  3,    155,  1791, 8,    155,  1,    155,  3,    155,  1794,
            8,    155,  1,    155,  3,    155,  1797, 8,    155,  1,    155,  1,    155,  3,
            155,  1801, 8,    155,  1,    155,  1,    155,  3,    155,  1805, 8,    155,  1,
            155,  1,    155,  1,    155,  1,    155,  1,    155,  3,    155,  1812, 8,    155,
            1,    155,  1,    155,  1,    155,  3,    155,  1817, 8,    155,  1,    156,  1,
            156,  1,    156,  5,    156,  1822, 8,    156,  10,   156,  12,   156,  1825, 9,
            156,  1,    157,  1,    157,  1,    157,  3,    157,  1830, 8,    157,  1,    157,
            1,    157,  3,    157,  1834, 8,    157,  1,    157,  3,    157,  1837, 8,    157,
            1,    157,  1,    157,  3,    157,  1841, 8,    157,  1,    158,  4,    158,  1844,
            8,    158,  11,   158,  12,   158,  1845, 1,    159,  1,    159,  1,    160,  1,
            160,  1,    160,  1,    161,  1,    161,  1,    161,  1,    162,  1,    162,  3,
            162,  1858, 8,    162,  1,    162,  1,    162,  1,    162,  3,    162,  1863, 8,
            162,  5,    162,  1865, 8,    162,  10,   162,  12,   162,  1868, 9,    162,  1,
            163,  3,    163,  1871, 8,    163,  1,    163,  1,    163,  1,    163,  3,    163,
            1876, 8,    163,  1,    163,  1,    163,  1,    163,  3,    163,  1881, 8,    163,
            1,    163,  1,    163,  3,    163,  1885, 8,    163,  1,    164,  3,    164,  1888,
            8,    164,  1,    164,  1,    164,  3,    164,  1892, 8,    164,  1,    165,  1,
            165,  1,    166,  1,    166,  1,    167,  1,    167,  1,    167,  1,    168,  1,
            168,  3,    168,  1903, 8,    168,  1,    169,  1,    169,  3,    169,  1907, 8,
            169,  1,    170,  1,    170,  1,    170,  1,    171,  1,    171,  3,    171,  1914,
            8,    171,  1,    171,  1,    171,  1,    171,  3,    171,  1919, 8,    171,  5,
            171,  1921, 8,    171,  10,   171,  12,   171,  1924, 9,    171,  1,    172,  1,
            172,  1,    172,  3,    172,  1929, 8,    172,  1,    172,  1,    172,  3,    172,
            1933, 8,    172,  1,    173,  1,    173,  3,    173,  1937, 8,    173,  1,    174,
            1,    174,  1,    174,  1,    175,  1,    175,  1,    175,  1,    175,  3,    175,
            1946, 8,    175,  1,    176,  1,    176,  1,    176,  1,    176,  1,    176,  1,
            176,  1,    177,  1,    177,  1,    177,  5,    177,  1957, 8,    177,  10,   177,
            12,   177,  1960, 9,    177,  1,    178,  1,    178,  3,    178,  1964, 8,    178,
            1,    179,  1,    179,  1,    179,  1,    179,  1,    179,  3,    179,  1971, 8,
            179,  1,    179,  1,    179,  3,    179,  1975, 8,    179,  1,    179,  3,    179,
            1978, 8,    179,  1,    179,  3,    179,  1981, 8,    179,  1,    179,  3,    179,
            1984, 8,    179,  1,    179,  1,    179,  3,    179,  1988, 8,    179,  1,    180,
            1,    180,  1,    180,  3,    180,  1993, 8,    180,  1,    180,  1,    180,  1,
            181,  1,    181,  1,    181,  3,    181,  2000, 8,    181,  1,    181,  1,    181,
            3,    181,  2004, 8,    181,  1,    181,  1,    181,  3,    181,  2008, 8,    181,
            1,    182,  1,    182,  1,    183,  3,    183,  2013, 8,    183,  1,    183,  1,
            183,  3,    183,  2017, 8,    183,  1,    183,  1,    183,  3,    183,  2021, 8,
            183,  1,    183,  1,    183,  3,    183,  2025, 8,    183,  5,    183,  2027, 8,
            183,  10,   183,  12,   183,  2030, 9,    183,  1,    184,  1,    184,  1,    184,
            3,    184,  2035, 8,    184,  1,    185,  1,    185,  1,    185,  1,    185,  3,
            185,  2041, 8,    185,  1,    185,  3,    185,  2044, 8,    185,  1,    186,  3,
            186,  2047, 8,    186,  1,    186,  1,    186,  1,    186,  1,    187,  1,    187,
            1,    187,  1,    187,  1,    187,  1,    188,  1,    188,  1,    188,  1,    188,
            1,    189,  1,    189,  3,    189,  2063, 8,    189,  1,    189,  1,    189,  1,
            189,  1,    190,  4,    190,  2069, 8,    190,  11,   190,  12,   190,  2070, 1,
            191,  1,    191,  1,    191,  1,    191,  1,    191,  1,    191,  1,    192,  3,
            192,  2080, 8,    192,  1,    192,  1,    192,  1,    192,  3,    192,  2085, 8,
            192,  1,    192,  3,    192,  2088, 8,    192,  1,    193,  1,    193,  3,    193,
            2092, 8,    193,  1,    194,  1,    194,  3,    194,  2096, 8,    194,  1,    195,
            1,    195,  1,    195,  3,    195,  2101, 8,    195,  1,    195,  1,    195,  1,
            196,  1,    196,  3,    196,  2107, 8,    196,  1,    196,  1,    196,  1,    196,
            3,    196,  2112, 8,    196,  5,    196,  2114, 8,    196,  10,   196,  12,   196,
            2117, 9,    196,  1,    197,  1,    197,  1,    197,  1,    197,  1,    197,  1,
            197,  3,    197,  2125, 8,    197,  1,    198,  1,    198,  1,    198,  3,    198,
            2130, 8,    198,  1,    198,  1,    198,  1,    198,  3,    198,  2135, 8,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,
            1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  1,    198,  3,    198,
            2178, 8,    198,  1,    199,  1,    199,  1,    199,  1,    1064, 6,    10,   30,
            50,   230,  252,  256,  200,  0,    2,    4,    6,    8,    10,   12,   14,   16,
            18,   20,   22,   24,   26,   28,   30,   32,   34,   36,   38,   40,   42,   44,
            46,   48,   50,   52,   54,   56,   58,   60,   62,   64,   66,   68,   70,   72,
            74,   76,   78,   80,   82,   84,   86,   88,   90,   92,   94,   96,   98,   100,
            102,  104,  106,  108,  110,  112,  114,  116,  118,  120,  122,  124,  126,  128,
            130,  132,  134,  136,  138,  140,  142,  144,  146,  148,  150,  152,  154,  156,
            158,  160,  162,  164,  166,  168,  170,  172,  174,  176,  178,  180,  182,  184,
            186,  188,  190,  192,  194,  196,  198,  200,  202,  204,  206,  208,  210,  212,
            214,  216,  218,  220,  222,  224,  226,  228,  230,  232,  234,  236,  238,  240,
            242,  244,  246,  248,  250,  252,  254,  256,  258,  260,  262,  264,  266,  268,
            270,  272,  274,  276,  278,  280,  282,  284,  286,  288,  290,  292,  294,  296,
            298,  300,  302,  304,  306,  308,  310,  312,  314,  316,  318,  320,  322,  324,
            326,  328,  330,  332,  334,  336,  338,  340,  342,  344,  346,  348,  350,  352,
            354,  356,  358,  360,  362,  364,  366,  368,  370,  372,  374,  376,  378,  380,
            382,  384,  386,  388,  390,  392,  394,  396,  398,  0,    24,   2,    0,    97,
            97,   101,  101,  4,    0,    25,   26,   33,   33,   59,   59,   66,   66,   2,
            0,    124,  124,  129,  129,  1,    0,    120,  121,  2,    0,    91,   93,   97,
            100,  2,    0,    123,  123,  130,  130,  1,    0,    93,   95,   1,    0,    91,
            92,   2,    0,    102,  103,  116,  117,  1,    0,    114,  115,  2,    0,    101,
            101,  104,  113,  4,    0,    38,   38,   48,   48,   64,   64,   72,   72,   3,
            0,    36,   36,   45,   45,   80,   80,   2,    0,    47,   47,   61,   61,   2,
            0,    62,   62,   78,   78,   2,    0,    22,   22,   68,   68,   1,    0,    85,
            90,   2,    0,    97,   97,   118,  118,  2,    0,    23,   23,   82,   82,   1,
            0,    29,   30,   1,    0,    67,   68,   2,    0,    40,   40,   54,   54,   1,
            0,    55,   57,   1,    0,    1,    7,    2418, 0,    401,  1,    0,    0,    0,
            2,    417,  1,    0,    0,    0,    4,    421,  1,    0,    0,    0,    6,    433,
            1,    0,    0,    0,    8,    435,  1,    0,    0,    0,    10,   441,  1,    0,
            0,    0,    12,   463,  1,    0,    0,    0,    14,   469,  1,    0,    0,    0,
            16,   481,  1,    0,    0,    0,    18,   483,  1,    0,    0,    0,    20,   485,
            1,    0,    0,    0,    22,   498,  1,    0,    0,    0,    24,   505,  1,    0,
            0,    0,    26,   508,  1,    0,    0,    0,    28,   513,  1,    0,    0,    0,
            30,   560,  1,    0,    0,    0,    32,   592,  1,    0,    0,    0,    34,   594,
            1,    0,    0,    0,    36,   615,  1,    0,    0,    0,    38,   644,  1,    0,
            0,    0,    40,   646,  1,    0,    0,    0,    42,   649,  1,    0,    0,    0,
            44,   665,  1,    0,    0,    0,    46,   669,  1,    0,    0,    0,    48,   678,
            1,    0,    0,    0,    50,   680,  1,    0,    0,    0,    52,   705,  1,    0,
            0,    0,    54,   708,  1,    0,    0,    0,    56,   717,  1,    0,    0,    0,
            58,   728,  1,    0,    0,    0,    60,   730,  1,    0,    0,    0,    62,   738,
            1,    0,    0,    0,    64,   746,  1,    0,    0,    0,    66,   754,  1,    0,
            0,    0,    68,   767,  1,    0,    0,    0,    70,   769,  1,    0,    0,    0,
            72,   777,  1,    0,    0,    0,    74,   785,  1,    0,    0,    0,    76,   793,
            1,    0,    0,    0,    78,   801,  1,    0,    0,    0,    80,   809,  1,    0,
            0,    0,    82,   817,  1,    0,    0,    0,    84,   825,  1,    0,    0,    0,
            86,   839,  1,    0,    0,    0,    88,   841,  1,    0,    0,    0,    90,   843,
            1,    0,    0,    0,    92,   851,  1,    0,    0,    0,    94,   866,  1,    0,
            0,    0,    96,   869,  1,    0,    0,    0,    98,   881,  1,    0,    0,    0,
            100,  885,  1,    0,    0,    0,    102,  892,  1,    0,    0,    0,    104,  911,
            1,    0,    0,    0,    106,  924,  1,    0,    0,    0,    108,  959,  1,    0,
            0,    0,    110,  963,  1,    0,    0,    0,    112,  966,  1,    0,    0,    0,
            114,  973,  1,    0,    0,    0,    116,  984,  1,    0,    0,    0,    118,  988,
            1,    0,    0,    0,    120,  991,  1,    0,    0,    0,    122,  1004, 1,    0,
            0,    0,    124,  1014, 1,    0,    0,    0,    126,  1016, 1,    0,    0,    0,
            128,  1039, 1,    0,    0,    0,    130,  1041, 1,    0,    0,    0,    132,  1049,
            1,    0,    0,    0,    134,  1051, 1,    0,    0,    0,    136,  1059, 1,    0,
            0,    0,    138,  1062, 1,    0,    0,    0,    140,  1069, 1,    0,    0,    0,
            142,  1071, 1,    0,    0,    0,    144,  1073, 1,    0,    0,    0,    146,  1080,
            1,    0,    0,    0,    148,  1086, 1,    0,    0,    0,    150,  1089, 1,    0,
            0,    0,    152,  1097, 1,    0,    0,    0,    154,  1104, 1,    0,    0,    0,
            156,  1106, 1,    0,    0,    0,    158,  1132, 1,    0,    0,    0,    160,  1138,
            1,    0,    0,    0,    162,  1140, 1,    0,    0,    0,    164,  1170, 1,    0,
            0,    0,    166,  1172, 1,    0,    0,    0,    168,  1174, 1,    0,    0,    0,
            170,  1184, 1,    0,    0,    0,    172,  1197, 1,    0,    0,    0,    174,  1207,
            1,    0,    0,    0,    176,  1211, 1,    0,    0,    0,    178,  1214, 1,    0,
            0,    0,    180,  1222, 1,    0,    0,    0,    182,  1227, 1,    0,    0,    0,
            184,  1231, 1,    0,    0,    0,    186,  1233, 1,    0,    0,    0,    188,  1236,
            1,    0,    0,    0,    190,  1249, 1,    0,    0,    0,    192,  1251, 1,    0,
            0,    0,    194,  1258, 1,    0,    0,    0,    196,  1262, 1,    0,    0,    0,
            198,  1274, 1,    0,    0,    0,    200,  1294, 1,    0,    0,    0,    202,  1296,
            1,    0,    0,    0,    204,  1307, 1,    0,    0,    0,    206,  1319, 1,    0,
            0,    0,    208,  1321, 1,    0,    0,    0,    210,  1332, 1,    0,    0,    0,
            212,  1346, 1,    0,    0,    0,    214,  1352, 1,    0,    0,    0,    216,  1354,
            1,    0,    0,    0,    218,  1361, 1,    0,    0,    0,    220,  1382, 1,    0,
            0,    0,    222,  1384, 1,    0,    0,    0,    224,  1392, 1,    0,    0,    0,
            226,  1401, 1,    0,    0,    0,    228,  1409, 1,    0,    0,    0,    230,  1423,
            1,    0,    0,    0,    232,  1442, 1,    0,    0,    0,    234,  1459, 1,    0,
            0,    0,    236,  1478, 1,    0,    0,    0,    238,  1481, 1,    0,    0,    0,
            240,  1485, 1,    0,    0,    0,    242,  1487, 1,    0,    0,    0,    244,  1490,
            1,    0,    0,    0,    246,  1494, 1,    0,    0,    0,    248,  1506, 1,    0,
            0,    0,    250,  1517, 1,    0,    0,    0,    252,  1533, 1,    0,    0,    0,
            254,  1556, 1,    0,    0,    0,    256,  1561, 1,    0,    0,    0,    258,  1581,
            1,    0,    0,    0,    260,  1588, 1,    0,    0,    0,    262,  1597, 1,    0,
            0,    0,    264,  1611, 1,    0,    0,    0,    266,  1627, 1,    0,    0,    0,
            268,  1634, 1,    0,    0,    0,    270,  1639, 1,    0,    0,    0,    272,  1643,
            1,    0,    0,    0,    274,  1645, 1,    0,    0,    0,    276,  1659, 1,    0,
            0,    0,    278,  1677, 1,    0,    0,    0,    280,  1682, 1,    0,    0,    0,
            282,  1694, 1,    0,    0,    0,    284,  1706, 1,    0,    0,    0,    286,  1710,
            1,    0,    0,    0,    288,  1713, 1,    0,    0,    0,    290,  1718, 1,    0,
            0,    0,    292,  1741, 1,    0,    0,    0,    294,  1743, 1,    0,    0,    0,
            296,  1747, 1,    0,    0,    0,    298,  1749, 1,    0,    0,    0,    300,  1757,
            1,    0,    0,    0,    302,  1773, 1,    0,    0,    0,    304,  1777, 1,    0,
            0,    0,    306,  1779, 1,    0,    0,    0,    308,  1782, 1,    0,    0,    0,
            310,  1816, 1,    0,    0,    0,    312,  1818, 1,    0,    0,    0,    314,  1840,
            1,    0,    0,    0,    316,  1843, 1,    0,    0,    0,    318,  1847, 1,    0,
            0,    0,    320,  1849, 1,    0,    0,    0,    322,  1852, 1,    0,    0,    0,
            324,  1855, 1,    0,    0,    0,    326,  1870, 1,    0,    0,    0,    328,  1891,
            1,    0,    0,    0,    330,  1893, 1,    0,    0,    0,    332,  1895, 1,    0,
            0,    0,    334,  1897, 1,    0,    0,    0,    336,  1900, 1,    0,    0,    0,
            338,  1904, 1,    0,    0,    0,    340,  1908, 1,    0,    0,    0,    342,  1911,
            1,    0,    0,    0,    344,  1925, 1,    0,    0,    0,    346,  1936, 1,    0,
            0,    0,    348,  1938, 1,    0,    0,    0,    350,  1941, 1,    0,    0,    0,
            352,  1947, 1,    0,    0,    0,    354,  1953, 1,    0,    0,    0,    356,  1963,
            1,    0,    0,    0,    358,  1974, 1,    0,    0,    0,    360,  1989, 1,    0,
            0,    0,    362,  2007, 1,    0,    0,    0,    364,  2009, 1,    0,    0,    0,
            366,  2012, 1,    0,    0,    0,    368,  2034, 1,    0,    0,    0,    370,  2036,
            1,    0,    0,    0,    372,  2046, 1,    0,    0,    0,    374,  2051, 1,    0,
            0,    0,    376,  2056, 1,    0,    0,    0,    378,  2060, 1,    0,    0,    0,
            380,  2068, 1,    0,    0,    0,    382,  2072, 1,    0,    0,    0,    384,  2087,
            1,    0,    0,    0,    386,  2089, 1,    0,    0,    0,    388,  2095, 1,    0,
            0,    0,    390,  2097, 1,    0,    0,    0,    392,  2104, 1,    0,    0,    0,
            394,  2124, 1,    0,    0,    0,    396,  2177, 1,    0,    0,    0,    398,  2179,
            1,    0,    0,    0,    400,  402,  3,    120,  60,   0,    401,  400,  1,    0,
            0,    0,    401,  402,  1,    0,    0,    0,    402,  403,  1,    0,    0,    0,
            403,  404,  5,    0,    0,    1,    404,  1,    1,    0,    0,    0,    405,  407,
            3,    398,  199,  0,    406,  405,  1,    0,    0,    0,    407,  408,  1,    0,
            0,    0,    408,  406,  1,    0,    0,    0,    408,  409,  1,    0,    0,    0,
            409,  418,  1,    0,    0,    0,    410,  418,  5,    71,   0,    0,    411,  412,
            5,    85,   0,    0,    412,  413,  3,    90,   45,   0,    413,  414,  5,    86,
            0,    0,    414,  418,  1,    0,    0,    0,    415,  418,  3,    4,    2,    0,
            416,  418,  3,    12,   6,    0,    417,  406,  1,    0,    0,    0,    417,  410,
            1,    0,    0,    0,    417,  411,  1,    0,    0,    0,    417,  415,  1,    0,
            0,    0,    417,  416,  1,    0,    0,    0,    418,  3,    1,    0,    0,    0,
            419,  422,  3,    6,    3,    0,    420,  422,  3,    8,    4,    0,    421,  419,
            1,    0,    0,    0,    421,  420,  1,    0,    0,    0,    422,  5,    1,    0,
            0,    0,    423,  434,  5,    132,  0,    0,    424,  434,  3,    348,  174,  0,
            425,  434,  3,    334,  167,  0,    426,  434,  3,    350,  175,  0,    427,  430,
            5,    99,   0,    0,    428,  431,  3,    296,  148,  0,    429,  431,  3,    162,
            81,   0,    430,  428,  1,    0,    0,    0,    430,  429,  1,    0,    0,    0,
            431,  434,  1,    0,    0,    0,    432,  434,  3,    362,  181,  0,    433,  423,
            1,    0,    0,    0,    433,  424,  1,    0,    0,    0,    433,  425,  1,    0,
            0,    0,    433,  426,  1,    0,    0,    0,    433,  427,  1,    0,    0,    0,
            433,  432,  1,    0,    0,    0,    434,  7,    1,    0,    0,    0,    435,  437,
            3,    10,   5,    0,    436,  438,  5,    70,   0,    0,    437,  436,  1,    0,
            0,    0,    437,  438,  1,    0,    0,    0,    438,  439,  1,    0,    0,    0,
            439,  440,  3,    6,    3,    0,    440,  9,    1,    0,    0,    0,    441,  445,
            6,    5,    -1,   0,    442,  446,  3,    160,  80,   0,    443,  446,  3,    184,
            92,   0,    444,  446,  3,    162,  81,   0,    445,  442,  1,    0,    0,    0,
            445,  443,  1,    0,    0,    0,    445,  444,  1,    0,    0,    0,    445,  446,
            1,    0,    0,    0,    446,  447,  1,    0,    0,    0,    447,  448,  5,    127,
            0,    0,    448,  460,  1,    0,    0,    0,    449,  455,  10,   1,    0,    0,
            450,  456,  5,    132,  0,    0,    451,  453,  5,    70,   0,    0,    452,  451,
            1,    0,    0,    0,    452,  453,  1,    0,    0,    0,    453,  454,  1,    0,
            0,    0,    454,  456,  3,    360,  180,  0,    455,  450,  1,    0,    0,    0,
            455,  452,  1,    0,    0,    0,    456,  457,  1,    0,    0,    0,    457,  459,
            5,    127,  0,    0,    458,  449,  1,    0,    0,    0,    459,  462,  1,    0,
            0,    0,    460,  458,  1,    0,    0,    0,    460,  461,  1,    0,    0,    0,
            461,  11,   1,    0,    0,    0,    462,  460,  1,    0,    0,    0,    463,  465,
            3,    14,   7,    0,    464,  466,  3,    28,   14,   0,    465,  464,  1,    0,
            0,    0,    465,  466,  1,    0,    0,    0,    466,  467,  1,    0,    0,    0,
            467,  468,  3,    100,  50,   0,    468,  13,   1,    0,    0,    0,    469,  471,
            5,    87,   0,    0,    470,  472,  3,    16,   8,    0,    471,  470,  1,    0,
            0,    0,    471,  472,  1,    0,    0,    0,    472,  473,  1,    0,    0,    0,
            473,  474,  5,    88,   0,    0,    474,  15,   1,    0,    0,    0,    475,  482,
            3,    20,   10,   0,    476,  479,  3,    18,   9,    0,    477,  478,  5,    122,
            0,    0,    478,  480,  3,    20,   10,   0,    479,  477,  1,    0,    0,    0,
            479,  480,  1,    0,    0,    0,    480,  482,  1,    0,    0,    0,    481,  475,
            1,    0,    0,    0,    481,  476,  1,    0,    0,    0,    482,  17,   1,    0,
            0,    0,    483,  484,  7,    0,    0,    0,    484,  19,   1,    0,    0,    0,
            485,  490,  3,    22,   11,   0,    486,  487,  5,    122,  0,    0,    487,  489,
            3,    22,   11,   0,    488,  486,  1,    0,    0,    0,    489,  492,  1,    0,
            0,    0,    490,  488,  1,    0,    0,    0,    490,  491,  1,    0,    0,    0,
            491,  494,  1,    0,    0,    0,    492,  490,  1,    0,    0,    0,    493,  495,
            5,    131,  0,    0,    494,  493,  1,    0,    0,    0,    494,  495,  1,    0,
            0,    0,    495,  21,   1,    0,    0,    0,    496,  499,  3,    24,   12,   0,
            497,  499,  3,    26,   13,   0,    498,  496,  1,    0,    0,    0,    498,  497,
            1,    0,    0,    0,    499,  23,   1,    0,    0,    0,    500,  502,  5,    97,
            0,    0,    501,  500,  1,    0,    0,    0,    501,  502,  1,    0,    0,    0,
            502,  503,  1,    0,    0,    0,    503,  506,  5,    132,  0,    0,    504,  506,
            5,    71,   0,    0,    505,  501,  1,    0,    0,    0,    505,  504,  1,    0,
            0,    0,    506,  25,   1,    0,    0,    0,    507,  509,  5,    97,   0,    0,
            508,  507,  1,    0,    0,    0,    508,  509,  1,    0,    0,    0,    509,  510,
            1,    0,    0,    0,    510,  511,  5,    132,  0,    0,    511,  512,  3,    268,
            134,  0,    512,  27,   1,    0,    0,    0,    513,  515,  5,    85,   0,    0,
            514,  516,  3,    258,  129,  0,    515,  514,  1,    0,    0,    0,    515,  516,
            1,    0,    0,    0,    516,  517,  1,    0,    0,    0,    517,  519,  5,    86,
            0,    0,    518,  520,  5,    48,   0,    0,    519,  518,  1,    0,    0,    0,
            519,  520,  1,    0,    0,    0,    520,  522,  1,    0,    0,    0,    521,  523,
            3,    388,  194,  0,    522,  521,  1,    0,    0,    0,    522,  523,  1,    0,
            0,    0,    523,  525,  1,    0,    0,    0,    524,  526,  3,    204,  102,  0,
            525,  524,  1,    0,    0,    0,    525,  526,  1,    0,    0,    0,    526,  528,
            1,    0,    0,    0,    527,  529,  3,    234,  117,  0,    528,  527,  1,    0,
            0,    0,    528,  529,  1,    0,    0,    0,    529,  29,   1,    0,    0,    0,
            530,  531,  6,    15,   -1,   0,    531,  561,  3,    2,    1,    0,    532,  535,
            3,    158,  79,   0,    533,  535,  3,    370,  185,  0,    534,  532,  1,    0,
            0,    0,    534,  533,  1,    0,    0,    0,    535,  542,  1,    0,    0,    0,
            536,  538,  5,    85,   0,    0,    537,  539,  3,    34,   17,   0,    538,  537,
            1,    0,    0,    0,    538,  539,  1,    0,    0,    0,    539,  540,  1,    0,
            0,    0,    540,  543,  5,    86,   0,    0,    541,  543,  3,    276,  138,  0,
            542,  536,  1,    0,    0,    0,    542,  541,  1,    0,    0,    0,    543,  561,
            1,    0,    0,    0,    544,  545,  7,    1,    0,    0,    545,  546,  5,    102,
            0,    0,    546,  547,  3,    246,  123,  0,    547,  548,  5,    103,  0,    0,
            548,  549,  5,    85,   0,    0,    549,  550,  3,    90,   45,   0,    550,  551,
            5,    86,   0,    0,    551,  561,  1,    0,    0,    0,    552,  553,  3,    32,
            16,   0,    553,  556,  5,    85,   0,    0,    554,  557,  3,    90,   45,   0,
            555,  557,  3,    246,  123,  0,    556,  554,  1,    0,    0,    0,    556,  555,
            1,    0,    0,    0,    557,  558,  1,    0,    0,    0,    558,  559,  5,    86,
            0,    0,    559,  561,  1,    0,    0,    0,    560,  530,  1,    0,    0,    0,
            560,  534,  1,    0,    0,    0,    560,  544,  1,    0,    0,    0,    560,  552,
            1,    0,    0,    0,    561,  589,  1,    0,    0,    0,    562,  563,  10,   7,
            0,    0,    563,  566,  5,    87,   0,    0,    564,  567,  3,    90,   45,   0,
            565,  567,  3,    276,  138,  0,    566,  564,  1,    0,    0,    0,    566,  565,
            1,    0,    0,    0,    567,  568,  1,    0,    0,    0,    568,  569,  5,    88,
            0,    0,    569,  588,  1,    0,    0,    0,    570,  571,  10,   6,    0,    0,
            571,  573,  5,    85,   0,    0,    572,  574,  3,    34,   17,   0,    573,  572,
            1,    0,    0,    0,    573,  574,  1,    0,    0,    0,    574,  575,  1,    0,
            0,    0,    575,  588,  5,    86,   0,    0,    576,  577,  10,   4,    0,    0,
            577,  583,  7,    2,    0,    0,    578,  580,  5,    70,   0,    0,    579,  578,
            1,    0,    0,    0,    579,  580,  1,    0,    0,    0,    580,  581,  1,    0,
            0,    0,    581,  584,  3,    4,    2,    0,    582,  584,  3,    36,   18,   0,
            583,  579,  1,    0,    0,    0,    583,  582,  1,    0,    0,    0,    584,  588,
            1,    0,    0,    0,    585,  586,  10,   3,    0,    0,    586,  588,  7,    3,
            0,    0,    587,  562,  1,    0,    0,    0,    587,  570,  1,    0,    0,    0,
            587,  576,  1,    0,    0,    0,    587,  585,  1,    0,    0,    0,    588,  591,
            1,    0,    0,    0,    589,  587,  1,    0,    0,    0,    589,  590,  1,    0,
            0,    0,    590,  31,   1,    0,    0,    0,    591,  589,  1,    0,    0,    0,
            592,  593,  5,    76,   0,    0,    593,  33,   1,    0,    0,    0,    594,  595,
            3,    274,  137,  0,    595,  35,   1,    0,    0,    0,    596,  598,  3,    10,
            5,    0,    597,  596,  1,    0,    0,    0,    597,  598,  1,    0,    0,    0,
            598,  602,  1,    0,    0,    0,    599,  600,  3,    160,  80,   0,    600,  601,
            5,    127,  0,    0,    601,  603,  1,    0,    0,    0,    602,  599,  1,    0,
            0,    0,    602,  603,  1,    0,    0,    0,    603,  604,  1,    0,    0,    0,
            604,  605,  5,    99,   0,    0,    605,  616,  3,    160,  80,   0,    606,  607,
            3,    10,   5,    0,    607,  608,  5,    70,   0,    0,    608,  609,  3,    360,
            180,  0,    609,  610,  5,    127,  0,    0,    610,  611,  5,    99,   0,    0,
            611,  612,  3,    160,  80,   0,    612,  616,  1,    0,    0,    0,    613,  614,
            5,    99,   0,    0,    614,  616,  3,    162,  81,   0,    615,  597,  1,    0,
            0,    0,    615,  606,  1,    0,    0,    0,    615,  613,  1,    0,    0,    0,
            616,  37,   1,    0,    0,    0,    617,  645,  3,    30,   15,   0,    618,  623,
            5,    120,  0,    0,    619,  623,  5,    121,  0,    0,    620,  623,  3,    40,
            20,   0,    621,  623,  5,    63,   0,    0,    622,  618,  1,    0,    0,    0,
            622,  619,  1,    0,    0,    0,    622,  620,  1,    0,    0,    0,    622,  621,
            1,    0,    0,    0,    623,  624,  1,    0,    0,    0,    624,  645,  3,    38,
            19,   0,    625,  634,  5,    63,   0,    0,    626,  627,  5,    85,   0,    0,
            627,  628,  3,    246,  123,  0,    628,  629,  5,    86,   0,    0,    629,  635,
            1,    0,    0,    0,    630,  631,  5,    131,  0,    0,    631,  632,  5,    85,
            0,    0,    632,  633,  5,    132,  0,    0,    633,  635,  5,    86,   0,    0,
            634,  626,  1,    0,    0,    0,    634,  630,  1,    0,    0,    0,    635,  645,
            1,    0,    0,    0,    636,  637,  5,    11,   0,    0,    637,  638,  5,    85,
            0,    0,    638,  639,  3,    246,  123,  0,    639,  640,  5,    86,   0,    0,
            640,  645,  1,    0,    0,    0,    641,  645,  3,    56,   28,   0,    642,  645,
            3,    42,   21,   0,    643,  645,  3,    54,   27,   0,    644,  617,  1,    0,
            0,    0,    644,  622,  1,    0,    0,    0,    644,  625,  1,    0,    0,    0,
            644,  636,  1,    0,    0,    0,    644,  641,  1,    0,    0,    0,    644,  642,
            1,    0,    0,    0,    644,  643,  1,    0,    0,    0,    645,  39,   1,    0,
            0,    0,    646,  647,  7,    4,    0,    0,    647,  41,   1,    0,    0,    0,
            648,  650,  5,    127,  0,    0,    649,  648,  1,    0,    0,    0,    649,  650,
            1,    0,    0,    0,    650,  651,  1,    0,    0,    0,    651,  653,  5,    50,
            0,    0,    652,  654,  3,    44,   22,   0,    653,  652,  1,    0,    0,    0,
            653,  654,  1,    0,    0,    0,    654,  660,  1,    0,    0,    0,    655,  661,
            3,    46,   23,   0,    656,  657,  5,    85,   0,    0,    657,  658,  3,    246,
            123,  0,    658,  659,  5,    86,   0,    0,    659,  661,  1,    0,    0,    0,
            660,  655,  1,    0,    0,    0,    660,  656,  1,    0,    0,    0,    661,  663,
            1,    0,    0,    0,    662,  664,  3,    52,   26,   0,    663,  662,  1,    0,
            0,    0,    663,  664,  1,    0,    0,    0,    664,  43,   1,    0,    0,    0,
            665,  666,  5,    85,   0,    0,    666,  667,  3,    34,   17,   0,    667,  668,
            5,    86,   0,    0,    668,  45,   1,    0,    0,    0,    669,  671,  3,    150,
            75,   0,    670,  672,  3,    48,   24,   0,    671,  670,  1,    0,    0,    0,
            671,  672,  1,    0,    0,    0,    672,  47,   1,    0,    0,    0,    673,  675,
            3,    236,  118,  0,    674,  676,  3,    48,   24,   0,    675,  674,  1,    0,
            0,    0,    675,  676,  1,    0,    0,    0,    676,  679,  1,    0,    0,    0,
            677,  679,  3,    50,   25,   0,    678,  673,  1,    0,    0,    0,    678,  677,
            1,    0,    0,    0,    679,  49,   1,    0,    0,    0,    680,  681,  6,    25,
            -1,   0,    681,  682,  5,    87,   0,    0,    682,  683,  3,    90,   45,   0,
            683,  685,  5,    88,   0,    0,    684,  686,  3,    204,  102,  0,    685,  684,
            1,    0,    0,    0,    685,  686,  1,    0,    0,    0,    686,  696,  1,    0,
            0,    0,    687,  688,  10,   1,    0,    0,    688,  689,  5,    87,   0,    0,
            689,  690,  3,    92,   46,   0,    690,  692,  5,    88,   0,    0,    691,  693,
            3,    204,  102,  0,    692,  691,  1,    0,    0,    0,    692,  693,  1,    0,
            0,    0,    693,  695,  1,    0,    0,    0,    694,  687,  1,    0,    0,    0,
            695,  698,  1,    0,    0,    0,    696,  694,  1,    0,    0,    0,    696,  697,
            1,    0,    0,    0,    697,  51,   1,    0,    0,    0,    698,  696,  1,    0,
            0,    0,    699,  701,  5,    85,   0,    0,    700,  702,  3,    34,   17,   0,
            701,  700,  1,    0,    0,    0,    701,  702,  1,    0,    0,    0,    702,  703,
            1,    0,    0,    0,    703,  706,  5,    86,   0,    0,    704,  706,  3,    276,
            138,  0,    705,  699,  1,    0,    0,    0,    705,  704,  1,    0,    0,    0,
            706,  53,   1,    0,    0,    0,    707,  709,  5,    127,  0,    0,    708,  707,
            1,    0,    0,    0,    708,  709,  1,    0,    0,    0,    709,  710,  1,    0,
            0,    0,    710,  713,  5,    30,   0,    0,    711,  712,  5,    87,   0,    0,
            712,  714,  5,    88,   0,    0,    713,  711,  1,    0,    0,    0,    713,  714,
            1,    0,    0,    0,    714,  715,  1,    0,    0,    0,    715,  716,  3,    58,
            29,   0,    716,  55,   1,    0,    0,    0,    717,  718,  5,    51,   0,    0,
            718,  719,  5,    85,   0,    0,    719,  720,  3,    90,   45,   0,    720,  721,
            5,    86,   0,    0,    721,  57,   1,    0,    0,    0,    722,  729,  3,    38,
            19,   0,    723,  724,  5,    85,   0,    0,    724,  725,  3,    246,  123,  0,
            725,  726,  5,    86,   0,    0,    726,  727,  3,    58,   29,   0,    727,  729,
            1,    0,    0,    0,    728,  722,  1,    0,    0,    0,    728,  723,  1,    0,
            0,    0,    729,  59,   1,    0,    0,    0,    730,  735,  3,    58,   29,   0,
            731,  732,  7,    5,    0,    0,    732,  734,  3,    58,   29,   0,    733,  731,
            1,    0,    0,    0,    734,  737,  1,    0,    0,    0,    735,  733,  1,    0,
            0,    0,    735,  736,  1,    0,    0,    0,    736,  61,   1,    0,    0,    0,
            737,  735,  1,    0,    0,    0,    738,  743,  3,    60,   30,   0,    739,  740,
            7,    6,    0,    0,    740,  742,  3,    60,   30,   0,    741,  739,  1,    0,
            0,    0,    742,  745,  1,    0,    0,    0,    743,  741,  1,    0,    0,    0,
            743,  744,  1,    0,    0,    0,    744,  63,   1,    0,    0,    0,    745,  743,
            1,    0,    0,    0,    746,  751,  3,    62,   31,   0,    747,  748,  7,    7,
            0,    0,    748,  750,  3,    62,   31,   0,    749,  747,  1,    0,    0,    0,
            750,  753,  1,    0,    0,    0,    751,  749,  1,    0,    0,    0,    751,  752,
            1,    0,    0,    0,    752,  65,   1,    0,    0,    0,    753,  751,  1,    0,
            0,    0,    754,  760,  3,    64,   32,   0,    755,  756,  3,    68,   34,   0,
            756,  757,  3,    64,   32,   0,    757,  759,  1,    0,    0,    0,    758,  755,
            1,    0,    0,    0,    759,  762,  1,    0,    0,    0,    760,  758,  1,    0,
            0,    0,    760,  761,  1,    0,    0,    0,    761,  67,   1,    0,    0,    0,
            762,  760,  1,    0,    0,    0,    763,  764,  5,    103,  0,    0,    764,  768,
            5,    103,  0,    0,    765,  766,  5,    102,  0,    0,    766,  768,  5,    102,
            0,    0,    767,  763,  1,    0,    0,    0,    767,  765,  1,    0,    0,    0,
            768,  69,   1,    0,    0,    0,    769,  774,  3,    66,   33,   0,    770,  771,
            7,    8,    0,    0,    771,  773,  3,    66,   33,   0,    772,  770,  1,    0,
            0,    0,    773,  776,  1,    0,    0,    0,    774,  772,  1,    0,    0,    0,
            774,  775,  1,    0,    0,    0,    775,  71,   1,    0,    0,    0,    776,  774,
            1,    0,    0,    0,    777,  782,  3,    70,   35,   0,    778,  779,  7,    9,
            0,    0,    779,  781,  3,    70,   35,   0,    780,  778,  1,    0,    0,    0,
            781,  784,  1,    0,    0,    0,    782,  780,  1,    0,    0,    0,    782,  783,
            1,    0,    0,    0,    783,  73,   1,    0,    0,    0,    784,  782,  1,    0,
            0,    0,    785,  790,  3,    72,   36,   0,    786,  787,  5,    97,   0,    0,
            787,  789,  3,    72,   36,   0,    788,  786,  1,    0,    0,    0,    789,  792,
            1,    0,    0,    0,    790,  788,  1,    0,    0,    0,    790,  791,  1,    0,
            0,    0,    791,  75,   1,    0,    0,    0,    792,  790,  1,    0,    0,    0,
            793,  798,  3,    74,   37,   0,    794,  795,  5,    96,   0,    0,    795,  797,
            3,    74,   37,   0,    796,  794,  1,    0,    0,    0,    797,  800,  1,    0,
            0,    0,    798,  796,  1,    0,    0,    0,    798,  799,  1,    0,    0,    0,
            799,  77,   1,    0,    0,    0,    800,  798,  1,    0,    0,    0,    801,  806,
            3,    76,   38,   0,    802,  803,  5,    98,   0,    0,    803,  805,  3,    76,
            38,   0,    804,  802,  1,    0,    0,    0,    805,  808,  1,    0,    0,    0,
            806,  804,  1,    0,    0,    0,    806,  807,  1,    0,    0,    0,    807,  79,
            1,    0,    0,    0,    808,  806,  1,    0,    0,    0,    809,  814,  3,    78,
            39,   0,    810,  811,  5,    118,  0,    0,    811,  813,  3,    78,   39,   0,
            812,  810,  1,    0,    0,    0,    813,  816,  1,    0,    0,    0,    814,  812,
            1,    0,    0,    0,    814,  815,  1,    0,    0,    0,    815,  81,   1,    0,
            0,    0,    816,  814,  1,    0,    0,    0,    817,  822,  3,    80,   40,   0,
            818,  819,  5,    119,  0,    0,    819,  821,  3,    80,   40,   0,    820,  818,
            1,    0,    0,    0,    821,  824,  1,    0,    0,    0,    822,  820,  1,    0,
            0,    0,    822,  823,  1,    0,    0,    0,    823,  83,   1,    0,    0,    0,
            824,  822,  1,    0,    0,    0,    825,  831,  3,    82,   41,   0,    826,  827,
            5,    125,  0,    0,    827,  828,  3,    90,   45,   0,    828,  829,  5,    126,
            0,    0,    829,  830,  3,    86,   43,   0,    830,  832,  1,    0,    0,    0,
            831,  826,  1,    0,    0,    0,    831,  832,  1,    0,    0,    0,    832,  85,
            1,    0,    0,    0,    833,  840,  3,    84,   42,   0,    834,  835,  3,    82,
            41,   0,    835,  836,  3,    88,   44,   0,    836,  837,  3,    272,  136,  0,
            837,  840,  1,    0,    0,    0,    838,  840,  3,    386,  193,  0,    839,  833,
            1,    0,    0,    0,    839,  834,  1,    0,    0,    0,    839,  838,  1,    0,
            0,    0,    840,  87,   1,    0,    0,    0,    841,  842,  7,    10,   0,    0,
            842,  89,   1,    0,    0,    0,    843,  848,  3,    86,   43,   0,    844,  845,
            5,    122,  0,    0,    845,  847,  3,    86,   43,   0,    846,  844,  1,    0,
            0,    0,    847,  850,  1,    0,    0,    0,    848,  846,  1,    0,    0,    0,
            848,  849,  1,    0,    0,    0,    849,  91,   1,    0,    0,    0,    850,  848,
            1,    0,    0,    0,    851,  852,  3,    84,   42,   0,    852,  93,   1,    0,
            0,    0,    853,  867,  3,    96,   48,   0,    854,  867,  3,    118,  59,   0,
            855,  857,  3,    204,  102,  0,    856,  855,  1,    0,    0,    0,    856,  857,
            1,    0,    0,    0,    857,  864,  1,    0,    0,    0,    858,  865,  3,    98,
            49,   0,    859,  865,  3,    100,  50,   0,    860,  865,  3,    104,  52,   0,
            861,  865,  3,    108,  54,   0,    862,  865,  3,    116,  58,   0,    863,  865,
            3,    376,  188,  0,    864,  858,  1,    0,    0,    0,    864,  859,  1,    0,
            0,    0,    864,  860,  1,    0,    0,    0,    864,  861,  1,    0,    0,    0,
            864,  862,  1,    0,    0,    0,    864,  863,  1,    0,    0,    0,    865,  867,
            1,    0,    0,    0,    866,  853,  1,    0,    0,    0,    866,  854,  1,    0,
            0,    0,    866,  856,  1,    0,    0,    0,    867,  95,   1,    0,    0,    0,
            868,  870,  3,    204,  102,  0,    869,  868,  1,    0,    0,    0,    869,  870,
            1,    0,    0,    0,    870,  875,  1,    0,    0,    0,    871,  876,  5,    132,
            0,    0,    872,  873,  5,    17,   0,    0,    873,  876,  3,    92,   46,   0,
            874,  876,  5,    29,   0,    0,    875,  871,  1,    0,    0,    0,    875,  872,
            1,    0,    0,    0,    875,  874,  1,    0,    0,    0,    876,  877,  1,    0,
            0,    0,    877,  878,  5,    126,  0,    0,    878,  879,  3,    94,   47,   0,
            879,  97,   1,    0,    0,    0,    880,  882,  3,    90,   45,   0,    881,  880,
            1,    0,    0,    0,    881,  882,  1,    0,    0,    0,    882,  883,  1,    0,
            0,    0,    883,  884,  5,    128,  0,    0,    884,  99,   1,    0,    0,    0,
            885,  887,  5,    89,   0,    0,    886,  888,  3,    102,  51,   0,    887,  886,
            1,    0,    0,    0,    887,  888,  1,    0,    0,    0,    888,  889,  1,    0,
            0,    0,    889,  890,  5,    90,   0,    0,    890,  101,  1,    0,    0,    0,
            891,  893,  3,    94,   47,   0,    892,  891,  1,    0,    0,    0,    893,  894,
            1,    0,    0,    0,    894,  892,  1,    0,    0,    0,    894,  895,  1,    0,
            0,    0,    895,  103,  1,    0,    0,    0,    896,  897,  5,    44,   0,    0,
            897,  898,  5,    85,   0,    0,    898,  899,  3,    106,  53,   0,    899,  900,
            5,    86,   0,    0,    900,  903,  3,    94,   47,   0,    901,  902,  5,    34,
            0,    0,    902,  904,  3,    94,   47,   0,    903,  901,  1,    0,    0,    0,
            903,  904,  1,    0,    0,    0,    904,  912,  1,    0,    0,    0,    905,  906,
            5,    69,   0,    0,    906,  907,  5,    85,   0,    0,    907,  908,  3,    106,
            53,   0,    908,  909,  5,    86,   0,    0,    909,  910,  3,    94,   47,   0,
            910,  912,  1,    0,    0,    0,    911,  896,  1,    0,    0,    0,    911,  905,
            1,    0,    0,    0,    912,  105,  1,    0,    0,    0,    913,  925,  3,    90,
            45,   0,    914,  916,  3,    204,  102,  0,    915,  914,  1,    0,    0,    0,
            915,  916,  1,    0,    0,    0,    916,  917,  1,    0,    0,    0,    917,  918,
            3,    138,  69,   0,    918,  922,  3,    226,  113,  0,    919,  920,  5,    101,
            0,    0,    920,  923,  3,    272,  136,  0,    921,  923,  3,    276,  138,  0,
            922,  919,  1,    0,    0,    0,    922,  921,  1,    0,    0,    0,    923,  925,
            1,    0,    0,    0,    924,  913,  1,    0,    0,    0,    924,  915,  1,    0,
            0,    0,    925,  107,  1,    0,    0,    0,    926,  927,  5,    84,   0,    0,
            927,  928,  5,    85,   0,    0,    928,  929,  3,    106,  53,   0,    929,  930,
            5,    86,   0,    0,    930,  931,  3,    94,   47,   0,    931,  960,  1,    0,
            0,    0,    932,  933,  5,    31,   0,    0,    933,  934,  3,    94,   47,   0,
            934,  935,  5,    84,   0,    0,    935,  936,  5,    85,   0,    0,    936,  937,
            3,    90,   45,   0,    937,  938,  5,    86,   0,    0,    938,  939,  5,    128,
            0,    0,    939,  960,  1,    0,    0,    0,    940,  941,  5,    42,   0,    0,
            941,  954,  5,    85,   0,    0,    942,  944,  3,    110,  55,   0,    943,  945,
            3,    106,  53,   0,    944,  943,  1,    0,    0,    0,    944,  945,  1,    0,
            0,    0,    945,  946,  1,    0,    0,    0,    946,  948,  5,    128,  0,    0,
            947,  949,  3,    90,   45,   0,    948,  947,  1,    0,    0,    0,    948,  949,
            1,    0,    0,    0,    949,  955,  1,    0,    0,    0,    950,  951,  3,    112,
            56,   0,    951,  952,  5,    126,  0,    0,    952,  953,  3,    114,  57,   0,
            953,  955,  1,    0,    0,    0,    954,  942,  1,    0,    0,    0,    954,  950,
            1,    0,    0,    0,    955,  956,  1,    0,    0,    0,    956,  957,  5,    86,
            0,    0,    957,  958,  3,    94,   47,   0,    958,  960,  1,    0,    0,    0,
            959,  926,  1,    0,    0,    0,    959,  932,  1,    0,    0,    0,    959,  940,
            1,    0,    0,    0,    960,  109,  1,    0,    0,    0,    961,  964,  3,    98,
            49,   0,    962,  964,  3,    128,  64,   0,    963,  961,  1,    0,    0,    0,
            963,  962,  1,    0,    0,    0,    964,  111,  1,    0,    0,    0,    965,  967,
            3,    204,  102,  0,    966,  965,  1,    0,    0,    0,    966,  967,  1,    0,
            0,    0,    967,  968,  1,    0,    0,    0,    968,  969,  3,    138,  69,   0,
            969,  970,  3,    226,  113,  0,    970,  113,  1,    0,    0,    0,    971,  974,
            3,    90,   45,   0,    972,  974,  3,    276,  138,  0,    973,  971,  1,    0,
            0,    0,    973,  972,  1,    0,    0,    0,    974,  115,  1,    0,    0,    0,
            975,  985,  5,    16,   0,    0,    976,  985,  5,    27,   0,    0,    977,  980,
            5,    60,   0,    0,    978,  981,  3,    90,   45,   0,    979,  981,  3,    276,
            138,  0,    980,  978,  1,    0,    0,    0,    980,  979,  1,    0,    0,    0,
            980,  981,  1,    0,    0,    0,    981,  985,  1,    0,    0,    0,    982,  983,
            5,    43,   0,    0,    983,  985,  5,    132,  0,    0,    984,  975,  1,    0,
            0,    0,    984,  976,  1,    0,    0,    0,    984,  977,  1,    0,    0,    0,
            984,  982,  1,    0,    0,    0,    985,  986,  1,    0,    0,    0,    986,  987,
            5,    128,  0,    0,    987,  117,  1,    0,    0,    0,    988,  989,  3,    124,
            62,   0,    989,  119,  1,    0,    0,    0,    990,  992,  3,    122,  61,   0,
            991,  990,  1,    0,    0,    0,    992,  993,  1,    0,    0,    0,    993,  991,
            1,    0,    0,    0,    993,  994,  1,    0,    0,    0,    994,  121,  1,    0,
            0,    0,    995,  1005, 3,    124,  62,   0,    996,  1005, 3,    264,  132,  0,
            997,  1005, 3,    352,  176,  0,    998,  1005, 3,    372,  186,  0,    999,  1005,
            3,    374,  187,  0,    1000, 1005, 3,    202,  101,  0,    1001, 1005, 3,    188,
            94,   0,    1002, 1005, 3,    132,  66,   0,    1003, 1005, 3,    134,  67,   0,
            1004, 995,  1,    0,    0,    0,    1004, 996,  1,    0,    0,    0,    1004, 997,
            1,    0,    0,    0,    1004, 998,  1,    0,    0,    0,    1004, 999,  1,    0,
            0,    0,    1004, 1000, 1,    0,    0,    0,    1004, 1001, 1,    0,    0,    0,
            1004, 1002, 1,    0,    0,    0,    1004, 1003, 1,    0,    0,    0,    1005, 123,
            1,    0,    0,    0,    1006, 1015, 3,    128,  64,   0,    1007, 1015, 3,    200,
            100,  0,    1008, 1015, 3,    192,  96,   0,    1009, 1015, 3,    196,  98,   0,
            1010, 1015, 3,    198,  99,   0,    1011, 1015, 3,    130,  65,   0,    1012, 1015,
            3,    126,  63,   0,    1013, 1015, 3,    172,  86,   0,    1014, 1006, 1,    0,
            0,    0,    1014, 1007, 1,    0,    0,    0,    1014, 1008, 1,    0,    0,    0,
            1014, 1009, 1,    0,    0,    0,    1014, 1010, 1,    0,    0,    0,    1014, 1011,
            1,    0,    0,    0,    1014, 1012, 1,    0,    0,    0,    1014, 1013, 1,    0,
            0,    0,    1015, 125,  1,    0,    0,    0,    1016, 1017, 5,    79,   0,    0,
            1017, 1019, 5,    132,  0,    0,    1018, 1020, 3,    204,  102,  0,    1019, 1018,
            1,    0,    0,    0,    1019, 1020, 1,    0,    0,    0,    1020, 1021, 1,    0,
            0,    0,    1021, 1022, 5,    101,  0,    0,    1022, 1023, 3,    246,  123,  0,
            1023, 1024, 5,    128,  0,    0,    1024, 127,  1,    0,    0,    0,    1025, 1027,
            3,    138,  69,   0,    1026, 1025, 1,    0,    0,    0,    1026, 1027, 1,    0,
            0,    0,    1027, 1029, 1,    0,    0,    0,    1028, 1030, 3,    222,  111,  0,
            1029, 1028, 1,    0,    0,    0,    1029, 1030, 1,    0,    0,    0,    1030, 1031,
            1,    0,    0,    0,    1031, 1040, 5,    128,  0,    0,    1032, 1034, 3,    204,
            102,  0,    1033, 1035, 3,    138,  69,   0,    1034, 1033, 1,    0,    0,    0,
            1034, 1035, 1,    0,    0,    0,    1035, 1036, 1,    0,    0,    0,    1036, 1037,
            3,    222,  111,  0,    1037, 1038, 5,    128,  0,    0,    1038, 1040, 1,    0,
            0,    0,    1039, 1026, 1,    0,    0,    0,    1039, 1032, 1,    0,    0,    0,
            1040, 129,  1,    0,    0,    0,    1041, 1042, 5,    65,   0,    0,    1042, 1043,
            5,    85,   0,    0,    1043, 1044, 3,    92,   46,   0,    1044, 1045, 5,    122,
            0,    0,    1045, 1046, 5,    4,    0,    0,    1046, 1047, 5,    86,   0,    0,
            1047, 1048, 5,    128,  0,    0,    1048, 131,  1,    0,    0,    0,    1049, 1050,
            5,    128,  0,    0,    1050, 133,  1,    0,    0,    0,    1051, 1052, 3,    204,
            102,  0,    1052, 1053, 5,    128,  0,    0,    1053, 135,  1,    0,    0,    0,
            1054, 1060, 3,    140,  70,   0,    1055, 1060, 3,    146,  73,   0,    1056, 1060,
            3,    142,  71,   0,    1057, 1060, 3,    316,  158,  0,    1058, 1060, 5,    24,
            0,    0,    1059, 1054, 1,    0,    0,    0,    1059, 1055, 1,    0,    0,    0,
            1059, 1056, 1,    0,    0,    0,    1059, 1057, 1,    0,    0,    0,    1059, 1058,
            1,    0,    0,    0,    1060, 137,  1,    0,    0,    0,    1061, 1063, 3,    136,
            68,   0,    1062, 1061, 1,    0,    0,    0,    1063, 1064, 1,    0,    0,    0,
            1064, 1065, 1,    0,    0,    0,    1064, 1062, 1,    0,    0,    0,    1065, 1067,
            1,    0,    0,    0,    1066, 1068, 3,    204,  102,  0,    1067, 1066, 1,    0,
            0,    0,    1067, 1068, 1,    0,    0,    0,    1068, 139,  1,    0,    0,    0,
            1069, 1070, 7,    11,   0,    0,    1070, 141,  1,    0,    0,    0,    1071, 1072,
            7,    12,   0,    0,    1072, 143,  1,    0,    0,    0,    1073, 1074, 5,    132,
            0,    0,    1074, 145,  1,    0,    0,    0,    1075, 1081, 3,    148,  74,   0,
            1076, 1081, 3,    298,  149,  0,    1077, 1081, 3,    280,  140,  0,    1078, 1081,
            3,    290,  145,  0,    1079, 1081, 3,    168,  84,   0,    1080, 1075, 1,    0,
            0,    0,    1080, 1076, 1,    0,    0,    0,    1080, 1077, 1,    0,    0,    0,
            1080, 1078, 1,    0,    0,    0,    1080, 1079, 1,    0,    0,    0,    1081, 147,
            1,    0,    0,    0,    1082, 1087, 3,    158,  79,   0,    1083, 1087, 3,    164,
            82,   0,    1084, 1087, 3,    370,  185,  0,    1085, 1087, 3,    240,  120,  0,
            1086, 1082, 1,    0,    0,    0,    1086, 1083, 1,    0,    0,    0,    1086, 1084,
            1,    0,    0,    0,    1086, 1085, 1,    0,    0,    0,    1087, 149,  1,    0,
            0,    0,    1088, 1090, 3,    146,  73,   0,    1089, 1088, 1,    0,    0,    0,
            1090, 1091, 1,    0,    0,    0,    1091, 1089, 1,    0,    0,    0,    1091, 1092,
            1,    0,    0,    0,    1092, 1094, 1,    0,    0,    0,    1093, 1095, 3,    204,
            102,  0,    1094, 1093, 1,    0,    0,    0,    1094, 1095, 1,    0,    0,    0,
            1095, 151,  1,    0,    0,    0,    1096, 1098, 3,    148,  74,   0,    1097, 1096,
            1,    0,    0,    0,    1098, 1099, 1,    0,    0,    0,    1099, 1097, 1,    0,
            0,    0,    1099, 1100, 1,    0,    0,    0,    1100, 1102, 1,    0,    0,    0,
            1101, 1103, 3,    204,  102,  0,    1102, 1101, 1,    0,    0,    0,    1102, 1103,
            1,    0,    0,    0,    1103, 153,  1,    0,    0,    0,    1104, 1105, 7,    13,
            0,    0,    1105, 155,  1,    0,    0,    0,    1106, 1107, 7,    14,   0,    0,
            1107, 157,  1,    0,    0,    0,    1108, 1110, 3,    10,   5,    0,    1109, 1108,
            1,    0,    0,    0,    1109, 1110, 1,    0,    0,    0,    1110, 1111, 1,    0,
            0,    0,    1111, 1133, 3,    160,  80,   0,    1112, 1113, 3,    10,   5,    0,
            1113, 1114, 5,    70,   0,    0,    1114, 1115, 3,    360,  180,  0,    1115, 1133,
            1,    0,    0,    0,    1116, 1133, 5,    19,   0,    0,    1117, 1133, 5,    20,
            0,    0,    1118, 1133, 5,    21,   0,    0,    1119, 1133, 5,    83,   0,    0,
            1120, 1133, 5,    15,   0,    0,    1121, 1133, 5,    61,   0,    0,    1122, 1133,
            5,    46,   0,    0,    1123, 1133, 5,    47,   0,    0,    1124, 1133, 5,    41,
            0,    0,    1125, 1133, 5,    62,   0,    0,    1126, 1133, 5,    78,   0,    0,
            1127, 1133, 5,    41,   0,    0,    1128, 1133, 5,    32,   0,    0,    1129, 1133,
            5,    81,   0,    0,    1130, 1133, 5,    14,   0,    0,    1131, 1133, 3,    162,
            81,   0,    1132, 1109, 1,    0,    0,    0,    1132, 1112, 1,    0,    0,    0,
            1132, 1116, 1,    0,    0,    0,    1132, 1117, 1,    0,    0,    0,    1132, 1118,
            1,    0,    0,    0,    1132, 1119, 1,    0,    0,    0,    1132, 1120, 1,    0,
            0,    0,    1132, 1121, 1,    0,    0,    0,    1132, 1122, 1,    0,    0,    0,
            1132, 1123, 1,    0,    0,    0,    1132, 1124, 1,    0,    0,    0,    1132, 1125,
            1,    0,    0,    0,    1132, 1126, 1,    0,    0,    0,    1132, 1127, 1,    0,
            0,    0,    1132, 1128, 1,    0,    0,    0,    1132, 1129, 1,    0,    0,    0,
            1132, 1130, 1,    0,    0,    0,    1132, 1131, 1,    0,    0,    0,    1133, 159,
            1,    0,    0,    0,    1134, 1139, 3,    296,  148,  0,    1135, 1139, 3,    166,
            83,   0,    1136, 1139, 3,    144,  72,   0,    1137, 1139, 3,    360,  180,  0,
            1138, 1134, 1,    0,    0,    0,    1138, 1135, 1,    0,    0,    0,    1138, 1136,
            1,    0,    0,    0,    1138, 1137, 1,    0,    0,    0,    1139, 161,  1,    0,
            0,    0,    1140, 1141, 5,    28,   0,    0,    1141, 1144, 5,    85,   0,    0,
            1142, 1145, 3,    90,   45,   0,    1143, 1145, 5,    14,   0,    0,    1144, 1142,
            1,    0,    0,    0,    1144, 1143, 1,    0,    0,    0,    1145, 1146, 1,    0,
            0,    0,    1146, 1147, 5,    86,   0,    0,    1147, 163,  1,    0,    0,    0,
            1148, 1163, 3,    306,  153,  0,    1149, 1151, 3,    204,  102,  0,    1150, 1149,
            1,    0,    0,    0,    1150, 1151, 1,    0,    0,    0,    1151, 1153, 1,    0,
            0,    0,    1152, 1154, 3,    10,   5,    0,    1153, 1152, 1,    0,    0,    0,
            1153, 1154, 1,    0,    0,    0,    1154, 1155, 1,    0,    0,    0,    1155, 1164,
            5,    132,  0,    0,    1156, 1164, 3,    360,  180,  0,    1157, 1159, 3,    10,
            5,    0,    1158, 1160, 5,    70,   0,    0,    1159, 1158, 1,    0,    0,    0,
            1159, 1160, 1,    0,    0,    0,    1160, 1161, 1,    0,    0,    0,    1161, 1162,
            3,    360,  180,  0,    1162, 1164, 1,    0,    0,    0,    1163, 1150, 1,    0,
            0,    0,    1163, 1156, 1,    0,    0,    0,    1163, 1157, 1,    0,    0,    0,
            1164, 1171, 1,    0,    0,    0,    1165, 1167, 5,    35,   0,    0,    1166, 1168,
            3,    10,   5,    0,    1167, 1166, 1,    0,    0,    0,    1167, 1168, 1,    0,
            0,    0,    1168, 1169, 1,    0,    0,    0,    1169, 1171, 5,    132,  0,    0,
            1170, 1148, 1,    0,    0,    0,    1170, 1165, 1,    0,    0,    0,    1171, 165,
            1,    0,    0,    0,    1172, 1173, 5,    132,  0,    0,    1173, 167,  1,    0,
            0,    0,    1174, 1175, 3,    170,  85,   0,    1175, 1180, 5,    89,   0,    0,
            1176, 1178, 3,    178,  89,   0,    1177, 1179, 5,    122,  0,    0,    1178, 1177,
            1,    0,    0,    0,    1178, 1179, 1,    0,    0,    0,    1179, 1181, 1,    0,
            0,    0,    1180, 1176, 1,    0,    0,    0,    1180, 1181, 1,    0,    0,    0,
            1181, 1182, 1,    0,    0,    0,    1182, 1183, 5,    90,   0,    0,    1183, 169,
            1,    0,    0,    0,    1184, 1186, 3,    174,  87,   0,    1185, 1187, 3,    204,
            102,  0,    1186, 1185, 1,    0,    0,    0,    1186, 1187, 1,    0,    0,    0,
            1187, 1192, 1,    0,    0,    0,    1188, 1190, 3,    10,   5,    0,    1189, 1188,
            1,    0,    0,    0,    1189, 1190, 1,    0,    0,    0,    1190, 1191, 1,    0,
            0,    0,    1191, 1193, 5,    132,  0,    0,    1192, 1189, 1,    0,    0,    0,
            1192, 1193, 1,    0,    0,    0,    1193, 1195, 1,    0,    0,    0,    1194, 1196,
            3,    176,  88,   0,    1195, 1194, 1,    0,    0,    0,    1195, 1196, 1,    0,
            0,    0,    1196, 171,  1,    0,    0,    0,    1197, 1199, 3,    174,  87,   0,
            1198, 1200, 3,    204,  102,  0,    1199, 1198, 1,    0,    0,    0,    1199, 1200,
            1,    0,    0,    0,    1200, 1201, 1,    0,    0,    0,    1201, 1203, 5,    132,
            0,    0,    1202, 1204, 3,    176,  88,   0,    1203, 1202, 1,    0,    0,    0,
            1203, 1204, 1,    0,    0,    0,    1204, 1205, 1,    0,    0,    0,    1205, 1206,
            5,    128,  0,    0,    1206, 173,  1,    0,    0,    0,    1207, 1209, 5,    35,
            0,    0,    1208, 1210, 7,    15,   0,    0,    1209, 1208, 1,    0,    0,    0,
            1209, 1210, 1,    0,    0,    0,    1210, 175,  1,    0,    0,    0,    1211, 1212,
            5,    126,  0,    0,    1212, 1213, 3,    150,  75,   0,    1213, 177,  1,    0,
            0,    0,    1214, 1219, 3,    180,  90,   0,    1215, 1216, 5,    122,  0,    0,
            1216, 1218, 3,    180,  90,   0,    1217, 1215, 1,    0,    0,    0,    1218, 1221,
            1,    0,    0,    0,    1219, 1217, 1,    0,    0,    0,    1219, 1220, 1,    0,
            0,    0,    1220, 179,  1,    0,    0,    0,    1221, 1219, 1,    0,    0,    0,
            1222, 1225, 3,    182,  91,   0,    1223, 1224, 5,    101,  0,    0,    1224, 1226,
            3,    92,   46,   0,    1225, 1223, 1,    0,    0,    0,    1225, 1226, 1,    0,
            0,    0,    1226, 181,  1,    0,    0,    0,    1227, 1228, 5,    132,  0,    0,
            1228, 183,  1,    0,    0,    0,    1229, 1232, 3,    186,  93,   0,    1230, 1232,
            3,    190,  95,   0,    1231, 1229, 1,    0,    0,    0,    1231, 1230, 1,    0,
            0,    0,    1232, 185,  1,    0,    0,    0,    1233, 1234, 5,    132,  0,    0,
            1234, 187,  1,    0,    0,    0,    1235, 1237, 5,    45,   0,    0,    1236, 1235,
            1,    0,    0,    0,    1236, 1237, 1,    0,    0,    0,    1237, 1238, 1,    0,
            0,    0,    1238, 1241, 5,    49,   0,    0,    1239, 1242, 5,    132,  0,    0,
            1240, 1242, 3,    186,  93,   0,    1241, 1239, 1,    0,    0,    0,    1241, 1240,
            1,    0,    0,    0,    1241, 1242, 1,    0,    0,    0,    1242, 1243, 1,    0,
            0,    0,    1243, 1245, 5,    89,   0,    0,    1244, 1246, 3,    120,  60,   0,
            1245, 1244, 1,    0,    0,    0,    1245, 1246, 1,    0,    0,    0,    1246, 1247,
            1,    0,    0,    0,    1247, 1248, 5,    90,   0,    0,    1248, 189,  1,    0,
            0,    0,    1249, 1250, 5,    132,  0,    0,    1250, 191,  1,    0,    0,    0,
            1251, 1252, 5,    49,   0,    0,    1252, 1253, 5,    132,  0,    0,    1253, 1254,
            5,    101,  0,    0,    1254, 1255, 3,    194,  97,   0,    1255, 1256, 5,    128,
            0,    0,    1256, 193,  1,    0,    0,    0,    1257, 1259, 3,    10,   5,    0,
            1258, 1257, 1,    0,    0,    0,    1258, 1259, 1,    0,    0,    0,    1259, 1260,
            1,    0,    0,    0,    1260, 1261, 3,    184,  92,   0,    1261, 195,  1,    0,
            0,    0,    1262, 1268, 5,    79,   0,    0,    1263, 1265, 5,    77,   0,    0,
            1264, 1263, 1,    0,    0,    0,    1264, 1265, 1,    0,    0,    0,    1265, 1266,
            1,    0,    0,    0,    1266, 1269, 3,    10,   5,    0,    1267, 1269, 5,    127,
            0,    0,    1268, 1264, 1,    0,    0,    0,    1268, 1267, 1,    0,    0,    0,
            1269, 1270, 1,    0,    0,    0,    1270, 1271, 3,    6,    3,    0,    1271, 1272,
            5,    128,  0,    0,    1272, 197,  1,    0,    0,    0,    1273, 1275, 3,    204,
            102,  0,    1274, 1273, 1,    0,    0,    0,    1274, 1275, 1,    0,    0,    0,
            1275, 1276, 1,    0,    0,    0,    1276, 1277, 5,    79,   0,    0,    1277, 1279,
            5,    49,   0,    0,    1278, 1280, 3,    10,   5,    0,    1279, 1278, 1,    0,
            0,    0,    1279, 1280, 1,    0,    0,    0,    1280, 1281, 1,    0,    0,    0,
            1281, 1282, 3,    184,  92,   0,    1282, 1283, 5,    128,  0,    0,    1283, 199,
            1,    0,    0,    0,    1284, 1285, 5,    13,   0,    0,    1285, 1286, 5,    85,
            0,    0,    1286, 1287, 5,    4,    0,    0,    1287, 1288, 5,    86,   0,    0,
            1288, 1295, 5,    128,  0,    0,    1289, 1290, 5,    12,   0,    0,    1290, 1291,
            5,    89,   0,    0,    1291, 1292, 5,    4,    0,    0,    1292, 1293, 5,    90,
            0,    0,    1293, 1295, 5,    128,  0,    0,    1294, 1284, 1,    0,    0,    0,
            1294, 1289, 1,    0,    0,    0,    1295, 201,  1,    0,    0,    0,    1296, 1297,
            5,    38,   0,    0,    1297, 1304, 5,    4,    0,    0,    1298, 1300, 5,    89,
            0,    0,    1299, 1301, 3,    120,  60,   0,    1300, 1299, 1,    0,    0,    0,
            1300, 1301, 1,    0,    0,    0,    1301, 1302, 1,    0,    0,    0,    1302, 1305,
            5,    90,   0,    0,    1303, 1305, 3,    122,  61,   0,    1304, 1298, 1,    0,
            0,    0,    1304, 1303, 1,    0,    0,    0,    1305, 203,  1,    0,    0,    0,
            1306, 1308, 3,    206,  103,  0,    1307, 1306, 1,    0,    0,    0,    1308, 1309,
            1,    0,    0,    0,    1309, 1307, 1,    0,    0,    0,    1309, 1310, 1,    0,
            0,    0,    1310, 205,  1,    0,    0,    0,    1311, 1312, 5,    87,   0,    0,
            1312, 1314, 5,    87,   0,    0,    1313, 1315, 3,    210,  105,  0,    1314, 1313,
            1,    0,    0,    0,    1314, 1315, 1,    0,    0,    0,    1315, 1316, 1,    0,
            0,    0,    1316, 1317, 5,    88,   0,    0,    1317, 1320, 5,    88,   0,    0,
            1318, 1320, 3,    208,  104,  0,    1319, 1311, 1,    0,    0,    0,    1319, 1318,
            1,    0,    0,    0,    1320, 207,  1,    0,    0,    0,    1321, 1322, 5,    10,
            0,    0,    1322, 1325, 5,    85,   0,    0,    1323, 1326, 3,    246,  123,  0,
            1324, 1326, 3,    92,   46,   0,    1325, 1323, 1,    0,    0,    0,    1325, 1324,
            1,    0,    0,    0,    1326, 1328, 1,    0,    0,    0,    1327, 1329, 5,    131,
            0,    0,    1328, 1327, 1,    0,    0,    0,    1328, 1329, 1,    0,    0,    0,
            1329, 1330, 1,    0,    0,    0,    1330, 1331, 5,    86,   0,    0,    1331, 209,
            1,    0,    0,    0,    1332, 1337, 3,    212,  106,  0,    1333, 1334, 5,    122,
            0,    0,    1334, 1336, 3,    212,  106,  0,    1335, 1333, 1,    0,    0,    0,
            1336, 1339, 1,    0,    0,    0,    1337, 1335, 1,    0,    0,    0,    1337, 1338,
            1,    0,    0,    0,    1338, 1341, 1,    0,    0,    0,    1339, 1337, 1,    0,
            0,    0,    1340, 1342, 5,    131,  0,    0,    1341, 1340, 1,    0,    0,    0,
            1341, 1342, 1,    0,    0,    0,    1342, 211,  1,    0,    0,    0,    1343, 1344,
            3,    214,  107,  0,    1344, 1345, 5,    127,  0,    0,    1345, 1347, 1,    0,
            0,    0,    1346, 1343, 1,    0,    0,    0,    1346, 1347, 1,    0,    0,    0,
            1347, 1348, 1,    0,    0,    0,    1348, 1350, 5,    132,  0,    0,    1349, 1351,
            3,    216,  108,  0,    1350, 1349, 1,    0,    0,    0,    1350, 1351, 1,    0,
            0,    0,    1351, 213,  1,    0,    0,    0,    1352, 1353, 5,    132,  0,    0,
            1353, 215,  1,    0,    0,    0,    1354, 1356, 5,    85,   0,    0,    1355, 1357,
            3,    218,  109,  0,    1356, 1355, 1,    0,    0,    0,    1356, 1357, 1,    0,
            0,    0,    1357, 1358, 1,    0,    0,    0,    1358, 1359, 5,    86,   0,    0,
            1359, 217,  1,    0,    0,    0,    1360, 1362, 3,    220,  110,  0,    1361, 1360,
            1,    0,    0,    0,    1362, 1363, 1,    0,    0,    0,    1363, 1361, 1,    0,
            0,    0,    1363, 1364, 1,    0,    0,    0,    1364, 219,  1,    0,    0,    0,
            1365, 1366, 5,    85,   0,    0,    1366, 1367, 3,    218,  109,  0,    1367, 1368,
            5,    86,   0,    0,    1368, 1383, 1,    0,    0,    0,    1369, 1370, 5,    87,
            0,    0,    1370, 1371, 3,    218,  109,  0,    1371, 1372, 5,    88,   0,    0,
            1372, 1383, 1,    0,    0,    0,    1373, 1374, 5,    89,   0,    0,    1374, 1375,
            3,    218,  109,  0,    1375, 1376, 5,    90,   0,    0,    1376, 1383, 1,    0,
            0,    0,    1377, 1379, 8,    16,   0,    0,    1378, 1377, 1,    0,    0,    0,
            1379, 1380, 1,    0,    0,    0,    1380, 1378, 1,    0,    0,    0,    1380, 1381,
            1,    0,    0,    0,    1381, 1383, 1,    0,    0,    0,    1382, 1365, 1,    0,
            0,    0,    1382, 1369, 1,    0,    0,    0,    1382, 1373, 1,    0,    0,    0,
            1382, 1378, 1,    0,    0,    0,    1383, 221,  1,    0,    0,    0,    1384, 1389,
            3,    224,  112,  0,    1385, 1386, 5,    122,  0,    0,    1386, 1388, 3,    224,
            112,  0,    1387, 1385, 1,    0,    0,    0,    1388, 1391, 1,    0,    0,    0,
            1389, 1387, 1,    0,    0,    0,    1389, 1390, 1,    0,    0,    0,    1390, 223,
            1,    0,    0,    0,    1391, 1389, 1,    0,    0,    0,    1392, 1394, 3,    226,
            113,  0,    1393, 1395, 3,    268,  134,  0,    1394, 1393, 1,    0,    0,    0,
            1394, 1395, 1,    0,    0,    0,    1395, 225,  1,    0,    0,    0,    1396, 1402,
            3,    228,  114,  0,    1397, 1398, 3,    230,  115,  0,    1398, 1399, 3,    232,
            116,  0,    1399, 1400, 3,    234,  117,  0,    1400, 1402, 1,    0,    0,    0,
            1401, 1396, 1,    0,    0,    0,    1401, 1397, 1,    0,    0,    0,    1402, 227,
            1,    0,    0,    0,    1403, 1405, 3,    236,  118,  0,    1404, 1406, 5,    23,
            0,    0,    1405, 1404, 1,    0,    0,    0,    1405, 1406, 1,    0,    0,    0,
            1406, 1408, 1,    0,    0,    0,    1407, 1403, 1,    0,    0,    0,    1408, 1411,
            1,    0,    0,    0,    1409, 1407, 1,    0,    0,    0,    1409, 1410, 1,    0,
            0,    0,    1410, 1412, 1,    0,    0,    0,    1411, 1409, 1,    0,    0,    0,
            1412, 1413, 3,    230,  115,  0,    1413, 229,  1,    0,    0,    0,    1414, 1415,
            6,    115,  -1,   0,    1415, 1417, 3,    244,  122,  0,    1416, 1418, 3,    204,
            102,  0,    1417, 1416, 1,    0,    0,    0,    1417, 1418, 1,    0,    0,    0,
            1418, 1424, 1,    0,    0,    0,    1419, 1420, 5,    85,   0,    0,    1420, 1421,
            3,    228,  114,  0,    1421, 1422, 5,    86,   0,    0,    1422, 1424, 1,    0,
            0,    0,    1423, 1414, 1,    0,    0,    0,    1423, 1419, 1,    0,    0,    0,
            1424, 1439, 1,    0,    0,    0,    1425, 1435, 10,   2,    0,    0,    1426, 1436,
            3,    232,  116,  0,    1427, 1429, 5,    87,   0,    0,    1428, 1430, 3,    92,
            46,   0,    1429, 1428, 1,    0,    0,    0,    1429, 1430, 1,    0,    0,    0,
            1430, 1431, 1,    0,    0,    0,    1431, 1433, 5,    88,   0,    0,    1432, 1434,
            3,    204,  102,  0,    1433, 1432, 1,    0,    0,    0,    1433, 1434, 1,    0,
            0,    0,    1434, 1436, 1,    0,    0,    0,    1435, 1426, 1,    0,    0,    0,
            1435, 1427, 1,    0,    0,    0,    1436, 1438, 1,    0,    0,    0,    1437, 1425,
            1,    0,    0,    0,    1438, 1441, 1,    0,    0,    0,    1439, 1437, 1,    0,
            0,    0,    1439, 1440, 1,    0,    0,    0,    1440, 231,  1,    0,    0,    0,
            1441, 1439, 1,    0,    0,    0,    1442, 1444, 5,    85,   0,    0,    1443, 1445,
            3,    258,  129,  0,    1444, 1443, 1,    0,    0,    0,    1444, 1445, 1,    0,
            0,    0,    1445, 1446, 1,    0,    0,    0,    1446, 1448, 5,    86,   0,    0,
            1447, 1449, 3,    238,  119,  0,    1448, 1447, 1,    0,    0,    0,    1448, 1449,
            1,    0,    0,    0,    1449, 1451, 1,    0,    0,    0,    1450, 1452, 3,    242,
            121,  0,    1451, 1450, 1,    0,    0,    0,    1451, 1452, 1,    0,    0,    0,
            1452, 1454, 1,    0,    0,    0,    1453, 1455, 3,    388,  194,  0,    1454, 1453,
            1,    0,    0,    0,    1454, 1455, 1,    0,    0,    0,    1455, 1457, 1,    0,
            0,    0,    1456, 1458, 3,    204,  102,  0,    1457, 1456, 1,    0,    0,    0,
            1457, 1458, 1,    0,    0,    0,    1458, 233,  1,    0,    0,    0,    1459, 1460,
            5,    124,  0,    0,    1460, 1462, 3,    152,  76,   0,    1461, 1463, 3,    248,
            124,  0,    1462, 1461, 1,    0,    0,    0,    1462, 1463, 1,    0,    0,    0,
            1463, 235,  1,    0,    0,    0,    1464, 1466, 7,    17,   0,    0,    1465, 1467,
            3,    204,  102,  0,    1466, 1465, 1,    0,    0,    0,    1466, 1467, 1,    0,
            0,    0,    1467, 1479, 1,    0,    0,    0,    1468, 1470, 3,    10,   5,    0,
            1469, 1468, 1,    0,    0,    0,    1469, 1470, 1,    0,    0,    0,    1470, 1471,
            1,    0,    0,    0,    1471, 1473, 5,    93,   0,    0,    1472, 1474, 3,    204,
            102,  0,    1473, 1472, 1,    0,    0,    0,    1473, 1474, 1,    0,    0,    0,
            1474, 1476, 1,    0,    0,    0,    1475, 1477, 3,    238,  119,  0,    1476, 1475,
            1,    0,    0,    0,    1476, 1477, 1,    0,    0,    0,    1477, 1479, 1,    0,
            0,    0,    1478, 1464, 1,    0,    0,    0,    1478, 1469, 1,    0,    0,    0,
            1479, 237,  1,    0,    0,    0,    1480, 1482, 3,    240,  120,  0,    1481, 1480,
            1,    0,    0,    0,    1482, 1483, 1,    0,    0,    0,    1483, 1481, 1,    0,
            0,    0,    1483, 1484, 1,    0,    0,    0,    1484, 239,  1,    0,    0,    0,
            1485, 1486, 7,    18,   0,    0,    1486, 241,  1,    0,    0,    0,    1487, 1488,
            7,    17,   0,    0,    1488, 243,  1,    0,    0,    0,    1489, 1491, 5,    131,
            0,    0,    1490, 1489, 1,    0,    0,    0,    1490, 1491, 1,    0,    0,    0,
            1491, 1492, 1,    0,    0,    0,    1492, 1493, 3,    4,    2,    0,    1493, 245,
            1,    0,    0,    0,    1494, 1496, 3,    150,  75,   0,    1495, 1497, 3,    248,
            124,  0,    1496, 1495, 1,    0,    0,    0,    1496, 1497, 1,    0,    0,    0,
            1497, 247,  1,    0,    0,    0,    1498, 1507, 3,    250,  125,  0,    1499, 1501,
            3,    252,  126,  0,    1500, 1499, 1,    0,    0,    0,    1500, 1501, 1,    0,
            0,    0,    1501, 1502, 1,    0,    0,    0,    1502, 1503, 3,    232,  116,  0,
            1503, 1504, 3,    234,  117,  0,    1504, 1507, 1,    0,    0,    0,    1505, 1507,
            3,    254,  127,  0,    1506, 1498, 1,    0,    0,    0,    1506, 1500, 1,    0,
            0,    0,    1506, 1505, 1,    0,    0,    0,    1507, 249,  1,    0,    0,    0,
            1508, 1518, 3,    252,  126,  0,    1509, 1511, 3,    236,  118,  0,    1510, 1509,
            1,    0,    0,    0,    1511, 1512, 1,    0,    0,    0,    1512, 1510, 1,    0,
            0,    0,    1512, 1513, 1,    0,    0,    0,    1513, 1515, 1,    0,    0,    0,
            1514, 1516, 3,    252,  126,  0,    1515, 1514, 1,    0,    0,    0,    1515, 1516,
            1,    0,    0,    0,    1516, 1518, 1,    0,    0,    0,    1517, 1508, 1,    0,
            0,    0,    1517, 1510, 1,    0,    0,    0,    1518, 251,  1,    0,    0,    0,
            1519, 1520, 6,    126,  -1,   0,    1520, 1534, 3,    232,  116,  0,    1521, 1523,
            5,    87,   0,    0,    1522, 1524, 3,    92,   46,   0,    1523, 1522, 1,    0,
            0,    0,    1523, 1524, 1,    0,    0,    0,    1524, 1525, 1,    0,    0,    0,
            1525, 1527, 5,    88,   0,    0,    1526, 1528, 3,    204,  102,  0,    1527, 1526,
            1,    0,    0,    0,    1527, 1528, 1,    0,    0,    0,    1528, 1534, 1,    0,
            0,    0,    1529, 1530, 5,    85,   0,    0,    1530, 1531, 3,    250,  125,  0,
            1531, 1532, 5,    86,   0,    0,    1532, 1534, 1,    0,    0,    0,    1533, 1519,
            1,    0,    0,    0,    1533, 1521, 1,    0,    0,    0,    1533, 1529, 1,    0,
            0,    0,    1534, 1550, 1,    0,    0,    0,    1535, 1546, 10,   4,    0,    0,
            1536, 1547, 3,    232,  116,  0,    1537, 1538, 3,    252,  126,  0,    1538, 1540,
            5,    87,   0,    0,    1539, 1541, 3,    92,   46,   0,    1540, 1539, 1,    0,
            0,    0,    1540, 1541, 1,    0,    0,    0,    1541, 1542, 1,    0,    0,    0,
            1542, 1544, 5,    88,   0,    0,    1543, 1545, 3,    204,  102,  0,    1544, 1543,
            1,    0,    0,    0,    1544, 1545, 1,    0,    0,    0,    1545, 1547, 1,    0,
            0,    0,    1546, 1536, 1,    0,    0,    0,    1546, 1537, 1,    0,    0,    0,
            1547, 1549, 1,    0,    0,    0,    1548, 1535, 1,    0,    0,    0,    1549, 1552,
            1,    0,    0,    0,    1550, 1548, 1,    0,    0,    0,    1550, 1551, 1,    0,
            0,    0,    1551, 253,  1,    0,    0,    0,    1552, 1550, 1,    0,    0,    0,
            1553, 1555, 3,    236,  118,  0,    1554, 1553, 1,    0,    0,    0,    1555, 1558,
            1,    0,    0,    0,    1556, 1554, 1,    0,    0,    0,    1556, 1557, 1,    0,
            0,    0,    1557, 1559, 1,    0,    0,    0,    1558, 1556, 1,    0,    0,    0,
            1559, 1560, 3,    256,  128,  0,    1560, 255,  1,    0,    0,    0,    1561, 1562,
            6,    128,  -1,   0,    1562, 1563, 5,    131,  0,    0,    1563, 1578, 1,    0,
            0,    0,    1564, 1574, 10,   2,    0,    0,    1565, 1575, 3,    232,  116,  0,
            1566, 1568, 5,    87,   0,    0,    1567, 1569, 3,    92,   46,   0,    1568, 1567,
            1,    0,    0,    0,    1568, 1569, 1,    0,    0,    0,    1569, 1570, 1,    0,
            0,    0,    1570, 1572, 5,    88,   0,    0,    1571, 1573, 3,    204,  102,  0,
            1572, 1571, 1,    0,    0,    0,    1572, 1573, 1,    0,    0,    0,    1573, 1575,
            1,    0,    0,    0,    1574, 1565, 1,    0,    0,    0,    1574, 1566, 1,    0,
            0,    0,    1575, 1577, 1,    0,    0,    0,    1576, 1564, 1,    0,    0,    0,
            1577, 1580, 1,    0,    0,    0,    1578, 1576, 1,    0,    0,    0,    1578, 1579,
            1,    0,    0,    0,    1579, 257,  1,    0,    0,    0,    1580, 1578, 1,    0,
            0,    0,    1581, 1586, 3,    260,  130,  0,    1582, 1584, 5,    122,  0,    0,
            1583, 1582, 1,    0,    0,    0,    1583, 1584, 1,    0,    0,    0,    1584, 1585,
            1,    0,    0,    0,    1585, 1587, 5,    131,  0,    0,    1586, 1583, 1,    0,
            0,    0,    1586, 1587, 1,    0,    0,    0,    1587, 259,  1,    0,    0,    0,
            1588, 1593, 3,    262,  131,  0,    1589, 1590, 5,    122,  0,    0,    1590, 1592,
            3,    262,  131,  0,    1591, 1589, 1,    0,    0,    0,    1592, 1595, 1,    0,
            0,    0,    1593, 1591, 1,    0,    0,    0,    1593, 1594, 1,    0,    0,    0,
            1594, 261,  1,    0,    0,    0,    1595, 1593, 1,    0,    0,    0,    1596, 1598,
            3,    204,  102,  0,    1597, 1596, 1,    0,    0,    0,    1597, 1598, 1,    0,
            0,    0,    1598, 1599, 1,    0,    0,    0,    1599, 1604, 3,    138,  69,   0,
            1600, 1605, 3,    226,  113,  0,    1601, 1603, 3,    248,  124,  0,    1602, 1601,
            1,    0,    0,    0,    1602, 1603, 1,    0,    0,    0,    1603, 1605, 1,    0,
            0,    0,    1604, 1600, 1,    0,    0,    0,    1604, 1602, 1,    0,    0,    0,
            1605, 1608, 1,    0,    0,    0,    1606, 1607, 5,    101,  0,    0,    1607, 1609,
            3,    272,  136,  0,    1608, 1606, 1,    0,    0,    0,    1608, 1609, 1,    0,
            0,    0,    1609, 263,  1,    0,    0,    0,    1610, 1612, 3,    204,  102,  0,
            1611, 1610, 1,    0,    0,    0,    1611, 1612, 1,    0,    0,    0,    1612, 1614,
            1,    0,    0,    0,    1613, 1615, 3,    138,  69,   0,    1614, 1613, 1,    0,
            0,    0,    1614, 1615, 1,    0,    0,    0,    1615, 1616, 1,    0,    0,    0,
            1616, 1617, 3,    226,  113,  0,    1617, 1618, 3,    266,  133,  0,    1618, 265,
            1,    0,    0,    0,    1619, 1621, 3,    340,  170,  0,    1620, 1619, 1,    0,
            0,    0,    1620, 1621, 1,    0,    0,    0,    1621, 1622, 1,    0,    0,    0,
            1622, 1628, 3,    100,  50,   0,    1623, 1628, 3,    378,  189,  0,    1624, 1625,
            5,    101,  0,    0,    1625, 1626, 7,    19,   0,    0,    1626, 1628, 5,    128,
            0,    0,    1627, 1620, 1,    0,    0,    0,    1627, 1623, 1,    0,    0,    0,
            1627, 1624, 1,    0,    0,    0,    1628, 267,  1,    0,    0,    0,    1629, 1635,
            3,    270,  135,  0,    1630, 1631, 5,    85,   0,    0,    1631, 1632, 3,    34,
            17,   0,    1632, 1633, 5,    86,   0,    0,    1633, 1635, 1,    0,    0,    0,
            1634, 1629, 1,    0,    0,    0,    1634, 1630, 1,    0,    0,    0,    1635, 269,
            1,    0,    0,    0,    1636, 1637, 5,    101,  0,    0,    1637, 1640, 3,    272,
            136,  0,    1638, 1640, 3,    276,  138,  0,    1639, 1636, 1,    0,    0,    0,
            1639, 1638, 1,    0,    0,    0,    1640, 271,  1,    0,    0,    0,    1641, 1644,
            3,    86,   43,   0,    1642, 1644, 3,    276,  138,  0,    1643, 1641, 1,    0,
            0,    0,    1643, 1642, 1,    0,    0,    0,    1644, 273,  1,    0,    0,    0,
            1645, 1647, 3,    272,  136,  0,    1646, 1648, 5,    131,  0,    0,    1647, 1646,
            1,    0,    0,    0,    1647, 1648, 1,    0,    0,    0,    1648, 1656, 1,    0,
            0,    0,    1649, 1650, 5,    122,  0,    0,    1650, 1652, 3,    272,  136,  0,
            1651, 1653, 5,    131,  0,    0,    1652, 1651, 1,    0,    0,    0,    1652, 1653,
            1,    0,    0,    0,    1653, 1655, 1,    0,    0,    0,    1654, 1649, 1,    0,
            0,    0,    1655, 1658, 1,    0,    0,    0,    1656, 1654, 1,    0,    0,    0,
            1656, 1657, 1,    0,    0,    0,    1657, 275,  1,    0,    0,    0,    1658, 1656,
            1,    0,    0,    0,    1659, 1672, 5,    89,   0,    0,    1660, 1668, 3,    274,
            137,  0,    1661, 1663, 5,    129,  0,    0,    1662, 1661, 1,    0,    0,    0,
            1662, 1663, 1,    0,    0,    0,    1663, 1664, 1,    0,    0,    0,    1664, 1665,
            5,    132,  0,    0,    1665, 1666, 5,    101,  0,    0,    1666, 1668, 3,    272,
            136,  0,    1667, 1660, 1,    0,    0,    0,    1667, 1662, 1,    0,    0,    0,
            1668, 1670, 1,    0,    0,    0,    1669, 1671, 5,    122,  0,    0,    1670, 1669,
            1,    0,    0,    0,    1670, 1671, 1,    0,    0,    0,    1671, 1673, 1,    0,
            0,    0,    1672, 1667, 1,    0,    0,    0,    1672, 1673, 1,    0,    0,    0,
            1673, 1674, 1,    0,    0,    0,    1674, 1675, 5,    90,   0,    0,    1675, 277,
            1,    0,    0,    0,    1676, 1678, 3,    332,  166,  0,    1677, 1676, 1,    0,
            0,    0,    1677, 1678, 1,    0,    0,    0,    1678, 1679, 1,    0,    0,    0,
            1679, 1680, 5,    58,   0,    0,    1680, 1681, 3,    302,  151,  0,    1681, 279,
            1,    0,    0,    0,    1682, 1683, 3,    278,  139,  0,    1683, 1689, 5,    89,
            0,    0,    1684, 1686, 3,    284,  142,  0,    1685, 1684, 1,    0,    0,    0,
            1686, 1687, 1,    0,    0,    0,    1687, 1685, 1,    0,    0,    0,    1687, 1688,
            1,    0,    0,    0,    1688, 1690, 1,    0,    0,    0,    1689, 1685, 1,    0,
            0,    0,    1689, 1690, 1,    0,    0,    0,    1690, 1691, 1,    0,    0,    0,
            1691, 1692, 5,    90,   0,    0,    1692, 281,  1,    0,    0,    0,    1693, 1695,
            3,    204,  102,  0,    1694, 1693, 1,    0,    0,    0,    1694, 1695, 1,    0,
            0,    0,    1695, 1697, 1,    0,    0,    0,    1696, 1698, 3,    138,  69,   0,
            1697, 1696, 1,    0,    0,    0,    1697, 1698, 1,    0,    0,    0,    1698, 1699,
            1,    0,    0,    0,    1699, 1701, 3,    226,  113,  0,    1700, 1702, 3,    320,
            160,  0,    1701, 1700, 1,    0,    0,    0,    1701, 1702, 1,    0,    0,    0,
            1702, 1703, 1,    0,    0,    0,    1703, 1704, 5,    128,  0,    0,    1704, 283,
            1,    0,    0,    0,    1705, 1707, 3,    332,  166,  0,    1706, 1705, 1,    0,
            0,    0,    1706, 1707, 1,    0,    0,    0,    1707, 1708, 1,    0,    0,    0,
            1708, 1709, 3,    282,  141,  0,    1709, 285,  1,    0,    0,    0,    1710, 1711,
            7,    20,   0,    0,    1711, 287,  1,    0,    0,    0,    1712, 1714, 3,    332,
            166,  0,    1713, 1712, 1,    0,    0,    0,    1713, 1714, 1,    0,    0,    0,
            1714, 1715, 1,    0,    0,    0,    1715, 1716, 3,    286,  143,  0,    1716, 1717,
            3,    302,  151,  0,    1717, 289,  1,    0,    0,    0,    1718, 1719, 3,    288,
            144,  0,    1719, 1725, 5,    89,   0,    0,    1720, 1722, 3,    292,  146,  0,
            1721, 1720, 1,    0,    0,    0,    1722, 1723, 1,    0,    0,    0,    1723, 1721,
            1,    0,    0,    0,    1723, 1724, 1,    0,    0,    0,    1724, 1726, 1,    0,
            0,    0,    1725, 1721, 1,    0,    0,    0,    1725, 1726, 1,    0,    0,    0,
            1726, 1727, 1,    0,    0,    0,    1727, 1728, 5,    90,   0,    0,    1728, 291,
            1,    0,    0,    0,    1729, 1731, 3,    204,  102,  0,    1730, 1729, 1,    0,
            0,    0,    1730, 1731, 1,    0,    0,    0,    1731, 1733, 1,    0,    0,    0,
            1732, 1734, 3,    138,  69,   0,    1733, 1732, 1,    0,    0,    0,    1733, 1734,
            1,    0,    0,    0,    1734, 1736, 1,    0,    0,    0,    1735, 1737, 3,    294,
            147,  0,    1736, 1735, 1,    0,    0,    0,    1736, 1737, 1,    0,    0,    0,
            1737, 1738, 1,    0,    0,    0,    1738, 1742, 5,    128,  0,    0,    1739, 1742,
            3,    352,  176,  0,    1740, 1742, 3,    132,  66,   0,    1741, 1730, 1,    0,
            0,    0,    1741, 1739, 1,    0,    0,    0,    1741, 1740, 1,    0,    0,    0,
            1742, 293,  1,    0,    0,    0,    1743, 1744, 3,    226,  113,  0,    1744, 295,
            1,    0,    0,    0,    1745, 1748, 5,    132,  0,    0,    1746, 1748, 3,    360,
            180,  0,    1747, 1745, 1,    0,    0,    0,    1747, 1746, 1,    0,    0,    0,
            1748, 297,  1,    0,    0,    0,    1749, 1750, 3,    300,  150,  0,    1750, 1752,
            5,    89,   0,    0,    1751, 1753, 3,    308,  154,  0,    1752, 1751, 1,    0,
            0,    0,    1752, 1753, 1,    0,    0,    0,    1753, 1754, 1,    0,    0,    0,
            1754, 1755, 5,    90,   0,    0,    1755, 299,  1,    0,    0,    0,    1756, 1758,
            3,    332,  166,  0,    1757, 1756, 1,    0,    0,    0,    1757, 1758, 1,    0,
            0,    0,    1758, 1759, 1,    0,    0,    0,    1759, 1761, 3,    306,  153,  0,
            1760, 1762, 3,    204,  102,  0,    1761, 1760, 1,    0,    0,    0,    1761, 1762,
            1,    0,    0,    0,    1762, 1767, 1,    0,    0,    0,    1763, 1765, 3,    302,
            151,  0,    1764, 1766, 3,    304,  152,  0,    1765, 1764, 1,    0,    0,    0,
            1765, 1766, 1,    0,    0,    0,    1766, 1768, 1,    0,    0,    0,    1767, 1763,
            1,    0,    0,    0,    1767, 1768, 1,    0,    0,    0,    1768, 1770, 1,    0,
            0,    0,    1769, 1771, 3,    322,  161,  0,    1770, 1769, 1,    0,    0,    0,
            1770, 1771, 1,    0,    0,    0,    1771, 301,  1,    0,    0,    0,    1772, 1774,
            3,    10,   5,    0,    1773, 1772, 1,    0,    0,    0,    1773, 1774, 1,    0,
            0,    0,    1774, 1775, 1,    0,    0,    0,    1775, 1776, 3,    296,  148,  0,
            1776, 303,  1,    0,    0,    0,    1777, 1778, 5,    40,   0,    0,    1778, 305,
            1,    0,    0,    0,    1779, 1780, 5,    22,   0,    0,    1780, 307,  1,    0,
            0,    0,    1781, 1783, 3,    310,  155,  0,    1782, 1781, 1,    0,    0,    0,
            1783, 1784, 1,    0,    0,    0,    1784, 1782, 1,    0,    0,    0,    1784, 1785,
            1,    0,    0,    0,    1785, 309,  1,    0,    0,    0,    1786, 1788, 3,    332,
            166,  0,    1787, 1786, 1,    0,    0,    0,    1787, 1788, 1,    0,    0,    0,
            1788, 1790, 1,    0,    0,    0,    1789, 1791, 3,    204,  102,  0,    1790, 1789,
            1,    0,    0,    0,    1790, 1791, 1,    0,    0,    0,    1791, 1793, 1,    0,
            0,    0,    1792, 1794, 3,    138,  69,   0,    1793, 1792, 1,    0,    0,    0,
            1793, 1794, 1,    0,    0,    0,    1794, 1796, 1,    0,    0,    0,    1795, 1797,
            3,    312,  156,  0,    1796, 1795, 1,    0,    0,    0,    1796, 1797, 1,    0,
            0,    0,    1797, 1798, 1,    0,    0,    0,    1798, 1817, 5,    128,  0,    0,
            1799, 1801, 3,    332,  166,  0,    1800, 1799, 1,    0,    0,    0,    1800, 1801,
            1,    0,    0,    0,    1801, 1802, 1,    0,    0,    0,    1802, 1817, 3,    264,
            132,  0,    1803, 1805, 3,    332,  166,  0,    1804, 1803, 1,    0,    0,    0,
            1804, 1805, 1,    0,    0,    0,    1805, 1806, 1,    0,    0,    0,    1806, 1817,
            3,    196,  98,   0,    1807, 1817, 3,    130,  65,   0,    1808, 1809, 3,    332,
            166,  0,    1809, 1810, 5,    126,  0,    0,    1810, 1812, 1,    0,    0,    0,
            1811, 1808, 1,    0,    0,    0,    1811, 1812, 1,    0,    0,    0,    1812, 1813,
            1,    0,    0,    0,    1813, 1817, 3,    352,  176,  0,    1814, 1817, 3,    126,
            63,   0,    1815, 1817, 3,    132,  66,   0,    1816, 1787, 1,    0,    0,    0,
            1816, 1800, 1,    0,    0,    0,    1816, 1804, 1,    0,    0,    0,    1816, 1807,
            1,    0,    0,    0,    1816, 1811, 1,    0,    0,    0,    1816, 1814, 1,    0,
            0,    0,    1816, 1815, 1,    0,    0,    0,    1817, 311,  1,    0,    0,    0,
            1818, 1823, 3,    314,  157,  0,    1819, 1820, 5,    122,  0,    0,    1820, 1822,
            3,    314,  157,  0,    1821, 1819, 1,    0,    0,    0,    1822, 1825, 1,    0,
            0,    0,    1823, 1821, 1,    0,    0,    0,    1823, 1824, 1,    0,    0,    0,
            1824, 313,  1,    0,    0,    0,    1825, 1823, 1,    0,    0,    0,    1826, 1829,
            3,    226,  113,  0,    1827, 1830, 3,    320,  160,  0,    1828, 1830, 3,    270,
            135,  0,    1829, 1827, 1,    0,    0,    0,    1829, 1828, 1,    0,    0,    0,
            1830, 1841, 1,    0,    0,    0,    1831, 1841, 3,    226,  113,  0,    1832, 1834,
            5,    132,  0,    0,    1833, 1832, 1,    0,    0,    0,    1833, 1834, 1,    0,
            0,    0,    1834, 1836, 1,    0,    0,    0,    1835, 1837, 3,    204,  102,  0,
            1836, 1835, 1,    0,    0,    0,    1836, 1837, 1,    0,    0,    0,    1837, 1838,
            1,    0,    0,    0,    1838, 1839, 5,    126,  0,    0,    1839, 1841, 3,    92,
            46,   0,    1840, 1826, 1,    0,    0,    0,    1840, 1831, 1,    0,    0,    0,
            1840, 1833, 1,    0,    0,    0,    1841, 315,  1,    0,    0,    0,    1842, 1844,
            3,    318,  159,  0,    1843, 1842, 1,    0,    0,    0,    1844, 1845, 1,    0,
            0,    0,    1845, 1843, 1,    0,    0,    0,    1845, 1846, 1,    0,    0,    0,
            1846, 317,  1,    0,    0,    0,    1847, 1848, 7,    21,   0,    0,    1848, 319,
            1,    0,    0,    0,    1849, 1850, 5,    101,  0,    0,    1850, 1851, 5,    1,
            0,    0,    1851, 321,  1,    0,    0,    0,    1852, 1853, 5,    126,  0,    0,
            1853, 1854, 3,    324,  162,  0,    1854, 323,  1,    0,    0,    0,    1855, 1857,
            3,    326,  163,  0,    1856, 1858, 5,    131,  0,    0,    1857, 1856, 1,    0,
            0,    0,    1857, 1858, 1,    0,    0,    0,    1858, 1866, 1,    0,    0,    0,
            1859, 1860, 5,    122,  0,    0,    1860, 1862, 3,    326,  163,  0,    1861, 1863,
            5,    131,  0,    0,    1862, 1861, 1,    0,    0,    0,    1862, 1863, 1,    0,
            0,    0,    1863, 1865, 1,    0,    0,    0,    1864, 1859, 1,    0,    0,    0,
            1865, 1868, 1,    0,    0,    0,    1866, 1864, 1,    0,    0,    0,    1866, 1867,
            1,    0,    0,    0,    1867, 325,  1,    0,    0,    0,    1868, 1866, 1,    0,
            0,    0,    1869, 1871, 3,    204,  102,  0,    1870, 1869, 1,    0,    0,    0,
            1870, 1871, 1,    0,    0,    0,    1871, 1884, 1,    0,    0,    0,    1872, 1885,
            3,    330,  165,  0,    1873, 1875, 5,    80,   0,    0,    1874, 1876, 3,    332,
            166,  0,    1875, 1874, 1,    0,    0,    0,    1875, 1876, 1,    0,    0,    0,
            1876, 1877, 1,    0,    0,    0,    1877, 1885, 3,    330,  165,  0,    1878, 1880,
            3,    332,  166,  0,    1879, 1881, 5,    80,   0,    0,    1880, 1879, 1,    0,
            0,    0,    1880, 1881, 1,    0,    0,    0,    1881, 1882, 1,    0,    0,    0,
            1882, 1883, 3,    330,  165,  0,    1883, 1885, 1,    0,    0,    0,    1884, 1872,
            1,    0,    0,    0,    1884, 1873, 1,    0,    0,    0,    1884, 1878, 1,    0,
            0,    0,    1885, 327,  1,    0,    0,    0,    1886, 1888, 3,    10,   5,    0,
            1887, 1886, 1,    0,    0,    0,    1887, 1888, 1,    0,    0,    0,    1888, 1889,
            1,    0,    0,    0,    1889, 1892, 3,    296,  148,  0,    1890, 1892, 3,    162,
            81,   0,    1891, 1887, 1,    0,    0,    0,    1891, 1890, 1,    0,    0,    0,
            1892, 329,  1,    0,    0,    0,    1893, 1894, 3,    328,  164,  0,    1894, 331,
            1,    0,    0,    0,    1895, 1896, 7,    22,   0,    0,    1896, 333,  1,    0,
            0,    0,    1897, 1898, 5,    53,   0,    0,    1898, 1899, 3,    336,  168,  0,
            1899, 335,  1,    0,    0,    0,    1900, 1902, 3,    150,  75,   0,    1901, 1903,
            3,    338,  169,  0,    1902, 1901, 1,    0,    0,    0,    1902, 1903, 1,    0,
            0,    0,    1903, 337,  1,    0,    0,    0,    1904, 1906, 3,    236,  118,  0,
            1905, 1907, 3,    338,  169,  0,    1906, 1905, 1,    0,    0,    0,    1906, 1907,
            1,    0,    0,    0,    1907, 339,  1,    0,    0,    0,    1908, 1909, 5,    126,
            0,    0,    1909, 1910, 3,    342,  171,  0,    1910, 341,  1,    0,    0,    0,
            1911, 1913, 3,    344,  172,  0,    1912, 1914, 5,    131,  0,    0,    1913, 1912,
            1,    0,    0,    0,    1913, 1914, 1,    0,    0,    0,    1914, 1922, 1,    0,
            0,    0,    1915, 1916, 5,    122,  0,    0,    1916, 1918, 3,    344,  172,  0,
            1917, 1919, 5,    131,  0,    0,    1918, 1917, 1,    0,    0,    0,    1918, 1919,
            1,    0,    0,    0,    1919, 1921, 1,    0,    0,    0,    1920, 1915, 1,    0,
            0,    0,    1921, 1924, 1,    0,    0,    0,    1922, 1920, 1,    0,    0,    0,
            1922, 1923, 1,    0,    0,    0,    1923, 343,  1,    0,    0,    0,    1924, 1922,
            1,    0,    0,    0,    1925, 1932, 3,    346,  173,  0,    1926, 1928, 5,    85,
            0,    0,    1927, 1929, 3,    34,   17,   0,    1928, 1927, 1,    0,    0,    0,
            1928, 1929, 1,    0,    0,    0,    1929, 1930, 1,    0,    0,    0,    1930, 1933,
            5,    86,   0,    0,    1931, 1933, 3,    276,  138,  0,    1932, 1926, 1,    0,
            0,    0,    1932, 1931, 1,    0,    0,    0,    1933, 345,  1,    0,    0,    0,
            1934, 1937, 3,    328,  164,  0,    1935, 1937, 5,    132,  0,    0,    1936, 1934,
            1,    0,    0,    0,    1936, 1935, 1,    0,    0,    0,    1937, 347,  1,    0,
            0,    0,    1938, 1939, 5,    53,   0,    0,    1939, 1940, 3,    396,  198,  0,
            1940, 349,  1,    0,    0,    0,    1941, 1945, 5,    53,   0,    0,    1942, 1943,
            5,    4,    0,    0,    1943, 1946, 5,    132,  0,    0,    1944, 1946, 5,    140,
            0,    0,    1945, 1942, 1,    0,    0,    0,    1945, 1944, 1,    0,    0,    0,
            1946, 351,  1,    0,    0,    0,    1947, 1948, 5,    70,   0,    0,    1948, 1949,
            5,    102,  0,    0,    1949, 1950, 3,    354,  177,  0,    1950, 1951, 5,    103,
            0,    0,    1951, 1952, 3,    122,  61,   0,    1952, 353,  1,    0,    0,    0,
            1953, 1958, 3,    356,  178,  0,    1954, 1955, 5,    122,  0,    0,    1955, 1957,
            3,    356,  178,  0,    1956, 1954, 1,    0,    0,    0,    1957, 1960, 1,    0,
            0,    0,    1958, 1956, 1,    0,    0,    0,    1958, 1959, 1,    0,    0,    0,
            1959, 355,  1,    0,    0,    0,    1960, 1958, 1,    0,    0,    0,    1961, 1964,
            3,    358,  179,  0,    1962, 1964, 3,    262,  131,  0,    1963, 1961, 1,    0,
            0,    0,    1963, 1962, 1,    0,    0,    0,    1964, 357,  1,    0,    0,    0,
            1965, 1966, 5,    70,   0,    0,    1966, 1967, 5,    102,  0,    0,    1967, 1968,
            3,    354,  177,  0,    1968, 1969, 5,    103,  0,    0,    1969, 1971, 1,    0,
            0,    0,    1970, 1965, 1,    0,    0,    0,    1970, 1971, 1,    0,    0,    0,
            1971, 1972, 1,    0,    0,    0,    1972, 1975, 5,    22,   0,    0,    1973, 1975,
            5,    77,   0,    0,    1974, 1970, 1,    0,    0,    0,    1974, 1973, 1,    0,
            0,    0,    1975, 1987, 1,    0,    0,    0,    1976, 1978, 5,    131,  0,    0,
            1977, 1976, 1,    0,    0,    0,    1977, 1978, 1,    0,    0,    0,    1978, 1980,
            1,    0,    0,    0,    1979, 1981, 5,    132,  0,    0,    1980, 1979, 1,    0,
            0,    0,    1980, 1981, 1,    0,    0,    0,    1981, 1988, 1,    0,    0,    0,
            1982, 1984, 5,    132,  0,    0,    1983, 1982, 1,    0,    0,    0,    1983, 1984,
            1,    0,    0,    0,    1984, 1985, 1,    0,    0,    0,    1985, 1986, 5,    101,
            0,    0,    1986, 1988, 3,    246,  123,  0,    1987, 1977, 1,    0,    0,    0,
            1987, 1983, 1,    0,    0,    0,    1988, 359,  1,    0,    0,    0,    1989, 1990,
            3,    364,  182,  0,    1990, 1992, 5,    102,  0,    0,    1991, 1993, 3,    366,
            183,  0,    1992, 1991, 1,    0,    0,    0,    1992, 1993, 1,    0,    0,    0,
            1993, 1994, 1,    0,    0,    0,    1994, 1995, 5,    103,  0,    0,    1995, 361,
            1,    0,    0,    0,    1996, 2008, 3,    360,  180,  0,    1997, 2000, 3,    348,
            174,  0,    1998, 2000, 3,    350,  175,  0,    1999, 1997, 1,    0,    0,    0,
            1999, 1998, 1,    0,    0,    0,    2000, 2001, 1,    0,    0,    0,    2001, 2003,
            5,    102,  0,    0,    2002, 2004, 3,    366,  183,  0,    2003, 2002, 1,    0,
            0,    0,    2003, 2004, 1,    0,    0,    0,    2004, 2005, 1,    0,    0,    0,
            2005, 2006, 5,    103,  0,    0,    2006, 2008, 1,    0,    0,    0,    2007, 1996,
            1,    0,    0,    0,    2007, 1999, 1,    0,    0,    0,    2008, 363,  1,    0,
            0,    0,    2009, 2010, 5,    132,  0,    0,    2010, 365,  1,    0,    0,    0,
            2011, 2013, 3,    332,  166,  0,    2012, 2011, 1,    0,    0,    0,    2012, 2013,
            1,    0,    0,    0,    2013, 2014, 1,    0,    0,    0,    2014, 2016, 3,    368,
            184,  0,    2015, 2017, 5,    131,  0,    0,    2016, 2015, 1,    0,    0,    0,
            2016, 2017, 1,    0,    0,    0,    2017, 2028, 1,    0,    0,    0,    2018, 2020,
            5,    122,  0,    0,    2019, 2021, 3,    332,  166,  0,    2020, 2019, 1,    0,
            0,    0,    2020, 2021, 1,    0,    0,    0,    2021, 2022, 1,    0,    0,    0,
            2022, 2024, 3,    368,  184,  0,    2023, 2025, 5,    131,  0,    0,    2024, 2023,
            1,    0,    0,    0,    2024, 2025, 1,    0,    0,    0,    2025, 2027, 1,    0,
            0,    0,    2026, 2018, 1,    0,    0,    0,    2027, 2030, 1,    0,    0,    0,
            2028, 2026, 1,    0,    0,    0,    2028, 2029, 1,    0,    0,    0,    2029, 367,
            1,    0,    0,    0,    2030, 2028, 1,    0,    0,    0,    2031, 2035, 3,    246,
            123,  0,    2032, 2035, 3,    92,   46,   0,    2033, 2035, 3,    4,    2,    0,
            2034, 2031, 1,    0,    0,    0,    2034, 2032, 1,    0,    0,    0,    2034, 2033,
            1,    0,    0,    0,    2035, 369,  1,    0,    0,    0,    2036, 2037, 5,    77,
            0,    0,    2037, 2043, 3,    10,   5,    0,    2038, 2044, 5,    132,  0,    0,
            2039, 2041, 5,    70,   0,    0,    2040, 2039, 1,    0,    0,    0,    2040, 2041,
            1,    0,    0,    0,    2041, 2042, 1,    0,    0,    0,    2042, 2044, 3,    360,
            180,  0,    2043, 2038, 1,    0,    0,    0,    2043, 2040, 1,    0,    0,    0,
            2044, 371,  1,    0,    0,    0,    2045, 2047, 5,    38,   0,    0,    2046, 2045,
            1,    0,    0,    0,    2046, 2047, 1,    0,    0,    0,    2047, 2048, 1,    0,
            0,    0,    2048, 2049, 5,    70,   0,    0,    2049, 2050, 3,    122,  61,   0,
            2050, 373,  1,    0,    0,    0,    2051, 2052, 5,    70,   0,    0,    2052, 2053,
            5,    102,  0,    0,    2053, 2054, 5,    103,  0,    0,    2054, 2055, 3,    122,
            61,   0,    2055, 375,  1,    0,    0,    0,    2056, 2057, 5,    75,   0,    0,
            2057, 2058, 3,    100,  50,   0,    2058, 2059, 3,    380,  190,  0,    2059, 377,
            1,    0,    0,    0,    2060, 2062, 5,    75,   0,    0,    2061, 2063, 3,    340,
            170,  0,    2062, 2061, 1,    0,    0,    0,    2062, 2063, 1,    0,    0,    0,
            2063, 2064, 1,    0,    0,    0,    2064, 2065, 3,    100,  50,   0,    2065, 2066,
            3,    380,  190,  0,    2066, 379,  1,    0,    0,    0,    2067, 2069, 3,    382,
            191,  0,    2068, 2067, 1,    0,    0,    0,    2069, 2070, 1,    0,    0,    0,
            2070, 2068, 1,    0,    0,    0,    2070, 2071, 1,    0,    0,    0,    2071, 381,
            1,    0,    0,    0,    2072, 2073, 5,    18,   0,    0,    2073, 2074, 5,    85,
            0,    0,    2074, 2075, 3,    384,  192,  0,    2075, 2076, 5,    86,   0,    0,
            2076, 2077, 3,    100,  50,   0,    2077, 383,  1,    0,    0,    0,    2078, 2080,
            3,    204,  102,  0,    2079, 2078, 1,    0,    0,    0,    2079, 2080, 1,    0,
            0,    0,    2080, 2081, 1,    0,    0,    0,    2081, 2084, 3,    150,  75,   0,
            2082, 2085, 3,    226,  113,  0,    2083, 2085, 3,    248,  124,  0,    2084, 2082,
            1,    0,    0,    0,    2084, 2083, 1,    0,    0,    0,    2084, 2085, 1,    0,
            0,    0,    2085, 2088, 1,    0,    0,    0,    2086, 2088, 5,    131,  0,    0,
            2087, 2079, 1,    0,    0,    0,    2087, 2086, 1,    0,    0,    0,    2088, 385,
            1,    0,    0,    0,    2089, 2091, 5,    73,   0,    0,    2090, 2092, 3,    86,
            43,   0,    2091, 2090, 1,    0,    0,    0,    2091, 2092, 1,    0,    0,    0,
            2092, 387,  1,    0,    0,    0,    2093, 2096, 3,    390,  195,  0,    2094, 2096,
            3,    394,  197,  0,    2095, 2093, 1,    0,    0,    0,    2095, 2094, 1,    0,
            0,    0,    2096, 389,  1,    0,    0,    0,    2097, 2098, 5,    73,   0,    0,
            2098, 2100, 5,    85,   0,    0,    2099, 2101, 3,    392,  196,  0,    2100, 2099,
            1,    0,    0,    0,    2100, 2101, 1,    0,    0,    0,    2101, 2102, 1,    0,
            0,    0,    2102, 2103, 5,    86,   0,    0,    2103, 391,  1,    0,    0,    0,
            2104, 2106, 3,    246,  123,  0,    2105, 2107, 5,    131,  0,    0,    2106, 2105,
            1,    0,    0,    0,    2106, 2107, 1,    0,    0,    0,    2107, 2115, 1,    0,
            0,    0,    2108, 2109, 5,    122,  0,    0,    2109, 2111, 3,    246,  123,  0,
            2110, 2112, 5,    131,  0,    0,    2111, 2110, 1,    0,    0,    0,    2111, 2112,
            1,    0,    0,    0,    2112, 2114, 1,    0,    0,    0,    2113, 2108, 1,    0,
            0,    0,    2114, 2117, 1,    0,    0,    0,    2115, 2113, 1,    0,    0,    0,
            2115, 2116, 1,    0,    0,    0,    2116, 393,  1,    0,    0,    0,    2117, 2115,
            1,    0,    0,    0,    2118, 2119, 5,    51,   0,    0,    2119, 2120, 5,    85,
            0,    0,    2120, 2121, 3,    92,   46,   0,    2121, 2122, 5,    86,   0,    0,
            2122, 2125, 1,    0,    0,    0,    2123, 2125, 5,    51,   0,    0,    2124, 2118,
            1,    0,    0,    0,    2124, 2123, 1,    0,    0,    0,    2125, 395,  1,    0,
            0,    0,    2126, 2129, 5,    50,   0,    0,    2127, 2128, 5,    87,   0,    0,
            2128, 2130, 5,    88,   0,    0,    2129, 2127, 1,    0,    0,    0,    2129, 2130,
            1,    0,    0,    0,    2130, 2178, 1,    0,    0,    0,    2131, 2134, 5,    30,
            0,    0,    2132, 2133, 5,    87,   0,    0,    2133, 2135, 5,    88,   0,    0,
            2134, 2132, 1,    0,    0,    0,    2134, 2135, 1,    0,    0,    0,    2135, 2178,
            1,    0,    0,    0,    2136, 2178, 5,    91,   0,    0,    2137, 2178, 5,    92,
            0,    0,    2138, 2178, 5,    93,   0,    0,    2139, 2178, 5,    94,   0,    0,
            2140, 2178, 5,    95,   0,    0,    2141, 2178, 5,    96,   0,    0,    2142, 2178,
            5,    97,   0,    0,    2143, 2178, 5,    98,   0,    0,    2144, 2178, 5,    99,
            0,    0,    2145, 2178, 5,    100,  0,    0,    2146, 2178, 5,    101,  0,    0,
            2147, 2178, 5,    103,  0,    0,    2148, 2178, 5,    102,  0,    0,    2149, 2178,
            5,    117,  0,    0,    2150, 2178, 5,    104,  0,    0,    2151, 2178, 5,    105,
            0,    0,    2152, 2178, 5,    106,  0,    0,    2153, 2178, 5,    108,  0,    0,
            2154, 2178, 5,    109,  0,    0,    2155, 2178, 5,    110,  0,    0,    2156, 2178,
            5,    111,  0,    0,    2157, 2158, 5,    102,  0,    0,    2158, 2178, 5,    102,
            0,    0,    2159, 2160, 5,    103,  0,    0,    2160, 2178, 5,    103,  0,    0,
            2161, 2178, 5,    113,  0,    0,    2162, 2178, 5,    112,  0,    0,    2163, 2178,
            5,    114,  0,    0,    2164, 2178, 5,    115,  0,    0,    2165, 2178, 5,    116,
            0,    0,    2166, 2178, 5,    118,  0,    0,    2167, 2178, 5,    119,  0,    0,
            2168, 2178, 5,    120,  0,    0,    2169, 2178, 5,    121,  0,    0,    2170, 2178,
            5,    122,  0,    0,    2171, 2178, 5,    123,  0,    0,    2172, 2178, 5,    124,
            0,    0,    2173, 2174, 5,    85,   0,    0,    2174, 2178, 5,    86,   0,    0,
            2175, 2176, 5,    87,   0,    0,    2176, 2178, 5,    88,   0,    0,    2177, 2126,
            1,    0,    0,    0,    2177, 2131, 1,    0,    0,    0,    2177, 2136, 1,    0,
            0,    0,    2177, 2137, 1,    0,    0,    0,    2177, 2138, 1,    0,    0,    0,
            2177, 2139, 1,    0,    0,    0,    2177, 2140, 1,    0,    0,    0,    2177, 2141,
            1,    0,    0,    0,    2177, 2142, 1,    0,    0,    0,    2177, 2143, 1,    0,
            0,    0,    2177, 2144, 1,    0,    0,    0,    2177, 2145, 1,    0,    0,    0,
            2177, 2146, 1,    0,    0,    0,    2177, 2147, 1,    0,    0,    0,    2177, 2148,
            1,    0,    0,    0,    2177, 2149, 1,    0,    0,    0,    2177, 2150, 1,    0,
            0,    0,    2177, 2151, 1,    0,    0,    0,    2177, 2152, 1,    0,    0,    0,
            2177, 2153, 1,    0,    0,    0,    2177, 2154, 1,    0,    0,    0,    2177, 2155,
            1,    0,    0,    0,    2177, 2156, 1,    0,    0,    0,    2177, 2157, 1,    0,
            0,    0,    2177, 2159, 1,    0,    0,    0,    2177, 2161, 1,    0,    0,    0,
            2177, 2162, 1,    0,    0,    0,    2177, 2163, 1,    0,    0,    0,    2177, 2164,
            1,    0,    0,    0,    2177, 2165, 1,    0,    0,    0,    2177, 2166, 1,    0,
            0,    0,    2177, 2167, 1,    0,    0,    0,    2177, 2168, 1,    0,    0,    0,
            2177, 2169, 1,    0,    0,    0,    2177, 2170, 1,    0,    0,    0,    2177, 2171,
            1,    0,    0,    0,    2177, 2172, 1,    0,    0,    0,    2177, 2173, 1,    0,
            0,    0,    2177, 2175, 1,    0,    0,    0,    2178, 397,  1,    0,    0,    0,
            2179, 2180, 7,    23,   0,    0,    2180, 399,  1,    0,    0,    0,    312,  401,
            408,  417,  421,  430,  433,  437,  445,  452,  455,  460,  465,  471,  479,  481,
            490,  494,  498,  501,  505,  508,  515,  519,  522,  525,  528,  534,  538,  542,
            556,  560,  566,  573,  579,  583,  587,  589,  597,  602,  615,  622,  634,  644,
            649,  653,  660,  663,  671,  675,  678,  685,  692,  696,  701,  705,  708,  713,
            728,  735,  743,  751,  760,  767,  774,  782,  790,  798,  806,  814,  822,  831,
            839,  848,  856,  864,  866,  869,  875,  881,  887,  894,  903,  911,  915,  922,
            924,  944,  948,  954,  959,  963,  966,  973,  980,  984,  993,  1004, 1014, 1019,
            1026, 1029, 1034, 1039, 1059, 1064, 1067, 1080, 1086, 1091, 1094, 1099, 1102, 1109,
            1132, 1138, 1144, 1150, 1153, 1159, 1163, 1167, 1170, 1178, 1180, 1186, 1189, 1192,
            1195, 1199, 1203, 1209, 1219, 1225, 1231, 1236, 1241, 1245, 1258, 1264, 1268, 1274,
            1279, 1294, 1300, 1304, 1309, 1314, 1319, 1325, 1328, 1337, 1341, 1346, 1350, 1356,
            1363, 1380, 1382, 1389, 1394, 1401, 1405, 1409, 1417, 1423, 1429, 1433, 1435, 1439,
            1444, 1448, 1451, 1454, 1457, 1462, 1466, 1469, 1473, 1476, 1478, 1483, 1490, 1496,
            1500, 1506, 1512, 1515, 1517, 1523, 1527, 1533, 1540, 1544, 1546, 1550, 1556, 1568,
            1572, 1574, 1578, 1583, 1586, 1593, 1597, 1602, 1604, 1608, 1611, 1614, 1620, 1627,
            1634, 1639, 1643, 1647, 1652, 1656, 1662, 1667, 1670, 1672, 1677, 1687, 1689, 1694,
            1697, 1701, 1706, 1713, 1723, 1725, 1730, 1733, 1736, 1741, 1747, 1752, 1757, 1761,
            1765, 1767, 1770, 1773, 1784, 1787, 1790, 1793, 1796, 1800, 1804, 1811, 1816, 1823,
            1829, 1833, 1836, 1840, 1845, 1857, 1862, 1866, 1870, 1875, 1880, 1884, 1887, 1891,
            1902, 1906, 1913, 1918, 1922, 1928, 1932, 1936, 1945, 1958, 1963, 1970, 1974, 1977,
            1980, 1983, 1987, 1992, 1999, 2003, 2007, 2012, 2016, 2020, 2024, 2028, 2034, 2040,
            2043, 2046, 2062, 2070, 2079, 2084, 2087, 2091, 2095, 2100, 2106, 2111, 2115, 2124,
            2129, 2134, 2177};
        staticData->serializedATN = antlr4::atn::SerializedATNView(
            serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

        antlr4::atn::ATNDeserializer deserializer;
        staticData->atn = deserializer.deserialize(staticData->serializedATN);

        const size_t count = staticData->atn->getNumberOfDecisions();
        staticData->decisionToDFA.reserve(count);
        for (size_t i = 0; i < count; i++)
        {
            staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
        }
        ctclangParserStaticData = staticData.release();
    }

} // namespace

CtcLangParser::CtcLangParser(TokenStream *input)
    : CtcLangParser(input, antlr4::atn::ParserATNSimulatorOptions())
{
}

CtcLangParser::CtcLangParser(TokenStream *input,
                             const antlr4::atn::ParserATNSimulatorOptions &options)
    : Parser(input)
{
    CtcLangParser::initialize();
    _interpreter = new atn::ParserATNSimulator(
        this, *ctclangParserStaticData->atn, ctclangParserStaticData->decisionToDFA,
        ctclangParserStaticData->sharedContextCache, options);
}

CtcLangParser::~CtcLangParser()
{
    delete _interpreter;
}

const atn::ATN &CtcLangParser::getATN() const
{
    return *ctclangParserStaticData->atn;
}

std::string CtcLangParser::getGrammarFileName() const
{
    return "CtcLang.g4";
}

const std::vector<std::string> &CtcLangParser::getRuleNames() const
{
    return ctclangParserStaticData->ruleNames;
}

const dfa::Vocabulary &CtcLangParser::getVocabulary() const
{
    return ctclangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CtcLangParser::getSerializedATN() const
{
    return ctclangParserStaticData->serializedATN;
}

//----------------- TranslationUnitContext
//------------------------------------------------------------------

CtcLangParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TranslationUnitContext::EOF()
{
    return getToken(CtcLangParser::EOF, 0);
}

CtcLangParser::DeclarationseqContext *CtcLangParser::TranslationUnitContext::declarationseq()
{
    return getRuleContext<CtcLangParser::DeclarationseqContext>(0);
}

size_t CtcLangParser::TranslationUnitContext::getRuleIndex() const
{
    return CtcLangParser::RuleTranslationUnit;
}

std::any CtcLangParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTranslationUnit(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TranslationUnitContext *CtcLangParser::translationUnit()
{
    TranslationUnitContext *_localctx =
        _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
    enterRule(_localctx, 0, CtcLangParser::RuleTranslationUnit);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(401);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6258306904838405693) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57423094277539199) != 0))
        {
            setState(400);
            declarationseq();
        }
        setState(403);
        match(CtcLangParser::EOF);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PrimaryExpressionContext
//------------------------------------------------------------------

CtcLangParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::LiteralContext *> CtcLangParser::PrimaryExpressionContext::literal()
{
    return getRuleContexts<CtcLangParser::LiteralContext>();
}

CtcLangParser::LiteralContext *CtcLangParser::PrimaryExpressionContext::literal(size_t i)
{
    return getRuleContext<CtcLangParser::LiteralContext>(i);
}

tree::TerminalNode *CtcLangParser::PrimaryExpressionContext::This()
{
    return getToken(CtcLangParser::This, 0);
}

tree::TerminalNode *CtcLangParser::PrimaryExpressionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::PrimaryExpressionContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::PrimaryExpressionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::IdExpressionContext *CtcLangParser::PrimaryExpressionContext::idExpression()
{
    return getRuleContext<CtcLangParser::IdExpressionContext>(0);
}

CtcLangParser::LambdaExpressionContext *CtcLangParser::PrimaryExpressionContext::lambdaExpression()
{
    return getRuleContext<CtcLangParser::LambdaExpressionContext>(0);
}

size_t CtcLangParser::PrimaryExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RulePrimaryExpression;
}

std::any CtcLangParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPrimaryExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PrimaryExpressionContext *CtcLangParser::primaryExpression()
{
    PrimaryExpressionContext *_localctx =
        _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
    enterRule(_localctx, 2, CtcLangParser::RulePrimaryExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        setState(417);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::IntegerLiteral:
            case CtcLangParser::CharacterLiteral:
            case CtcLangParser::FloatingLiteral:
            case CtcLangParser::StringLiteral:
            case CtcLangParser::BooleanLiteral:
            case CtcLangParser::PointerLiteral:
            case CtcLangParser::UserDefinedLiteral: {
                enterOuterAlt(_localctx, 1);
                setState(406);
                _errHandler->sync(this);
                alt = 1;
                do
                {
                    switch (alt)
                    {
                        case 1: {
                            setState(405);
                            literal();
                            break;
                        }

                        default:
                            throw NoViableAltException(this);
                    }
                    setState(408);
                    _errHandler->sync(this);
                    alt =
                        getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
                } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                break;
            }

            case CtcLangParser::This: {
                enterOuterAlt(_localctx, 2);
                setState(410);
                match(CtcLangParser::This);
                break;
            }

            case CtcLangParser::LeftParen: {
                enterOuterAlt(_localctx, 3);
                setState(411);
                match(CtcLangParser::LeftParen);
                setState(412);
                expression();
                setState(413);
                match(CtcLangParser::RightParen);
                break;
            }

            case CtcLangParser::Decltype:
            case CtcLangParser::Operator:
            case CtcLangParser::Tilde:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 4);
                setState(415);
                idExpression();
                break;
            }

            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 5);
                setState(416);
                lambdaExpression();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- IdExpressionContext
//------------------------------------------------------------------

CtcLangParser::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::UnqualifiedIdContext *CtcLangParser::IdExpressionContext::unqualifiedId()
{
    return getRuleContext<CtcLangParser::UnqualifiedIdContext>(0);
}

CtcLangParser::QualifiedIdContext *CtcLangParser::IdExpressionContext::qualifiedId()
{
    return getRuleContext<CtcLangParser::QualifiedIdContext>(0);
}

size_t CtcLangParser::IdExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleIdExpression;
}

std::any CtcLangParser::IdExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitIdExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::IdExpressionContext *CtcLangParser::idExpression()
{
    IdExpressionContext *_localctx = _tracker.createInstance<IdExpressionContext>(_ctx, getState());
    enterRule(_localctx, 4, CtcLangParser::RuleIdExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(421);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(419);
                unqualifiedId();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(420);
                qualifiedId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- UnqualifiedIdContext
//------------------------------------------------------------------

CtcLangParser::UnqualifiedIdContext::UnqualifiedIdContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::UnqualifiedIdContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::OperatorFunctionIdContext *CtcLangParser::UnqualifiedIdContext::operatorFunctionId()
{
    return getRuleContext<CtcLangParser::OperatorFunctionIdContext>(0);
}

CtcLangParser::ConversionFunctionIdContext *CtcLangParser::UnqualifiedIdContext::
    conversionFunctionId()
{
    return getRuleContext<CtcLangParser::ConversionFunctionIdContext>(0);
}

CtcLangParser::LiteralOperatorIdContext *CtcLangParser::UnqualifiedIdContext::literalOperatorId()
{
    return getRuleContext<CtcLangParser::LiteralOperatorIdContext>(0);
}

tree::TerminalNode *CtcLangParser::UnqualifiedIdContext::Tilde()
{
    return getToken(CtcLangParser::Tilde, 0);
}

CtcLangParser::ClassNameContext *CtcLangParser::UnqualifiedIdContext::className()
{
    return getRuleContext<CtcLangParser::ClassNameContext>(0);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::UnqualifiedIdContext::decltypeSpecifier()
{
    return getRuleContext<CtcLangParser::DecltypeSpecifierContext>(0);
}

CtcLangParser::TemplateIdContext *CtcLangParser::UnqualifiedIdContext::templateId()
{
    return getRuleContext<CtcLangParser::TemplateIdContext>(0);
}

size_t CtcLangParser::UnqualifiedIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleUnqualifiedId;
}

std::any CtcLangParser::UnqualifiedIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitUnqualifiedId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::UnqualifiedIdContext *CtcLangParser::unqualifiedId()
{
    UnqualifiedIdContext *_localctx =
        _tracker.createInstance<UnqualifiedIdContext>(_ctx, getState());
    enterRule(_localctx, 6, CtcLangParser::RuleUnqualifiedId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(433);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(423);
                match(CtcLangParser::Identifier);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(424);
                operatorFunctionId();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(425);
                conversionFunctionId();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(426);
                literalOperatorId();
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(427);
                match(CtcLangParser::Tilde);
                setState(430);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::Identifier: {
                        setState(428);
                        className();
                        break;
                    }

                    case CtcLangParser::Decltype: {
                        setState(429);
                        decltypeSpecifier();
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(432);
                templateId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- QualifiedIdContext
//------------------------------------------------------------------

CtcLangParser::QualifiedIdContext::QualifiedIdContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::QualifiedIdContext::nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

CtcLangParser::UnqualifiedIdContext *CtcLangParser::QualifiedIdContext::unqualifiedId()
{
    return getRuleContext<CtcLangParser::UnqualifiedIdContext>(0);
}

tree::TerminalNode *CtcLangParser::QualifiedIdContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

size_t CtcLangParser::QualifiedIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleQualifiedId;
}

std::any CtcLangParser::QualifiedIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitQualifiedId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::QualifiedIdContext *CtcLangParser::qualifiedId()
{
    QualifiedIdContext *_localctx = _tracker.createInstance<QualifiedIdContext>(_ctx, getState());
    enterRule(_localctx, 8, CtcLangParser::RuleQualifiedId);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(435);
        nestedNameSpecifier(0);
        setState(437);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Template)
        {
            setState(436);
            match(CtcLangParser::Template);
        }
        setState(439);
        unqualifiedId();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NestedNameSpecifierContext
//------------------------------------------------------------------

CtcLangParser::NestedNameSpecifierContext::NestedNameSpecifierContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NestedNameSpecifierContext::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

CtcLangParser::TheTypeNameContext *CtcLangParser::NestedNameSpecifierContext::theTypeName()
{
    return getRuleContext<CtcLangParser::TheTypeNameContext>(0);
}

CtcLangParser::NamespaceNameContext *CtcLangParser::NestedNameSpecifierContext::namespaceName()
{
    return getRuleContext<CtcLangParser::NamespaceNameContext>(0);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::NestedNameSpecifierContext::
    decltypeSpecifier()
{
    return getRuleContext<CtcLangParser::DecltypeSpecifierContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::NestedNameSpecifierContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::NestedNameSpecifierContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::NestedNameSpecifierContext::
    simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode *CtcLangParser::NestedNameSpecifierContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

size_t CtcLangParser::NestedNameSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleNestedNameSpecifier;
}

std::any CtcLangParser::NestedNameSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNestedNameSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::nestedNameSpecifier()
{
    return nestedNameSpecifier(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::nestedNameSpecifier(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::NestedNameSpecifierContext *_localctx =
        _tracker.createInstance<NestedNameSpecifierContext>(_ctx, parentState);
    CtcLangParser::NestedNameSpecifierContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 10;
    enterRecursionRule(_localctx, 10, CtcLangParser::RuleNestedNameSpecifier, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(445);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx))
        {
            case 1: {
                setState(442);
                theTypeName();
                break;
            }

            case 2: {
                setState(443);
                namespaceName();
                break;
            }

            case 3: {
                setState(444);
                decltypeSpecifier();
                break;
            }

            default:
                break;
        }
        setState(447);
        match(CtcLangParser::Doublecolon);
        _ctx->stop = _input->LT(-1);
        setState(460);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx =
                    _tracker.createInstance<NestedNameSpecifierContext>(parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleNestedNameSpecifier);
                setState(449);

                if (!(precpred(_ctx, 1)))
                    throw FailedPredicateException(this, "precpred(_ctx, 1)");
                setState(455);
                _errHandler->sync(this);
                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx))
                {
                    case 1: {
                        setState(450);
                        match(CtcLangParser::Identifier);
                        break;
                    }

                    case 2: {
                        setState(452);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if (_la == CtcLangParser::Template)
                        {
                            setState(451);
                            match(CtcLangParser::Template);
                        }
                        setState(454);
                        simpleTemplateId();
                        break;
                    }

                    default:
                        break;
                }
                setState(457);
                match(CtcLangParser::Doublecolon);
            }
            setState(462);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- LambdaExpressionContext
//------------------------------------------------------------------

CtcLangParser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::LambdaIntroducerContext *CtcLangParser::LambdaExpressionContext::lambdaIntroducer()
{
    return getRuleContext<CtcLangParser::LambdaIntroducerContext>(0);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::LambdaExpressionContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

CtcLangParser::LambdaDeclaratorContext *CtcLangParser::LambdaExpressionContext::lambdaDeclarator()
{
    return getRuleContext<CtcLangParser::LambdaDeclaratorContext>(0);
}

size_t CtcLangParser::LambdaExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleLambdaExpression;
}

std::any CtcLangParser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLambdaExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LambdaExpressionContext *CtcLangParser::lambdaExpression()
{
    LambdaExpressionContext *_localctx =
        _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
    enterRule(_localctx, 12, CtcLangParser::RuleLambdaExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(463);
        lambdaIntroducer();
        setState(465);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::LeftParen)
        {
            setState(464);
            lambdaDeclarator();
        }
        setState(467);
        compoundStatement();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaIntroducerContext
//------------------------------------------------------------------

CtcLangParser::LambdaIntroducerContext::LambdaIntroducerContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LambdaIntroducerContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::LambdaIntroducerContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

CtcLangParser::LambdaCaptureContext *CtcLangParser::LambdaIntroducerContext::lambdaCapture()
{
    return getRuleContext<CtcLangParser::LambdaCaptureContext>(0);
}

size_t CtcLangParser::LambdaIntroducerContext::getRuleIndex() const
{
    return CtcLangParser::RuleLambdaIntroducer;
}

std::any CtcLangParser::LambdaIntroducerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLambdaIntroducer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LambdaIntroducerContext *CtcLangParser::lambdaIntroducer()
{
    LambdaIntroducerContext *_localctx =
        _tracker.createInstance<LambdaIntroducerContext>(_ctx, getState());
    enterRule(_localctx, 14, CtcLangParser::RuleLambdaIntroducer);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(469);
        match(CtcLangParser::LeftBracket);
        setState(471);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 71) & ~0x3fULL) == 0) && ((1ULL << (_la - 71)) & 2305843010354544641) != 0))
        {
            setState(470);
            lambdaCapture();
        }
        setState(473);
        match(CtcLangParser::RightBracket);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaCaptureContext
//------------------------------------------------------------------

CtcLangParser::LambdaCaptureContext::LambdaCaptureContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::CaptureListContext *CtcLangParser::LambdaCaptureContext::captureList()
{
    return getRuleContext<CtcLangParser::CaptureListContext>(0);
}

CtcLangParser::CaptureDefaultContext *CtcLangParser::LambdaCaptureContext::captureDefault()
{
    return getRuleContext<CtcLangParser::CaptureDefaultContext>(0);
}

tree::TerminalNode *CtcLangParser::LambdaCaptureContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

size_t CtcLangParser::LambdaCaptureContext::getRuleIndex() const
{
    return CtcLangParser::RuleLambdaCapture;
}

std::any CtcLangParser::LambdaCaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLambdaCapture(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LambdaCaptureContext *CtcLangParser::lambdaCapture()
{
    LambdaCaptureContext *_localctx =
        _tracker.createInstance<LambdaCaptureContext>(_ctx, getState());
    enterRule(_localctx, 16, CtcLangParser::RuleLambdaCapture);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(481);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(475);
                captureList();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(476);
                captureDefault();
                setState(479);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Comma)
                {
                    setState(477);
                    match(CtcLangParser::Comma);
                    setState(478);
                    captureList();
                }
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CaptureDefaultContext
//------------------------------------------------------------------

CtcLangParser::CaptureDefaultContext::CaptureDefaultContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::CaptureDefaultContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::CaptureDefaultContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

size_t CtcLangParser::CaptureDefaultContext::getRuleIndex() const
{
    return CtcLangParser::RuleCaptureDefault;
}

std::any CtcLangParser::CaptureDefaultContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCaptureDefault(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CaptureDefaultContext *CtcLangParser::captureDefault()
{
    CaptureDefaultContext *_localctx =
        _tracker.createInstance<CaptureDefaultContext>(_ctx, getState());
    enterRule(_localctx, 18, CtcLangParser::RuleCaptureDefault);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(483);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::And

              || _la == CtcLangParser::Assign))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CaptureListContext
//------------------------------------------------------------------

CtcLangParser::CaptureListContext::CaptureListContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::CaptureContext *> CtcLangParser::CaptureListContext::capture()
{
    return getRuleContexts<CtcLangParser::CaptureContext>();
}

CtcLangParser::CaptureContext *CtcLangParser::CaptureListContext::capture(size_t i)
{
    return getRuleContext<CtcLangParser::CaptureContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::CaptureListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::CaptureListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

tree::TerminalNode *CtcLangParser::CaptureListContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

size_t CtcLangParser::CaptureListContext::getRuleIndex() const
{
    return CtcLangParser::RuleCaptureList;
}

std::any CtcLangParser::CaptureListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCaptureList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CaptureListContext *CtcLangParser::captureList()
{
    CaptureListContext *_localctx = _tracker.createInstance<CaptureListContext>(_ctx, getState());
    enterRule(_localctx, 20, CtcLangParser::RuleCaptureList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(485);
        capture();
        setState(490);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(486);
            match(CtcLangParser::Comma);
            setState(487);
            capture();
            setState(492);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(494);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(493);
            match(CtcLangParser::Ellipsis);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CaptureContext
//------------------------------------------------------------------

CtcLangParser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::SimpleCaptureContext *CtcLangParser::CaptureContext::simpleCapture()
{
    return getRuleContext<CtcLangParser::SimpleCaptureContext>(0);
}

CtcLangParser::InitcaptureContext *CtcLangParser::CaptureContext::initcapture()
{
    return getRuleContext<CtcLangParser::InitcaptureContext>(0);
}

size_t CtcLangParser::CaptureContext::getRuleIndex() const
{
    return CtcLangParser::RuleCapture;
}

std::any CtcLangParser::CaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCapture(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CaptureContext *CtcLangParser::capture()
{
    CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
    enterRule(_localctx, 22, CtcLangParser::RuleCapture);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(498);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(496);
                simpleCapture();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(497);
                initcapture();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleCaptureContext
//------------------------------------------------------------------

CtcLangParser::SimpleCaptureContext::SimpleCaptureContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::SimpleCaptureContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::SimpleCaptureContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::SimpleCaptureContext::This()
{
    return getToken(CtcLangParser::This, 0);
}

size_t CtcLangParser::SimpleCaptureContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleCapture;
}

std::any CtcLangParser::SimpleCaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleCapture(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleCaptureContext *CtcLangParser::simpleCapture()
{
    SimpleCaptureContext *_localctx =
        _tracker.createInstance<SimpleCaptureContext>(_ctx, getState());
    enterRule(_localctx, 24, CtcLangParser::RuleSimpleCapture);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(505);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::And:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(501);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::And)
                {
                    setState(500);
                    match(CtcLangParser::And);
                }
                setState(503);
                match(CtcLangParser::Identifier);
                break;
            }

            case CtcLangParser::This: {
                enterOuterAlt(_localctx, 2);
                setState(504);
                match(CtcLangParser::This);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitcaptureContext
//------------------------------------------------------------------

CtcLangParser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::InitcaptureContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::InitializerContext *CtcLangParser::InitcaptureContext::initializer()
{
    return getRuleContext<CtcLangParser::InitializerContext>(0);
}

tree::TerminalNode *CtcLangParser::InitcaptureContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

size_t CtcLangParser::InitcaptureContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitcapture;
}

std::any CtcLangParser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitcapture(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitcaptureContext *CtcLangParser::initcapture()
{
    InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
    enterRule(_localctx, 26, CtcLangParser::RuleInitcapture);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(508);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::And)
        {
            setState(507);
            match(CtcLangParser::And);
        }
        setState(510);
        match(CtcLangParser::Identifier);
        setState(511);
        initializer();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::LambdaDeclaratorContext::LambdaDeclaratorContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LambdaDeclaratorContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::LambdaDeclaratorContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::ParameterDeclarationClauseContext *CtcLangParser::LambdaDeclaratorContext::
    parameterDeclarationClause()
{
    return getRuleContext<CtcLangParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode *CtcLangParser::LambdaDeclaratorContext::Mutable()
{
    return getToken(CtcLangParser::Mutable, 0);
}

CtcLangParser::ExceptionSpecificationContext *CtcLangParser::LambdaDeclaratorContext::
    exceptionSpecification()
{
    return getRuleContext<CtcLangParser::ExceptionSpecificationContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::LambdaDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::TrailingReturnTypeContext *CtcLangParser::LambdaDeclaratorContext::
    trailingReturnType()
{
    return getRuleContext<CtcLangParser::TrailingReturnTypeContext>(0);
}

size_t CtcLangParser::LambdaDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleLambdaDeclarator;
}

std::any CtcLangParser::LambdaDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLambdaDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LambdaDeclaratorContext *CtcLangParser::lambdaDeclarator()
{
    LambdaDeclaratorContext *_localctx =
        _tracker.createInstance<LambdaDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 28, CtcLangParser::RuleLambdaDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(513);
        match(CtcLangParser::LeftParen);
        setState(515);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 5069347257363758641) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 37154696925807739) != 0))
        {
            setState(514);
            parameterDeclarationClause();
        }
        setState(517);
        match(CtcLangParser::RightParen);
        setState(519);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Mutable)
        {
            setState(518);
            match(CtcLangParser::Mutable);
        }
        setState(522);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Noexcept

            || _la == CtcLangParser::Throw)
        {
            setState(521);
            exceptionSpecification();
        }
        setState(525);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(524);
            attributeSpecifierSeq();
        }
        setState(528);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Arrow)
        {
            setState(527);
            trailingReturnType();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PostfixExpressionContext
//------------------------------------------------------------------

CtcLangParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PrimaryExpressionContext *CtcLangParser::PostfixExpressionContext::
    primaryExpression()
{
    return getRuleContext<CtcLangParser::PrimaryExpressionContext>(0);
}

CtcLangParser::SimpleTypeSpecifierContext *CtcLangParser::PostfixExpressionContext::
    simpleTypeSpecifier()
{
    return getRuleContext<CtcLangParser::SimpleTypeSpecifierContext>(0);
}

CtcLangParser::TypeNameSpecifierContext *CtcLangParser::PostfixExpressionContext::
    typeNameSpecifier()
{
    return getRuleContext<CtcLangParser::TypeNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::PostfixExpressionContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

CtcLangParser::ExpressionListContext *CtcLangParser::PostfixExpressionContext::expressionList()
{
    return getRuleContext<CtcLangParser::ExpressionListContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::PostfixExpressionContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::PostfixExpressionContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Bit_cast()
{
    return getToken(CtcLangParser::Bit_cast, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Dynamic_cast()
{
    return getToken(CtcLangParser::Dynamic_cast, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Static_cast()
{
    return getToken(CtcLangParser::Static_cast, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Reinterpret_cast()
{
    return getToken(CtcLangParser::Reinterpret_cast, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Const_cast()
{
    return getToken(CtcLangParser::Const_cast, 0);
}

CtcLangParser::TypeIdOfTheTypeIdContext *CtcLangParser::PostfixExpressionContext::
    typeIdOfTheTypeId()
{
    return getRuleContext<CtcLangParser::TypeIdOfTheTypeIdContext>(0);
}

CtcLangParser::PostfixExpressionContext *CtcLangParser::PostfixExpressionContext::
    postfixExpression()
{
    return getRuleContext<CtcLangParser::PostfixExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Dot()
{
    return getToken(CtcLangParser::Dot, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Arrow()
{
    return getToken(CtcLangParser::Arrow, 0);
}

CtcLangParser::IdExpressionContext *CtcLangParser::PostfixExpressionContext::idExpression()
{
    return getRuleContext<CtcLangParser::IdExpressionContext>(0);
}

CtcLangParser::PseudoDestructorNameContext *CtcLangParser::PostfixExpressionContext::
    pseudoDestructorName()
{
    return getRuleContext<CtcLangParser::PseudoDestructorNameContext>(0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::PlusPlus()
{
    return getToken(CtcLangParser::PlusPlus, 0);
}

tree::TerminalNode *CtcLangParser::PostfixExpressionContext::MinusMinus()
{
    return getToken(CtcLangParser::MinusMinus, 0);
}

size_t CtcLangParser::PostfixExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RulePostfixExpression;
}

std::any CtcLangParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPostfixExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PostfixExpressionContext *CtcLangParser::postfixExpression()
{
    return postfixExpression(0);
}

CtcLangParser::PostfixExpressionContext *CtcLangParser::postfixExpression(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::PostfixExpressionContext *_localctx =
        _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
    CtcLangParser::PostfixExpressionContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 30;
    enterRecursionRule(_localctx, 30, CtcLangParser::RulePostfixExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(560);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx))
        {
            case 1: {
                setState(531);
                primaryExpression();
                break;
            }

            case 2: {
                setState(534);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::Auto:
                    case CtcLangParser::Bool:
                    case CtcLangParser::Char:
                    case CtcLangParser::Char16:
                    case CtcLangParser::Char32:
                    case CtcLangParser::Decltype:
                    case CtcLangParser::Double:
                    case CtcLangParser::Float:
                    case CtcLangParser::Int:
                    case CtcLangParser::Long:
                    case CtcLangParser::Short:
                    case CtcLangParser::Signed:
                    case CtcLangParser::Unsigned:
                    case CtcLangParser::Void:
                    case CtcLangParser::Wchar:
                    case CtcLangParser::Doublecolon:
                    case CtcLangParser::Identifier: {
                        setState(532);
                        simpleTypeSpecifier();
                        break;
                    }

                    case CtcLangParser::Typename_: {
                        setState(533);
                        typeNameSpecifier();
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                setState(542);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::LeftParen: {
                        setState(536);
                        match(CtcLangParser::LeftParen);
                        setState(538);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237200456865) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(537);
                            expressionList();
                        }
                        setState(540);
                        match(CtcLangParser::RightParen);
                        break;
                    }

                    case CtcLangParser::LeftBrace: {
                        setState(541);
                        bracedInitList();
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                break;
            }

            case 3: {
                setState(544);
                _la = _input->LA(1);
                if (!(((((_la - 25) & ~0x3fULL) == 0) &&
                       ((1ULL << (_la - 25)) & 2216203124995) != 0)))
                {
                    _errHandler->recoverInline(this);
                }
                else
                {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(545);
                match(CtcLangParser::Less);
                setState(546);
                theTypeId();
                setState(547);
                match(CtcLangParser::Greater);
                setState(548);
                match(CtcLangParser::LeftParen);
                setState(549);
                expression();
                setState(550);
                match(CtcLangParser::RightParen);
                break;
            }

            case 4: {
                setState(552);
                typeIdOfTheTypeId();
                setState(553);
                match(CtcLangParser::LeftParen);
                setState(556);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx))
                {
                    case 1: {
                        setState(554);
                        expression();
                        break;
                    }

                    case 2: {
                        setState(555);
                        theTypeId();
                        break;
                    }

                    default:
                        break;
                }
                setState(558);
                match(CtcLangParser::RightParen);
                break;
            }

            default:
                break;
        }
        _ctx->stop = _input->LT(-1);
        setState(589);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                setState(587);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx))
                {
                    case 1: {
                        _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext,
                                                                                      parentState);
                        pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
                        setState(562);

                        if (!(precpred(_ctx, 7)))
                            throw FailedPredicateException(this, "precpred(_ctx, 7)");
                        setState(563);
                        match(CtcLangParser::LeftBracket);
                        setState(566);
                        _errHandler->sync(this);
                        switch (_input->LA(1))
                        {
                            case CtcLangParser::IntegerLiteral:
                            case CtcLangParser::CharacterLiteral:
                            case CtcLangParser::FloatingLiteral:
                            case CtcLangParser::StringLiteral:
                            case CtcLangParser::BooleanLiteral:
                            case CtcLangParser::PointerLiteral:
                            case CtcLangParser::UserDefinedLiteral:
                            case CtcLangParser::Alignof:
                            case CtcLangParser::Auto:
                            case CtcLangParser::Bool:
                            case CtcLangParser::Char:
                            case CtcLangParser::Char16:
                            case CtcLangParser::Char32:
                            case CtcLangParser::Const_cast:
                            case CtcLangParser::Bit_cast:
                            case CtcLangParser::Decltype:
                            case CtcLangParser::Delete:
                            case CtcLangParser::Double:
                            case CtcLangParser::Dynamic_cast:
                            case CtcLangParser::Float:
                            case CtcLangParser::Int:
                            case CtcLangParser::Long:
                            case CtcLangParser::New:
                            case CtcLangParser::Noexcept:
                            case CtcLangParser::Operator:
                            case CtcLangParser::Reinterpret_cast:
                            case CtcLangParser::Short:
                            case CtcLangParser::Signed:
                            case CtcLangParser::Sizeof:
                            case CtcLangParser::Static_cast:
                            case CtcLangParser::This:
                            case CtcLangParser::Throw:
                            case CtcLangParser::Typeid_:
                            case CtcLangParser::Typename_:
                            case CtcLangParser::Unsigned:
                            case CtcLangParser::Void:
                            case CtcLangParser::Wchar:
                            case CtcLangParser::LeftParen:
                            case CtcLangParser::LeftBracket:
                            case CtcLangParser::Plus:
                            case CtcLangParser::Minus:
                            case CtcLangParser::Star:
                            case CtcLangParser::And:
                            case CtcLangParser::Or:
                            case CtcLangParser::Tilde:
                            case CtcLangParser::Not:
                            case CtcLangParser::PlusPlus:
                            case CtcLangParser::MinusMinus:
                            case CtcLangParser::Doublecolon:
                            case CtcLangParser::Identifier: {
                                setState(564);
                                expression();
                                break;
                            }

                            case CtcLangParser::LeftBrace: {
                                setState(565);
                                bracedInitList();
                                break;
                            }

                            default:
                                throw NoViableAltException(this);
                        }
                        setState(568);
                        match(CtcLangParser::RightBracket);
                        break;
                    }

                    case 2: {
                        _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext,
                                                                                      parentState);
                        pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
                        setState(570);

                        if (!(precpred(_ctx, 6)))
                            throw FailedPredicateException(this, "precpred(_ctx, 6)");
                        setState(571);
                        match(CtcLangParser::LeftParen);
                        setState(573);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237200456865) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(572);
                            expressionList();
                        }
                        setState(575);
                        match(CtcLangParser::RightParen);
                        break;
                    }

                    case 3: {
                        _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext,
                                                                                      parentState);
                        pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
                        setState(576);

                        if (!(precpred(_ctx, 4)))
                            throw FailedPredicateException(this, "precpred(_ctx, 4)");
                        setState(577);
                        _la = _input->LA(1);
                        if (!(_la == CtcLangParser::Arrow

                              || _la == CtcLangParser::Dot))
                        {
                            _errHandler->recoverInline(this);
                        }
                        else
                        {
                            _errHandler->reportMatch(this);
                            consume();
                        }
                        setState(583);
                        _errHandler->sync(this);
                        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(
                            _input, 34, _ctx))
                        {
                            case 1: {
                                setState(579);
                                _errHandler->sync(this);

                                _la = _input->LA(1);
                                if (_la == CtcLangParser::Template)
                                {
                                    setState(578);
                                    match(CtcLangParser::Template);
                                }
                                setState(581);
                                idExpression();
                                break;
                            }

                            case 2: {
                                setState(582);
                                pseudoDestructorName();
                                break;
                            }

                            default:
                                break;
                        }
                        break;
                    }

                    case 4: {
                        _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext,
                                                                                      parentState);
                        pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
                        setState(585);

                        if (!(precpred(_ctx, 3)))
                            throw FailedPredicateException(this, "precpred(_ctx, 3)");
                        setState(586);
                        _la = _input->LA(1);
                        if (!(_la == CtcLangParser::PlusPlus

                              || _la == CtcLangParser::MinusMinus))
                        {
                            _errHandler->recoverInline(this);
                        }
                        else
                        {
                            _errHandler->reportMatch(this);
                            consume();
                        }
                        break;
                    }

                    default:
                        break;
                }
            }
            setState(591);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- TypeIdOfTheTypeIdContext
//------------------------------------------------------------------

CtcLangParser::TypeIdOfTheTypeIdContext::TypeIdOfTheTypeIdContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TypeIdOfTheTypeIdContext::Typeid_()
{
    return getToken(CtcLangParser::Typeid_, 0);
}

size_t CtcLangParser::TypeIdOfTheTypeIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeIdOfTheTypeId;
}

std::any CtcLangParser::TypeIdOfTheTypeIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeIdOfTheTypeId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeIdOfTheTypeIdContext *CtcLangParser::typeIdOfTheTypeId()
{
    TypeIdOfTheTypeIdContext *_localctx =
        _tracker.createInstance<TypeIdOfTheTypeIdContext>(_ctx, getState());
    enterRule(_localctx, 32, CtcLangParser::RuleTypeIdOfTheTypeId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(592);
        match(CtcLangParser::Typeid_);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionListContext
//------------------------------------------------------------------

CtcLangParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::InitializerListContext *CtcLangParser::ExpressionListContext::initializerList()
{
    return getRuleContext<CtcLangParser::InitializerListContext>(0);
}

size_t CtcLangParser::ExpressionListContext::getRuleIndex() const
{
    return CtcLangParser::RuleExpressionList;
}

std::any CtcLangParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExpressionList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExpressionListContext *CtcLangParser::expressionList()
{
    ExpressionListContext *_localctx =
        _tracker.createInstance<ExpressionListContext>(_ctx, getState());
    enterRule(_localctx, 34, CtcLangParser::RuleExpressionList);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(594);
        initializerList();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PseudoDestructorNameContext
//------------------------------------------------------------------

CtcLangParser::PseudoDestructorNameContext::PseudoDestructorNameContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::PseudoDestructorNameContext::Tilde()
{
    return getToken(CtcLangParser::Tilde, 0);
}

std::vector<CtcLangParser::TheTypeNameContext *> CtcLangParser::PseudoDestructorNameContext::
    theTypeName()
{
    return getRuleContexts<CtcLangParser::TheTypeNameContext>();
}

CtcLangParser::TheTypeNameContext *CtcLangParser::PseudoDestructorNameContext::theTypeName(size_t i)
{
    return getRuleContext<CtcLangParser::TheTypeNameContext>(i);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::PseudoDestructorNameContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::PseudoDestructorNameContext::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

tree::TerminalNode *CtcLangParser::PseudoDestructorNameContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::PseudoDestructorNameContext::
    simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::PseudoDestructorNameContext::
    decltypeSpecifier()
{
    return getRuleContext<CtcLangParser::DecltypeSpecifierContext>(0);
}

size_t CtcLangParser::PseudoDestructorNameContext::getRuleIndex() const
{
    return CtcLangParser::RulePseudoDestructorName;
}

std::any CtcLangParser::PseudoDestructorNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPseudoDestructorName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PseudoDestructorNameContext *CtcLangParser::pseudoDestructorName()
{
    PseudoDestructorNameContext *_localctx =
        _tracker.createInstance<PseudoDestructorNameContext>(_ctx, getState());
    enterRule(_localctx, 36, CtcLangParser::RulePseudoDestructorName);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(615);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(597);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx))
                {
                    case 1: {
                        setState(596);
                        nestedNameSpecifier(0);
                        break;
                    }

                    default:
                        break;
                }
                setState(602);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Identifier)
                {
                    setState(599);
                    theTypeName();
                    setState(600);
                    match(CtcLangParser::Doublecolon);
                }
                setState(604);
                match(CtcLangParser::Tilde);
                setState(605);
                theTypeName();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(606);
                nestedNameSpecifier(0);
                setState(607);
                match(CtcLangParser::Template);
                setState(608);
                simpleTemplateId();
                setState(609);
                match(CtcLangParser::Doublecolon);
                setState(610);
                match(CtcLangParser::Tilde);
                setState(611);
                theTypeName();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(613);
                match(CtcLangParser::Tilde);
                setState(614);
                decltypeSpecifier();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- UnaryExpressionContext
//------------------------------------------------------------------

CtcLangParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PostfixExpressionContext *CtcLangParser::UnaryExpressionContext::postfixExpression()
{
    return getRuleContext<CtcLangParser::PostfixExpressionContext>(0);
}

CtcLangParser::UnaryExpressionContext *CtcLangParser::UnaryExpressionContext::unaryExpression()
{
    return getRuleContext<CtcLangParser::UnaryExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::PlusPlus()
{
    return getToken(CtcLangParser::PlusPlus, 0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::MinusMinus()
{
    return getToken(CtcLangParser::MinusMinus, 0);
}

CtcLangParser::UnaryOperatorContext *CtcLangParser::UnaryExpressionContext::unaryOperator()
{
    return getRuleContext<CtcLangParser::UnaryOperatorContext>(0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::Sizeof()
{
    return getToken(CtcLangParser::Sizeof, 0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::UnaryExpressionContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::UnaryExpressionContext::Alignof()
{
    return getToken(CtcLangParser::Alignof, 0);
}

CtcLangParser::NoExceptExpressionContext *CtcLangParser::UnaryExpressionContext::
    noExceptExpression()
{
    return getRuleContext<CtcLangParser::NoExceptExpressionContext>(0);
}

CtcLangParser::NewExpression_Context *CtcLangParser::UnaryExpressionContext::newExpression_()
{
    return getRuleContext<CtcLangParser::NewExpression_Context>(0);
}

CtcLangParser::DeleteExpressionContext *CtcLangParser::UnaryExpressionContext::deleteExpression()
{
    return getRuleContext<CtcLangParser::DeleteExpressionContext>(0);
}

size_t CtcLangParser::UnaryExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleUnaryExpression;
}

std::any CtcLangParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitUnaryExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::UnaryExpressionContext *CtcLangParser::unaryExpression()
{
    UnaryExpressionContext *_localctx =
        _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
    enterRule(_localctx, 38, CtcLangParser::RuleUnaryExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(644);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(617);
                postfixExpression(0);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(622);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::PlusPlus: {
                        setState(618);
                        match(CtcLangParser::PlusPlus);
                        break;
                    }

                    case CtcLangParser::MinusMinus: {
                        setState(619);
                        match(CtcLangParser::MinusMinus);
                        break;
                    }

                    case CtcLangParser::Plus:
                    case CtcLangParser::Minus:
                    case CtcLangParser::Star:
                    case CtcLangParser::And:
                    case CtcLangParser::Or:
                    case CtcLangParser::Tilde:
                    case CtcLangParser::Not: {
                        setState(620);
                        unaryOperator();
                        break;
                    }

                    case CtcLangParser::Sizeof: {
                        setState(621);
                        match(CtcLangParser::Sizeof);
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                setState(624);
                unaryExpression();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(625);
                match(CtcLangParser::Sizeof);
                setState(634);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::LeftParen: {
                        setState(626);
                        match(CtcLangParser::LeftParen);
                        setState(627);
                        theTypeId();
                        setState(628);
                        match(CtcLangParser::RightParen);
                        break;
                    }

                    case CtcLangParser::Ellipsis: {
                        setState(630);
                        match(CtcLangParser::Ellipsis);
                        setState(631);
                        match(CtcLangParser::LeftParen);
                        setState(632);
                        match(CtcLangParser::Identifier);
                        setState(633);
                        match(CtcLangParser::RightParen);
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(636);
                match(CtcLangParser::Alignof);
                setState(637);
                match(CtcLangParser::LeftParen);
                setState(638);
                theTypeId();
                setState(639);
                match(CtcLangParser::RightParen);
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(641);
                noExceptExpression();
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(642);
                newExpression_();
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(643);
                deleteExpression();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- UnaryOperatorContext
//------------------------------------------------------------------

CtcLangParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Or()
{
    return getToken(CtcLangParser::Or, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Star()
{
    return getToken(CtcLangParser::Star, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Plus()
{
    return getToken(CtcLangParser::Plus, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Tilde()
{
    return getToken(CtcLangParser::Tilde, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Minus()
{
    return getToken(CtcLangParser::Minus, 0);
}

tree::TerminalNode *CtcLangParser::UnaryOperatorContext::Not()
{
    return getToken(CtcLangParser::Not, 0);
}

size_t CtcLangParser::UnaryOperatorContext::getRuleIndex() const
{
    return CtcLangParser::RuleUnaryOperator;
}

std::any CtcLangParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitUnaryOperator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::UnaryOperatorContext *CtcLangParser::unaryOperator()
{
    UnaryOperatorContext *_localctx =
        _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
    enterRule(_localctx, 40, CtcLangParser::RuleUnaryOperator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(646);
        _la = _input->LA(1);
        if (!(((((_la - 91) & ~0x3fULL) == 0) && ((1ULL << (_la - 91)) & 967) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NewExpression_Context
//------------------------------------------------------------------

CtcLangParser::NewExpression_Context::NewExpression_Context(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NewExpression_Context::New()
{
    return getToken(CtcLangParser::New, 0);
}

CtcLangParser::NewTypeIdContext *CtcLangParser::NewExpression_Context::newTypeId()
{
    return getRuleContext<CtcLangParser::NewTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::NewExpression_Context::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::NewExpression_Context::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::NewExpression_Context::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

tree::TerminalNode *CtcLangParser::NewExpression_Context::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

CtcLangParser::NewPlacementContext *CtcLangParser::NewExpression_Context::newPlacement()
{
    return getRuleContext<CtcLangParser::NewPlacementContext>(0);
}

CtcLangParser::NewInitializer_Context *CtcLangParser::NewExpression_Context::newInitializer_()
{
    return getRuleContext<CtcLangParser::NewInitializer_Context>(0);
}

size_t CtcLangParser::NewExpression_Context::getRuleIndex() const
{
    return CtcLangParser::RuleNewExpression_;
}

std::any CtcLangParser::NewExpression_Context::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNewExpression_(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NewExpression_Context *CtcLangParser::newExpression_()
{
    NewExpression_Context *_localctx =
        _tracker.createInstance<NewExpression_Context>(_ctx, getState());
    enterRule(_localctx, 42, CtcLangParser::RuleNewExpression_);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(649);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Doublecolon)
        {
            setState(648);
            match(CtcLangParser::Doublecolon);
        }
        setState(651);
        match(CtcLangParser::New);
        setState(653);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx))
        {
            case 1: {
                setState(652);
                newPlacement();
                break;
            }

            default:
                break;
        }
        setState(660);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Enum:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                setState(655);
                newTypeId();
                break;
            }

            case CtcLangParser::LeftParen: {
                setState(656);
                match(CtcLangParser::LeftParen);
                setState(657);
                theTypeId();
                setState(658);
                match(CtcLangParser::RightParen);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
        setState(663);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::LeftParen

            || _la == CtcLangParser::LeftBrace)
        {
            setState(662);
            newInitializer_();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NewPlacementContext
//------------------------------------------------------------------

CtcLangParser::NewPlacementContext::NewPlacementContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NewPlacementContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ExpressionListContext *CtcLangParser::NewPlacementContext::expressionList()
{
    return getRuleContext<CtcLangParser::ExpressionListContext>(0);
}

tree::TerminalNode *CtcLangParser::NewPlacementContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

size_t CtcLangParser::NewPlacementContext::getRuleIndex() const
{
    return CtcLangParser::RuleNewPlacement;
}

std::any CtcLangParser::NewPlacementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNewPlacement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NewPlacementContext *CtcLangParser::newPlacement()
{
    NewPlacementContext *_localctx = _tracker.createInstance<NewPlacementContext>(_ctx, getState());
    enterRule(_localctx, 44, CtcLangParser::RuleNewPlacement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(665);
        match(CtcLangParser::LeftParen);
        setState(666);
        expressionList();
        setState(667);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NewTypeIdContext
//------------------------------------------------------------------

CtcLangParser::NewTypeIdContext::NewTypeIdContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::NewTypeIdContext::typeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TypeSpecifierSeqContext>(0);
}

CtcLangParser::NewDeclarator_Context *CtcLangParser::NewTypeIdContext::newDeclarator_()
{
    return getRuleContext<CtcLangParser::NewDeclarator_Context>(0);
}

size_t CtcLangParser::NewTypeIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleNewTypeId;
}

std::any CtcLangParser::NewTypeIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNewTypeId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NewTypeIdContext *CtcLangParser::newTypeId()
{
    NewTypeIdContext *_localctx = _tracker.createInstance<NewTypeIdContext>(_ctx, getState());
    enterRule(_localctx, 46, CtcLangParser::RuleNewTypeId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(669);
        typeSpecifierSeq();
        setState(671);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx))
        {
            case 1: {
                setState(670);
                newDeclarator_();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NewDeclarator_Context
//------------------------------------------------------------------

CtcLangParser::NewDeclarator_Context::NewDeclarator_Context(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PointerOperatorContext *CtcLangParser::NewDeclarator_Context::pointerOperator()
{
    return getRuleContext<CtcLangParser::PointerOperatorContext>(0);
}

CtcLangParser::NewDeclarator_Context *CtcLangParser::NewDeclarator_Context::newDeclarator_()
{
    return getRuleContext<CtcLangParser::NewDeclarator_Context>(0);
}

CtcLangParser::NoPointerNewDeclaratorContext *CtcLangParser::NewDeclarator_Context::
    noPointerNewDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerNewDeclaratorContext>(0);
}

size_t CtcLangParser::NewDeclarator_Context::getRuleIndex() const
{
    return CtcLangParser::RuleNewDeclarator_;
}

std::any CtcLangParser::NewDeclarator_Context::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNewDeclarator_(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NewDeclarator_Context *CtcLangParser::newDeclarator_()
{
    NewDeclarator_Context *_localctx =
        _tracker.createInstance<NewDeclarator_Context>(_ctx, getState());
    enterRule(_localctx, 48, CtcLangParser::RuleNewDeclarator_);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(678);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Decltype:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::AndAnd:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(673);
                pointerOperator();
                setState(675);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx))
                {
                    case 1: {
                        setState(674);
                        newDeclarator_();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 2);
                setState(677);
                noPointerNewDeclarator(0);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoPointerNewDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::NoPointerNewDeclaratorContext::NoPointerNewDeclaratorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NoPointerNewDeclaratorContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::NoPointerNewDeclaratorContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerNewDeclaratorContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::NoPointerNewDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::NoPointerNewDeclaratorContext *CtcLangParser::NoPointerNewDeclaratorContext::
    noPointerNewDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerNewDeclaratorContext>(0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::NoPointerNewDeclaratorContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

size_t CtcLangParser::NoPointerNewDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoPointerNewDeclarator;
}

std::any CtcLangParser::NoPointerNewDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoPointerNewDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoPointerNewDeclaratorContext *CtcLangParser::noPointerNewDeclarator()
{
    return noPointerNewDeclarator(0);
}

CtcLangParser::NoPointerNewDeclaratorContext *CtcLangParser::noPointerNewDeclarator(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::NoPointerNewDeclaratorContext *_localctx =
        _tracker.createInstance<NoPointerNewDeclaratorContext>(_ctx, parentState);
    CtcLangParser::NoPointerNewDeclaratorContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 50;
    enterRecursionRule(_localctx, 50, CtcLangParser::RuleNoPointerNewDeclarator, precedence);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(681);
        match(CtcLangParser::LeftBracket);
        setState(682);
        expression();
        setState(683);
        match(CtcLangParser::RightBracket);
        setState(685);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx))
        {
            case 1: {
                setState(684);
                attributeSpecifierSeq();
                break;
            }

            default:
                break;
        }
        _ctx->stop = _input->LT(-1);
        setState(696);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(parentContext,
                                                                                   parentState);
                pushNewRecursionContext(_localctx, startState, RuleNoPointerNewDeclarator);
                setState(687);

                if (!(precpred(_ctx, 1)))
                    throw FailedPredicateException(this, "precpred(_ctx, 1)");
                setState(688);
                match(CtcLangParser::LeftBracket);
                setState(689);
                constantExpression();
                setState(690);
                match(CtcLangParser::RightBracket);
                setState(692);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx))
                {
                    case 1: {
                        setState(691);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
            }
            setState(698);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- NewInitializer_Context
//------------------------------------------------------------------

CtcLangParser::NewInitializer_Context::NewInitializer_Context(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NewInitializer_Context::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::NewInitializer_Context::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::ExpressionListContext *CtcLangParser::NewInitializer_Context::expressionList()
{
    return getRuleContext<CtcLangParser::ExpressionListContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::NewInitializer_Context::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

size_t CtcLangParser::NewInitializer_Context::getRuleIndex() const
{
    return CtcLangParser::RuleNewInitializer_;
}

std::any CtcLangParser::NewInitializer_Context::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNewInitializer_(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NewInitializer_Context *CtcLangParser::newInitializer_()
{
    NewInitializer_Context *_localctx =
        _tracker.createInstance<NewInitializer_Context>(_ctx, getState());
    enterRule(_localctx, 52, CtcLangParser::RuleNewInitializer_);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(705);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftParen: {
                enterOuterAlt(_localctx, 1);
                setState(699);
                match(CtcLangParser::LeftParen);
                setState(701);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
                    ((((_la - 66) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 66)) & 2359886237200456865) != 0) ||
                    _la == CtcLangParser::Identifier)
                {
                    setState(700);
                    expressionList();
                }
                setState(703);
                match(CtcLangParser::RightParen);
                break;
            }

            case CtcLangParser::LeftBrace: {
                enterOuterAlt(_localctx, 2);
                setState(704);
                bracedInitList();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeleteExpressionContext
//------------------------------------------------------------------

CtcLangParser::DeleteExpressionContext::DeleteExpressionContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::DeleteExpressionContext::Delete()
{
    return getToken(CtcLangParser::Delete, 0);
}

CtcLangParser::CastExpressionContext *CtcLangParser::DeleteExpressionContext::castExpression()
{
    return getRuleContext<CtcLangParser::CastExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::DeleteExpressionContext::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

tree::TerminalNode *CtcLangParser::DeleteExpressionContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::DeleteExpressionContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

size_t CtcLangParser::DeleteExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeleteExpression;
}

std::any CtcLangParser::DeleteExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeleteExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeleteExpressionContext *CtcLangParser::deleteExpression()
{
    DeleteExpressionContext *_localctx =
        _tracker.createInstance<DeleteExpressionContext>(_ctx, getState());
    enterRule(_localctx, 54, CtcLangParser::RuleDeleteExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(708);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Doublecolon)
        {
            setState(707);
            match(CtcLangParser::Doublecolon);
        }
        setState(710);
        match(CtcLangParser::Delete);
        setState(713);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx))
        {
            case 1: {
                setState(711);
                match(CtcLangParser::LeftBracket);
                setState(712);
                match(CtcLangParser::RightBracket);
                break;
            }

            default:
                break;
        }
        setState(715);
        castExpression();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoExceptExpressionContext
//------------------------------------------------------------------

CtcLangParser::NoExceptExpressionContext::NoExceptExpressionContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NoExceptExpressionContext::Noexcept()
{
    return getToken(CtcLangParser::Noexcept, 0);
}

tree::TerminalNode *CtcLangParser::NoExceptExpressionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::NoExceptExpressionContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::NoExceptExpressionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

size_t CtcLangParser::NoExceptExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoExceptExpression;
}

std::any CtcLangParser::NoExceptExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoExceptExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoExceptExpressionContext *CtcLangParser::noExceptExpression()
{
    NoExceptExpressionContext *_localctx =
        _tracker.createInstance<NoExceptExpressionContext>(_ctx, getState());
    enterRule(_localctx, 56, CtcLangParser::RuleNoExceptExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(717);
        match(CtcLangParser::Noexcept);
        setState(718);
        match(CtcLangParser::LeftParen);
        setState(719);
        expression();
        setState(720);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CastExpressionContext
//------------------------------------------------------------------

CtcLangParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::UnaryExpressionContext *CtcLangParser::CastExpressionContext::unaryExpression()
{
    return getRuleContext<CtcLangParser::UnaryExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::CastExpressionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::CastExpressionContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::CastExpressionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::CastExpressionContext *CtcLangParser::CastExpressionContext::castExpression()
{
    return getRuleContext<CtcLangParser::CastExpressionContext>(0);
}

size_t CtcLangParser::CastExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleCastExpression;
}

std::any CtcLangParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCastExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CastExpressionContext *CtcLangParser::castExpression()
{
    CastExpressionContext *_localctx =
        _tracker.createInstance<CastExpressionContext>(_ctx, getState());
    enterRule(_localctx, 58, CtcLangParser::RuleCastExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(728);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(722);
                unaryExpression();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(723);
                match(CtcLangParser::LeftParen);
                setState(724);
                theTypeId();
                setState(725);
                match(CtcLangParser::RightParen);
                setState(726);
                castExpression();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PointerMemberExpressionContext
//------------------------------------------------------------------

CtcLangParser::PointerMemberExpressionContext::PointerMemberExpressionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::CastExpressionContext *> CtcLangParser::PointerMemberExpressionContext::
    castExpression()
{
    return getRuleContexts<CtcLangParser::CastExpressionContext>();
}

CtcLangParser::CastExpressionContext *CtcLangParser::PointerMemberExpressionContext::castExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::PointerMemberExpressionContext::DotStar()
{
    return getTokens(CtcLangParser::DotStar);
}

tree::TerminalNode *CtcLangParser::PointerMemberExpressionContext::DotStar(size_t i)
{
    return getToken(CtcLangParser::DotStar, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::PointerMemberExpressionContext::ArrowStar()
{
    return getTokens(CtcLangParser::ArrowStar);
}

tree::TerminalNode *CtcLangParser::PointerMemberExpressionContext::ArrowStar(size_t i)
{
    return getToken(CtcLangParser::ArrowStar, i);
}

size_t CtcLangParser::PointerMemberExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RulePointerMemberExpression;
}

std::any CtcLangParser::PointerMemberExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPointerMemberExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PointerMemberExpressionContext *CtcLangParser::pointerMemberExpression()
{
    PointerMemberExpressionContext *_localctx =
        _tracker.createInstance<PointerMemberExpressionContext>(_ctx, getState());
    enterRule(_localctx, 60, CtcLangParser::RulePointerMemberExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(730);
        castExpression();
        setState(735);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::ArrowStar

               || _la == CtcLangParser::DotStar)
        {
            setState(731);
            _la = _input->LA(1);
            if (!(_la == CtcLangParser::ArrowStar

                  || _la == CtcLangParser::DotStar))
            {
                _errHandler->recoverInline(this);
            }
            else
            {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(732);
            castExpression();
            setState(737);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MultiplicativeExpressionContext
//------------------------------------------------------------------

CtcLangParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::PointerMemberExpressionContext *> CtcLangParser::
    MultiplicativeExpressionContext::pointerMemberExpression()
{
    return getRuleContexts<CtcLangParser::PointerMemberExpressionContext>();
}

CtcLangParser::PointerMemberExpressionContext *CtcLangParser::MultiplicativeExpressionContext::
    pointerMemberExpression(size_t i)
{
    return getRuleContext<CtcLangParser::PointerMemberExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MultiplicativeExpressionContext::Star()
{
    return getTokens(CtcLangParser::Star);
}

tree::TerminalNode *CtcLangParser::MultiplicativeExpressionContext::Star(size_t i)
{
    return getToken(CtcLangParser::Star, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MultiplicativeExpressionContext::Div()
{
    return getTokens(CtcLangParser::Div);
}

tree::TerminalNode *CtcLangParser::MultiplicativeExpressionContext::Div(size_t i)
{
    return getToken(CtcLangParser::Div, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MultiplicativeExpressionContext::Mod()
{
    return getTokens(CtcLangParser::Mod);
}

tree::TerminalNode *CtcLangParser::MultiplicativeExpressionContext::Mod(size_t i)
{
    return getToken(CtcLangParser::Mod, i);
}

size_t CtcLangParser::MultiplicativeExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleMultiplicativeExpression;
}

std::any CtcLangParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMultiplicativeExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MultiplicativeExpressionContext *CtcLangParser::multiplicativeExpression()
{
    MultiplicativeExpressionContext *_localctx =
        _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
    enterRule(_localctx, 62, CtcLangParser::RuleMultiplicativeExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(738);
        pointerMemberExpression();
        setState(743);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 93) & ~0x3fULL) == 0) && ((1ULL << (_la - 93)) & 7) != 0))
        {
            setState(739);
            _la = _input->LA(1);
            if (!(((((_la - 93) & ~0x3fULL) == 0) && ((1ULL << (_la - 93)) & 7) != 0)))
            {
                _errHandler->recoverInline(this);
            }
            else
            {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(740);
            pointerMemberExpression();
            setState(745);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AdditiveExpressionContext
//------------------------------------------------------------------

CtcLangParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::MultiplicativeExpressionContext *> CtcLangParser::
    AdditiveExpressionContext::multiplicativeExpression()
{
    return getRuleContexts<CtcLangParser::MultiplicativeExpressionContext>();
}

CtcLangParser::MultiplicativeExpressionContext *CtcLangParser::AdditiveExpressionContext::
    multiplicativeExpression(size_t i)
{
    return getRuleContext<CtcLangParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::AdditiveExpressionContext::Plus()
{
    return getTokens(CtcLangParser::Plus);
}

tree::TerminalNode *CtcLangParser::AdditiveExpressionContext::Plus(size_t i)
{
    return getToken(CtcLangParser::Plus, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::AdditiveExpressionContext::Minus()
{
    return getTokens(CtcLangParser::Minus);
}

tree::TerminalNode *CtcLangParser::AdditiveExpressionContext::Minus(size_t i)
{
    return getToken(CtcLangParser::Minus, i);
}

size_t CtcLangParser::AdditiveExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleAdditiveExpression;
}

std::any CtcLangParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAdditiveExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AdditiveExpressionContext *CtcLangParser::additiveExpression()
{
    AdditiveExpressionContext *_localctx =
        _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
    enterRule(_localctx, 64, CtcLangParser::RuleAdditiveExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(746);
        multiplicativeExpression();
        setState(751);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Plus

               || _la == CtcLangParser::Minus)
        {
            setState(747);
            _la = _input->LA(1);
            if (!(_la == CtcLangParser::Plus

                  || _la == CtcLangParser::Minus))
            {
                _errHandler->recoverInline(this);
            }
            else
            {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(748);
            multiplicativeExpression();
            setState(753);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ShiftExpressionContext
//------------------------------------------------------------------

CtcLangParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::AdditiveExpressionContext *> CtcLangParser::ShiftExpressionContext::
    additiveExpression()
{
    return getRuleContexts<CtcLangParser::AdditiveExpressionContext>();
}

CtcLangParser::AdditiveExpressionContext *CtcLangParser::ShiftExpressionContext::additiveExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::AdditiveExpressionContext>(i);
}

std::vector<CtcLangParser::ShiftOperatorContext *> CtcLangParser::ShiftExpressionContext::
    shiftOperator()
{
    return getRuleContexts<CtcLangParser::ShiftOperatorContext>();
}

CtcLangParser::ShiftOperatorContext *CtcLangParser::ShiftExpressionContext::shiftOperator(size_t i)
{
    return getRuleContext<CtcLangParser::ShiftOperatorContext>(i);
}

size_t CtcLangParser::ShiftExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleShiftExpression;
}

std::any CtcLangParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitShiftExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ShiftExpressionContext *CtcLangParser::shiftExpression()
{
    ShiftExpressionContext *_localctx =
        _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
    enterRule(_localctx, 66, CtcLangParser::RuleShiftExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(754);
        additiveExpression();
        setState(760);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(755);
                shiftOperator();
                setState(756);
                additiveExpression();
            }
            setState(762);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ShiftOperatorContext
//------------------------------------------------------------------

CtcLangParser::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CtcLangParser::ShiftOperatorContext::Greater()
{
    return getTokens(CtcLangParser::Greater);
}

tree::TerminalNode *CtcLangParser::ShiftOperatorContext::Greater(size_t i)
{
    return getToken(CtcLangParser::Greater, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::ShiftOperatorContext::Less()
{
    return getTokens(CtcLangParser::Less);
}

tree::TerminalNode *CtcLangParser::ShiftOperatorContext::Less(size_t i)
{
    return getToken(CtcLangParser::Less, i);
}

size_t CtcLangParser::ShiftOperatorContext::getRuleIndex() const
{
    return CtcLangParser::RuleShiftOperator;
}

std::any CtcLangParser::ShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitShiftOperator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ShiftOperatorContext *CtcLangParser::shiftOperator()
{
    ShiftOperatorContext *_localctx =
        _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
    enterRule(_localctx, 68, CtcLangParser::RuleShiftOperator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(767);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Greater: {
                enterOuterAlt(_localctx, 1);
                setState(763);
                match(CtcLangParser::Greater);
                setState(764);
                match(CtcLangParser::Greater);
                break;
            }

            case CtcLangParser::Less: {
                enterOuterAlt(_localctx, 2);
                setState(765);
                match(CtcLangParser::Less);
                setState(766);
                match(CtcLangParser::Less);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RelationalExpressionContext
//------------------------------------------------------------------

CtcLangParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::ShiftExpressionContext *> CtcLangParser::RelationalExpressionContext::
    shiftExpression()
{
    return getRuleContexts<CtcLangParser::ShiftExpressionContext>();
}

CtcLangParser::ShiftExpressionContext *CtcLangParser::RelationalExpressionContext::shiftExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::RelationalExpressionContext::Less()
{
    return getTokens(CtcLangParser::Less);
}

tree::TerminalNode *CtcLangParser::RelationalExpressionContext::Less(size_t i)
{
    return getToken(CtcLangParser::Less, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::RelationalExpressionContext::Greater()
{
    return getTokens(CtcLangParser::Greater);
}

tree::TerminalNode *CtcLangParser::RelationalExpressionContext::Greater(size_t i)
{
    return getToken(CtcLangParser::Greater, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::RelationalExpressionContext::LessEqual()
{
    return getTokens(CtcLangParser::LessEqual);
}

tree::TerminalNode *CtcLangParser::RelationalExpressionContext::LessEqual(size_t i)
{
    return getToken(CtcLangParser::LessEqual, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::RelationalExpressionContext::GreaterEqual()
{
    return getTokens(CtcLangParser::GreaterEqual);
}

tree::TerminalNode *CtcLangParser::RelationalExpressionContext::GreaterEqual(size_t i)
{
    return getToken(CtcLangParser::GreaterEqual, i);
}

size_t CtcLangParser::RelationalExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleRelationalExpression;
}

std::any CtcLangParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRelationalExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RelationalExpressionContext *CtcLangParser::relationalExpression()
{
    RelationalExpressionContext *_localctx =
        _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
    enterRule(_localctx, 70, CtcLangParser::RuleRelationalExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(769);
        shiftExpression();
        setState(774);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(770);
                _la = _input->LA(1);
                if (!(((((_la - 102) & ~0x3fULL) == 0) && ((1ULL << (_la - 102)) & 49155) != 0)))
                {
                    _errHandler->recoverInline(this);
                }
                else
                {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(771);
                shiftExpression();
            }
            setState(776);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EqualityExpressionContext
//------------------------------------------------------------------

CtcLangParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::RelationalExpressionContext *> CtcLangParser::EqualityExpressionContext::
    relationalExpression()
{
    return getRuleContexts<CtcLangParser::RelationalExpressionContext>();
}

CtcLangParser::RelationalExpressionContext *CtcLangParser::EqualityExpressionContext::
    relationalExpression(size_t i)
{
    return getRuleContext<CtcLangParser::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::EqualityExpressionContext::Equal()
{
    return getTokens(CtcLangParser::Equal);
}

tree::TerminalNode *CtcLangParser::EqualityExpressionContext::Equal(size_t i)
{
    return getToken(CtcLangParser::Equal, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::EqualityExpressionContext::NotEqual()
{
    return getTokens(CtcLangParser::NotEqual);
}

tree::TerminalNode *CtcLangParser::EqualityExpressionContext::NotEqual(size_t i)
{
    return getToken(CtcLangParser::NotEqual, i);
}

size_t CtcLangParser::EqualityExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleEqualityExpression;
}

std::any CtcLangParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEqualityExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EqualityExpressionContext *CtcLangParser::equalityExpression()
{
    EqualityExpressionContext *_localctx =
        _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
    enterRule(_localctx, 72, CtcLangParser::RuleEqualityExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(777);
        relationalExpression();
        setState(782);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Equal

               || _la == CtcLangParser::NotEqual)
        {
            setState(778);
            _la = _input->LA(1);
            if (!(_la == CtcLangParser::Equal

                  || _la == CtcLangParser::NotEqual))
            {
                _errHandler->recoverInline(this);
            }
            else
            {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(779);
            relationalExpression();
            setState(784);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AndExpressionContext
//------------------------------------------------------------------

CtcLangParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::EqualityExpressionContext *> CtcLangParser::AndExpressionContext::
    equalityExpression()
{
    return getRuleContexts<CtcLangParser::EqualityExpressionContext>();
}

CtcLangParser::EqualityExpressionContext *CtcLangParser::AndExpressionContext::equalityExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::AndExpressionContext::And()
{
    return getTokens(CtcLangParser::And);
}

tree::TerminalNode *CtcLangParser::AndExpressionContext::And(size_t i)
{
    return getToken(CtcLangParser::And, i);
}

size_t CtcLangParser::AndExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleAndExpression;
}

std::any CtcLangParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAndExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AndExpressionContext *CtcLangParser::andExpression()
{
    AndExpressionContext *_localctx =
        _tracker.createInstance<AndExpressionContext>(_ctx, getState());
    enterRule(_localctx, 74, CtcLangParser::RuleAndExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(785);
        equalityExpression();
        setState(790);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::And)
        {
            setState(786);
            match(CtcLangParser::And);
            setState(787);
            equalityExpression();
            setState(792);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExclusiveOrExpressionContext
//------------------------------------------------------------------

CtcLangParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::AndExpressionContext *> CtcLangParser::ExclusiveOrExpressionContext::
    andExpression()
{
    return getRuleContexts<CtcLangParser::AndExpressionContext>();
}

CtcLangParser::AndExpressionContext *CtcLangParser::ExclusiveOrExpressionContext::andExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::ExclusiveOrExpressionContext::Caret()
{
    return getTokens(CtcLangParser::Caret);
}

tree::TerminalNode *CtcLangParser::ExclusiveOrExpressionContext::Caret(size_t i)
{
    return getToken(CtcLangParser::Caret, i);
}

size_t CtcLangParser::ExclusiveOrExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleExclusiveOrExpression;
}

std::any CtcLangParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExclusiveOrExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExclusiveOrExpressionContext *CtcLangParser::exclusiveOrExpression()
{
    ExclusiveOrExpressionContext *_localctx =
        _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
    enterRule(_localctx, 76, CtcLangParser::RuleExclusiveOrExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(793);
        andExpression();
        setState(798);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Caret)
        {
            setState(794);
            match(CtcLangParser::Caret);
            setState(795);
            andExpression();
            setState(800);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InclusiveOrExpressionContext
//------------------------------------------------------------------

CtcLangParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::ExclusiveOrExpressionContext *> CtcLangParser::
    InclusiveOrExpressionContext::exclusiveOrExpression()
{
    return getRuleContexts<CtcLangParser::ExclusiveOrExpressionContext>();
}

CtcLangParser::ExclusiveOrExpressionContext *CtcLangParser::InclusiveOrExpressionContext::
    exclusiveOrExpression(size_t i)
{
    return getRuleContext<CtcLangParser::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::InclusiveOrExpressionContext::Or()
{
    return getTokens(CtcLangParser::Or);
}

tree::TerminalNode *CtcLangParser::InclusiveOrExpressionContext::Or(size_t i)
{
    return getToken(CtcLangParser::Or, i);
}

size_t CtcLangParser::InclusiveOrExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleInclusiveOrExpression;
}

std::any CtcLangParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInclusiveOrExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InclusiveOrExpressionContext *CtcLangParser::inclusiveOrExpression()
{
    InclusiveOrExpressionContext *_localctx =
        _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
    enterRule(_localctx, 78, CtcLangParser::RuleInclusiveOrExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(801);
        exclusiveOrExpression();
        setState(806);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Or)
        {
            setState(802);
            match(CtcLangParser::Or);
            setState(803);
            exclusiveOrExpression();
            setState(808);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LogicalAndExpressionContext
//------------------------------------------------------------------

CtcLangParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::InclusiveOrExpressionContext *> CtcLangParser::
    LogicalAndExpressionContext::inclusiveOrExpression()
{
    return getRuleContexts<CtcLangParser::InclusiveOrExpressionContext>();
}

CtcLangParser::InclusiveOrExpressionContext *CtcLangParser::LogicalAndExpressionContext::
    inclusiveOrExpression(size_t i)
{
    return getRuleContext<CtcLangParser::InclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::LogicalAndExpressionContext::AndAnd()
{
    return getTokens(CtcLangParser::AndAnd);
}

tree::TerminalNode *CtcLangParser::LogicalAndExpressionContext::AndAnd(size_t i)
{
    return getToken(CtcLangParser::AndAnd, i);
}

size_t CtcLangParser::LogicalAndExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleLogicalAndExpression;
}

std::any CtcLangParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLogicalAndExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LogicalAndExpressionContext *CtcLangParser::logicalAndExpression()
{
    LogicalAndExpressionContext *_localctx =
        _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
    enterRule(_localctx, 80, CtcLangParser::RuleLogicalAndExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(809);
        inclusiveOrExpression();
        setState(814);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::AndAnd)
        {
            setState(810);
            match(CtcLangParser::AndAnd);
            setState(811);
            inclusiveOrExpression();
            setState(816);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LogicalOrExpressionContext
//------------------------------------------------------------------

CtcLangParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::LogicalAndExpressionContext *> CtcLangParser::
    LogicalOrExpressionContext::logicalAndExpression()
{
    return getRuleContexts<CtcLangParser::LogicalAndExpressionContext>();
}

CtcLangParser::LogicalAndExpressionContext *CtcLangParser::LogicalOrExpressionContext::
    logicalAndExpression(size_t i)
{
    return getRuleContext<CtcLangParser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::LogicalOrExpressionContext::OrOr()
{
    return getTokens(CtcLangParser::OrOr);
}

tree::TerminalNode *CtcLangParser::LogicalOrExpressionContext::OrOr(size_t i)
{
    return getToken(CtcLangParser::OrOr, i);
}

size_t CtcLangParser::LogicalOrExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleLogicalOrExpression;
}

std::any CtcLangParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLogicalOrExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LogicalOrExpressionContext *CtcLangParser::logicalOrExpression()
{
    LogicalOrExpressionContext *_localctx =
        _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
    enterRule(_localctx, 82, CtcLangParser::RuleLogicalOrExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(817);
        logicalAndExpression();
        setState(822);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::OrOr)
        {
            setState(818);
            match(CtcLangParser::OrOr);
            setState(819);
            logicalAndExpression();
            setState(824);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConditionalExpressionContext
//------------------------------------------------------------------

CtcLangParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::LogicalOrExpressionContext *CtcLangParser::ConditionalExpressionContext::
    logicalOrExpression()
{
    return getRuleContext<CtcLangParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::ConditionalExpressionContext::Question()
{
    return getToken(CtcLangParser::Question, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::ConditionalExpressionContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::ConditionalExpressionContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::AssignmentExpressionContext *CtcLangParser::ConditionalExpressionContext::
    assignmentExpression()
{
    return getRuleContext<CtcLangParser::AssignmentExpressionContext>(0);
}

size_t CtcLangParser::ConditionalExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleConditionalExpression;
}

std::any CtcLangParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConditionalExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConditionalExpressionContext *CtcLangParser::conditionalExpression()
{
    ConditionalExpressionContext *_localctx =
        _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
    enterRule(_localctx, 84, CtcLangParser::RuleConditionalExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(825);
        logicalOrExpression();
        setState(831);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Question)
        {
            setState(826);
            match(CtcLangParser::Question);
            setState(827);
            expression();
            setState(828);
            match(CtcLangParser::Colon);
            setState(829);
            assignmentExpression();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AssignmentExpressionContext
//------------------------------------------------------------------

CtcLangParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ConditionalExpressionContext *CtcLangParser::AssignmentExpressionContext::
    conditionalExpression()
{
    return getRuleContext<CtcLangParser::ConditionalExpressionContext>(0);
}

CtcLangParser::LogicalOrExpressionContext *CtcLangParser::AssignmentExpressionContext::
    logicalOrExpression()
{
    return getRuleContext<CtcLangParser::LogicalOrExpressionContext>(0);
}

CtcLangParser::AssignmentOperatorContext *CtcLangParser::AssignmentExpressionContext::
    assignmentOperator()
{
    return getRuleContext<CtcLangParser::AssignmentOperatorContext>(0);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::AssignmentExpressionContext::
    initializerClause()
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(0);
}

CtcLangParser::ThrowExpressionContext *CtcLangParser::AssignmentExpressionContext::throwExpression()
{
    return getRuleContext<CtcLangParser::ThrowExpressionContext>(0);
}

size_t CtcLangParser::AssignmentExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleAssignmentExpression;
}

std::any CtcLangParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAssignmentExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AssignmentExpressionContext *CtcLangParser::assignmentExpression()
{
    AssignmentExpressionContext *_localctx =
        _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
    enterRule(_localctx, 86, CtcLangParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(839);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(833);
                conditionalExpression();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(834);
                logicalOrExpression();
                setState(835);
                assignmentOperator();
                setState(836);
                initializerClause();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(838);
                throwExpression();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AssignmentOperatorContext
//------------------------------------------------------------------

CtcLangParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::StarAssign()
{
    return getToken(CtcLangParser::StarAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::DivAssign()
{
    return getToken(CtcLangParser::DivAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::ModAssign()
{
    return getToken(CtcLangParser::ModAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::PlusAssign()
{
    return getToken(CtcLangParser::PlusAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::MinusAssign()
{
    return getToken(CtcLangParser::MinusAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::RightShiftAssign()
{
    return getToken(CtcLangParser::RightShiftAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::LeftShiftAssign()
{
    return getToken(CtcLangParser::LeftShiftAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::AndAssign()
{
    return getToken(CtcLangParser::AndAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::XorAssign()
{
    return getToken(CtcLangParser::XorAssign, 0);
}

tree::TerminalNode *CtcLangParser::AssignmentOperatorContext::OrAssign()
{
    return getToken(CtcLangParser::OrAssign, 0);
}

size_t CtcLangParser::AssignmentOperatorContext::getRuleIndex() const
{
    return CtcLangParser::RuleAssignmentOperator;
}

std::any CtcLangParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAssignmentOperator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AssignmentOperatorContext *CtcLangParser::assignmentOperator()
{
    AssignmentOperatorContext *_localctx =
        _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
    enterRule(_localctx, 88, CtcLangParser::RuleAssignmentOperator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(841);
        _la = _input->LA(1);
        if (!(((((_la - 101) & ~0x3fULL) == 0) && ((1ULL << (_la - 101)) & 8185) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionContext
//------------------------------------------------------------------

CtcLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::AssignmentExpressionContext *> CtcLangParser::ExpressionContext::
    assignmentExpression()
{
    return getRuleContexts<CtcLangParser::AssignmentExpressionContext>();
}

CtcLangParser::AssignmentExpressionContext *CtcLangParser::ExpressionContext::assignmentExpression(
    size_t i)
{
    return getRuleContext<CtcLangParser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::ExpressionContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::ExpressionContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::ExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleExpression;
}

std::any CtcLangParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExpressionContext *CtcLangParser::expression()
{
    ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
    enterRule(_localctx, 90, CtcLangParser::RuleExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(843);
        assignmentExpression();
        setState(848);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(844);
            match(CtcLangParser::Comma);
            setState(845);
            assignmentExpression();
            setState(850);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConstantExpressionContext
//------------------------------------------------------------------

CtcLangParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ConditionalExpressionContext *CtcLangParser::ConstantExpressionContext::
    conditionalExpression()
{
    return getRuleContext<CtcLangParser::ConditionalExpressionContext>(0);
}

size_t CtcLangParser::ConstantExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleConstantExpression;
}

std::any CtcLangParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConstantExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::constantExpression()
{
    ConstantExpressionContext *_localctx =
        _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
    enterRule(_localctx, 92, CtcLangParser::RuleConstantExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(851);
        conditionalExpression();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- StatementContext
//------------------------------------------------------------------

CtcLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::LabeledStatementContext *CtcLangParser::StatementContext::labeledStatement()
{
    return getRuleContext<CtcLangParser::LabeledStatementContext>(0);
}

CtcLangParser::DeclarationStatementContext *CtcLangParser::StatementContext::declarationStatement()
{
    return getRuleContext<CtcLangParser::DeclarationStatementContext>(0);
}

CtcLangParser::ExpressionStatementContext *CtcLangParser::StatementContext::expressionStatement()
{
    return getRuleContext<CtcLangParser::ExpressionStatementContext>(0);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::StatementContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

CtcLangParser::SelectionStatementContext *CtcLangParser::StatementContext::selectionStatement()
{
    return getRuleContext<CtcLangParser::SelectionStatementContext>(0);
}

CtcLangParser::IterationStatementContext *CtcLangParser::StatementContext::iterationStatement()
{
    return getRuleContext<CtcLangParser::IterationStatementContext>(0);
}

CtcLangParser::JumpStatementContext *CtcLangParser::StatementContext::jumpStatement()
{
    return getRuleContext<CtcLangParser::JumpStatementContext>(0);
}

CtcLangParser::TryBlockContext *CtcLangParser::StatementContext::tryBlock()
{
    return getRuleContext<CtcLangParser::TryBlockContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::StatementContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::StatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleStatement;
}

std::any CtcLangParser::StatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::StatementContext *CtcLangParser::statement()
{
    StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
    enterRule(_localctx, 94, CtcLangParser::RuleStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(866);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(853);
                labeledStatement();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(854);
                declarationStatement();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(856);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx))
                {
                    case 1: {
                        setState(855);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(864);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::IntegerLiteral:
                    case CtcLangParser::CharacterLiteral:
                    case CtcLangParser::FloatingLiteral:
                    case CtcLangParser::StringLiteral:
                    case CtcLangParser::BooleanLiteral:
                    case CtcLangParser::PointerLiteral:
                    case CtcLangParser::UserDefinedLiteral:
                    case CtcLangParser::Alignof:
                    case CtcLangParser::Auto:
                    case CtcLangParser::Bool:
                    case CtcLangParser::Char:
                    case CtcLangParser::Char16:
                    case CtcLangParser::Char32:
                    case CtcLangParser::Const_cast:
                    case CtcLangParser::Bit_cast:
                    case CtcLangParser::Decltype:
                    case CtcLangParser::Delete:
                    case CtcLangParser::Double:
                    case CtcLangParser::Dynamic_cast:
                    case CtcLangParser::Float:
                    case CtcLangParser::Int:
                    case CtcLangParser::Long:
                    case CtcLangParser::New:
                    case CtcLangParser::Noexcept:
                    case CtcLangParser::Operator:
                    case CtcLangParser::Reinterpret_cast:
                    case CtcLangParser::Short:
                    case CtcLangParser::Signed:
                    case CtcLangParser::Sizeof:
                    case CtcLangParser::Static_cast:
                    case CtcLangParser::This:
                    case CtcLangParser::Throw:
                    case CtcLangParser::Typeid_:
                    case CtcLangParser::Typename_:
                    case CtcLangParser::Unsigned:
                    case CtcLangParser::Void:
                    case CtcLangParser::Wchar:
                    case CtcLangParser::LeftParen:
                    case CtcLangParser::LeftBracket:
                    case CtcLangParser::Plus:
                    case CtcLangParser::Minus:
                    case CtcLangParser::Star:
                    case CtcLangParser::And:
                    case CtcLangParser::Or:
                    case CtcLangParser::Tilde:
                    case CtcLangParser::Not:
                    case CtcLangParser::PlusPlus:
                    case CtcLangParser::MinusMinus:
                    case CtcLangParser::Doublecolon:
                    case CtcLangParser::Semi:
                    case CtcLangParser::Identifier: {
                        setState(858);
                        expressionStatement();
                        break;
                    }

                    case CtcLangParser::LeftBrace: {
                        setState(859);
                        compoundStatement();
                        break;
                    }

                    case CtcLangParser::If:
                    case CtcLangParser::Switch: {
                        setState(860);
                        selectionStatement();
                        break;
                    }

                    case CtcLangParser::Do:
                    case CtcLangParser::For:
                    case CtcLangParser::While: {
                        setState(861);
                        iterationStatement();
                        break;
                    }

                    case CtcLangParser::Break:
                    case CtcLangParser::Continue:
                    case CtcLangParser::Goto:
                    case CtcLangParser::Return: {
                        setState(862);
                        jumpStatement();
                        break;
                    }

                    case CtcLangParser::Try: {
                        setState(863);
                        tryBlock();
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LabeledStatementContext
//------------------------------------------------------------------

CtcLangParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LabeledStatementContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::StatementContext *CtcLangParser::LabeledStatementContext::statement()
{
    return getRuleContext<CtcLangParser::StatementContext>(0);
}

tree::TerminalNode *CtcLangParser::LabeledStatementContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::LabeledStatementContext::Case()
{
    return getToken(CtcLangParser::Case, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::LabeledStatementContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::LabeledStatementContext::Default()
{
    return getToken(CtcLangParser::Default, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::LabeledStatementContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::LabeledStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleLabeledStatement;
}

std::any CtcLangParser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLabeledStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LabeledStatementContext *CtcLangParser::labeledStatement()
{
    LabeledStatementContext *_localctx =
        _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
    enterRule(_localctx, 96, CtcLangParser::RuleLabeledStatement);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(869);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(868);
            attributeSpecifierSeq();
        }
        setState(875);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Identifier: {
                setState(871);
                match(CtcLangParser::Identifier);
                break;
            }

            case CtcLangParser::Case: {
                setState(872);
                match(CtcLangParser::Case);
                setState(873);
                constantExpression();
                break;
            }

            case CtcLangParser::Default: {
                setState(874);
                match(CtcLangParser::Default);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
        setState(877);
        match(CtcLangParser::Colon);
        setState(878);
        statement();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionStatementContext
//------------------------------------------------------------------

CtcLangParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ExpressionStatementContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::ExpressionStatementContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

size_t CtcLangParser::ExpressionStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleExpressionStatement;
}

std::any CtcLangParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExpressionStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExpressionStatementContext *CtcLangParser::expressionStatement()
{
    ExpressionStatementContext *_localctx =
        _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
    enterRule(_localctx, 98, CtcLangParser::RuleExpressionStatement);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(881);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
            ((((_la - 66) & ~0x3fULL) == 0) && ((1ULL << (_la - 66)) & 2359886237192068257) != 0) ||
            _la == CtcLangParser::Identifier)
        {
            setState(880);
            expression();
        }
        setState(883);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CompoundStatementContext
//------------------------------------------------------------------

CtcLangParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::CompoundStatementContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::CompoundStatementContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

CtcLangParser::StatementSeqContext *CtcLangParser::CompoundStatementContext::statementSeq()
{
    return getRuleContext<CtcLangParser::StatementSeqContext>(0);
}

size_t CtcLangParser::CompoundStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleCompoundStatement;
}

std::any CtcLangParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCompoundStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::compoundStatement()
{
    CompoundStatementContext *_localctx =
        _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
    enterRule(_localctx, 100, CtcLangParser::RuleCompoundStatement);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(885);
        match(CtcLangParser::LeftBrace);
        setState(887);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -4504304002269954) != 0) ||
            ((((_la - 64) & ~0x3fULL) == 0) &&
             ((1ULL << (_la - 64)) & -8989184726396830785) != 0) ||
            ((((_la - 128) & ~0x3fULL) == 0) && ((1ULL << (_la - 128)) & 25) != 0))
        {
            setState(886);
            statementSeq();
        }
        setState(889);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- StatementSeqContext
//------------------------------------------------------------------

CtcLangParser::StatementSeqContext::StatementSeqContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::StatementContext *> CtcLangParser::StatementSeqContext::statement()
{
    return getRuleContexts<CtcLangParser::StatementContext>();
}

CtcLangParser::StatementContext *CtcLangParser::StatementSeqContext::statement(size_t i)
{
    return getRuleContext<CtcLangParser::StatementContext>(i);
}

size_t CtcLangParser::StatementSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleStatementSeq;
}

std::any CtcLangParser::StatementSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitStatementSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::StatementSeqContext *CtcLangParser::statementSeq()
{
    StatementSeqContext *_localctx = _tracker.createInstance<StatementSeqContext>(_ctx, getState());
    enterRule(_localctx, 102, CtcLangParser::RuleStatementSeq);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(892);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do
        {
            setState(891);
            statement();
            setState(894);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -4504304002269954) != 0) ||
                 ((((_la - 64) & ~0x3fULL) == 0) &&
                  ((1ULL << (_la - 64)) & -8989184726396830785) != 0) ||
                 ((((_la - 128) & ~0x3fULL) == 0) && ((1ULL << (_la - 128)) & 25) != 0));
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SelectionStatementContext
//------------------------------------------------------------------

CtcLangParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::SelectionStatementContext::If()
{
    return getToken(CtcLangParser::If, 0);
}

tree::TerminalNode *CtcLangParser::SelectionStatementContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ConditionContext *CtcLangParser::SelectionStatementContext::condition()
{
    return getRuleContext<CtcLangParser::ConditionContext>(0);
}

tree::TerminalNode *CtcLangParser::SelectionStatementContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

std::vector<CtcLangParser::StatementContext *> CtcLangParser::SelectionStatementContext::statement()
{
    return getRuleContexts<CtcLangParser::StatementContext>();
}

CtcLangParser::StatementContext *CtcLangParser::SelectionStatementContext::statement(size_t i)
{
    return getRuleContext<CtcLangParser::StatementContext>(i);
}

tree::TerminalNode *CtcLangParser::SelectionStatementContext::Else()
{
    return getToken(CtcLangParser::Else, 0);
}

tree::TerminalNode *CtcLangParser::SelectionStatementContext::Switch()
{
    return getToken(CtcLangParser::Switch, 0);
}

size_t CtcLangParser::SelectionStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleSelectionStatement;
}

std::any CtcLangParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSelectionStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SelectionStatementContext *CtcLangParser::selectionStatement()
{
    SelectionStatementContext *_localctx =
        _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
    enterRule(_localctx, 104, CtcLangParser::RuleSelectionStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(911);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::If: {
                enterOuterAlt(_localctx, 1);
                setState(896);
                match(CtcLangParser::If);
                setState(897);
                match(CtcLangParser::LeftParen);
                setState(898);
                condition();
                setState(899);
                match(CtcLangParser::RightParen);
                setState(900);
                statement();
                setState(903);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx))
                {
                    case 1: {
                        setState(901);
                        match(CtcLangParser::Else);
                        setState(902);
                        statement();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::Switch: {
                enterOuterAlt(_localctx, 2);
                setState(905);
                match(CtcLangParser::Switch);
                setState(906);
                match(CtcLangParser::LeftParen);
                setState(907);
                condition();
                setState(908);
                match(CtcLangParser::RightParen);
                setState(909);
                statement();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConditionContext
//------------------------------------------------------------------

CtcLangParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ExpressionContext *CtcLangParser::ConditionContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::ConditionContext::declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::DeclaratorContext *CtcLangParser::ConditionContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

tree::TerminalNode *CtcLangParser::ConditionContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::ConditionContext::initializerClause()
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::ConditionContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ConditionContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::ConditionContext::getRuleIndex() const
{
    return CtcLangParser::RuleCondition;
}

std::any CtcLangParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCondition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConditionContext *CtcLangParser::condition()
{
    ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
    enterRule(_localctx, 106, CtcLangParser::RuleCondition);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(924);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(913);
                expression();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(915);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
                {
                    setState(914);
                    attributeSpecifierSeq();
                }
                setState(917);
                declSpecifierSeq();
                setState(918);
                declarator();
                setState(922);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::Assign: {
                        setState(919);
                        match(CtcLangParser::Assign);
                        setState(920);
                        initializerClause();
                        break;
                    }

                    case CtcLangParser::LeftBrace: {
                        setState(921);
                        bracedInitList();
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- IterationStatementContext
//------------------------------------------------------------------

CtcLangParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::While()
{
    return getToken(CtcLangParser::While, 0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ConditionContext *CtcLangParser::IterationStatementContext::condition()
{
    return getRuleContext<CtcLangParser::ConditionContext>(0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::StatementContext *CtcLangParser::IterationStatementContext::statement()
{
    return getRuleContext<CtcLangParser::StatementContext>(0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::Do()
{
    return getToken(CtcLangParser::Do, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::IterationStatementContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::For()
{
    return getToken(CtcLangParser::For, 0);
}

CtcLangParser::ForInitStatementContext *CtcLangParser::IterationStatementContext::forInitStatement()
{
    return getRuleContext<CtcLangParser::ForInitStatementContext>(0);
}

CtcLangParser::ForRangeDeclarationContext *CtcLangParser::IterationStatementContext::
    forRangeDeclaration()
{
    return getRuleContext<CtcLangParser::ForRangeDeclarationContext>(0);
}

tree::TerminalNode *CtcLangParser::IterationStatementContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::ForRangeInitializerContext *CtcLangParser::IterationStatementContext::
    forRangeInitializer()
{
    return getRuleContext<CtcLangParser::ForRangeInitializerContext>(0);
}

size_t CtcLangParser::IterationStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleIterationStatement;
}

std::any CtcLangParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitIterationStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::IterationStatementContext *CtcLangParser::iterationStatement()
{
    IterationStatementContext *_localctx =
        _tracker.createInstance<IterationStatementContext>(_ctx, getState());
    enterRule(_localctx, 108, CtcLangParser::RuleIterationStatement);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(959);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::While: {
                enterOuterAlt(_localctx, 1);
                setState(926);
                match(CtcLangParser::While);
                setState(927);
                match(CtcLangParser::LeftParen);
                setState(928);
                condition();
                setState(929);
                match(CtcLangParser::RightParen);
                setState(930);
                statement();
                break;
            }

            case CtcLangParser::Do: {
                enterOuterAlt(_localctx, 2);
                setState(932);
                match(CtcLangParser::Do);
                setState(933);
                statement();
                setState(934);
                match(CtcLangParser::While);
                setState(935);
                match(CtcLangParser::LeftParen);
                setState(936);
                expression();
                setState(937);
                match(CtcLangParser::RightParen);
                setState(938);
                match(CtcLangParser::Semi);
                break;
            }

            case CtcLangParser::For: {
                enterOuterAlt(_localctx, 3);
                setState(940);
                match(CtcLangParser::For);
                setState(941);
                match(CtcLangParser::LeftParen);
                setState(954);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx))
                {
                    case 1: {
                        setState(942);
                        forInitStatement();
                        setState(944);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1158019547706897154) != 0) ||
                            ((((_la - 64) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 64)) & -9007199124940950627) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(943);
                            condition();
                        }
                        setState(946);
                        match(CtcLangParser::Semi);
                        setState(948);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237192068257) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(947);
                            expression();
                        }
                        break;
                    }

                    case 2: {
                        setState(950);
                        forRangeDeclaration();
                        setState(951);
                        match(CtcLangParser::Colon);
                        setState(952);
                        forRangeInitializer();
                        break;
                    }

                    default:
                        break;
                }
                setState(956);
                match(CtcLangParser::RightParen);
                setState(957);
                statement();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ForInitStatementContext
//------------------------------------------------------------------

CtcLangParser::ForInitStatementContext::ForInitStatementContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ExpressionStatementContext *CtcLangParser::ForInitStatementContext::
    expressionStatement()
{
    return getRuleContext<CtcLangParser::ExpressionStatementContext>(0);
}

CtcLangParser::SimpleDeclarationContext *CtcLangParser::ForInitStatementContext::simpleDeclaration()
{
    return getRuleContext<CtcLangParser::SimpleDeclarationContext>(0);
}

size_t CtcLangParser::ForInitStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleForInitStatement;
}

std::any CtcLangParser::ForInitStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitForInitStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ForInitStatementContext *CtcLangParser::forInitStatement()
{
    ForInitStatementContext *_localctx =
        _tracker.createInstance<ForInitStatementContext>(_ctx, getState());
    enterRule(_localctx, 110, CtcLangParser::RuleForInitStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(963);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(961);
                expressionStatement();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(962);
                simpleDeclaration();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ForRangeDeclarationContext
//------------------------------------------------------------------

CtcLangParser::ForRangeDeclarationContext::ForRangeDeclarationContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::ForRangeDeclarationContext::
    declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::DeclaratorContext *CtcLangParser::ForRangeDeclarationContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ForRangeDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::ForRangeDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleForRangeDeclaration;
}

std::any CtcLangParser::ForRangeDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitForRangeDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ForRangeDeclarationContext *CtcLangParser::forRangeDeclaration()
{
    ForRangeDeclarationContext *_localctx =
        _tracker.createInstance<ForRangeDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 112, CtcLangParser::RuleForRangeDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(966);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(965);
            attributeSpecifierSeq();
        }
        setState(968);
        declSpecifierSeq();
        setState(969);
        declarator();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ForRangeInitializerContext
//------------------------------------------------------------------

CtcLangParser::ForRangeInitializerContext::ForRangeInitializerContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ExpressionContext *CtcLangParser::ForRangeInitializerContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::ForRangeInitializerContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

size_t CtcLangParser::ForRangeInitializerContext::getRuleIndex() const
{
    return CtcLangParser::RuleForRangeInitializer;
}

std::any CtcLangParser::ForRangeInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitForRangeInitializer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ForRangeInitializerContext *CtcLangParser::forRangeInitializer()
{
    ForRangeInitializerContext *_localctx =
        _tracker.createInstance<ForRangeInitializerContext>(_ctx, getState());
    enterRule(_localctx, 114, CtcLangParser::RuleForRangeInitializer);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(973);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::IntegerLiteral:
            case CtcLangParser::CharacterLiteral:
            case CtcLangParser::FloatingLiteral:
            case CtcLangParser::StringLiteral:
            case CtcLangParser::BooleanLiteral:
            case CtcLangParser::PointerLiteral:
            case CtcLangParser::UserDefinedLiteral:
            case CtcLangParser::Alignof:
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Const_cast:
            case CtcLangParser::Bit_cast:
            case CtcLangParser::Decltype:
            case CtcLangParser::Delete:
            case CtcLangParser::Double:
            case CtcLangParser::Dynamic_cast:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::New:
            case CtcLangParser::Noexcept:
            case CtcLangParser::Operator:
            case CtcLangParser::Reinterpret_cast:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Sizeof:
            case CtcLangParser::Static_cast:
            case CtcLangParser::This:
            case CtcLangParser::Throw:
            case CtcLangParser::Typeid_:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Wchar:
            case CtcLangParser::LeftParen:
            case CtcLangParser::LeftBracket:
            case CtcLangParser::Plus:
            case CtcLangParser::Minus:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::Or:
            case CtcLangParser::Tilde:
            case CtcLangParser::Not:
            case CtcLangParser::PlusPlus:
            case CtcLangParser::MinusMinus:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(971);
                expression();
                break;
            }

            case CtcLangParser::LeftBrace: {
                enterOuterAlt(_localctx, 2);
                setState(972);
                bracedInitList();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- JumpStatementContext
//------------------------------------------------------------------

CtcLangParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Break()
{
    return getToken(CtcLangParser::Break, 0);
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Continue()
{
    return getToken(CtcLangParser::Continue, 0);
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Return()
{
    return getToken(CtcLangParser::Return, 0);
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Goto()
{
    return getToken(CtcLangParser::Goto, 0);
}

tree::TerminalNode *CtcLangParser::JumpStatementContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::JumpStatementContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::JumpStatementContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

size_t CtcLangParser::JumpStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleJumpStatement;
}

std::any CtcLangParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitJumpStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::JumpStatementContext *CtcLangParser::jumpStatement()
{
    JumpStatementContext *_localctx =
        _tracker.createInstance<JumpStatementContext>(_ctx, getState());
    enterRule(_localctx, 116, CtcLangParser::RuleJumpStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(984);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Break: {
                setState(975);
                match(CtcLangParser::Break);
                break;
            }

            case CtcLangParser::Continue: {
                setState(976);
                match(CtcLangParser::Continue);
                break;
            }

            case CtcLangParser::Return: {
                setState(977);
                match(CtcLangParser::Return);
                setState(980);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::IntegerLiteral:
                    case CtcLangParser::CharacterLiteral:
                    case CtcLangParser::FloatingLiteral:
                    case CtcLangParser::StringLiteral:
                    case CtcLangParser::BooleanLiteral:
                    case CtcLangParser::PointerLiteral:
                    case CtcLangParser::UserDefinedLiteral:
                    case CtcLangParser::Alignof:
                    case CtcLangParser::Auto:
                    case CtcLangParser::Bool:
                    case CtcLangParser::Char:
                    case CtcLangParser::Char16:
                    case CtcLangParser::Char32:
                    case CtcLangParser::Const_cast:
                    case CtcLangParser::Bit_cast:
                    case CtcLangParser::Decltype:
                    case CtcLangParser::Delete:
                    case CtcLangParser::Double:
                    case CtcLangParser::Dynamic_cast:
                    case CtcLangParser::Float:
                    case CtcLangParser::Int:
                    case CtcLangParser::Long:
                    case CtcLangParser::New:
                    case CtcLangParser::Noexcept:
                    case CtcLangParser::Operator:
                    case CtcLangParser::Reinterpret_cast:
                    case CtcLangParser::Short:
                    case CtcLangParser::Signed:
                    case CtcLangParser::Sizeof:
                    case CtcLangParser::Static_cast:
                    case CtcLangParser::This:
                    case CtcLangParser::Throw:
                    case CtcLangParser::Typeid_:
                    case CtcLangParser::Typename_:
                    case CtcLangParser::Unsigned:
                    case CtcLangParser::Void:
                    case CtcLangParser::Wchar:
                    case CtcLangParser::LeftParen:
                    case CtcLangParser::LeftBracket:
                    case CtcLangParser::Plus:
                    case CtcLangParser::Minus:
                    case CtcLangParser::Star:
                    case CtcLangParser::And:
                    case CtcLangParser::Or:
                    case CtcLangParser::Tilde:
                    case CtcLangParser::Not:
                    case CtcLangParser::PlusPlus:
                    case CtcLangParser::MinusMinus:
                    case CtcLangParser::Doublecolon:
                    case CtcLangParser::Identifier: {
                        setState(978);
                        expression();
                        break;
                    }

                    case CtcLangParser::LeftBrace: {
                        setState(979);
                        bracedInitList();
                        break;
                    }

                    case CtcLangParser::Semi: {
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::Goto: {
                setState(982);
                match(CtcLangParser::Goto);
                setState(983);
                match(CtcLangParser::Identifier);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
        setState(986);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclarationStatementContext
//------------------------------------------------------------------

CtcLangParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::BlockDeclarationContext *CtcLangParser::DeclarationStatementContext::
    blockDeclaration()
{
    return getRuleContext<CtcLangParser::BlockDeclarationContext>(0);
}

size_t CtcLangParser::DeclarationStatementContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclarationStatement;
}

std::any CtcLangParser::DeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclarationStatement(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclarationStatementContext *CtcLangParser::declarationStatement()
{
    DeclarationStatementContext *_localctx =
        _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
    enterRule(_localctx, 118, CtcLangParser::RuleDeclarationStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(988);
        blockDeclaration();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclarationseqContext
//------------------------------------------------------------------

CtcLangParser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::DeclarationContext *> CtcLangParser::DeclarationseqContext::declaration()
{
    return getRuleContexts<CtcLangParser::DeclarationContext>();
}

CtcLangParser::DeclarationContext *CtcLangParser::DeclarationseqContext::declaration(size_t i)
{
    return getRuleContext<CtcLangParser::DeclarationContext>(i);
}

size_t CtcLangParser::DeclarationseqContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclarationseq;
}

std::any CtcLangParser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclarationseq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclarationseqContext *CtcLangParser::declarationseq()
{
    DeclarationseqContext *_localctx =
        _tracker.createInstance<DeclarationseqContext>(_ctx, getState());
    enterRule(_localctx, 120, CtcLangParser::RuleDeclarationseq);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(991);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do
        {
            setState(990);
            declaration();
            setState(993);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (
            ((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6258306904838405693) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57423094277539199) != 0));
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclarationContext
//------------------------------------------------------------------

CtcLangParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::BlockDeclarationContext *CtcLangParser::DeclarationContext::blockDeclaration()
{
    return getRuleContext<CtcLangParser::BlockDeclarationContext>(0);
}

CtcLangParser::FunctionDefinitionContext *CtcLangParser::DeclarationContext::functionDefinition()
{
    return getRuleContext<CtcLangParser::FunctionDefinitionContext>(0);
}

CtcLangParser::TemplateDeclarationContext *CtcLangParser::DeclarationContext::templateDeclaration()
{
    return getRuleContext<CtcLangParser::TemplateDeclarationContext>(0);
}

CtcLangParser::ExplicitInstantiationContext *CtcLangParser::DeclarationContext::
    explicitInstantiation()
{
    return getRuleContext<CtcLangParser::ExplicitInstantiationContext>(0);
}

CtcLangParser::ExplicitSpecializationContext *CtcLangParser::DeclarationContext::
    explicitSpecialization()
{
    return getRuleContext<CtcLangParser::ExplicitSpecializationContext>(0);
}

CtcLangParser::LinkageSpecificationContext *CtcLangParser::DeclarationContext::
    linkageSpecification()
{
    return getRuleContext<CtcLangParser::LinkageSpecificationContext>(0);
}

CtcLangParser::NamespaceDefinitionContext *CtcLangParser::DeclarationContext::namespaceDefinition()
{
    return getRuleContext<CtcLangParser::NamespaceDefinitionContext>(0);
}

CtcLangParser::EmptyDeclaration_Context *CtcLangParser::DeclarationContext::emptyDeclaration_()
{
    return getRuleContext<CtcLangParser::EmptyDeclaration_Context>(0);
}

CtcLangParser::AttributeDeclarationContext *CtcLangParser::DeclarationContext::
    attributeDeclaration()
{
    return getRuleContext<CtcLangParser::AttributeDeclarationContext>(0);
}

size_t CtcLangParser::DeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclaration;
}

std::any CtcLangParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclarationContext *CtcLangParser::declaration()
{
    DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
    enterRule(_localctx, 122, CtcLangParser::RuleDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1004);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(995);
                blockDeclaration();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(996);
                functionDefinition();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(997);
                templateDeclaration();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(998);
                explicitInstantiation();
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(999);
                explicitSpecialization();
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(1000);
                linkageSpecification();
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(1001);
                namespaceDefinition();
                break;
            }

            case 8: {
                enterOuterAlt(_localctx, 8);
                setState(1002);
                emptyDeclaration_();
                break;
            }

            case 9: {
                enterOuterAlt(_localctx, 9);
                setState(1003);
                attributeDeclaration();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BlockDeclarationContext
//------------------------------------------------------------------

CtcLangParser::BlockDeclarationContext::BlockDeclarationContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::SimpleDeclarationContext *CtcLangParser::BlockDeclarationContext::simpleDeclaration()
{
    return getRuleContext<CtcLangParser::SimpleDeclarationContext>(0);
}

CtcLangParser::AsmDefinitionContext *CtcLangParser::BlockDeclarationContext::asmDefinition()
{
    return getRuleContext<CtcLangParser::AsmDefinitionContext>(0);
}

CtcLangParser::NamespaceAliasDefinitionContext *CtcLangParser::BlockDeclarationContext::
    namespaceAliasDefinition()
{
    return getRuleContext<CtcLangParser::NamespaceAliasDefinitionContext>(0);
}

CtcLangParser::UsingDeclarationContext *CtcLangParser::BlockDeclarationContext::usingDeclaration()
{
    return getRuleContext<CtcLangParser::UsingDeclarationContext>(0);
}

CtcLangParser::UsingDirectiveContext *CtcLangParser::BlockDeclarationContext::usingDirective()
{
    return getRuleContext<CtcLangParser::UsingDirectiveContext>(0);
}

CtcLangParser::StaticAssertDeclarationContext *CtcLangParser::BlockDeclarationContext::
    staticAssertDeclaration()
{
    return getRuleContext<CtcLangParser::StaticAssertDeclarationContext>(0);
}

CtcLangParser::AliasDeclarationContext *CtcLangParser::BlockDeclarationContext::aliasDeclaration()
{
    return getRuleContext<CtcLangParser::AliasDeclarationContext>(0);
}

CtcLangParser::OpaqueEnumDeclarationContext *CtcLangParser::BlockDeclarationContext::
    opaqueEnumDeclaration()
{
    return getRuleContext<CtcLangParser::OpaqueEnumDeclarationContext>(0);
}

size_t CtcLangParser::BlockDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleBlockDeclaration;
}

std::any CtcLangParser::BlockDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBlockDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BlockDeclarationContext *CtcLangParser::blockDeclaration()
{
    BlockDeclarationContext *_localctx =
        _tracker.createInstance<BlockDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 124, CtcLangParser::RuleBlockDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1014);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1006);
                simpleDeclaration();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1007);
                asmDefinition();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1008);
                namespaceAliasDefinition();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(1009);
                usingDeclaration();
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(1010);
                usingDirective();
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(1011);
                staticAssertDeclaration();
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(1012);
                aliasDeclaration();
                break;
            }

            case 8: {
                enterOuterAlt(_localctx, 8);
                setState(1013);
                opaqueEnumDeclaration();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AliasDeclarationContext
//------------------------------------------------------------------

CtcLangParser::AliasDeclarationContext::AliasDeclarationContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AliasDeclarationContext::Using()
{
    return getToken(CtcLangParser::Using, 0);
}

tree::TerminalNode *CtcLangParser::AliasDeclarationContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::AliasDeclarationContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::AliasDeclarationContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::AliasDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::AliasDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::AliasDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleAliasDeclaration;
}

std::any CtcLangParser::AliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAliasDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AliasDeclarationContext *CtcLangParser::aliasDeclaration()
{
    AliasDeclarationContext *_localctx =
        _tracker.createInstance<AliasDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 126, CtcLangParser::RuleAliasDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1016);
        match(CtcLangParser::Using);
        setState(1017);
        match(CtcLangParser::Identifier);
        setState(1019);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1018);
            attributeSpecifierSeq();
        }
        setState(1021);
        match(CtcLangParser::Assign);
        setState(1022);
        theTypeId();
        setState(1023);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleDeclarationContext
//------------------------------------------------------------------

CtcLangParser::SimpleDeclarationContext::SimpleDeclarationContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::SimpleDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::SimpleDeclarationContext::declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::InitDeclaratorListContext *CtcLangParser::SimpleDeclarationContext::
    initDeclaratorList()
{
    return getRuleContext<CtcLangParser::InitDeclaratorListContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::SimpleDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::SimpleDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleDeclaration;
}

std::any CtcLangParser::SimpleDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleDeclarationContext *CtcLangParser::simpleDeclaration()
{
    SimpleDeclarationContext *_localctx =
        _tracker.createInstance<SimpleDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 128, CtcLangParser::RuleSimpleDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1039);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Constexpr:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Enum:
            case CtcLangParser::Explicit:
            case CtcLangParser::Extern:
            case CtcLangParser::Final:
            case CtcLangParser::Float:
            case CtcLangParser::Inline:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Mutable:
            case CtcLangParser::Operator:
            case CtcLangParser::Override:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Static:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Thread_local:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Virtual:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::LeftParen:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::Tilde:
            case CtcLangParser::AndAnd:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Semi:
            case CtcLangParser::Ellipsis:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(1026);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx))
                {
                    case 1: {
                        setState(1025);
                        declSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1029);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Decltype

                    || _la == CtcLangParser::Operator ||
                    ((((_la - 85) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 85)) & 215512868999425) != 0))
                {
                    setState(1028);
                    initDeclaratorList();
                }
                setState(1031);
                match(CtcLangParser::Semi);
                break;
            }

            case CtcLangParser::Alignas:
            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 2);
                setState(1032);
                attributeSpecifierSeq();
                setState(1034);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx))
                {
                    case 1: {
                        setState(1033);
                        declSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1036);
                initDeclaratorList();
                setState(1037);
                match(CtcLangParser::Semi);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- StaticAssertDeclarationContext
//------------------------------------------------------------------

CtcLangParser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::Static_assert()
{
    return getToken(CtcLangParser::Static_assert, 0);
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::StaticAssertDeclarationContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::StringLiteral()
{
    return getToken(CtcLangParser::StringLiteral, 0);
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

tree::TerminalNode *CtcLangParser::StaticAssertDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

size_t CtcLangParser::StaticAssertDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleStaticAssertDeclaration;
}

std::any CtcLangParser::StaticAssertDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitStaticAssertDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::StaticAssertDeclarationContext *CtcLangParser::staticAssertDeclaration()
{
    StaticAssertDeclarationContext *_localctx =
        _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 130, CtcLangParser::RuleStaticAssertDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1041);
        match(CtcLangParser::Static_assert);
        setState(1042);
        match(CtcLangParser::LeftParen);
        setState(1043);
        constantExpression();
        setState(1044);
        match(CtcLangParser::Comma);
        setState(1045);
        match(CtcLangParser::StringLiteral);
        setState(1046);
        match(CtcLangParser::RightParen);
        setState(1047);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EmptyDeclaration_Context
//------------------------------------------------------------------

CtcLangParser::EmptyDeclaration_Context::EmptyDeclaration_Context(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::EmptyDeclaration_Context::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

size_t CtcLangParser::EmptyDeclaration_Context::getRuleIndex() const
{
    return CtcLangParser::RuleEmptyDeclaration_;
}

std::any CtcLangParser::EmptyDeclaration_Context::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEmptyDeclaration_(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EmptyDeclaration_Context *CtcLangParser::emptyDeclaration_()
{
    EmptyDeclaration_Context *_localctx =
        _tracker.createInstance<EmptyDeclaration_Context>(_ctx, getState());
    enterRule(_localctx, 132, CtcLangParser::RuleEmptyDeclaration_);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1049);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeDeclarationContext
//------------------------------------------------------------------

CtcLangParser::AttributeDeclarationContext::AttributeDeclarationContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::AttributeDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::AttributeDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

size_t CtcLangParser::AttributeDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeDeclaration;
}

std::any CtcLangParser::AttributeDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeDeclarationContext *CtcLangParser::attributeDeclaration()
{
    AttributeDeclarationContext *_localctx =
        _tracker.createInstance<AttributeDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 134, CtcLangParser::RuleAttributeDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1051);
        attributeSpecifierSeq();
        setState(1052);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclSpecifierContext
//------------------------------------------------------------------

CtcLangParser::DeclSpecifierContext::DeclSpecifierContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::StorageClassSpecifierContext *CtcLangParser::DeclSpecifierContext::
    storageClassSpecifier()
{
    return getRuleContext<CtcLangParser::StorageClassSpecifierContext>(0);
}

CtcLangParser::TypeSpecifierContext *CtcLangParser::DeclSpecifierContext::typeSpecifier()
{
    return getRuleContext<CtcLangParser::TypeSpecifierContext>(0);
}

CtcLangParser::FunctionSpecifierContext *CtcLangParser::DeclSpecifierContext::functionSpecifier()
{
    return getRuleContext<CtcLangParser::FunctionSpecifierContext>(0);
}

CtcLangParser::VirtualSpecifierSeqContext *CtcLangParser::DeclSpecifierContext::
    virtualSpecifierSeq()
{
    return getRuleContext<CtcLangParser::VirtualSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::DeclSpecifierContext::Constexpr()
{
    return getToken(CtcLangParser::Constexpr, 0);
}

size_t CtcLangParser::DeclSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclSpecifier;
}

std::any CtcLangParser::DeclSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclSpecifierContext *CtcLangParser::declSpecifier()
{
    DeclSpecifierContext *_localctx =
        _tracker.createInstance<DeclSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 136, CtcLangParser::RuleDeclSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1059);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Extern:
            case CtcLangParser::Mutable:
            case CtcLangParser::Static:
            case CtcLangParser::Thread_local: {
                enterOuterAlt(_localctx, 1);
                setState(1054);
                storageClassSpecifier();
                break;
            }

            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Enum:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 2);
                setState(1055);
                typeSpecifier();
                break;
            }

            case CtcLangParser::Explicit:
            case CtcLangParser::Inline:
            case CtcLangParser::Virtual: {
                enterOuterAlt(_localctx, 3);
                setState(1056);
                functionSpecifier();
                break;
            }

            case CtcLangParser::Final:
            case CtcLangParser::Override: {
                enterOuterAlt(_localctx, 4);
                setState(1057);
                virtualSpecifierSeq();
                break;
            }

            case CtcLangParser::Constexpr: {
                enterOuterAlt(_localctx, 5);
                setState(1058);
                match(CtcLangParser::Constexpr);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclSpecifierSeqContext
//------------------------------------------------------------------

CtcLangParser::DeclSpecifierSeqContext::DeclSpecifierSeqContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::DeclSpecifierContext *> CtcLangParser::DeclSpecifierSeqContext::
    declSpecifier()
{
    return getRuleContexts<CtcLangParser::DeclSpecifierContext>();
}

CtcLangParser::DeclSpecifierContext *CtcLangParser::DeclSpecifierSeqContext::declSpecifier(size_t i)
{
    return getRuleContext<CtcLangParser::DeclSpecifierContext>(i);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::DeclSpecifierSeqContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::DeclSpecifierSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclSpecifierSeq;
}

std::any CtcLangParser::DeclSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclSpecifierSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::declSpecifierSeq()
{
    DeclSpecifierSeqContext *_localctx =
        _tracker.createInstance<DeclSpecifierSeqContext>(_ctx, getState());
    enterRule(_localctx, 138, CtcLangParser::RuleDeclSpecifierSeq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1062);
        _errHandler->sync(this);
        alt = 1 + 1;
        do
        {
            switch (alt)
            {
                case 1 + 1: {
                    setState(1061);
                    declSpecifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1064);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
        } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(1067);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx))
        {
            case 1: {
                setState(1066);
                attributeSpecifierSeq();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- StorageClassSpecifierContext
//------------------------------------------------------------------

CtcLangParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::StorageClassSpecifierContext::Static()
{
    return getToken(CtcLangParser::Static, 0);
}

tree::TerminalNode *CtcLangParser::StorageClassSpecifierContext::Thread_local()
{
    return getToken(CtcLangParser::Thread_local, 0);
}

tree::TerminalNode *CtcLangParser::StorageClassSpecifierContext::Extern()
{
    return getToken(CtcLangParser::Extern, 0);
}

tree::TerminalNode *CtcLangParser::StorageClassSpecifierContext::Mutable()
{
    return getToken(CtcLangParser::Mutable, 0);
}

size_t CtcLangParser::StorageClassSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleStorageClassSpecifier;
}

std::any CtcLangParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitStorageClassSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::StorageClassSpecifierContext *CtcLangParser::storageClassSpecifier()
{
    StorageClassSpecifierContext *_localctx =
        _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 140, CtcLangParser::RuleStorageClassSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1069);
        _la = _input->LA(1);
        if (!(((((_la - 38) & ~0x3fULL) == 0) && ((1ULL << (_la - 38)) & 17246979073) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FunctionSpecifierContext
//------------------------------------------------------------------

CtcLangParser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::FunctionSpecifierContext::Inline()
{
    return getToken(CtcLangParser::Inline, 0);
}

tree::TerminalNode *CtcLangParser::FunctionSpecifierContext::Virtual()
{
    return getToken(CtcLangParser::Virtual, 0);
}

tree::TerminalNode *CtcLangParser::FunctionSpecifierContext::Explicit()
{
    return getToken(CtcLangParser::Explicit, 0);
}

size_t CtcLangParser::FunctionSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleFunctionSpecifier;
}

std::any CtcLangParser::FunctionSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitFunctionSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::FunctionSpecifierContext *CtcLangParser::functionSpecifier()
{
    FunctionSpecifierContext *_localctx =
        _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 142, CtcLangParser::RuleFunctionSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1071);
        _la = _input->LA(1);
        if (!(((((_la - 36) & ~0x3fULL) == 0) && ((1ULL << (_la - 36)) & 17592186044929) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypedefNameContext
//------------------------------------------------------------------

CtcLangParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TypedefNameContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::TypedefNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypedefName;
}

std::any CtcLangParser::TypedefNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypedefName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypedefNameContext *CtcLangParser::typedefName()
{
    TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
    enterRule(_localctx, 144, CtcLangParser::RuleTypedefName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1073);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TrailingTypeSpecifierContext *CtcLangParser::TypeSpecifierContext::
    trailingTypeSpecifier()
{
    return getRuleContext<CtcLangParser::TrailingTypeSpecifierContext>(0);
}

CtcLangParser::ClassSpecifierContext *CtcLangParser::TypeSpecifierContext::classSpecifier()
{
    return getRuleContext<CtcLangParser::ClassSpecifierContext>(0);
}

CtcLangParser::InterfaceSpecifierContext *CtcLangParser::TypeSpecifierContext::interfaceSpecifier()
{
    return getRuleContext<CtcLangParser::InterfaceSpecifierContext>(0);
}

CtcLangParser::RecordSpecifierContext *CtcLangParser::TypeSpecifierContext::recordSpecifier()
{
    return getRuleContext<CtcLangParser::RecordSpecifierContext>(0);
}

CtcLangParser::EnumSpecifierContext *CtcLangParser::TypeSpecifierContext::enumSpecifier()
{
    return getRuleContext<CtcLangParser::EnumSpecifierContext>(0);
}

size_t CtcLangParser::TypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeSpecifier;
}

std::any CtcLangParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeSpecifierContext *CtcLangParser::typeSpecifier()
{
    TypeSpecifierContext *_localctx =
        _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 146, CtcLangParser::RuleTypeSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1080);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1075);
                trailingTypeSpecifier();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1076);
                classSpecifier();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1077);
                interfaceSpecifier();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(1078);
                recordSpecifier();
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(1079);
                enumSpecifier();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TrailingTypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::TrailingTypeSpecifierContext::TrailingTypeSpecifierContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::SimpleTypeSpecifierContext *CtcLangParser::TrailingTypeSpecifierContext::
    simpleTypeSpecifier()
{
    return getRuleContext<CtcLangParser::SimpleTypeSpecifierContext>(0);
}

CtcLangParser::ElaboratedTypeSpecifierContext *CtcLangParser::TrailingTypeSpecifierContext::
    elaboratedTypeSpecifier()
{
    return getRuleContext<CtcLangParser::ElaboratedTypeSpecifierContext>(0);
}

CtcLangParser::TypeNameSpecifierContext *CtcLangParser::TrailingTypeSpecifierContext::
    typeNameSpecifier()
{
    return getRuleContext<CtcLangParser::TypeNameSpecifierContext>(0);
}

CtcLangParser::CvQualifierContext *CtcLangParser::TrailingTypeSpecifierContext::cvQualifier()
{
    return getRuleContext<CtcLangParser::CvQualifierContext>(0);
}

size_t CtcLangParser::TrailingTypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleTrailingTypeSpecifier;
}

std::any CtcLangParser::TrailingTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTrailingTypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TrailingTypeSpecifierContext *CtcLangParser::trailingTypeSpecifier()
{
    TrailingTypeSpecifierContext *_localctx =
        _tracker.createInstance<TrailingTypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 148, CtcLangParser::RuleTrailingTypeSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1086);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Wchar:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(1082);
                simpleTypeSpecifier();
                break;
            }

            case CtcLangParser::Class:
            case CtcLangParser::Enum: {
                enterOuterAlt(_localctx, 2);
                setState(1083);
                elaboratedTypeSpecifier();
                break;
            }

            case CtcLangParser::Typename_: {
                enterOuterAlt(_localctx, 3);
                setState(1084);
                typeNameSpecifier();
                break;
            }

            case CtcLangParser::Const:
            case CtcLangParser::Volatile: {
                enterOuterAlt(_localctx, 4);
                setState(1085);
                cvQualifier();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeSpecifierSeqContext
//------------------------------------------------------------------

CtcLangParser::TypeSpecifierSeqContext::TypeSpecifierSeqContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::TypeSpecifierContext *> CtcLangParser::TypeSpecifierSeqContext::
    typeSpecifier()
{
    return getRuleContexts<CtcLangParser::TypeSpecifierContext>();
}

CtcLangParser::TypeSpecifierContext *CtcLangParser::TypeSpecifierSeqContext::typeSpecifier(size_t i)
{
    return getRuleContext<CtcLangParser::TypeSpecifierContext>(i);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::TypeSpecifierSeqContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::TypeSpecifierSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeSpecifierSeq;
}

std::any CtcLangParser::TypeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeSpecifierSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::typeSpecifierSeq()
{
    TypeSpecifierSeqContext *_localctx =
        _tracker.createInstance<TypeSpecifierSeqContext>(_ctx, getState());
    enterRule(_localctx, 150, CtcLangParser::RuleTypeSpecifierSeq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1089);
        _errHandler->sync(this);
        alt = 1;
        do
        {
            switch (alt)
            {
                case 1: {
                    setState(1088);
                    typeSpecifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1091);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(1094);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx))
        {
            case 1: {
                setState(1093);
                attributeSpecifierSeq();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TrailingTypeSpecifierSeqContext
//------------------------------------------------------------------

CtcLangParser::TrailingTypeSpecifierSeqContext::TrailingTypeSpecifierSeqContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::TrailingTypeSpecifierContext *> CtcLangParser::
    TrailingTypeSpecifierSeqContext::trailingTypeSpecifier()
{
    return getRuleContexts<CtcLangParser::TrailingTypeSpecifierContext>();
}

CtcLangParser::TrailingTypeSpecifierContext *CtcLangParser::TrailingTypeSpecifierSeqContext::
    trailingTypeSpecifier(size_t i)
{
    return getRuleContext<CtcLangParser::TrailingTypeSpecifierContext>(i);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::TrailingTypeSpecifierSeqContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::TrailingTypeSpecifierSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleTrailingTypeSpecifierSeq;
}

std::any CtcLangParser::TrailingTypeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTrailingTypeSpecifierSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TrailingTypeSpecifierSeqContext *CtcLangParser::trailingTypeSpecifierSeq()
{
    TrailingTypeSpecifierSeqContext *_localctx =
        _tracker.createInstance<TrailingTypeSpecifierSeqContext>(_ctx, getState());
    enterRule(_localctx, 152, CtcLangParser::RuleTrailingTypeSpecifierSeq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1097);
        _errHandler->sync(this);
        alt = 1;
        do
        {
            switch (alt)
            {
                case 1: {
                    setState(1096);
                    trailingTypeSpecifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1099);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(1102);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx))
        {
            case 1: {
                setState(1101);
                attributeSpecifierSeq();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleTypeLengthModifierContext
//------------------------------------------------------------------

CtcLangParser::SimpleTypeLengthModifierContext::SimpleTypeLengthModifierContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::SimpleTypeLengthModifierContext::Short()
{
    return getToken(CtcLangParser::Short, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeLengthModifierContext::Long()
{
    return getToken(CtcLangParser::Long, 0);
}

size_t CtcLangParser::SimpleTypeLengthModifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleTypeLengthModifier;
}

std::any CtcLangParser::SimpleTypeLengthModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleTypeLengthModifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleTypeLengthModifierContext *CtcLangParser::simpleTypeLengthModifier()
{
    SimpleTypeLengthModifierContext *_localctx =
        _tracker.createInstance<SimpleTypeLengthModifierContext>(_ctx, getState());
    enterRule(_localctx, 154, CtcLangParser::RuleSimpleTypeLengthModifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1104);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::Long

              || _la == CtcLangParser::Short))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleTypeSignednessModifierContext
//------------------------------------------------------------------

CtcLangParser::SimpleTypeSignednessModifierContext::SimpleTypeSignednessModifierContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::SimpleTypeSignednessModifierContext::Unsigned()
{
    return getToken(CtcLangParser::Unsigned, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSignednessModifierContext::Signed()
{
    return getToken(CtcLangParser::Signed, 0);
}

size_t CtcLangParser::SimpleTypeSignednessModifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleTypeSignednessModifier;
}

std::any CtcLangParser::SimpleTypeSignednessModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleTypeSignednessModifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleTypeSignednessModifierContext *CtcLangParser::simpleTypeSignednessModifier()
{
    SimpleTypeSignednessModifierContext *_localctx =
        _tracker.createInstance<SimpleTypeSignednessModifierContext>(_ctx, getState());
    enterRule(_localctx, 156, CtcLangParser::RuleSimpleTypeSignednessModifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1106);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::Signed

              || _la == CtcLangParser::Unsigned))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleTypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::SimpleTypeSpecifierContext::SimpleTypeSpecifierContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TheTypeNameContext *CtcLangParser::SimpleTypeSpecifierContext::theTypeName()
{
    return getRuleContext<CtcLangParser::TheTypeNameContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::SimpleTypeSpecifierContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::SimpleTypeSpecifierContext::
    simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Char()
{
    return getToken(CtcLangParser::Char, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Char16()
{
    return getToken(CtcLangParser::Char16, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Char32()
{
    return getToken(CtcLangParser::Char32, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Wchar()
{
    return getToken(CtcLangParser::Wchar, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Bool()
{
    return getToken(CtcLangParser::Bool, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Short()
{
    return getToken(CtcLangParser::Short, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Int()
{
    return getToken(CtcLangParser::Int, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Long()
{
    return getToken(CtcLangParser::Long, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Float()
{
    return getToken(CtcLangParser::Float, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Signed()
{
    return getToken(CtcLangParser::Signed, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Unsigned()
{
    return getToken(CtcLangParser::Unsigned, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Double()
{
    return getToken(CtcLangParser::Double, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Void()
{
    return getToken(CtcLangParser::Void, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTypeSpecifierContext::Auto()
{
    return getToken(CtcLangParser::Auto, 0);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::SimpleTypeSpecifierContext::
    decltypeSpecifier()
{
    return getRuleContext<CtcLangParser::DecltypeSpecifierContext>(0);
}

size_t CtcLangParser::SimpleTypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleTypeSpecifier;
}

std::any CtcLangParser::SimpleTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleTypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleTypeSpecifierContext *CtcLangParser::simpleTypeSpecifier()
{
    SimpleTypeSpecifierContext *_localctx =
        _tracker.createInstance<SimpleTypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 158, CtcLangParser::RuleSimpleTypeSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1132);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1109);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx))
                {
                    case 1: {
                        setState(1108);
                        nestedNameSpecifier(0);
                        break;
                    }

                    default:
                        break;
                }
                setState(1111);
                theTypeName();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1112);
                nestedNameSpecifier(0);
                setState(1113);
                match(CtcLangParser::Template);
                setState(1114);
                simpleTemplateId();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1116);
                match(CtcLangParser::Char);
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(1117);
                match(CtcLangParser::Char16);
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(1118);
                match(CtcLangParser::Char32);
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(1119);
                match(CtcLangParser::Wchar);
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(1120);
                match(CtcLangParser::Bool);
                break;
            }

            case 8: {
                enterOuterAlt(_localctx, 8);
                setState(1121);
                match(CtcLangParser::Short);
                break;
            }

            case 9: {
                enterOuterAlt(_localctx, 9);
                setState(1122);
                match(CtcLangParser::Int);
                break;
            }

            case 10: {
                enterOuterAlt(_localctx, 10);
                setState(1123);
                match(CtcLangParser::Long);
                break;
            }

            case 11: {
                enterOuterAlt(_localctx, 11);
                setState(1124);
                match(CtcLangParser::Float);
                break;
            }

            case 12: {
                enterOuterAlt(_localctx, 12);
                setState(1125);
                match(CtcLangParser::Signed);
                break;
            }

            case 13: {
                enterOuterAlt(_localctx, 13);
                setState(1126);
                match(CtcLangParser::Unsigned);
                break;
            }

            case 14: {
                enterOuterAlt(_localctx, 14);
                setState(1127);
                match(CtcLangParser::Float);
                break;
            }

            case 15: {
                enterOuterAlt(_localctx, 15);
                setState(1128);
                match(CtcLangParser::Double);
                break;
            }

            case 16: {
                enterOuterAlt(_localctx, 16);
                setState(1129);
                match(CtcLangParser::Void);
                break;
            }

            case 17: {
                enterOuterAlt(_localctx, 17);
                setState(1130);
                match(CtcLangParser::Auto);
                break;
            }

            case 18: {
                enterOuterAlt(_localctx, 18);
                setState(1131);
                decltypeSpecifier();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TheTypeNameContext
//------------------------------------------------------------------

CtcLangParser::TheTypeNameContext::TheTypeNameContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassNameContext *CtcLangParser::TheTypeNameContext::className()
{
    return getRuleContext<CtcLangParser::ClassNameContext>(0);
}

CtcLangParser::EnumNameContext *CtcLangParser::TheTypeNameContext::enumName()
{
    return getRuleContext<CtcLangParser::EnumNameContext>(0);
}

CtcLangParser::TypedefNameContext *CtcLangParser::TheTypeNameContext::typedefName()
{
    return getRuleContext<CtcLangParser::TypedefNameContext>(0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::TheTypeNameContext::simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

size_t CtcLangParser::TheTypeNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleTheTypeName;
}

std::any CtcLangParser::TheTypeNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTheTypeName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TheTypeNameContext *CtcLangParser::theTypeName()
{
    TheTypeNameContext *_localctx = _tracker.createInstance<TheTypeNameContext>(_ctx, getState());
    enterRule(_localctx, 160, CtcLangParser::RuleTheTypeName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1138);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1134);
                className();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1135);
                enumName();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1136);
                typedefName();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(1137);
                simpleTemplateId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DecltypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::DecltypeSpecifierContext::DecltypeSpecifierContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::DecltypeSpecifierContext::Decltype()
{
    return getToken(CtcLangParser::Decltype, 0);
}

tree::TerminalNode *CtcLangParser::DecltypeSpecifierContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::DecltypeSpecifierContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::ExpressionContext *CtcLangParser::DecltypeSpecifierContext::expression()
{
    return getRuleContext<CtcLangParser::ExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::DecltypeSpecifierContext::Auto()
{
    return getToken(CtcLangParser::Auto, 0);
}

size_t CtcLangParser::DecltypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleDecltypeSpecifier;
}

std::any CtcLangParser::DecltypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDecltypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::decltypeSpecifier()
{
    DecltypeSpecifierContext *_localctx =
        _tracker.createInstance<DecltypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 162, CtcLangParser::RuleDecltypeSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1140);
        match(CtcLangParser::Decltype);
        setState(1141);
        match(CtcLangParser::LeftParen);
        setState(1144);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx))
        {
            case 1: {
                setState(1142);
                expression();
                break;
            }

            case 2: {
                setState(1143);
                match(CtcLangParser::Auto);
                break;
            }

            default:
                break;
        }
        setState(1146);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ElaboratedTypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::ElaboratedTypeSpecifierContext::ElaboratedTypeSpecifierContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassKeyContext *CtcLangParser::ElaboratedTypeSpecifierContext::classKey()
{
    return getRuleContext<CtcLangParser::ClassKeyContext>(0);
}

tree::TerminalNode *CtcLangParser::ElaboratedTypeSpecifierContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::ElaboratedTypeSpecifierContext::
    simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::ElaboratedTypeSpecifierContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ElaboratedTypeSpecifierContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::ElaboratedTypeSpecifierContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

tree::TerminalNode *CtcLangParser::ElaboratedTypeSpecifierContext::Enum()
{
    return getToken(CtcLangParser::Enum, 0);
}

size_t CtcLangParser::ElaboratedTypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleElaboratedTypeSpecifier;
}

std::any CtcLangParser::ElaboratedTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitElaboratedTypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ElaboratedTypeSpecifierContext *CtcLangParser::elaboratedTypeSpecifier()
{
    ElaboratedTypeSpecifierContext *_localctx =
        _tracker.createInstance<ElaboratedTypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 164, CtcLangParser::RuleElaboratedTypeSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1170);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Class: {
                enterOuterAlt(_localctx, 1);
                setState(1148);
                classKey();
                setState(1163);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx))
                {
                    case 1: {
                        setState(1150);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
                        {
                            setState(1149);
                            attributeSpecifierSeq();
                        }
                        setState(1153);
                        _errHandler->sync(this);

                        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(
                            _input, 117, _ctx))
                        {
                            case 1: {
                                setState(1152);
                                nestedNameSpecifier(0);
                                break;
                            }

                            default:
                                break;
                        }
                        setState(1155);
                        match(CtcLangParser::Identifier);
                        break;
                    }

                    case 2: {
                        setState(1156);
                        simpleTemplateId();
                        break;
                    }

                    case 3: {
                        setState(1157);
                        nestedNameSpecifier(0);
                        setState(1159);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if (_la == CtcLangParser::Template)
                        {
                            setState(1158);
                            match(CtcLangParser::Template);
                        }
                        setState(1161);
                        simpleTemplateId();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::Enum: {
                enterOuterAlt(_localctx, 2);
                setState(1165);
                match(CtcLangParser::Enum);
                setState(1167);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx))
                {
                    case 1: {
                        setState(1166);
                        nestedNameSpecifier(0);
                        break;
                    }

                    default:
                        break;
                }
                setState(1169);
                match(CtcLangParser::Identifier);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumNameContext
//------------------------------------------------------------------

CtcLangParser::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::EnumNameContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::EnumNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumName;
}

std::any CtcLangParser::EnumNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumNameContext *CtcLangParser::enumName()
{
    EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
    enterRule(_localctx, 166, CtcLangParser::RuleEnumName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1172);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumSpecifierContext
//------------------------------------------------------------------

CtcLangParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::EnumHeadContext *CtcLangParser::EnumSpecifierContext::enumHead()
{
    return getRuleContext<CtcLangParser::EnumHeadContext>(0);
}

tree::TerminalNode *CtcLangParser::EnumSpecifierContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::EnumSpecifierContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

CtcLangParser::EnumeratorListContext *CtcLangParser::EnumSpecifierContext::enumeratorList()
{
    return getRuleContext<CtcLangParser::EnumeratorListContext>(0);
}

tree::TerminalNode *CtcLangParser::EnumSpecifierContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

size_t CtcLangParser::EnumSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumSpecifier;
}

std::any CtcLangParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumSpecifierContext *CtcLangParser::enumSpecifier()
{
    EnumSpecifierContext *_localctx =
        _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 168, CtcLangParser::RuleEnumSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1174);
        enumHead();
        setState(1175);
        match(CtcLangParser::LeftBrace);
        setState(1180);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Identifier)
        {
            setState(1176);
            enumeratorList();
            setState(1178);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Comma)
            {
                setState(1177);
                match(CtcLangParser::Comma);
            }
        }
        setState(1182);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumHeadContext
//------------------------------------------------------------------

CtcLangParser::EnumHeadContext::EnumHeadContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::EnumkeyContext *CtcLangParser::EnumHeadContext::enumkey()
{
    return getRuleContext<CtcLangParser::EnumkeyContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::EnumHeadContext::attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::EnumHeadContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::EnumbaseContext *CtcLangParser::EnumHeadContext::enumbase()
{
    return getRuleContext<CtcLangParser::EnumbaseContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::EnumHeadContext::nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

size_t CtcLangParser::EnumHeadContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumHead;
}

std::any CtcLangParser::EnumHeadContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumHead(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumHeadContext *CtcLangParser::enumHead()
{
    EnumHeadContext *_localctx = _tracker.createInstance<EnumHeadContext>(_ctx, getState());
    enterRule(_localctx, 170, CtcLangParser::RuleEnumHead);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1184);
        enumkey();
        setState(1186);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1185);
            attributeSpecifierSeq();
        }
        setState(1192);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Decltype || _la == CtcLangParser::Doublecolon

            || _la == CtcLangParser::Identifier)
        {
            setState(1189);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx))
            {
                case 1: {
                    setState(1188);
                    nestedNameSpecifier(0);
                    break;
                }

                default:
                    break;
            }
            setState(1191);
            match(CtcLangParser::Identifier);
        }
        setState(1195);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Colon)
        {
            setState(1194);
            enumbase();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- OpaqueEnumDeclarationContext
//------------------------------------------------------------------

CtcLangParser::OpaqueEnumDeclarationContext::OpaqueEnumDeclarationContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::EnumkeyContext *CtcLangParser::OpaqueEnumDeclarationContext::enumkey()
{
    return getRuleContext<CtcLangParser::EnumkeyContext>(0);
}

tree::TerminalNode *CtcLangParser::OpaqueEnumDeclarationContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::OpaqueEnumDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::OpaqueEnumDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::EnumbaseContext *CtcLangParser::OpaqueEnumDeclarationContext::enumbase()
{
    return getRuleContext<CtcLangParser::EnumbaseContext>(0);
}

size_t CtcLangParser::OpaqueEnumDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleOpaqueEnumDeclaration;
}

std::any CtcLangParser::OpaqueEnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitOpaqueEnumDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::OpaqueEnumDeclarationContext *CtcLangParser::opaqueEnumDeclaration()
{
    OpaqueEnumDeclarationContext *_localctx =
        _tracker.createInstance<OpaqueEnumDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 172, CtcLangParser::RuleOpaqueEnumDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1197);
        enumkey();
        setState(1199);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1198);
            attributeSpecifierSeq();
        }
        setState(1201);
        match(CtcLangParser::Identifier);
        setState(1203);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Colon)
        {
            setState(1202);
            enumbase();
        }
        setState(1205);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumkeyContext
//------------------------------------------------------------------

CtcLangParser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::EnumkeyContext::Enum()
{
    return getToken(CtcLangParser::Enum, 0);
}

tree::TerminalNode *CtcLangParser::EnumkeyContext::Class()
{
    return getToken(CtcLangParser::Class, 0);
}

tree::TerminalNode *CtcLangParser::EnumkeyContext::Struct()
{
    return getToken(CtcLangParser::Struct, 0);
}

size_t CtcLangParser::EnumkeyContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumkey;
}

std::any CtcLangParser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumkey(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumkeyContext *CtcLangParser::enumkey()
{
    EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
    enterRule(_localctx, 174, CtcLangParser::RuleEnumkey);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1207);
        match(CtcLangParser::Enum);
        setState(1209);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Class

            || _la == CtcLangParser::Struct)
        {
            setState(1208);
            _la = _input->LA(1);
            if (!(_la == CtcLangParser::Class

                  || _la == CtcLangParser::Struct))
            {
                _errHandler->recoverInline(this);
            }
            else
            {
                _errHandler->reportMatch(this);
                consume();
            }
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumbaseContext
//------------------------------------------------------------------

CtcLangParser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::EnumbaseContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::EnumbaseContext::typeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TypeSpecifierSeqContext>(0);
}

size_t CtcLangParser::EnumbaseContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumbase;
}

std::any CtcLangParser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumbase(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumbaseContext *CtcLangParser::enumbase()
{
    EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
    enterRule(_localctx, 176, CtcLangParser::RuleEnumbase);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1211);
        match(CtcLangParser::Colon);
        setState(1212);
        typeSpecifierSeq();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumeratorListContext
//------------------------------------------------------------------

CtcLangParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::EnumeratorDefinitionContext *> CtcLangParser::EnumeratorListContext::
    enumeratorDefinition()
{
    return getRuleContexts<CtcLangParser::EnumeratorDefinitionContext>();
}

CtcLangParser::EnumeratorDefinitionContext *CtcLangParser::EnumeratorListContext::
    enumeratorDefinition(size_t i)
{
    return getRuleContext<CtcLangParser::EnumeratorDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::EnumeratorListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::EnumeratorListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::EnumeratorListContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumeratorList;
}

std::any CtcLangParser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumeratorList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumeratorListContext *CtcLangParser::enumeratorList()
{
    EnumeratorListContext *_localctx =
        _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
    enterRule(_localctx, 178, CtcLangParser::RuleEnumeratorList);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1214);
        enumeratorDefinition();
        setState(1219);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(1215);
                match(CtcLangParser::Comma);
                setState(1216);
                enumeratorDefinition();
            }
            setState(1221);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumeratorDefinitionContext
//------------------------------------------------------------------

CtcLangParser::EnumeratorDefinitionContext::EnumeratorDefinitionContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::EnumeratorContext *CtcLangParser::EnumeratorDefinitionContext::enumerator()
{
    return getRuleContext<CtcLangParser::EnumeratorContext>(0);
}

tree::TerminalNode *CtcLangParser::EnumeratorDefinitionContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::EnumeratorDefinitionContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

size_t CtcLangParser::EnumeratorDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumeratorDefinition;
}

std::any CtcLangParser::EnumeratorDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumeratorDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumeratorDefinitionContext *CtcLangParser::enumeratorDefinition()
{
    EnumeratorDefinitionContext *_localctx =
        _tracker.createInstance<EnumeratorDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 180, CtcLangParser::RuleEnumeratorDefinition);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1222);
        enumerator();
        setState(1225);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Assign)
        {
            setState(1223);
            match(CtcLangParser::Assign);
            setState(1224);
            constantExpression();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumeratorContext
//------------------------------------------------------------------

CtcLangParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::EnumeratorContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::EnumeratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleEnumerator;
}

std::any CtcLangParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitEnumerator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::EnumeratorContext *CtcLangParser::enumerator()
{
    EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
    enterRule(_localctx, 182, CtcLangParser::RuleEnumerator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1227);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NamespaceNameContext
//------------------------------------------------------------------

CtcLangParser::NamespaceNameContext::NamespaceNameContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::OriginalNamespaceNameContext *CtcLangParser::NamespaceNameContext::
    originalNamespaceName()
{
    return getRuleContext<CtcLangParser::OriginalNamespaceNameContext>(0);
}

CtcLangParser::NamespaceAliasContext *CtcLangParser::NamespaceNameContext::namespaceAlias()
{
    return getRuleContext<CtcLangParser::NamespaceAliasContext>(0);
}

size_t CtcLangParser::NamespaceNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleNamespaceName;
}

std::any CtcLangParser::NamespaceNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNamespaceName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NamespaceNameContext *CtcLangParser::namespaceName()
{
    NamespaceNameContext *_localctx =
        _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
    enterRule(_localctx, 184, CtcLangParser::RuleNamespaceName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1231);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1229);
                originalNamespaceName();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1230);
                namespaceAlias();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- OriginalNamespaceNameContext
//------------------------------------------------------------------

CtcLangParser::OriginalNamespaceNameContext::OriginalNamespaceNameContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::OriginalNamespaceNameContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::OriginalNamespaceNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleOriginalNamespaceName;
}

std::any CtcLangParser::OriginalNamespaceNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitOriginalNamespaceName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::OriginalNamespaceNameContext *CtcLangParser::originalNamespaceName()
{
    OriginalNamespaceNameContext *_localctx =
        _tracker.createInstance<OriginalNamespaceNameContext>(_ctx, getState());
    enterRule(_localctx, 186, CtcLangParser::RuleOriginalNamespaceName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1233);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NamespaceDefinitionContext
//------------------------------------------------------------------

CtcLangParser::NamespaceDefinitionContext::NamespaceDefinitionContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NamespaceDefinitionContext::Namespace()
{
    return getToken(CtcLangParser::Namespace, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceDefinitionContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceDefinitionContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceDefinitionContext::Inline()
{
    return getToken(CtcLangParser::Inline, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceDefinitionContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::OriginalNamespaceNameContext *CtcLangParser::NamespaceDefinitionContext::
    originalNamespaceName()
{
    return getRuleContext<CtcLangParser::OriginalNamespaceNameContext>(0);
}

CtcLangParser::DeclarationseqContext *CtcLangParser::NamespaceDefinitionContext::declarationseq()
{
    return getRuleContext<CtcLangParser::DeclarationseqContext>(0);
}

size_t CtcLangParser::NamespaceDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleNamespaceDefinition;
}

std::any CtcLangParser::NamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNamespaceDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NamespaceDefinitionContext *CtcLangParser::namespaceDefinition()
{
    NamespaceDefinitionContext *_localctx =
        _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 188, CtcLangParser::RuleNamespaceDefinition);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1236);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Inline)
        {
            setState(1235);
            match(CtcLangParser::Inline);
        }
        setState(1238);
        match(CtcLangParser::Namespace);
        setState(1241);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx))
        {
            case 1: {
                setState(1239);
                match(CtcLangParser::Identifier);
                break;
            }

            case 2: {
                setState(1240);
                originalNamespaceName();
                break;
            }

            default:
                break;
        }
        setState(1243);
        match(CtcLangParser::LeftBrace);
        setState(1245);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6258306904838405693) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57423094277539199) != 0))
        {
            setState(1244);
            antlrcpp::downCast<NamespaceDefinitionContext *>(_localctx)->namespaceBody =
                declarationseq();
        }
        setState(1247);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NamespaceAliasContext
//------------------------------------------------------------------

CtcLangParser::NamespaceAliasContext::NamespaceAliasContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NamespaceAliasContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::NamespaceAliasContext::getRuleIndex() const
{
    return CtcLangParser::RuleNamespaceAlias;
}

std::any CtcLangParser::NamespaceAliasContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNamespaceAlias(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NamespaceAliasContext *CtcLangParser::namespaceAlias()
{
    NamespaceAliasContext *_localctx =
        _tracker.createInstance<NamespaceAliasContext>(_ctx, getState());
    enterRule(_localctx, 190, CtcLangParser::RuleNamespaceAlias);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1249);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NamespaceAliasDefinitionContext
//------------------------------------------------------------------

CtcLangParser::NamespaceAliasDefinitionContext::NamespaceAliasDefinitionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NamespaceAliasDefinitionContext::Namespace()
{
    return getToken(CtcLangParser::Namespace, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceAliasDefinitionContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::NamespaceAliasDefinitionContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::QualifiednamespacespecifierContext *CtcLangParser::NamespaceAliasDefinitionContext::
    qualifiednamespacespecifier()
{
    return getRuleContext<CtcLangParser::QualifiednamespacespecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::NamespaceAliasDefinitionContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

size_t CtcLangParser::NamespaceAliasDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleNamespaceAliasDefinition;
}

std::any CtcLangParser::NamespaceAliasDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNamespaceAliasDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NamespaceAliasDefinitionContext *CtcLangParser::namespaceAliasDefinition()
{
    NamespaceAliasDefinitionContext *_localctx =
        _tracker.createInstance<NamespaceAliasDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 192, CtcLangParser::RuleNamespaceAliasDefinition);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1251);
        match(CtcLangParser::Namespace);
        setState(1252);
        match(CtcLangParser::Identifier);
        setState(1253);
        match(CtcLangParser::Assign);
        setState(1254);
        qualifiednamespacespecifier();
        setState(1255);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- QualifiednamespacespecifierContext
//------------------------------------------------------------------

CtcLangParser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::NamespaceNameContext *CtcLangParser::QualifiednamespacespecifierContext::
    namespaceName()
{
    return getRuleContext<CtcLangParser::NamespaceNameContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::QualifiednamespacespecifierContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

size_t CtcLangParser::QualifiednamespacespecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleQualifiednamespacespecifier;
}

std::any CtcLangParser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitQualifiednamespacespecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::QualifiednamespacespecifierContext *CtcLangParser::qualifiednamespacespecifier()
{
    QualifiednamespacespecifierContext *_localctx =
        _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
    enterRule(_localctx, 194, CtcLangParser::RuleQualifiednamespacespecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1258);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx))
        {
            case 1: {
                setState(1257);
                nestedNameSpecifier(0);
                break;
            }

            default:
                break;
        }
        setState(1260);
        namespaceName();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- UsingDeclarationContext
//------------------------------------------------------------------

CtcLangParser::UsingDeclarationContext::UsingDeclarationContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::UsingDeclarationContext::Using()
{
    return getToken(CtcLangParser::Using, 0);
}

CtcLangParser::UnqualifiedIdContext *CtcLangParser::UsingDeclarationContext::unqualifiedId()
{
    return getRuleContext<CtcLangParser::UnqualifiedIdContext>(0);
}

tree::TerminalNode *CtcLangParser::UsingDeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::UsingDeclarationContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::UsingDeclarationContext::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

tree::TerminalNode *CtcLangParser::UsingDeclarationContext::Typename_()
{
    return getToken(CtcLangParser::Typename_, 0);
}

size_t CtcLangParser::UsingDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleUsingDeclaration;
}

std::any CtcLangParser::UsingDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitUsingDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::UsingDeclarationContext *CtcLangParser::usingDeclaration()
{
    UsingDeclarationContext *_localctx =
        _tracker.createInstance<UsingDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 196, CtcLangParser::RuleUsingDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1262);
        match(CtcLangParser::Using);
        setState(1268);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx))
        {
            case 1: {
                setState(1264);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Typename_)
                {
                    setState(1263);
                    match(CtcLangParser::Typename_);
                }
                setState(1266);
                nestedNameSpecifier(0);
                break;
            }

            case 2: {
                setState(1267);
                match(CtcLangParser::Doublecolon);
                break;
            }

            default:
                break;
        }
        setState(1270);
        unqualifiedId();
        setState(1271);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- UsingDirectiveContext
//------------------------------------------------------------------

CtcLangParser::UsingDirectiveContext::UsingDirectiveContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::UsingDirectiveContext::Using()
{
    return getToken(CtcLangParser::Using, 0);
}

tree::TerminalNode *CtcLangParser::UsingDirectiveContext::Namespace()
{
    return getToken(CtcLangParser::Namespace, 0);
}

CtcLangParser::NamespaceNameContext *CtcLangParser::UsingDirectiveContext::namespaceName()
{
    return getRuleContext<CtcLangParser::NamespaceNameContext>(0);
}

tree::TerminalNode *CtcLangParser::UsingDirectiveContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::UsingDirectiveContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::UsingDirectiveContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

size_t CtcLangParser::UsingDirectiveContext::getRuleIndex() const
{
    return CtcLangParser::RuleUsingDirective;
}

std::any CtcLangParser::UsingDirectiveContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitUsingDirective(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::UsingDirectiveContext *CtcLangParser::usingDirective()
{
    UsingDirectiveContext *_localctx =
        _tracker.createInstance<UsingDirectiveContext>(_ctx, getState());
    enterRule(_localctx, 198, CtcLangParser::RuleUsingDirective);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1274);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1273);
            attributeSpecifierSeq();
        }
        setState(1276);
        match(CtcLangParser::Using);
        setState(1277);
        match(CtcLangParser::Namespace);
        setState(1279);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx))
        {
            case 1: {
                setState(1278);
                nestedNameSpecifier(0);
                break;
            }

            default:
                break;
        }
        setState(1281);
        namespaceName();
        setState(1282);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AsmDefinitionContext
//------------------------------------------------------------------

CtcLangParser::AsmDefinitionContext::AsmDefinitionContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::Asm()
{
    return getToken(CtcLangParser::Asm, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::StringLiteral()
{
    return getToken(CtcLangParser::StringLiteral, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::AsmMSVC()
{
    return getToken(CtcLangParser::AsmMSVC, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::AsmDefinitionContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

size_t CtcLangParser::AsmDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleAsmDefinition;
}

std::any CtcLangParser::AsmDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAsmDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AsmDefinitionContext *CtcLangParser::asmDefinition()
{
    AsmDefinitionContext *_localctx =
        _tracker.createInstance<AsmDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 200, CtcLangParser::RuleAsmDefinition);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1294);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Asm: {
                enterOuterAlt(_localctx, 1);
                setState(1284);
                match(CtcLangParser::Asm);
                setState(1285);
                match(CtcLangParser::LeftParen);
                setState(1286);
                match(CtcLangParser::StringLiteral);
                setState(1287);
                match(CtcLangParser::RightParen);
                setState(1288);
                match(CtcLangParser::Semi);
                break;
            }

            case CtcLangParser::AsmMSVC: {
                enterOuterAlt(_localctx, 2);
                setState(1289);
                match(CtcLangParser::AsmMSVC);
                setState(1290);
                match(CtcLangParser::LeftBrace);
                setState(1291);
                match(CtcLangParser::StringLiteral);
                setState(1292);
                match(CtcLangParser::RightBrace);
                setState(1293);
                match(CtcLangParser::Semi);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LinkageSpecificationContext
//------------------------------------------------------------------

CtcLangParser::LinkageSpecificationContext::LinkageSpecificationContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LinkageSpecificationContext::Extern()
{
    return getToken(CtcLangParser::Extern, 0);
}

tree::TerminalNode *CtcLangParser::LinkageSpecificationContext::StringLiteral()
{
    return getToken(CtcLangParser::StringLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LinkageSpecificationContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::LinkageSpecificationContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

CtcLangParser::DeclarationContext *CtcLangParser::LinkageSpecificationContext::declaration()
{
    return getRuleContext<CtcLangParser::DeclarationContext>(0);
}

CtcLangParser::DeclarationseqContext *CtcLangParser::LinkageSpecificationContext::declarationseq()
{
    return getRuleContext<CtcLangParser::DeclarationseqContext>(0);
}

size_t CtcLangParser::LinkageSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleLinkageSpecification;
}

std::any CtcLangParser::LinkageSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLinkageSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LinkageSpecificationContext *CtcLangParser::linkageSpecification()
{
    LinkageSpecificationContext *_localctx =
        _tracker.createInstance<LinkageSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 202, CtcLangParser::RuleLinkageSpecification);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1296);
        match(CtcLangParser::Extern);
        setState(1297);
        match(CtcLangParser::StringLiteral);
        setState(1304);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftBrace: {
                setState(1298);
                match(CtcLangParser::LeftBrace);
                setState(1300);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (((((_la - 10) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 10)) & 6258306904838405693) != 0) ||
                    ((((_la - 77) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 77)) & 57423094277539199) != 0))
                {
                    setState(1299);
                    declarationseq();
                }
                setState(1302);
                match(CtcLangParser::RightBrace);
                break;
            }

            case CtcLangParser::Alignas:
            case CtcLangParser::AsmMSVC:
            case CtcLangParser::Asm:
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Constexpr:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Enum:
            case CtcLangParser::Explicit:
            case CtcLangParser::Extern:
            case CtcLangParser::Final:
            case CtcLangParser::Float:
            case CtcLangParser::Inline:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Mutable:
            case CtcLangParser::Namespace:
            case CtcLangParser::Operator:
            case CtcLangParser::Override:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Static:
            case CtcLangParser::Static_assert:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Template:
            case CtcLangParser::Thread_local:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Using:
            case CtcLangParser::Virtual:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::LeftParen:
            case CtcLangParser::LeftBracket:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::Tilde:
            case CtcLangParser::AndAnd:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Semi:
            case CtcLangParser::Ellipsis:
            case CtcLangParser::Identifier: {
                setState(1303);
                declaration();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeSpecifierSeqContext
//------------------------------------------------------------------

CtcLangParser::AttributeSpecifierSeqContext::AttributeSpecifierSeqContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::AttributeSpecifierContext *> CtcLangParser::
    AttributeSpecifierSeqContext::attributeSpecifier()
{
    return getRuleContexts<CtcLangParser::AttributeSpecifierContext>();
}

CtcLangParser::AttributeSpecifierContext *CtcLangParser::AttributeSpecifierSeqContext::
    attributeSpecifier(size_t i)
{
    return getRuleContext<CtcLangParser::AttributeSpecifierContext>(i);
}

size_t CtcLangParser::AttributeSpecifierSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeSpecifierSeq;
}

std::any CtcLangParser::AttributeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeSpecifierSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::attributeSpecifierSeq()
{
    AttributeSpecifierSeqContext *_localctx =
        _tracker.createInstance<AttributeSpecifierSeqContext>(_ctx, getState());
    enterRule(_localctx, 204, CtcLangParser::RuleAttributeSpecifierSeq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1307);
        _errHandler->sync(this);
        alt = 1;
        do
        {
            switch (alt)
            {
                case 1: {
                    setState(1306);
                    attributeSpecifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1309);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CtcLangParser::AttributeSpecifierContext::LeftBracket()
{
    return getTokens(CtcLangParser::LeftBracket);
}

tree::TerminalNode *CtcLangParser::AttributeSpecifierContext::LeftBracket(size_t i)
{
    return getToken(CtcLangParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::AttributeSpecifierContext::RightBracket()
{
    return getTokens(CtcLangParser::RightBracket);
}

tree::TerminalNode *CtcLangParser::AttributeSpecifierContext::RightBracket(size_t i)
{
    return getToken(CtcLangParser::RightBracket, i);
}

CtcLangParser::AttributeListContext *CtcLangParser::AttributeSpecifierContext::attributeList()
{
    return getRuleContext<CtcLangParser::AttributeListContext>(0);
}

CtcLangParser::AlignmentspecifierContext *CtcLangParser::AttributeSpecifierContext::
    alignmentspecifier()
{
    return getRuleContext<CtcLangParser::AlignmentspecifierContext>(0);
}

size_t CtcLangParser::AttributeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeSpecifier;
}

std::any CtcLangParser::AttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeSpecifierContext *CtcLangParser::attributeSpecifier()
{
    AttributeSpecifierContext *_localctx =
        _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 206, CtcLangParser::RuleAttributeSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1319);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 1);
                setState(1311);
                match(CtcLangParser::LeftBracket);
                setState(1312);
                match(CtcLangParser::LeftBracket);
                setState(1314);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Identifier)
                {
                    setState(1313);
                    attributeList();
                }
                setState(1316);
                match(CtcLangParser::RightBracket);
                setState(1317);
                match(CtcLangParser::RightBracket);
                break;
            }

            case CtcLangParser::Alignas: {
                enterOuterAlt(_localctx, 2);
                setState(1318);
                alignmentspecifier();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AlignmentspecifierContext
//------------------------------------------------------------------

CtcLangParser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AlignmentspecifierContext::Alignas()
{
    return getToken(CtcLangParser::Alignas, 0);
}

tree::TerminalNode *CtcLangParser::AlignmentspecifierContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::AlignmentspecifierContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::AlignmentspecifierContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::AlignmentspecifierContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::AlignmentspecifierContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

size_t CtcLangParser::AlignmentspecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleAlignmentspecifier;
}

std::any CtcLangParser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAlignmentspecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AlignmentspecifierContext *CtcLangParser::alignmentspecifier()
{
    AlignmentspecifierContext *_localctx =
        _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
    enterRule(_localctx, 208, CtcLangParser::RuleAlignmentspecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1321);
        match(CtcLangParser::Alignas);
        setState(1322);
        match(CtcLangParser::LeftParen);
        setState(1325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx))
        {
            case 1: {
                setState(1323);
                theTypeId();
                break;
            }

            case 2: {
                setState(1324);
                constantExpression();
                break;
            }

            default:
                break;
        }
        setState(1328);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1327);
            match(CtcLangParser::Ellipsis);
        }
        setState(1330);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeListContext
//------------------------------------------------------------------

CtcLangParser::AttributeListContext::AttributeListContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::AttributeContext *> CtcLangParser::AttributeListContext::attribute()
{
    return getRuleContexts<CtcLangParser::AttributeContext>();
}

CtcLangParser::AttributeContext *CtcLangParser::AttributeListContext::attribute(size_t i)
{
    return getRuleContext<CtcLangParser::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::AttributeListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::AttributeListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

tree::TerminalNode *CtcLangParser::AttributeListContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

size_t CtcLangParser::AttributeListContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeList;
}

std::any CtcLangParser::AttributeListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeListContext *CtcLangParser::attributeList()
{
    AttributeListContext *_localctx =
        _tracker.createInstance<AttributeListContext>(_ctx, getState());
    enterRule(_localctx, 210, CtcLangParser::RuleAttributeList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1332);
        attribute();
        setState(1337);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1333);
            match(CtcLangParser::Comma);
            setState(1334);
            attribute();
            setState(1339);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1341);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1340);
            match(CtcLangParser::Ellipsis);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeContext
//------------------------------------------------------------------

CtcLangParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AttributeContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::AttributeNamespaceContext *CtcLangParser::AttributeContext::attributeNamespace()
{
    return getRuleContext<CtcLangParser::AttributeNamespaceContext>(0);
}

tree::TerminalNode *CtcLangParser::AttributeContext::Doublecolon()
{
    return getToken(CtcLangParser::Doublecolon, 0);
}

CtcLangParser::AttributeArgumentClauseContext *CtcLangParser::AttributeContext::
    attributeArgumentClause()
{
    return getRuleContext<CtcLangParser::AttributeArgumentClauseContext>(0);
}

size_t CtcLangParser::AttributeContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttribute;
}

std::any CtcLangParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttribute(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeContext *CtcLangParser::attribute()
{
    AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
    enterRule(_localctx, 212, CtcLangParser::RuleAttribute);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1346);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx))
        {
            case 1: {
                setState(1343);
                attributeNamespace();
                setState(1344);
                match(CtcLangParser::Doublecolon);
                break;
            }

            default:
                break;
        }
        setState(1348);
        match(CtcLangParser::Identifier);
        setState(1350);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::LeftParen)
        {
            setState(1349);
            attributeArgumentClause();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeNamespaceContext
//------------------------------------------------------------------

CtcLangParser::AttributeNamespaceContext::AttributeNamespaceContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AttributeNamespaceContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::AttributeNamespaceContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeNamespace;
}

std::any CtcLangParser::AttributeNamespaceContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeNamespace(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeNamespaceContext *CtcLangParser::attributeNamespace()
{
    AttributeNamespaceContext *_localctx =
        _tracker.createInstance<AttributeNamespaceContext>(_ctx, getState());
    enterRule(_localctx, 214, CtcLangParser::RuleAttributeNamespace);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1352);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AttributeArgumentClauseContext
//------------------------------------------------------------------

CtcLangParser::AttributeArgumentClauseContext::AttributeArgumentClauseContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AttributeArgumentClauseContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::AttributeArgumentClauseContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::BalancedTokenSeqContext *CtcLangParser::AttributeArgumentClauseContext::
    balancedTokenSeq()
{
    return getRuleContext<CtcLangParser::BalancedTokenSeqContext>(0);
}

size_t CtcLangParser::AttributeArgumentClauseContext::getRuleIndex() const
{
    return CtcLangParser::RuleAttributeArgumentClause;
}

std::any CtcLangParser::AttributeArgumentClauseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAttributeArgumentClause(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AttributeArgumentClauseContext *CtcLangParser::attributeArgumentClause()
{
    AttributeArgumentClauseContext *_localctx =
        _tracker.createInstance<AttributeArgumentClauseContext>(_ctx, getState());
    enterRule(_localctx, 216, CtcLangParser::RuleAttributeArgumentClause);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1354);
        match(CtcLangParser::LeftParen);
        setState(1356);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -2) != 0) ||
            ((((_la - 64) & ~0x3fULL) == 0) && ((1ULL << (_la - 64)) & -88080385) != 0) ||
            ((((_la - 128) & ~0x3fULL) == 0) && ((1ULL << (_la - 128)) & 262143) != 0))
        {
            setState(1355);
            balancedTokenSeq();
        }
        setState(1358);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BalancedTokenSeqContext
//------------------------------------------------------------------

CtcLangParser::BalancedTokenSeqContext::BalancedTokenSeqContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::BalancedtokenContext *> CtcLangParser::BalancedTokenSeqContext::
    balancedtoken()
{
    return getRuleContexts<CtcLangParser::BalancedtokenContext>();
}

CtcLangParser::BalancedtokenContext *CtcLangParser::BalancedTokenSeqContext::balancedtoken(size_t i)
{
    return getRuleContext<CtcLangParser::BalancedtokenContext>(i);
}

size_t CtcLangParser::BalancedTokenSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleBalancedTokenSeq;
}

std::any CtcLangParser::BalancedTokenSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBalancedTokenSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BalancedTokenSeqContext *CtcLangParser::balancedTokenSeq()
{
    BalancedTokenSeqContext *_localctx =
        _tracker.createInstance<BalancedTokenSeqContext>(_ctx, getState());
    enterRule(_localctx, 218, CtcLangParser::RuleBalancedTokenSeq);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1361);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do
        {
            setState(1360);
            balancedtoken();
            setState(1363);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -2) != 0) ||
                 ((((_la - 64) & ~0x3fULL) == 0) && ((1ULL << (_la - 64)) & -88080385) != 0) ||
                 ((((_la - 128) & ~0x3fULL) == 0) && ((1ULL << (_la - 128)) & 262143) != 0));
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BalancedtokenContext
//------------------------------------------------------------------

CtcLangParser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::LeftParen()
{
    return getTokens(CtcLangParser::LeftParen);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::LeftParen(size_t i)
{
    return getToken(CtcLangParser::LeftParen, i);
}

CtcLangParser::BalancedTokenSeqContext *CtcLangParser::BalancedtokenContext::balancedTokenSeq()
{
    return getRuleContext<CtcLangParser::BalancedTokenSeqContext>(0);
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::RightParen()
{
    return getTokens(CtcLangParser::RightParen);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::RightParen(size_t i)
{
    return getToken(CtcLangParser::RightParen, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::LeftBracket()
{
    return getTokens(CtcLangParser::LeftBracket);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::LeftBracket(size_t i)
{
    return getToken(CtcLangParser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::RightBracket()
{
    return getTokens(CtcLangParser::RightBracket);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::RightBracket(size_t i)
{
    return getToken(CtcLangParser::RightBracket, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::LeftBrace()
{
    return getTokens(CtcLangParser::LeftBrace);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::LeftBrace(size_t i)
{
    return getToken(CtcLangParser::LeftBrace, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BalancedtokenContext::RightBrace()
{
    return getTokens(CtcLangParser::RightBrace);
}

tree::TerminalNode *CtcLangParser::BalancedtokenContext::RightBrace(size_t i)
{
    return getToken(CtcLangParser::RightBrace, i);
}

size_t CtcLangParser::BalancedtokenContext::getRuleIndex() const
{
    return CtcLangParser::RuleBalancedtoken;
}

std::any CtcLangParser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBalancedtoken(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BalancedtokenContext *CtcLangParser::balancedtoken()
{
    BalancedtokenContext *_localctx =
        _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
    enterRule(_localctx, 220, CtcLangParser::RuleBalancedtoken);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        setState(1382);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftParen: {
                enterOuterAlt(_localctx, 1);
                setState(1365);
                match(CtcLangParser::LeftParen);
                setState(1366);
                balancedTokenSeq();
                setState(1367);
                match(CtcLangParser::RightParen);
                break;
            }

            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 2);
                setState(1369);
                match(CtcLangParser::LeftBracket);
                setState(1370);
                balancedTokenSeq();
                setState(1371);
                match(CtcLangParser::RightBracket);
                break;
            }

            case CtcLangParser::LeftBrace: {
                enterOuterAlt(_localctx, 3);
                setState(1373);
                match(CtcLangParser::LeftBrace);
                setState(1374);
                balancedTokenSeq();
                setState(1375);
                match(CtcLangParser::RightBrace);
                break;
            }

            case CtcLangParser::IntegerLiteral:
            case CtcLangParser::CharacterLiteral:
            case CtcLangParser::FloatingLiteral:
            case CtcLangParser::StringLiteral:
            case CtcLangParser::BooleanLiteral:
            case CtcLangParser::PointerLiteral:
            case CtcLangParser::UserDefinedLiteral:
            case CtcLangParser::MultiLineMacro:
            case CtcLangParser::Directive:
            case CtcLangParser::Alignas:
            case CtcLangParser::Alignof:
            case CtcLangParser::AsmMSVC:
            case CtcLangParser::Asm:
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Break:
            case CtcLangParser::Case:
            case CtcLangParser::Catch:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Constexpr:
            case CtcLangParser::Const_cast:
            case CtcLangParser::Bit_cast:
            case CtcLangParser::Continue:
            case CtcLangParser::Decltype:
            case CtcLangParser::Default:
            case CtcLangParser::Delete:
            case CtcLangParser::Do:
            case CtcLangParser::Double:
            case CtcLangParser::Dynamic_cast:
            case CtcLangParser::Else:
            case CtcLangParser::Enum:
            case CtcLangParser::Explicit:
            case CtcLangParser::Export:
            case CtcLangParser::Extern:
            case CtcLangParser::False_:
            case CtcLangParser::Final:
            case CtcLangParser::Float:
            case CtcLangParser::For:
            case CtcLangParser::Goto:
            case CtcLangParser::If:
            case CtcLangParser::Inline:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Mutable:
            case CtcLangParser::Namespace:
            case CtcLangParser::New:
            case CtcLangParser::Noexcept:
            case CtcLangParser::Nullptr:
            case CtcLangParser::Operator:
            case CtcLangParser::Override:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Reinterpret_cast:
            case CtcLangParser::Return:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Sizeof:
            case CtcLangParser::Static:
            case CtcLangParser::Static_assert:
            case CtcLangParser::Static_cast:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Switch:
            case CtcLangParser::Template:
            case CtcLangParser::This:
            case CtcLangParser::Thread_local:
            case CtcLangParser::Throw:
            case CtcLangParser::True_:
            case CtcLangParser::Try:
            case CtcLangParser::Typeid_:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Using:
            case CtcLangParser::Virtual:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::While:
            case CtcLangParser::Plus:
            case CtcLangParser::Minus:
            case CtcLangParser::Star:
            case CtcLangParser::Div:
            case CtcLangParser::Mod:
            case CtcLangParser::Caret:
            case CtcLangParser::And:
            case CtcLangParser::Or:
            case CtcLangParser::Tilde:
            case CtcLangParser::Not:
            case CtcLangParser::Assign:
            case CtcLangParser::Less:
            case CtcLangParser::Greater:
            case CtcLangParser::PlusAssign:
            case CtcLangParser::MinusAssign:
            case CtcLangParser::StarAssign:
            case CtcLangParser::DivAssign:
            case CtcLangParser::ModAssign:
            case CtcLangParser::XorAssign:
            case CtcLangParser::AndAssign:
            case CtcLangParser::OrAssign:
            case CtcLangParser::LeftShiftAssign:
            case CtcLangParser::RightShiftAssign:
            case CtcLangParser::Equal:
            case CtcLangParser::NotEqual:
            case CtcLangParser::LessEqual:
            case CtcLangParser::GreaterEqual:
            case CtcLangParser::AndAnd:
            case CtcLangParser::OrOr:
            case CtcLangParser::PlusPlus:
            case CtcLangParser::MinusMinus:
            case CtcLangParser::Comma:
            case CtcLangParser::ArrowStar:
            case CtcLangParser::Arrow:
            case CtcLangParser::Question:
            case CtcLangParser::Colon:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Semi:
            case CtcLangParser::Dot:
            case CtcLangParser::DotStar:
            case CtcLangParser::Ellipsis:
            case CtcLangParser::Identifier:
            case CtcLangParser::DecimalLiteral:
            case CtcLangParser::OctalLiteral:
            case CtcLangParser::HexadecimalLiteral:
            case CtcLangParser::BinaryLiteral:
            case CtcLangParser::Integersuffix:
            case CtcLangParser::UserDefinedIntegerLiteral:
            case CtcLangParser::UserDefinedFloatingLiteral:
            case CtcLangParser::UserDefinedStringLiteral:
            case CtcLangParser::UserDefinedCharacterLiteral:
            case CtcLangParser::Whitespace:
            case CtcLangParser::Newline:
            case CtcLangParser::BlockComment:
            case CtcLangParser::LineComment: {
                enterOuterAlt(_localctx, 4);
                setState(1378);
                _errHandler->sync(this);
                alt = 1;
                do
                {
                    switch (alt)
                    {
                        case 1: {
                            setState(1377);
                            _la = _input->LA(1);
                            if (_la == 0 || _la == Token::EOF ||
                                (((((_la - 85) & ~0x3fULL) == 0) &&
                                  ((1ULL << (_la - 85)) & 63) != 0)))
                            {
                                _errHandler->recoverInline(this);
                            }
                            else
                            {
                                _errHandler->reportMatch(this);
                                consume();
                            }
                            break;
                        }

                        default:
                            throw NoViableAltException(this);
                    }
                    setState(1380);
                    _errHandler->sync(this);
                    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156,
                                                                                     _ctx);
                } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitDeclaratorListContext
//------------------------------------------------------------------

CtcLangParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::InitDeclaratorContext *> CtcLangParser::InitDeclaratorListContext::
    initDeclarator()
{
    return getRuleContexts<CtcLangParser::InitDeclaratorContext>();
}

CtcLangParser::InitDeclaratorContext *CtcLangParser::InitDeclaratorListContext::initDeclarator(
    size_t i)
{
    return getRuleContext<CtcLangParser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::InitDeclaratorListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::InitDeclaratorListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::InitDeclaratorListContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitDeclaratorList;
}

std::any CtcLangParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitDeclaratorList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitDeclaratorListContext *CtcLangParser::initDeclaratorList()
{
    InitDeclaratorListContext *_localctx =
        _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
    enterRule(_localctx, 222, CtcLangParser::RuleInitDeclaratorList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1384);
        initDeclarator();
        setState(1389);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1385);
            match(CtcLangParser::Comma);
            setState(1386);
            initDeclarator();
            setState(1391);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratorContext *CtcLangParser::InitDeclaratorContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::InitializerContext *CtcLangParser::InitDeclaratorContext::initializer()
{
    return getRuleContext<CtcLangParser::InitializerContext>(0);
}

size_t CtcLangParser::InitDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitDeclarator;
}

std::any CtcLangParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitDeclaratorContext *CtcLangParser::initDeclarator()
{
    InitDeclaratorContext *_localctx =
        _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 224, CtcLangParser::RuleInitDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1392);
        declarator();
        setState(1394);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 85) & ~0x3fULL) == 0) && ((1ULL << (_la - 85)) & 65553) != 0))
        {
            setState(1393);
            initializer();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclaratorContext
//------------------------------------------------------------------

CtcLangParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PointerDeclaratorContext *CtcLangParser::DeclaratorContext::pointerDeclarator()
{
    return getRuleContext<CtcLangParser::PointerDeclaratorContext>(0);
}

CtcLangParser::NoPointerDeclaratorContext *CtcLangParser::DeclaratorContext::noPointerDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerDeclaratorContext>(0);
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::DeclaratorContext::
    parametersAndQualifiers()
{
    return getRuleContext<CtcLangParser::ParametersAndQualifiersContext>(0);
}

CtcLangParser::TrailingReturnTypeContext *CtcLangParser::DeclaratorContext::trailingReturnType()
{
    return getRuleContext<CtcLangParser::TrailingReturnTypeContext>(0);
}

size_t CtcLangParser::DeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclarator;
}

std::any CtcLangParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclaratorContext *CtcLangParser::declarator()
{
    DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 226, CtcLangParser::RuleDeclarator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1401);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1396);
                pointerDeclarator();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1397);
                noPointerDeclarator(0);
                setState(1398);
                parametersAndQualifiers();
                setState(1399);
                trailingReturnType();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PointerDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::PointerDeclaratorContext::PointerDeclaratorContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::NoPointerDeclaratorContext *CtcLangParser::PointerDeclaratorContext::
    noPointerDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerDeclaratorContext>(0);
}

std::vector<CtcLangParser::PointerOperatorContext *> CtcLangParser::PointerDeclaratorContext::
    pointerOperator()
{
    return getRuleContexts<CtcLangParser::PointerOperatorContext>();
}

CtcLangParser::PointerOperatorContext *CtcLangParser::PointerDeclaratorContext::pointerOperator(
    size_t i)
{
    return getRuleContext<CtcLangParser::PointerOperatorContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::PointerDeclaratorContext::Const()
{
    return getTokens(CtcLangParser::Const);
}

tree::TerminalNode *CtcLangParser::PointerDeclaratorContext::Const(size_t i)
{
    return getToken(CtcLangParser::Const, i);
}

size_t CtcLangParser::PointerDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RulePointerDeclarator;
}

std::any CtcLangParser::PointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPointerDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PointerDeclaratorContext *CtcLangParser::pointerDeclarator()
{
    PointerDeclaratorContext *_localctx =
        _tracker.createInstance<PointerDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 228, CtcLangParser::RulePointerDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1409);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(1403);
                pointerOperator();
                setState(1405);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Const)
                {
                    setState(1404);
                    match(CtcLangParser::Const);
                }
            }
            setState(1411);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
        }
        setState(1412);
        noPointerDeclarator(0);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoPointerDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::NoPointerDeclaratorContext::NoPointerDeclaratorContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratoridContext *CtcLangParser::NoPointerDeclaratorContext::declaratorid()
{
    return getRuleContext<CtcLangParser::DeclaratoridContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::NoPointerDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerDeclaratorContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::PointerDeclaratorContext *CtcLangParser::NoPointerDeclaratorContext::
    pointerDeclarator()
{
    return getRuleContext<CtcLangParser::PointerDeclaratorContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerDeclaratorContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::NoPointerDeclaratorContext *CtcLangParser::NoPointerDeclaratorContext::
    noPointerDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerDeclaratorContext>(0);
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::NoPointerDeclaratorContext::
    parametersAndQualifiers()
{
    return getRuleContext<CtcLangParser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerDeclaratorContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::NoPointerDeclaratorContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::NoPointerDeclaratorContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

size_t CtcLangParser::NoPointerDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoPointerDeclarator;
}

std::any CtcLangParser::NoPointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoPointerDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoPointerDeclaratorContext *CtcLangParser::noPointerDeclarator()
{
    return noPointerDeclarator(0);
}

CtcLangParser::NoPointerDeclaratorContext *CtcLangParser::noPointerDeclarator(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::NoPointerDeclaratorContext *_localctx =
        _tracker.createInstance<NoPointerDeclaratorContext>(_ctx, parentState);
    CtcLangParser::NoPointerDeclaratorContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 230;
    enterRecursionRule(_localctx, 230, CtcLangParser::RuleNoPointerDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1423);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Decltype:
            case CtcLangParser::Operator:
            case CtcLangParser::Tilde:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Ellipsis:
            case CtcLangParser::Identifier: {
                setState(1415);
                declaratorid();
                setState(1417);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx))
                {
                    case 1: {
                        setState(1416);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::LeftParen: {
                setState(1419);
                match(CtcLangParser::LeftParen);
                setState(1420);
                pointerDeclarator();
                setState(1421);
                match(CtcLangParser::RightParen);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
        _ctx->stop = _input->LT(-1);
        setState(1439);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx =
                    _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
                setState(1425);

                if (!(precpred(_ctx, 2)))
                    throw FailedPredicateException(this, "precpred(_ctx, 2)");
                setState(1435);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::LeftParen: {
                        setState(1426);
                        parametersAndQualifiers();
                        break;
                    }

                    case CtcLangParser::LeftBracket: {
                        setState(1427);
                        match(CtcLangParser::LeftBracket);
                        setState(1429);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237192068129) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(1428);
                            constantExpression();
                        }
                        setState(1431);
                        match(CtcLangParser::RightBracket);
                        setState(1433);
                        _errHandler->sync(this);

                        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(
                            _input, 166, _ctx))
                        {
                            case 1: {
                                setState(1432);
                                attributeSpecifierSeq();
                                break;
                            }

                            default:
                                break;
                        }
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
            }
            setState(1441);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- ParametersAndQualifiersContext
//------------------------------------------------------------------

CtcLangParser::ParametersAndQualifiersContext::ParametersAndQualifiersContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ParametersAndQualifiersContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::ParametersAndQualifiersContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::ParameterDeclarationClauseContext *CtcLangParser::ParametersAndQualifiersContext::
    parameterDeclarationClause()
{
    return getRuleContext<CtcLangParser::ParameterDeclarationClauseContext>(0);
}

CtcLangParser::CvqualifierseqContext *CtcLangParser::ParametersAndQualifiersContext::
    cvqualifierseq()
{
    return getRuleContext<CtcLangParser::CvqualifierseqContext>(0);
}

CtcLangParser::RefqualifierContext *CtcLangParser::ParametersAndQualifiersContext::refqualifier()
{
    return getRuleContext<CtcLangParser::RefqualifierContext>(0);
}

CtcLangParser::ExceptionSpecificationContext *CtcLangParser::ParametersAndQualifiersContext::
    exceptionSpecification()
{
    return getRuleContext<CtcLangParser::ExceptionSpecificationContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ParametersAndQualifiersContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::ParametersAndQualifiersContext::getRuleIndex() const
{
    return CtcLangParser::RuleParametersAndQualifiers;
}

std::any CtcLangParser::ParametersAndQualifiersContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitParametersAndQualifiers(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::parametersAndQualifiers()
{
    ParametersAndQualifiersContext *_localctx =
        _tracker.createInstance<ParametersAndQualifiersContext>(_ctx, getState());
    enterRule(_localctx, 232, CtcLangParser::RuleParametersAndQualifiers);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1442);
        match(CtcLangParser::LeftParen);
        setState(1444);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 5069347257363758641) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 37154696925807739) != 0))
        {
            setState(1443);
            parameterDeclarationClause();
        }
        setState(1446);
        match(CtcLangParser::RightParen);
        setState(1448);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx))
        {
            case 1: {
                setState(1447);
                cvqualifierseq();
                break;
            }

            default:
                break;
        }
        setState(1451);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx))
        {
            case 1: {
                setState(1450);
                refqualifier();
                break;
            }

            default:
                break;
        }
        setState(1454);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx))
        {
            case 1: {
                setState(1453);
                exceptionSpecification();
                break;
            }

            default:
                break;
        }
        setState(1457);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx))
        {
            case 1: {
                setState(1456);
                attributeSpecifierSeq();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TrailingReturnTypeContext
//------------------------------------------------------------------

CtcLangParser::TrailingReturnTypeContext::TrailingReturnTypeContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TrailingReturnTypeContext::Arrow()
{
    return getToken(CtcLangParser::Arrow, 0);
}

CtcLangParser::TrailingTypeSpecifierSeqContext *CtcLangParser::TrailingReturnTypeContext::
    trailingTypeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TrailingTypeSpecifierSeqContext>(0);
}

CtcLangParser::AbstractDeclaratorContext *CtcLangParser::TrailingReturnTypeContext::
    abstractDeclarator()
{
    return getRuleContext<CtcLangParser::AbstractDeclaratorContext>(0);
}

size_t CtcLangParser::TrailingReturnTypeContext::getRuleIndex() const
{
    return CtcLangParser::RuleTrailingReturnType;
}

std::any CtcLangParser::TrailingReturnTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTrailingReturnType(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TrailingReturnTypeContext *CtcLangParser::trailingReturnType()
{
    TrailingReturnTypeContext *_localctx =
        _tracker.createInstance<TrailingReturnTypeContext>(_ctx, getState());
    enterRule(_localctx, 234, CtcLangParser::RuleTrailingReturnType);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1459);
        match(CtcLangParser::Arrow);
        setState(1460);
        trailingTypeSpecifierSeq();
        setState(1462);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx))
        {
            case 1: {
                setState(1461);
                abstractDeclarator();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PointerOperatorContext
//------------------------------------------------------------------

CtcLangParser::PointerOperatorContext::PointerOperatorContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::PointerOperatorContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::PointerOperatorContext::AndAnd()
{
    return getToken(CtcLangParser::AndAnd, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::PointerOperatorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::PointerOperatorContext::Star()
{
    return getToken(CtcLangParser::Star, 0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::PointerOperatorContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

CtcLangParser::CvqualifierseqContext *CtcLangParser::PointerOperatorContext::cvqualifierseq()
{
    return getRuleContext<CtcLangParser::CvqualifierseqContext>(0);
}

size_t CtcLangParser::PointerOperatorContext::getRuleIndex() const
{
    return CtcLangParser::RulePointerOperator;
}

std::any CtcLangParser::PointerOperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPointerOperator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PointerOperatorContext *CtcLangParser::pointerOperator()
{
    PointerOperatorContext *_localctx =
        _tracker.createInstance<PointerOperatorContext>(_ctx, getState());
    enterRule(_localctx, 236, CtcLangParser::RulePointerOperator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1478);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::And:
            case CtcLangParser::AndAnd: {
                enterOuterAlt(_localctx, 1);
                setState(1464);
                _la = _input->LA(1);
                if (!(_la == CtcLangParser::And

                      || _la == CtcLangParser::AndAnd))
                {
                    _errHandler->recoverInline(this);
                }
                else
                {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(1466);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx))
                {
                    case 1: {
                        setState(1465);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::Decltype:
            case CtcLangParser::Star:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 2);
                setState(1469);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Decltype || _la == CtcLangParser::Doublecolon

                    || _la == CtcLangParser::Identifier)
                {
                    setState(1468);
                    nestedNameSpecifier(0);
                }
                setState(1471);
                match(CtcLangParser::Star);
                setState(1473);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx))
                {
                    case 1: {
                        setState(1472);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1476);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx))
                {
                    case 1: {
                        setState(1475);
                        cvqualifierseq();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CvqualifierseqContext
//------------------------------------------------------------------

CtcLangParser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::CvQualifierContext *> CtcLangParser::CvqualifierseqContext::cvQualifier()
{
    return getRuleContexts<CtcLangParser::CvQualifierContext>();
}

CtcLangParser::CvQualifierContext *CtcLangParser::CvqualifierseqContext::cvQualifier(size_t i)
{
    return getRuleContext<CtcLangParser::CvQualifierContext>(i);
}

size_t CtcLangParser::CvqualifierseqContext::getRuleIndex() const
{
    return CtcLangParser::RuleCvqualifierseq;
}

std::any CtcLangParser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCvqualifierseq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CvqualifierseqContext *CtcLangParser::cvqualifierseq()
{
    CvqualifierseqContext *_localctx =
        _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
    enterRule(_localctx, 238, CtcLangParser::RuleCvqualifierseq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1481);
        _errHandler->sync(this);
        alt = 1;
        do
        {
            switch (alt)
            {
                case 1: {
                    setState(1480);
                    cvQualifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1483);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CvQualifierContext
//------------------------------------------------------------------

CtcLangParser::CvQualifierContext::CvQualifierContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::CvQualifierContext::Const()
{
    return getToken(CtcLangParser::Const, 0);
}

tree::TerminalNode *CtcLangParser::CvQualifierContext::Volatile()
{
    return getToken(CtcLangParser::Volatile, 0);
}

size_t CtcLangParser::CvQualifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleCvQualifier;
}

std::any CtcLangParser::CvQualifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitCvQualifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::CvQualifierContext *CtcLangParser::cvQualifier()
{
    CvQualifierContext *_localctx = _tracker.createInstance<CvQualifierContext>(_ctx, getState());
    enterRule(_localctx, 240, CtcLangParser::RuleCvQualifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1485);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::Const

              || _la == CtcLangParser::Volatile))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RefqualifierContext
//------------------------------------------------------------------

CtcLangParser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::RefqualifierContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::RefqualifierContext::AndAnd()
{
    return getToken(CtcLangParser::AndAnd, 0);
}

size_t CtcLangParser::RefqualifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleRefqualifier;
}

std::any CtcLangParser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRefqualifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RefqualifierContext *CtcLangParser::refqualifier()
{
    RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
    enterRule(_localctx, 242, CtcLangParser::RuleRefqualifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1487);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::And

              || _la == CtcLangParser::AndAnd))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DeclaratoridContext
//------------------------------------------------------------------

CtcLangParser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::IdExpressionContext *CtcLangParser::DeclaratoridContext::idExpression()
{
    return getRuleContext<CtcLangParser::IdExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::DeclaratoridContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

size_t CtcLangParser::DeclaratoridContext::getRuleIndex() const
{
    return CtcLangParser::RuleDeclaratorid;
}

std::any CtcLangParser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDeclaratorid(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DeclaratoridContext *CtcLangParser::declaratorid()
{
    DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
    enterRule(_localctx, 244, CtcLangParser::RuleDeclaratorid);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1490);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1489);
            match(CtcLangParser::Ellipsis);
        }
        setState(1492);
        idExpression();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TheTypeIdContext
//------------------------------------------------------------------

CtcLangParser::TheTypeIdContext::TheTypeIdContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::TheTypeIdContext::typeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TypeSpecifierSeqContext>(0);
}

CtcLangParser::AbstractDeclaratorContext *CtcLangParser::TheTypeIdContext::abstractDeclarator()
{
    return getRuleContext<CtcLangParser::AbstractDeclaratorContext>(0);
}

size_t CtcLangParser::TheTypeIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleTheTypeId;
}

std::any CtcLangParser::TheTypeIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTheTypeId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::theTypeId()
{
    TheTypeIdContext *_localctx = _tracker.createInstance<TheTypeIdContext>(_ctx, getState());
    enterRule(_localctx, 246, CtcLangParser::RuleTheTypeId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1494);
        typeSpecifierSeq();
        setState(1496);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx))
        {
            case 1: {
                setState(1495);
                abstractDeclarator();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AbstractDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PointerAbstractDeclaratorContext *CtcLangParser::AbstractDeclaratorContext::
    pointerAbstractDeclarator()
{
    return getRuleContext<CtcLangParser::PointerAbstractDeclaratorContext>(0);
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::AbstractDeclaratorContext::
    parametersAndQualifiers()
{
    return getRuleContext<CtcLangParser::ParametersAndQualifiersContext>(0);
}

CtcLangParser::TrailingReturnTypeContext *CtcLangParser::AbstractDeclaratorContext::
    trailingReturnType()
{
    return getRuleContext<CtcLangParser::TrailingReturnTypeContext>(0);
}

CtcLangParser::NoPointerAbstractDeclaratorContext *CtcLangParser::AbstractDeclaratorContext::
    noPointerAbstractDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerAbstractDeclaratorContext>(0);
}

CtcLangParser::AbstractPackDeclaratorContext *CtcLangParser::AbstractDeclaratorContext::
    abstractPackDeclarator()
{
    return getRuleContext<CtcLangParser::AbstractPackDeclaratorContext>(0);
}

size_t CtcLangParser::AbstractDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleAbstractDeclarator;
}

std::any CtcLangParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAbstractDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AbstractDeclaratorContext *CtcLangParser::abstractDeclarator()
{
    AbstractDeclaratorContext *_localctx =
        _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 248, CtcLangParser::RuleAbstractDeclarator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1506);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1498);
                pointerAbstractDeclarator();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1500);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx))
                {
                    case 1: {
                        setState(1499);
                        noPointerAbstractDeclarator(0);
                        break;
                    }

                    default:
                        break;
                }
                setState(1502);
                parametersAndQualifiers();
                setState(1503);
                trailingReturnType();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1505);
                abstractPackDeclarator();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PointerAbstractDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::PointerAbstractDeclaratorContext::PointerAbstractDeclaratorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::NoPointerAbstractDeclaratorContext *CtcLangParser::PointerAbstractDeclaratorContext::
    noPointerAbstractDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerAbstractDeclaratorContext>(0);
}

std::vector<CtcLangParser::PointerOperatorContext *> CtcLangParser::
    PointerAbstractDeclaratorContext::pointerOperator()
{
    return getRuleContexts<CtcLangParser::PointerOperatorContext>();
}

CtcLangParser::PointerOperatorContext *CtcLangParser::PointerAbstractDeclaratorContext::
    pointerOperator(size_t i)
{
    return getRuleContext<CtcLangParser::PointerOperatorContext>(i);
}

size_t CtcLangParser::PointerAbstractDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RulePointerAbstractDeclarator;
}

std::any CtcLangParser::PointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPointerAbstractDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PointerAbstractDeclaratorContext *CtcLangParser::pointerAbstractDeclarator()
{
    PointerAbstractDeclaratorContext *_localctx =
        _tracker.createInstance<PointerAbstractDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 250, CtcLangParser::RulePointerAbstractDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1517);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftParen:
            case CtcLangParser::LeftBracket: {
                enterOuterAlt(_localctx, 1);
                setState(1508);
                noPointerAbstractDeclarator(0);
                break;
            }

            case CtcLangParser::Decltype:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::AndAnd:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 2);
                setState(1510);
                _errHandler->sync(this);
                _la = _input->LA(1);
                do
                {
                    setState(1509);
                    pointerOperator();
                    setState(1512);
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                } while (
                    _la == CtcLangParser::Decltype ||
                    ((((_la - 93) & ~0x3fULL) == 0) && ((1ULL << (_la - 93)) & 566969237521) != 0));
                setState(1515);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx))
                {
                    case 1: {
                        setState(1514);
                        noPointerAbstractDeclarator(0);
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoPointerAbstractDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::NoPointerAbstractDeclaratorContext::NoPointerAbstractDeclaratorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::NoPointerAbstractDeclaratorContext::
    parametersAndQualifiers()
{
    return getRuleContext<CtcLangParser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractDeclaratorContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractDeclaratorContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::NoPointerAbstractDeclaratorContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::NoPointerAbstractDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractDeclaratorContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::PointerAbstractDeclaratorContext *CtcLangParser::NoPointerAbstractDeclaratorContext::
    pointerAbstractDeclarator()
{
    return getRuleContext<CtcLangParser::PointerAbstractDeclaratorContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractDeclaratorContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

std::vector<CtcLangParser::NoPointerAbstractDeclaratorContext *> CtcLangParser::
    NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator()
{
    return getRuleContexts<CtcLangParser::NoPointerAbstractDeclaratorContext>();
}

CtcLangParser::NoPointerAbstractDeclaratorContext *CtcLangParser::
    NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator(size_t i)
{
    return getRuleContext<CtcLangParser::NoPointerAbstractDeclaratorContext>(i);
}

size_t CtcLangParser::NoPointerAbstractDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoPointerAbstractDeclarator;
}

std::any CtcLangParser::NoPointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoPointerAbstractDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoPointerAbstractDeclaratorContext *CtcLangParser::noPointerAbstractDeclarator()
{
    return noPointerAbstractDeclarator(0);
}

CtcLangParser::NoPointerAbstractDeclaratorContext *CtcLangParser::noPointerAbstractDeclarator(
    int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::NoPointerAbstractDeclaratorContext *_localctx =
        _tracker.createInstance<NoPointerAbstractDeclaratorContext>(_ctx, parentState);
    CtcLangParser::NoPointerAbstractDeclaratorContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 252;
    enterRecursionRule(_localctx, 252, CtcLangParser::RuleNoPointerAbstractDeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1533);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx))
        {
            case 1: {
                setState(1520);
                parametersAndQualifiers();
                break;
            }

            case 2: {
                setState(1521);
                match(CtcLangParser::LeftBracket);
                setState(1523);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
                    ((((_la - 66) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 66)) & 2359886237192068129) != 0) ||
                    _la == CtcLangParser::Identifier)
                {
                    setState(1522);
                    constantExpression();
                }
                setState(1525);
                match(CtcLangParser::RightBracket);
                setState(1527);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx))
                {
                    case 1: {
                        setState(1526);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case 3: {
                setState(1529);
                match(CtcLangParser::LeftParen);
                setState(1530);
                pointerAbstractDeclarator();
                setState(1531);
                match(CtcLangParser::RightParen);
                break;
            }

            default:
                break;
        }
        _ctx->stop = _input->LT(-1);
        setState(1550);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(
                    parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
                setState(1535);

                if (!(precpred(_ctx, 4)))
                    throw FailedPredicateException(this, "precpred(_ctx, 4)");
                setState(1546);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx))
                {
                    case 1: {
                        setState(1536);
                        parametersAndQualifiers();
                        break;
                    }

                    case 2: {
                        setState(1537);
                        noPointerAbstractDeclarator(0);
                        setState(1538);
                        match(CtcLangParser::LeftBracket);
                        setState(1540);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237192068129) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(1539);
                            constantExpression();
                        }
                        setState(1542);
                        match(CtcLangParser::RightBracket);
                        setState(1544);
                        _errHandler->sync(this);

                        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(
                            _input, 192, _ctx))
                        {
                            case 1: {
                                setState(1543);
                                attributeSpecifierSeq();
                                break;
                            }

                            default:
                                break;
                        }
                        break;
                    }

                    default:
                        break;
                }
            }
            setState(1552);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- AbstractPackDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::AbstractPackDeclaratorContext::AbstractPackDeclaratorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::NoPointerAbstractPackDeclaratorContext *CtcLangParser::
    AbstractPackDeclaratorContext::noPointerAbstractPackDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerAbstractPackDeclaratorContext>(0);
}

std::vector<CtcLangParser::PointerOperatorContext *> CtcLangParser::AbstractPackDeclaratorContext::
    pointerOperator()
{
    return getRuleContexts<CtcLangParser::PointerOperatorContext>();
}

CtcLangParser::PointerOperatorContext *CtcLangParser::AbstractPackDeclaratorContext::
    pointerOperator(size_t i)
{
    return getRuleContext<CtcLangParser::PointerOperatorContext>(i);
}

size_t CtcLangParser::AbstractPackDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleAbstractPackDeclarator;
}

std::any CtcLangParser::AbstractPackDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAbstractPackDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AbstractPackDeclaratorContext *CtcLangParser::abstractPackDeclarator()
{
    AbstractPackDeclaratorContext *_localctx =
        _tracker.createInstance<AbstractPackDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 254, CtcLangParser::RuleAbstractPackDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1556);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Decltype ||
               ((((_la - 93) & ~0x3fULL) == 0) && ((1ULL << (_la - 93)) & 566969237521) != 0))
        {
            setState(1553);
            pointerOperator();
            setState(1558);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1559);
        noPointerAbstractPackDeclarator(0);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoPointerAbstractPackDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::NoPointerAbstractPackDeclaratorContext::NoPointerAbstractPackDeclaratorContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractPackDeclaratorContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

CtcLangParser::NoPointerAbstractPackDeclaratorContext *CtcLangParser::
    NoPointerAbstractPackDeclaratorContext::noPointerAbstractPackDeclarator()
{
    return getRuleContext<CtcLangParser::NoPointerAbstractPackDeclaratorContext>(0);
}

CtcLangParser::ParametersAndQualifiersContext *CtcLangParser::
    NoPointerAbstractPackDeclaratorContext::parametersAndQualifiers()
{
    return getRuleContext<CtcLangParser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractPackDeclaratorContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::NoPointerAbstractPackDeclaratorContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::NoPointerAbstractPackDeclaratorContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::NoPointerAbstractPackDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::NoPointerAbstractPackDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoPointerAbstractPackDeclarator;
}

std::any CtcLangParser::NoPointerAbstractPackDeclaratorContext::accept(
    tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoPointerAbstractPackDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoPointerAbstractPackDeclaratorContext *CtcLangParser::
    noPointerAbstractPackDeclarator()
{
    return noPointerAbstractPackDeclarator(0);
}

CtcLangParser::NoPointerAbstractPackDeclaratorContext *CtcLangParser::
    noPointerAbstractPackDeclarator(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    CtcLangParser::NoPointerAbstractPackDeclaratorContext *_localctx =
        _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(_ctx, parentState);
    CtcLangParser::NoPointerAbstractPackDeclaratorContext *previousContext = _localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 256;
    enterRecursionRule(_localctx, 256, CtcLangParser::RuleNoPointerAbstractPackDeclarator,
                       precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1562);
        match(CtcLangParser::Ellipsis);
        _ctx->stop = _input->LT(-1);
        setState(1578);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(
                    parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
                setState(1564);

                if (!(precpred(_ctx, 2)))
                    throw FailedPredicateException(this, "precpred(_ctx, 2)");
                setState(1574);
                _errHandler->sync(this);
                switch (_input->LA(1))
                {
                    case CtcLangParser::LeftParen: {
                        setState(1565);
                        parametersAndQualifiers();
                        break;
                    }

                    case CtcLangParser::LeftBracket: {
                        setState(1566);
                        match(CtcLangParser::LeftBracket);
                        setState(1568);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if ((((_la & ~0x3fULL) == 0) &&
                             ((1ULL << _la) & -1716784038347749122) != 0) ||
                            ((((_la - 66) & ~0x3fULL) == 0) &&
                             ((1ULL << (_la - 66)) & 2359886237192068129) != 0) ||
                            _la == CtcLangParser::Identifier)
                        {
                            setState(1567);
                            constantExpression();
                        }
                        setState(1570);
                        match(CtcLangParser::RightBracket);
                        setState(1572);
                        _errHandler->sync(this);

                        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(
                            _input, 197, _ctx))
                        {
                            case 1: {
                                setState(1571);
                                attributeSpecifierSeq();
                                break;
                            }

                            default:
                                break;
                        }
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                }
            }
            setState(1580);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- ParameterDeclarationClauseContext
//------------------------------------------------------------------

CtcLangParser::ParameterDeclarationClauseContext::ParameterDeclarationClauseContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ParameterDeclarationListContext *CtcLangParser::ParameterDeclarationClauseContext::
    parameterDeclarationList()
{
    return getRuleContext<CtcLangParser::ParameterDeclarationListContext>(0);
}

tree::TerminalNode *CtcLangParser::ParameterDeclarationClauseContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

tree::TerminalNode *CtcLangParser::ParameterDeclarationClauseContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

size_t CtcLangParser::ParameterDeclarationClauseContext::getRuleIndex() const
{
    return CtcLangParser::RuleParameterDeclarationClause;
}

std::any CtcLangParser::ParameterDeclarationClauseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitParameterDeclarationClause(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ParameterDeclarationClauseContext *CtcLangParser::parameterDeclarationClause()
{
    ParameterDeclarationClauseContext *_localctx =
        _tracker.createInstance<ParameterDeclarationClauseContext>(_ctx, getState());
    enterRule(_localctx, 258, CtcLangParser::RuleParameterDeclarationClause);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1581);
        parameterDeclarationList();
        setState(1586);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Comma

            || _la == CtcLangParser::Ellipsis)
        {
            setState(1583);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Comma)
            {
                setState(1582);
                match(CtcLangParser::Comma);
            }
            setState(1585);
            match(CtcLangParser::Ellipsis);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ParameterDeclarationListContext
//------------------------------------------------------------------

CtcLangParser::ParameterDeclarationListContext::ParameterDeclarationListContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::ParameterDeclarationContext *> CtcLangParser::
    ParameterDeclarationListContext::parameterDeclaration()
{
    return getRuleContexts<CtcLangParser::ParameterDeclarationContext>();
}

CtcLangParser::ParameterDeclarationContext *CtcLangParser::ParameterDeclarationListContext::
    parameterDeclaration(size_t i)
{
    return getRuleContext<CtcLangParser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::ParameterDeclarationListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::ParameterDeclarationListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::ParameterDeclarationListContext::getRuleIndex() const
{
    return CtcLangParser::RuleParameterDeclarationList;
}

std::any CtcLangParser::ParameterDeclarationListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitParameterDeclarationList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ParameterDeclarationListContext *CtcLangParser::parameterDeclarationList()
{
    ParameterDeclarationListContext *_localctx =
        _tracker.createInstance<ParameterDeclarationListContext>(_ctx, getState());
    enterRule(_localctx, 260, CtcLangParser::RuleParameterDeclarationList);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1588);
        parameterDeclaration();
        setState(1593);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(1589);
                match(CtcLangParser::Comma);
                setState(1590);
                parameterDeclaration();
            }
            setState(1595);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ParameterDeclarationContext
//------------------------------------------------------------------

CtcLangParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::ParameterDeclarationContext::
    declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::DeclaratorContext *CtcLangParser::ParameterDeclarationContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ParameterDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode *CtcLangParser::ParameterDeclarationContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::ParameterDeclarationContext::
    initializerClause()
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(0);
}

CtcLangParser::AbstractDeclaratorContext *CtcLangParser::ParameterDeclarationContext::
    abstractDeclarator()
{
    return getRuleContext<CtcLangParser::AbstractDeclaratorContext>(0);
}

size_t CtcLangParser::ParameterDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleParameterDeclaration;
}

std::any CtcLangParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitParameterDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ParameterDeclarationContext *CtcLangParser::parameterDeclaration()
{
    ParameterDeclarationContext *_localctx =
        _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 262, CtcLangParser::RuleParameterDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1597);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1596);
            attributeSpecifierSeq();
        }
        setState(1599);
        declSpecifierSeq();
        setState(1604);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx))
        {
            case 1: {
                setState(1600);
                declarator();
                break;
            }

            case 2: {
                setState(1602);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx))
                {
                    case 1: {
                        setState(1601);
                        abstractDeclarator();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            default:
                break;
        }
        setState(1608);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Assign)
        {
            setState(1606);
            match(CtcLangParser::Assign);
            setState(1607);
            initializerClause();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FunctionDefinitionContext
//------------------------------------------------------------------

CtcLangParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratorContext *CtcLangParser::FunctionDefinitionContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::FunctionBodyContext *CtcLangParser::FunctionDefinitionContext::functionBody()
{
    return getRuleContext<CtcLangParser::FunctionBodyContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::FunctionDefinitionContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::FunctionDefinitionContext::declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

size_t CtcLangParser::FunctionDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleFunctionDefinition;
}

std::any CtcLangParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitFunctionDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::FunctionDefinitionContext *CtcLangParser::functionDefinition()
{
    FunctionDefinitionContext *_localctx =
        _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 264, CtcLangParser::RuleFunctionDefinition);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1611);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1610);
            attributeSpecifierSeq();
        }
        setState(1614);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx))
        {
            case 1: {
                setState(1613);
                declSpecifierSeq();
                break;
            }

            default:
                break;
        }
        setState(1616);
        declarator();
        setState(1617);
        functionBody();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FunctionBodyContext
//------------------------------------------------------------------

CtcLangParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::CompoundStatementContext *CtcLangParser::FunctionBodyContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

CtcLangParser::ConstructorInitializerContext *CtcLangParser::FunctionBodyContext::
    constructorInitializer()
{
    return getRuleContext<CtcLangParser::ConstructorInitializerContext>(0);
}

CtcLangParser::FunctionTryBlockContext *CtcLangParser::FunctionBodyContext::functionTryBlock()
{
    return getRuleContext<CtcLangParser::FunctionTryBlockContext>(0);
}

tree::TerminalNode *CtcLangParser::FunctionBodyContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

tree::TerminalNode *CtcLangParser::FunctionBodyContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

tree::TerminalNode *CtcLangParser::FunctionBodyContext::Default()
{
    return getToken(CtcLangParser::Default, 0);
}

tree::TerminalNode *CtcLangParser::FunctionBodyContext::Delete()
{
    return getToken(CtcLangParser::Delete, 0);
}

size_t CtcLangParser::FunctionBodyContext::getRuleIndex() const
{
    return CtcLangParser::RuleFunctionBody;
}

std::any CtcLangParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitFunctionBody(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::FunctionBodyContext *CtcLangParser::functionBody()
{
    FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
    enterRule(_localctx, 266, CtcLangParser::RuleFunctionBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1627);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftBrace:
            case CtcLangParser::Colon: {
                enterOuterAlt(_localctx, 1);
                setState(1620);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Colon)
                {
                    setState(1619);
                    constructorInitializer();
                }
                setState(1622);
                compoundStatement();
                break;
            }

            case CtcLangParser::Try: {
                enterOuterAlt(_localctx, 2);
                setState(1623);
                functionTryBlock();
                break;
            }

            case CtcLangParser::Assign: {
                enterOuterAlt(_localctx, 3);
                setState(1624);
                match(CtcLangParser::Assign);
                setState(1625);
                _la = _input->LA(1);
                if (!(_la == CtcLangParser::Default

                      || _la == CtcLangParser::Delete))
                {
                    _errHandler->recoverInline(this);
                }
                else
                {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(1626);
                match(CtcLangParser::Semi);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitializerContext
//------------------------------------------------------------------

CtcLangParser::InitializerContext::InitializerContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::BraceOrEqualInitializerContext *CtcLangParser::InitializerContext::
    braceOrEqualInitializer()
{
    return getRuleContext<CtcLangParser::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode *CtcLangParser::InitializerContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ExpressionListContext *CtcLangParser::InitializerContext::expressionList()
{
    return getRuleContext<CtcLangParser::ExpressionListContext>(0);
}

tree::TerminalNode *CtcLangParser::InitializerContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

size_t CtcLangParser::InitializerContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitializer;
}

std::any CtcLangParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitializer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitializerContext *CtcLangParser::initializer()
{
    InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
    enterRule(_localctx, 268, CtcLangParser::RuleInitializer);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1634);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftBrace:
            case CtcLangParser::Assign: {
                enterOuterAlt(_localctx, 1);
                setState(1629);
                braceOrEqualInitializer();
                break;
            }

            case CtcLangParser::LeftParen: {
                enterOuterAlt(_localctx, 2);
                setState(1630);
                match(CtcLangParser::LeftParen);
                setState(1631);
                expressionList();
                setState(1632);
                match(CtcLangParser::RightParen);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BraceOrEqualInitializerContext
//------------------------------------------------------------------

CtcLangParser::BraceOrEqualInitializerContext::BraceOrEqualInitializerContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::BraceOrEqualInitializerContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::BraceOrEqualInitializerContext::
    initializerClause()
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::BraceOrEqualInitializerContext::
    bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

size_t CtcLangParser::BraceOrEqualInitializerContext::getRuleIndex() const
{
    return CtcLangParser::RuleBraceOrEqualInitializer;
}

std::any CtcLangParser::BraceOrEqualInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBraceOrEqualInitializer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BraceOrEqualInitializerContext *CtcLangParser::braceOrEqualInitializer()
{
    BraceOrEqualInitializerContext *_localctx =
        _tracker.createInstance<BraceOrEqualInitializerContext>(_ctx, getState());
    enterRule(_localctx, 270, CtcLangParser::RuleBraceOrEqualInitializer);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1639);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Assign: {
                enterOuterAlt(_localctx, 1);
                setState(1636);
                match(CtcLangParser::Assign);
                setState(1637);
                initializerClause();
                break;
            }

            case CtcLangParser::LeftBrace: {
                enterOuterAlt(_localctx, 2);
                setState(1638);
                bracedInitList();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitializerClauseContext
//------------------------------------------------------------------

CtcLangParser::InitializerClauseContext::InitializerClauseContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::AssignmentExpressionContext *CtcLangParser::InitializerClauseContext::
    assignmentExpression()
{
    return getRuleContext<CtcLangParser::AssignmentExpressionContext>(0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::InitializerClauseContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

size_t CtcLangParser::InitializerClauseContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitializerClause;
}

std::any CtcLangParser::InitializerClauseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitializerClause(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::initializerClause()
{
    InitializerClauseContext *_localctx =
        _tracker.createInstance<InitializerClauseContext>(_ctx, getState());
    enterRule(_localctx, 272, CtcLangParser::RuleInitializerClause);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1643);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::IntegerLiteral:
            case CtcLangParser::CharacterLiteral:
            case CtcLangParser::FloatingLiteral:
            case CtcLangParser::StringLiteral:
            case CtcLangParser::BooleanLiteral:
            case CtcLangParser::PointerLiteral:
            case CtcLangParser::UserDefinedLiteral:
            case CtcLangParser::Alignof:
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Const_cast:
            case CtcLangParser::Bit_cast:
            case CtcLangParser::Decltype:
            case CtcLangParser::Delete:
            case CtcLangParser::Double:
            case CtcLangParser::Dynamic_cast:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::New:
            case CtcLangParser::Noexcept:
            case CtcLangParser::Operator:
            case CtcLangParser::Reinterpret_cast:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Sizeof:
            case CtcLangParser::Static_cast:
            case CtcLangParser::This:
            case CtcLangParser::Throw:
            case CtcLangParser::Typeid_:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Wchar:
            case CtcLangParser::LeftParen:
            case CtcLangParser::LeftBracket:
            case CtcLangParser::Plus:
            case CtcLangParser::Minus:
            case CtcLangParser::Star:
            case CtcLangParser::And:
            case CtcLangParser::Or:
            case CtcLangParser::Tilde:
            case CtcLangParser::Not:
            case CtcLangParser::PlusPlus:
            case CtcLangParser::MinusMinus:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(1641);
                assignmentExpression();
                break;
            }

            case CtcLangParser::LeftBrace: {
                enterOuterAlt(_localctx, 2);
                setState(1642);
                bracedInitList();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InitializerListContext
//------------------------------------------------------------------

CtcLangParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::InitializerClauseContext *> CtcLangParser::InitializerListContext::
    initializerClause()
{
    return getRuleContexts<CtcLangParser::InitializerClauseContext>();
}

CtcLangParser::InitializerClauseContext *CtcLangParser::InitializerListContext::initializerClause(
    size_t i)
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::InitializerListContext::Ellipsis()
{
    return getTokens(CtcLangParser::Ellipsis);
}

tree::TerminalNode *CtcLangParser::InitializerListContext::Ellipsis(size_t i)
{
    return getToken(CtcLangParser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::InitializerListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::InitializerListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::InitializerListContext::getRuleIndex() const
{
    return CtcLangParser::RuleInitializerList;
}

std::any CtcLangParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInitializerList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InitializerListContext *CtcLangParser::initializerList()
{
    InitializerListContext *_localctx =
        _tracker.createInstance<InitializerListContext>(_ctx, getState());
    enterRule(_localctx, 274, CtcLangParser::RuleInitializerList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1645);
        initializerClause();
        setState(1647);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1646);
            match(CtcLangParser::Ellipsis);
        }
        setState(1656);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
        {
            if (alt == 1)
            {
                setState(1649);
                match(CtcLangParser::Comma);
                setState(1650);
                initializerClause();
                setState(1652);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Ellipsis)
                {
                    setState(1651);
                    match(CtcLangParser::Ellipsis);
                }
            }
            setState(1658);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BracedInitListContext
//------------------------------------------------------------------

CtcLangParser::BracedInitListContext::BracedInitListContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

CtcLangParser::InitializerListContext *CtcLangParser::BracedInitListContext::initializerList()
{
    return getRuleContext<CtcLangParser::InitializerListContext>(0);
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::InitializerClauseContext *CtcLangParser::BracedInitListContext::initializerClause()
{
    return getRuleContext<CtcLangParser::InitializerClauseContext>(0);
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

tree::TerminalNode *CtcLangParser::BracedInitListContext::Dot()
{
    return getToken(CtcLangParser::Dot, 0);
}

size_t CtcLangParser::BracedInitListContext::getRuleIndex() const
{
    return CtcLangParser::RuleBracedInitList;
}

std::any CtcLangParser::BracedInitListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBracedInitList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BracedInitListContext *CtcLangParser::bracedInitList()
{
    BracedInitListContext *_localctx =
        _tracker.createInstance<BracedInitListContext>(_ctx, getState());
    enterRule(_localctx, 276, CtcLangParser::RuleBracedInitList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1659);
        match(CtcLangParser::LeftBrace);
        setState(1672);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
            ((((_la - 66) & ~0x3fULL) == 0) &&
             ((1ULL << (_la - 66)) & -6863485799654318943) != 0) ||
            _la == CtcLangParser::Identifier)
        {
            setState(1667);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 218, _ctx))
            {
                case 1: {
                    setState(1660);
                    initializerList();
                    break;
                }

                case 2: {
                    setState(1662);
                    _errHandler->sync(this);

                    _la = _input->LA(1);
                    if (_la == CtcLangParser::Dot)
                    {
                        setState(1661);
                        match(CtcLangParser::Dot);
                    }
                    setState(1664);
                    match(CtcLangParser::Identifier);
                    setState(1665);
                    match(CtcLangParser::Assign);
                    setState(1666);
                    initializerClause();
                    break;
                }

                default:
                    break;
            }
            setState(1670);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Comma)
            {
                setState(1669);
                match(CtcLangParser::Comma);
            }
        }
        setState(1674);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceHeadContext
//------------------------------------------------------------------

CtcLangParser::InterfaceHeadContext::InterfaceHeadContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::InterfaceHeadContext::Interface()
{
    return getToken(CtcLangParser::Interface, 0);
}

CtcLangParser::ClassHeadNameContext *CtcLangParser::InterfaceHeadContext::classHeadName()
{
    return getRuleContext<CtcLangParser::ClassHeadNameContext>(0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::InterfaceHeadContext::accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

size_t CtcLangParser::InterfaceHeadContext::getRuleIndex() const
{
    return CtcLangParser::RuleInterfaceHead;
}

std::any CtcLangParser::InterfaceHeadContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInterfaceHead(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InterfaceHeadContext *CtcLangParser::interfaceHead()
{
    InterfaceHeadContext *_localctx =
        _tracker.createInstance<InterfaceHeadContext>(_ctx, getState());
    enterRule(_localctx, 278, CtcLangParser::RuleInterfaceHead);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1677);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
        {
            setState(1676);
            accessSpecifier();
        }
        setState(1679);
        match(CtcLangParser::Interface);
        setState(1680);
        classHeadName();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceSpecifierContext
//------------------------------------------------------------------

CtcLangParser::InterfaceSpecifierContext::InterfaceSpecifierContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::InterfaceHeadContext *CtcLangParser::InterfaceSpecifierContext::interfaceHead()
{
    return getRuleContext<CtcLangParser::InterfaceHeadContext>(0);
}

tree::TerminalNode *CtcLangParser::InterfaceSpecifierContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::InterfaceSpecifierContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

std::vector<CtcLangParser::InterfaceMemberSpecificationContext *> CtcLangParser::
    InterfaceSpecifierContext::interfaceMemberSpecification()
{
    return getRuleContexts<CtcLangParser::InterfaceMemberSpecificationContext>();
}

CtcLangParser::InterfaceMemberSpecificationContext *CtcLangParser::InterfaceSpecifierContext::
    interfaceMemberSpecification(size_t i)
{
    return getRuleContext<CtcLangParser::InterfaceMemberSpecificationContext>(i);
}

size_t CtcLangParser::InterfaceSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleInterfaceSpecifier;
}

std::any CtcLangParser::InterfaceSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInterfaceSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InterfaceSpecifierContext *CtcLangParser::interfaceSpecifier()
{
    InterfaceSpecifierContext *_localctx =
        _tracker.createInstance<InterfaceSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 280, CtcLangParser::RuleInterfaceSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1682);
        interfaceHead();
        setState(1683);
        match(CtcLangParser::LeftBrace);
        setState(1689);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 5069356053456780849) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 55171294463853947) != 0))
        {
            setState(1685);
            _errHandler->sync(this);
            _la = _input->LA(1);
            do
            {
                setState(1684);
                interfaceMemberSpecification();
                setState(1687);
                _errHandler->sync(this);
                _la = _input->LA(1);
            } while (((((_la - 10) & ~0x3fULL) == 0) &&
                      ((1ULL << (_la - 10)) & 5069356053456780849) != 0) ||
                     ((((_la - 77) & ~0x3fULL) == 0) &&
                      ((1ULL << (_la - 77)) & 55171294463853947) != 0));
        }
        setState(1691);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfacefunctionDefinitionContext
//------------------------------------------------------------------

CtcLangParser::InterfacefunctionDefinitionContext::InterfacefunctionDefinitionContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratorContext *CtcLangParser::InterfacefunctionDefinitionContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

tree::TerminalNode *CtcLangParser::InterfacefunctionDefinitionContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::InterfacefunctionDefinitionContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::InterfacefunctionDefinitionContext::
    declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::PureSpecifierContext *CtcLangParser::InterfacefunctionDefinitionContext::
    pureSpecifier()
{
    return getRuleContext<CtcLangParser::PureSpecifierContext>(0);
}

size_t CtcLangParser::InterfacefunctionDefinitionContext::getRuleIndex() const
{
    return CtcLangParser::RuleInterfacefunctionDefinition;
}

std::any CtcLangParser::InterfacefunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInterfacefunctionDefinition(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InterfacefunctionDefinitionContext *CtcLangParser::interfacefunctionDefinition()
{
    InterfacefunctionDefinitionContext *_localctx =
        _tracker.createInstance<InterfacefunctionDefinitionContext>(_ctx, getState());
    enterRule(_localctx, 282, CtcLangParser::RuleInterfacefunctionDefinition);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1694);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1693);
            attributeSpecifierSeq();
        }
        setState(1697);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx))
        {
            case 1: {
                setState(1696);
                declSpecifierSeq();
                break;
            }

            default:
                break;
        }
        setState(1699);
        declarator();
        setState(1701);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Assign)
        {
            setState(1700);
            pureSpecifier();
        }
        setState(1703);
        match(CtcLangParser::Semi);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceMemberSpecificationContext
//------------------------------------------------------------------

CtcLangParser::InterfaceMemberSpecificationContext::InterfaceMemberSpecificationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::InterfacefunctionDefinitionContext *CtcLangParser::
    InterfaceMemberSpecificationContext::interfacefunctionDefinition()
{
    return getRuleContext<CtcLangParser::InterfacefunctionDefinitionContext>(0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::InterfaceMemberSpecificationContext::
    accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

size_t CtcLangParser::InterfaceMemberSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleInterfaceMemberSpecification;
}

std::any CtcLangParser::InterfaceMemberSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitInterfaceMemberSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::InterfaceMemberSpecificationContext *CtcLangParser::interfaceMemberSpecification()
{
    InterfaceMemberSpecificationContext *_localctx =
        _tracker.createInstance<InterfaceMemberSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 284, CtcLangParser::RuleInterfaceMemberSpecification);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1706);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx))
        {
            case 1: {
                setState(1705);
                accessSpecifier();
                break;
            }

            default:
                break;
        }
        setState(1708);
        interfacefunctionDefinition();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordKeyContext
//------------------------------------------------------------------

CtcLangParser::RecordKeyContext::RecordKeyContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::RecordKeyContext::Struct()
{
    return getToken(CtcLangParser::Struct, 0);
}

tree::TerminalNode *CtcLangParser::RecordKeyContext::Record()
{
    return getToken(CtcLangParser::Record, 0);
}

size_t CtcLangParser::RecordKeyContext::getRuleIndex() const
{
    return CtcLangParser::RuleRecordKey;
}

std::any CtcLangParser::RecordKeyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRecordKey(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RecordKeyContext *CtcLangParser::recordKey()
{
    RecordKeyContext *_localctx = _tracker.createInstance<RecordKeyContext>(_ctx, getState());
    enterRule(_localctx, 286, CtcLangParser::RuleRecordKey);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1710);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::Record

              || _la == CtcLangParser::Struct))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordHeadContext
//------------------------------------------------------------------

CtcLangParser::RecordHeadContext::RecordHeadContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::RecordKeyContext *CtcLangParser::RecordHeadContext::recordKey()
{
    return getRuleContext<CtcLangParser::RecordKeyContext>(0);
}

CtcLangParser::ClassHeadNameContext *CtcLangParser::RecordHeadContext::classHeadName()
{
    return getRuleContext<CtcLangParser::ClassHeadNameContext>(0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::RecordHeadContext::accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

size_t CtcLangParser::RecordHeadContext::getRuleIndex() const
{
    return CtcLangParser::RuleRecordHead;
}

std::any CtcLangParser::RecordHeadContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRecordHead(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RecordHeadContext *CtcLangParser::recordHead()
{
    RecordHeadContext *_localctx = _tracker.createInstance<RecordHeadContext>(_ctx, getState());
    enterRule(_localctx, 288, CtcLangParser::RuleRecordHead);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1713);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
        {
            setState(1712);
            accessSpecifier();
        }
        setState(1715);
        recordKey();
        setState(1716);
        classHeadName();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordSpecifierContext
//------------------------------------------------------------------

CtcLangParser::RecordSpecifierContext::RecordSpecifierContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::RecordHeadContext *CtcLangParser::RecordSpecifierContext::recordHead()
{
    return getRuleContext<CtcLangParser::RecordHeadContext>(0);
}

tree::TerminalNode *CtcLangParser::RecordSpecifierContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::RecordSpecifierContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

std::vector<CtcLangParser::RecordMemberSpecificationContext *> CtcLangParser::
    RecordSpecifierContext::recordMemberSpecification()
{
    return getRuleContexts<CtcLangParser::RecordMemberSpecificationContext>();
}

CtcLangParser::RecordMemberSpecificationContext *CtcLangParser::RecordSpecifierContext::
    recordMemberSpecification(size_t i)
{
    return getRuleContext<CtcLangParser::RecordMemberSpecificationContext>(i);
}

size_t CtcLangParser::RecordSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleRecordSpecifier;
}

std::any CtcLangParser::RecordSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRecordSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RecordSpecifierContext *CtcLangParser::recordSpecifier()
{
    RecordSpecifierContext *_localctx =
        _tracker.createInstance<RecordSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 290, CtcLangParser::RuleRecordSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1718);
        recordHead();
        setState(1719);
        match(CtcLangParser::LeftBrace);
        setState(1725);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6222277558063627825) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57423094277539195) != 0))
        {
            setState(1721);
            _errHandler->sync(this);
            _la = _input->LA(1);
            do
            {
                setState(1720);
                recordMemberSpecification();
                setState(1723);
                _errHandler->sync(this);
                _la = _input->LA(1);
            } while (((((_la - 10) & ~0x3fULL) == 0) &&
                      ((1ULL << (_la - 10)) & 6222277558063627825) != 0) ||
                     ((((_la - 77) & ~0x3fULL) == 0) &&
                      ((1ULL << (_la - 77)) & 57423094277539195) != 0));
        }
        setState(1727);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordMemberSpecificationContext
//------------------------------------------------------------------

CtcLangParser::RecordMemberSpecificationContext::RecordMemberSpecificationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::RecordMemberSpecificationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::RecordMemberSpecificationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::RecordMemberSpecificationContext::
    declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::RecordMemberDeclaratorListContext *CtcLangParser::RecordMemberSpecificationContext::
    recordMemberDeclaratorList()
{
    return getRuleContext<CtcLangParser::RecordMemberDeclaratorListContext>(0);
}

CtcLangParser::TemplateDeclarationContext *CtcLangParser::RecordMemberSpecificationContext::
    templateDeclaration()
{
    return getRuleContext<CtcLangParser::TemplateDeclarationContext>(0);
}

CtcLangParser::EmptyDeclaration_Context *CtcLangParser::RecordMemberSpecificationContext::
    emptyDeclaration_()
{
    return getRuleContext<CtcLangParser::EmptyDeclaration_Context>(0);
}

size_t CtcLangParser::RecordMemberSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleRecordMemberSpecification;
}

std::any CtcLangParser::RecordMemberSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRecordMemberSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RecordMemberSpecificationContext *CtcLangParser::recordMemberSpecification()
{
    RecordMemberSpecificationContext *_localctx =
        _tracker.createInstance<RecordMemberSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 292, CtcLangParser::RuleRecordMemberSpecification);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1741);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 234, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1730);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
                {
                    setState(1729);
                    attributeSpecifierSeq();
                }
                setState(1733);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx))
                {
                    case 1: {
                        setState(1732);
                        declSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1736);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Decltype

                    || _la == CtcLangParser::Operator ||
                    ((((_la - 85) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 85)) & 215512868999425) != 0))
                {
                    setState(1735);
                    recordMemberDeclaratorList();
                }
                setState(1738);
                match(CtcLangParser::Semi);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1739);
                templateDeclaration();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1740);
                emptyDeclaration_();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordMemberDeclaratorListContext
//------------------------------------------------------------------

CtcLangParser::RecordMemberDeclaratorListContext::RecordMemberDeclaratorListContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratorContext *CtcLangParser::RecordMemberDeclaratorListContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

size_t CtcLangParser::RecordMemberDeclaratorListContext::getRuleIndex() const
{
    return CtcLangParser::RuleRecordMemberDeclaratorList;
}

std::any CtcLangParser::RecordMemberDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitRecordMemberDeclaratorList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::RecordMemberDeclaratorListContext *CtcLangParser::recordMemberDeclaratorList()
{
    RecordMemberDeclaratorListContext *_localctx =
        _tracker.createInstance<RecordMemberDeclaratorListContext>(_ctx, getState());
    enterRule(_localctx, 294, CtcLangParser::RuleRecordMemberDeclaratorList);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1743);
        declarator();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassNameContext
//------------------------------------------------------------------

CtcLangParser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ClassNameContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::ClassNameContext::simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

size_t CtcLangParser::ClassNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassName;
}

std::any CtcLangParser::ClassNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassNameContext *CtcLangParser::className()
{
    ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
    enterRule(_localctx, 296, CtcLangParser::RuleClassName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1747);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 235, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1745);
                match(CtcLangParser::Identifier);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1746);
                simpleTemplateId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassSpecifierContext
//------------------------------------------------------------------

CtcLangParser::ClassSpecifierContext::ClassSpecifierContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassHeadContext *CtcLangParser::ClassSpecifierContext::classHead()
{
    return getRuleContext<CtcLangParser::ClassHeadContext>(0);
}

tree::TerminalNode *CtcLangParser::ClassSpecifierContext::LeftBrace()
{
    return getToken(CtcLangParser::LeftBrace, 0);
}

tree::TerminalNode *CtcLangParser::ClassSpecifierContext::RightBrace()
{
    return getToken(CtcLangParser::RightBrace, 0);
}

CtcLangParser::MemberSpecificationContext *CtcLangParser::ClassSpecifierContext::
    memberSpecification()
{
    return getRuleContext<CtcLangParser::MemberSpecificationContext>(0);
}

size_t CtcLangParser::ClassSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassSpecifier;
}

std::any CtcLangParser::ClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassSpecifierContext *CtcLangParser::classSpecifier()
{
    ClassSpecifierContext *_localctx =
        _tracker.createInstance<ClassSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 298, CtcLangParser::RuleClassSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1749);
        classHead();
        setState(1750);
        match(CtcLangParser::LeftBrace);
        setState(1752);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6258306355082591793) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57986044230960511) != 0))
        {
            setState(1751);
            memberSpecification();
        }
        setState(1754);
        match(CtcLangParser::RightBrace);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassHeadContext
//------------------------------------------------------------------

CtcLangParser::ClassHeadContext::ClassHeadContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassKeyContext *CtcLangParser::ClassHeadContext::classKey()
{
    return getRuleContext<CtcLangParser::ClassKeyContext>(0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::ClassHeadContext::accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ClassHeadContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::ClassHeadNameContext *CtcLangParser::ClassHeadContext::classHeadName()
{
    return getRuleContext<CtcLangParser::ClassHeadNameContext>(0);
}

CtcLangParser::BaseClauseContext *CtcLangParser::ClassHeadContext::baseClause()
{
    return getRuleContext<CtcLangParser::BaseClauseContext>(0);
}

CtcLangParser::ClassVirtSpecifierContext *CtcLangParser::ClassHeadContext::classVirtSpecifier()
{
    return getRuleContext<CtcLangParser::ClassVirtSpecifierContext>(0);
}

size_t CtcLangParser::ClassHeadContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassHead;
}

std::any CtcLangParser::ClassHeadContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassHead(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassHeadContext *CtcLangParser::classHead()
{
    ClassHeadContext *_localctx = _tracker.createInstance<ClassHeadContext>(_ctx, getState());
    enterRule(_localctx, 300, CtcLangParser::RuleClassHead);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1757);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
        {
            setState(1756);
            accessSpecifier();
        }
        setState(1759);
        classKey();
        setState(1761);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1760);
            attributeSpecifierSeq();
        }
        setState(1767);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Decltype || _la == CtcLangParser::Doublecolon

            || _la == CtcLangParser::Identifier)
        {
            setState(1763);
            classHeadName();
            setState(1765);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Final)
            {
                setState(1764);
                classVirtSpecifier();
            }
        }
        setState(1770);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Colon)
        {
            setState(1769);
            baseClause();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassHeadNameContext
//------------------------------------------------------------------

CtcLangParser::ClassHeadNameContext::ClassHeadNameContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassNameContext *CtcLangParser::ClassHeadNameContext::className()
{
    return getRuleContext<CtcLangParser::ClassNameContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::ClassHeadNameContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

size_t CtcLangParser::ClassHeadNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassHeadName;
}

std::any CtcLangParser::ClassHeadNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassHeadName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassHeadNameContext *CtcLangParser::classHeadName()
{
    ClassHeadNameContext *_localctx =
        _tracker.createInstance<ClassHeadNameContext>(_ctx, getState());
    enterRule(_localctx, 302, CtcLangParser::RuleClassHeadName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1773);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx))
        {
            case 1: {
                setState(1772);
                nestedNameSpecifier(0);
                break;
            }

            default:
                break;
        }
        setState(1775);
        className();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassVirtSpecifierContext
//------------------------------------------------------------------

CtcLangParser::ClassVirtSpecifierContext::ClassVirtSpecifierContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ClassVirtSpecifierContext::Final()
{
    return getToken(CtcLangParser::Final, 0);
}

size_t CtcLangParser::ClassVirtSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassVirtSpecifier;
}

std::any CtcLangParser::ClassVirtSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassVirtSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassVirtSpecifierContext *CtcLangParser::classVirtSpecifier()
{
    ClassVirtSpecifierContext *_localctx =
        _tracker.createInstance<ClassVirtSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 304, CtcLangParser::RuleClassVirtSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1777);
        match(CtcLangParser::Final);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassKeyContext
//------------------------------------------------------------------

CtcLangParser::ClassKeyContext::ClassKeyContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ClassKeyContext::Class()
{
    return getToken(CtcLangParser::Class, 0);
}

size_t CtcLangParser::ClassKeyContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassKey;
}

std::any CtcLangParser::ClassKeyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassKey(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassKeyContext *CtcLangParser::classKey()
{
    ClassKeyContext *_localctx = _tracker.createInstance<ClassKeyContext>(_ctx, getState());
    enterRule(_localctx, 306, CtcLangParser::RuleClassKey);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1779);
        match(CtcLangParser::Class);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemberSpecificationContext
//------------------------------------------------------------------

CtcLangParser::MemberSpecificationContext::MemberSpecificationContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::MemberdeclarationContext *> CtcLangParser::MemberSpecificationContext::
    memberdeclaration()
{
    return getRuleContexts<CtcLangParser::MemberdeclarationContext>();
}

CtcLangParser::MemberdeclarationContext *CtcLangParser::MemberSpecificationContext::
    memberdeclaration(size_t i)
{
    return getRuleContext<CtcLangParser::MemberdeclarationContext>(i);
}

size_t CtcLangParser::MemberSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemberSpecification;
}

std::any CtcLangParser::MemberSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemberSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemberSpecificationContext *CtcLangParser::memberSpecification()
{
    MemberSpecificationContext *_localctx =
        _tracker.createInstance<MemberSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 308, CtcLangParser::RuleMemberSpecification);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1782);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do
        {
            setState(1781);
            memberdeclaration();
            setState(1784);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (
            ((((_la - 10) & ~0x3fULL) == 0) && ((1ULL << (_la - 10)) & 6258306355082591793) != 0) ||
            ((((_la - 77) & ~0x3fULL) == 0) && ((1ULL << (_la - 77)) & 57986044230960511) != 0));
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemberdeclarationContext
//------------------------------------------------------------------

CtcLangParser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::MemberdeclarationContext::Semi()
{
    return getToken(CtcLangParser::Semi, 0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::MemberdeclarationContext::accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::MemberdeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::DeclSpecifierSeqContext *CtcLangParser::MemberdeclarationContext::declSpecifierSeq()
{
    return getRuleContext<CtcLangParser::DeclSpecifierSeqContext>(0);
}

CtcLangParser::MemberDeclaratorListContext *CtcLangParser::MemberdeclarationContext::
    memberDeclaratorList()
{
    return getRuleContext<CtcLangParser::MemberDeclaratorListContext>(0);
}

CtcLangParser::FunctionDefinitionContext *CtcLangParser::MemberdeclarationContext::
    functionDefinition()
{
    return getRuleContext<CtcLangParser::FunctionDefinitionContext>(0);
}

CtcLangParser::UsingDeclarationContext *CtcLangParser::MemberdeclarationContext::usingDeclaration()
{
    return getRuleContext<CtcLangParser::UsingDeclarationContext>(0);
}

CtcLangParser::StaticAssertDeclarationContext *CtcLangParser::MemberdeclarationContext::
    staticAssertDeclaration()
{
    return getRuleContext<CtcLangParser::StaticAssertDeclarationContext>(0);
}

CtcLangParser::TemplateDeclarationContext *CtcLangParser::MemberdeclarationContext::
    templateDeclaration()
{
    return getRuleContext<CtcLangParser::TemplateDeclarationContext>(0);
}

tree::TerminalNode *CtcLangParser::MemberdeclarationContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::AliasDeclarationContext *CtcLangParser::MemberdeclarationContext::aliasDeclaration()
{
    return getRuleContext<CtcLangParser::AliasDeclarationContext>(0);
}

CtcLangParser::EmptyDeclaration_Context *CtcLangParser::MemberdeclarationContext::
    emptyDeclaration_()
{
    return getRuleContext<CtcLangParser::EmptyDeclaration_Context>(0);
}

size_t CtcLangParser::MemberdeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemberdeclaration;
}

std::any CtcLangParser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemberdeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemberdeclarationContext *CtcLangParser::memberdeclaration()
{
    MemberdeclarationContext *_localctx =
        _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
    enterRule(_localctx, 310, CtcLangParser::RuleMemberdeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1816);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1787);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx))
                {
                    case 1: {
                        setState(1786);
                        accessSpecifier();
                        break;
                    }

                    default:
                        break;
                }
                setState(1790);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx))
                {
                    case 1: {
                        setState(1789);
                        attributeSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1793);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx))
                {
                    case 1: {
                        setState(1792);
                        declSpecifierSeq();
                        break;
                    }

                    default:
                        break;
                }
                setState(1796);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 9007199523177472) != 0) ||
                    ((((_la - 85) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 85)) & 217711892254981) != 0))
                {
                    setState(1795);
                    memberDeclaratorList();
                }
                setState(1798);
                match(CtcLangParser::Semi);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1800);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 248, _ctx))
                {
                    case 1: {
                        setState(1799);
                        accessSpecifier();
                        break;
                    }

                    default:
                        break;
                }
                setState(1802);
                functionDefinition();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1804);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
                {
                    setState(1803);
                    accessSpecifier();
                }
                setState(1806);
                usingDeclaration();
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(1807);
                staticAssertDeclaration();
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(1811);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
                {
                    setState(1808);
                    accessSpecifier();
                    setState(1809);
                    match(CtcLangParser::Colon);
                }
                setState(1813);
                templateDeclaration();
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(1814);
                aliasDeclaration();
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(1815);
                emptyDeclaration_();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemberDeclaratorListContext
//------------------------------------------------------------------

CtcLangParser::MemberDeclaratorListContext::MemberDeclaratorListContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::MemberDeclaratorContext *> CtcLangParser::MemberDeclaratorListContext::
    memberDeclarator()
{
    return getRuleContexts<CtcLangParser::MemberDeclaratorContext>();
}

CtcLangParser::MemberDeclaratorContext *CtcLangParser::MemberDeclaratorListContext::
    memberDeclarator(size_t i)
{
    return getRuleContext<CtcLangParser::MemberDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MemberDeclaratorListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::MemberDeclaratorListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::MemberDeclaratorListContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemberDeclaratorList;
}

std::any CtcLangParser::MemberDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemberDeclaratorList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemberDeclaratorListContext *CtcLangParser::memberDeclaratorList()
{
    MemberDeclaratorListContext *_localctx =
        _tracker.createInstance<MemberDeclaratorListContext>(_ctx, getState());
    enterRule(_localctx, 312, CtcLangParser::RuleMemberDeclaratorList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1818);
        memberDeclarator();
        setState(1823);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1819);
            match(CtcLangParser::Comma);
            setState(1820);
            memberDeclarator();
            setState(1825);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemberDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::MemberDeclaratorContext::MemberDeclaratorContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DeclaratorContext *CtcLangParser::MemberDeclaratorContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::PureSpecifierContext *CtcLangParser::MemberDeclaratorContext::pureSpecifier()
{
    return getRuleContext<CtcLangParser::PureSpecifierContext>(0);
}

CtcLangParser::BraceOrEqualInitializerContext *CtcLangParser::MemberDeclaratorContext::
    braceOrEqualInitializer()
{
    return getRuleContext<CtcLangParser::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode *CtcLangParser::MemberDeclaratorContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::MemberDeclaratorContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::MemberDeclaratorContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::MemberDeclaratorContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::MemberDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemberDeclarator;
}

std::any CtcLangParser::MemberDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemberDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemberDeclaratorContext *CtcLangParser::memberDeclarator()
{
    MemberDeclaratorContext *_localctx =
        _tracker.createInstance<MemberDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 314, CtcLangParser::RuleMemberDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1840);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1826);
                declarator();
                setState(1829);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx))
                {
                    case 1: {
                        setState(1827);
                        pureSpecifier();
                        break;
                    }

                    case 2: {
                        setState(1828);
                        braceOrEqualInitializer();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1831);
                declarator();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(1833);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Identifier)
                {
                    setState(1832);
                    match(CtcLangParser::Identifier);
                }
                setState(1836);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
                {
                    setState(1835);
                    attributeSpecifierSeq();
                }
                setState(1838);
                match(CtcLangParser::Colon);
                setState(1839);
                constantExpression();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VirtualSpecifierSeqContext
//------------------------------------------------------------------

CtcLangParser::VirtualSpecifierSeqContext::VirtualSpecifierSeqContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::VirtualSpecifierContext *> CtcLangParser::VirtualSpecifierSeqContext::
    virtualSpecifier()
{
    return getRuleContexts<CtcLangParser::VirtualSpecifierContext>();
}

CtcLangParser::VirtualSpecifierContext *CtcLangParser::VirtualSpecifierSeqContext::virtualSpecifier(
    size_t i)
{
    return getRuleContext<CtcLangParser::VirtualSpecifierContext>(i);
}

size_t CtcLangParser::VirtualSpecifierSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleVirtualSpecifierSeq;
}

std::any CtcLangParser::VirtualSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitVirtualSpecifierSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::VirtualSpecifierSeqContext *CtcLangParser::virtualSpecifierSeq()
{
    VirtualSpecifierSeqContext *_localctx =
        _tracker.createInstance<VirtualSpecifierSeqContext>(_ctx, getState());
    enterRule(_localctx, 316, CtcLangParser::RuleVirtualSpecifierSeq);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1843);
        _errHandler->sync(this);
        alt = 1;
        do
        {
            switch (alt)
            {
                case 1: {
                    setState(1842);
                    virtualSpecifier();
                    break;
                }

                default:
                    throw NoViableAltException(this);
            }
            setState(1845);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VirtualSpecifierContext
//------------------------------------------------------------------

CtcLangParser::VirtualSpecifierContext::VirtualSpecifierContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::VirtualSpecifierContext::Override()
{
    return getToken(CtcLangParser::Override, 0);
}

tree::TerminalNode *CtcLangParser::VirtualSpecifierContext::Final()
{
    return getToken(CtcLangParser::Final, 0);
}

size_t CtcLangParser::VirtualSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleVirtualSpecifier;
}

std::any CtcLangParser::VirtualSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitVirtualSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::VirtualSpecifierContext *CtcLangParser::virtualSpecifier()
{
    VirtualSpecifierContext *_localctx =
        _tracker.createInstance<VirtualSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 318, CtcLangParser::RuleVirtualSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1847);
        _la = _input->LA(1);
        if (!(_la == CtcLangParser::Final

              || _la == CtcLangParser::Override))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PureSpecifierContext
//------------------------------------------------------------------

CtcLangParser::PureSpecifierContext::PureSpecifierContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::PureSpecifierContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

tree::TerminalNode *CtcLangParser::PureSpecifierContext::IntegerLiteral()
{
    return getToken(CtcLangParser::IntegerLiteral, 0);
}

size_t CtcLangParser::PureSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RulePureSpecifier;
}

std::any CtcLangParser::PureSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitPureSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::PureSpecifierContext *CtcLangParser::pureSpecifier()
{
    PureSpecifierContext *_localctx =
        _tracker.createInstance<PureSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 320, CtcLangParser::RulePureSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1849);
        match(CtcLangParser::Assign);
        setState(1850);
        match(CtcLangParser::IntegerLiteral);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BaseClauseContext
//------------------------------------------------------------------

CtcLangParser::BaseClauseContext::BaseClauseContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::BaseClauseContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::BaseSpecifierListContext *CtcLangParser::BaseClauseContext::baseSpecifierList()
{
    return getRuleContext<CtcLangParser::BaseSpecifierListContext>(0);
}

size_t CtcLangParser::BaseClauseContext::getRuleIndex() const
{
    return CtcLangParser::RuleBaseClause;
}

std::any CtcLangParser::BaseClauseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBaseClause(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BaseClauseContext *CtcLangParser::baseClause()
{
    BaseClauseContext *_localctx = _tracker.createInstance<BaseClauseContext>(_ctx, getState());
    enterRule(_localctx, 322, CtcLangParser::RuleBaseClause);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1852);
        match(CtcLangParser::Colon);
        setState(1853);
        baseSpecifierList();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BaseSpecifierListContext
//------------------------------------------------------------------

CtcLangParser::BaseSpecifierListContext::BaseSpecifierListContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::BaseSpecifierContext *> CtcLangParser::BaseSpecifierListContext::
    baseSpecifier()
{
    return getRuleContexts<CtcLangParser::BaseSpecifierContext>();
}

CtcLangParser::BaseSpecifierContext *CtcLangParser::BaseSpecifierListContext::baseSpecifier(
    size_t i)
{
    return getRuleContext<CtcLangParser::BaseSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BaseSpecifierListContext::Ellipsis()
{
    return getTokens(CtcLangParser::Ellipsis);
}

tree::TerminalNode *CtcLangParser::BaseSpecifierListContext::Ellipsis(size_t i)
{
    return getToken(CtcLangParser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::BaseSpecifierListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::BaseSpecifierListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::BaseSpecifierListContext::getRuleIndex() const
{
    return CtcLangParser::RuleBaseSpecifierList;
}

std::any CtcLangParser::BaseSpecifierListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBaseSpecifierList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BaseSpecifierListContext *CtcLangParser::baseSpecifierList()
{
    BaseSpecifierListContext *_localctx =
        _tracker.createInstance<BaseSpecifierListContext>(_ctx, getState());
    enterRule(_localctx, 324, CtcLangParser::RuleBaseSpecifierList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1855);
        baseSpecifier();
        setState(1857);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1856);
            match(CtcLangParser::Ellipsis);
        }
        setState(1866);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1859);
            match(CtcLangParser::Comma);
            setState(1860);
            baseSpecifier();
            setState(1862);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Ellipsis)
            {
                setState(1861);
                match(CtcLangParser::Ellipsis);
            }
            setState(1868);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BaseSpecifierContext
//------------------------------------------------------------------

CtcLangParser::BaseSpecifierContext::BaseSpecifierContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::BaseTypeSpecifierContext *CtcLangParser::BaseSpecifierContext::baseTypeSpecifier()
{
    return getRuleContext<CtcLangParser::BaseTypeSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::BaseSpecifierContext::Virtual()
{
    return getToken(CtcLangParser::Virtual, 0);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::BaseSpecifierContext::accessSpecifier()
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::BaseSpecifierContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

size_t CtcLangParser::BaseSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleBaseSpecifier;
}

std::any CtcLangParser::BaseSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBaseSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BaseSpecifierContext *CtcLangParser::baseSpecifier()
{
    BaseSpecifierContext *_localctx =
        _tracker.createInstance<BaseSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 326, CtcLangParser::RuleBaseSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1870);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
        {
            setState(1869);
            attributeSpecifierSeq();
        }
        setState(1884);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Decltype:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                setState(1872);
                baseTypeSpecifier();
                break;
            }

            case CtcLangParser::Virtual: {
                setState(1873);
                match(CtcLangParser::Virtual);
                setState(1875);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0))
                {
                    setState(1874);
                    accessSpecifier();
                }
                setState(1877);
                baseTypeSpecifier();
                break;
            }

            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public: {
                setState(1878);
                accessSpecifier();
                setState(1880);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Virtual)
                {
                    setState(1879);
                    match(CtcLangParser::Virtual);
                }
                setState(1882);
                baseTypeSpecifier();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassOrDeclTypeContext
//------------------------------------------------------------------

CtcLangParser::ClassOrDeclTypeContext::ClassOrDeclTypeContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassNameContext *CtcLangParser::ClassOrDeclTypeContext::className()
{
    return getRuleContext<CtcLangParser::ClassNameContext>(0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::ClassOrDeclTypeContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

CtcLangParser::DecltypeSpecifierContext *CtcLangParser::ClassOrDeclTypeContext::decltypeSpecifier()
{
    return getRuleContext<CtcLangParser::DecltypeSpecifierContext>(0);
}

size_t CtcLangParser::ClassOrDeclTypeContext::getRuleIndex() const
{
    return CtcLangParser::RuleClassOrDeclType;
}

std::any CtcLangParser::ClassOrDeclTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitClassOrDeclType(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ClassOrDeclTypeContext *CtcLangParser::classOrDeclType()
{
    ClassOrDeclTypeContext *_localctx =
        _tracker.createInstance<ClassOrDeclTypeContext>(_ctx, getState());
    enterRule(_localctx, 328, CtcLangParser::RuleClassOrDeclType);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1891);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1887);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx))
                {
                    case 1: {
                        setState(1886);
                        nestedNameSpecifier(0);
                        break;
                    }

                    default:
                        break;
                }
                setState(1889);
                className();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1890);
                decltypeSpecifier();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BaseTypeSpecifierContext
//------------------------------------------------------------------

CtcLangParser::BaseTypeSpecifierContext::BaseTypeSpecifierContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassOrDeclTypeContext *CtcLangParser::BaseTypeSpecifierContext::classOrDeclType()
{
    return getRuleContext<CtcLangParser::ClassOrDeclTypeContext>(0);
}

size_t CtcLangParser::BaseTypeSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleBaseTypeSpecifier;
}

std::any CtcLangParser::BaseTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitBaseTypeSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::BaseTypeSpecifierContext *CtcLangParser::baseTypeSpecifier()
{
    BaseTypeSpecifierContext *_localctx =
        _tracker.createInstance<BaseTypeSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 330, CtcLangParser::RuleBaseTypeSpecifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1893);
        classOrDeclType();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AccessSpecifierContext
//------------------------------------------------------------------

CtcLangParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::AccessSpecifierContext::Private()
{
    return getToken(CtcLangParser::Private, 0);
}

tree::TerminalNode *CtcLangParser::AccessSpecifierContext::Protected()
{
    return getToken(CtcLangParser::Protected, 0);
}

tree::TerminalNode *CtcLangParser::AccessSpecifierContext::Public()
{
    return getToken(CtcLangParser::Public, 0);
}

size_t CtcLangParser::AccessSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleAccessSpecifier;
}

std::any CtcLangParser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitAccessSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::accessSpecifier()
{
    AccessSpecifierContext *_localctx =
        _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 332, CtcLangParser::RuleAccessSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1895);
        _la = _input->LA(1);
        if (!((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 252201579132747776) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConversionFunctionIdContext
//------------------------------------------------------------------

CtcLangParser::ConversionFunctionIdContext::ConversionFunctionIdContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ConversionFunctionIdContext::Operator()
{
    return getToken(CtcLangParser::Operator, 0);
}

CtcLangParser::ConversionTypeIdContext *CtcLangParser::ConversionFunctionIdContext::
    conversionTypeId()
{
    return getRuleContext<CtcLangParser::ConversionTypeIdContext>(0);
}

size_t CtcLangParser::ConversionFunctionIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleConversionFunctionId;
}

std::any CtcLangParser::ConversionFunctionIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConversionFunctionId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConversionFunctionIdContext *CtcLangParser::conversionFunctionId()
{
    ConversionFunctionIdContext *_localctx =
        _tracker.createInstance<ConversionFunctionIdContext>(_ctx, getState());
    enterRule(_localctx, 334, CtcLangParser::RuleConversionFunctionId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1897);
        match(CtcLangParser::Operator);
        setState(1898);
        conversionTypeId();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConversionTypeIdContext
//------------------------------------------------------------------

CtcLangParser::ConversionTypeIdContext::ConversionTypeIdContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::ConversionTypeIdContext::typeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TypeSpecifierSeqContext>(0);
}

CtcLangParser::ConversionDeclaratorContext *CtcLangParser::ConversionTypeIdContext::
    conversionDeclarator()
{
    return getRuleContext<CtcLangParser::ConversionDeclaratorContext>(0);
}

size_t CtcLangParser::ConversionTypeIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleConversionTypeId;
}

std::any CtcLangParser::ConversionTypeIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConversionTypeId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConversionTypeIdContext *CtcLangParser::conversionTypeId()
{
    ConversionTypeIdContext *_localctx =
        _tracker.createInstance<ConversionTypeIdContext>(_ctx, getState());
    enterRule(_localctx, 336, CtcLangParser::RuleConversionTypeId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1900);
        typeSpecifierSeq();
        setState(1902);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx))
        {
            case 1: {
                setState(1901);
                conversionDeclarator();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConversionDeclaratorContext
//------------------------------------------------------------------

CtcLangParser::ConversionDeclaratorContext::ConversionDeclaratorContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::PointerOperatorContext *CtcLangParser::ConversionDeclaratorContext::pointerOperator()
{
    return getRuleContext<CtcLangParser::PointerOperatorContext>(0);
}

CtcLangParser::ConversionDeclaratorContext *CtcLangParser::ConversionDeclaratorContext::
    conversionDeclarator()
{
    return getRuleContext<CtcLangParser::ConversionDeclaratorContext>(0);
}

size_t CtcLangParser::ConversionDeclaratorContext::getRuleIndex() const
{
    return CtcLangParser::RuleConversionDeclarator;
}

std::any CtcLangParser::ConversionDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConversionDeclarator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConversionDeclaratorContext *CtcLangParser::conversionDeclarator()
{
    ConversionDeclaratorContext *_localctx =
        _tracker.createInstance<ConversionDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 338, CtcLangParser::RuleConversionDeclarator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1904);
        pointerOperator();
        setState(1906);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx))
        {
            case 1: {
                setState(1905);
                conversionDeclarator();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConstructorInitializerContext
//------------------------------------------------------------------

CtcLangParser::ConstructorInitializerContext::ConstructorInitializerContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ConstructorInitializerContext::Colon()
{
    return getToken(CtcLangParser::Colon, 0);
}

CtcLangParser::MemInitializerListContext *CtcLangParser::ConstructorInitializerContext::
    memInitializerList()
{
    return getRuleContext<CtcLangParser::MemInitializerListContext>(0);
}

size_t CtcLangParser::ConstructorInitializerContext::getRuleIndex() const
{
    return CtcLangParser::RuleConstructorInitializer;
}

std::any CtcLangParser::ConstructorInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitConstructorInitializer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ConstructorInitializerContext *CtcLangParser::constructorInitializer()
{
    ConstructorInitializerContext *_localctx =
        _tracker.createInstance<ConstructorInitializerContext>(_ctx, getState());
    enterRule(_localctx, 340, CtcLangParser::RuleConstructorInitializer);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1908);
        match(CtcLangParser::Colon);
        setState(1909);
        memInitializerList();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemInitializerListContext
//------------------------------------------------------------------

CtcLangParser::MemInitializerListContext::MemInitializerListContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::MemInitializerContext *> CtcLangParser::MemInitializerListContext::
    memInitializer()
{
    return getRuleContexts<CtcLangParser::MemInitializerContext>();
}

CtcLangParser::MemInitializerContext *CtcLangParser::MemInitializerListContext::memInitializer(
    size_t i)
{
    return getRuleContext<CtcLangParser::MemInitializerContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MemInitializerListContext::Ellipsis()
{
    return getTokens(CtcLangParser::Ellipsis);
}

tree::TerminalNode *CtcLangParser::MemInitializerListContext::Ellipsis(size_t i)
{
    return getToken(CtcLangParser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::MemInitializerListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::MemInitializerListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::MemInitializerListContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemInitializerList;
}

std::any CtcLangParser::MemInitializerListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemInitializerList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemInitializerListContext *CtcLangParser::memInitializerList()
{
    MemInitializerListContext *_localctx =
        _tracker.createInstance<MemInitializerListContext>(_ctx, getState());
    enterRule(_localctx, 342, CtcLangParser::RuleMemInitializerList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1911);
        memInitializer();
        setState(1913);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(1912);
            match(CtcLangParser::Ellipsis);
        }
        setState(1922);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1915);
            match(CtcLangParser::Comma);
            setState(1916);
            memInitializer();
            setState(1918);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Ellipsis)
            {
                setState(1917);
                match(CtcLangParser::Ellipsis);
            }
            setState(1924);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemInitializerContext
//------------------------------------------------------------------

CtcLangParser::MemInitializerContext::MemInitializerContext(ParserRuleContext *parent,
                                                            size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::MeminitializeridContext *CtcLangParser::MemInitializerContext::meminitializerid()
{
    return getRuleContext<CtcLangParser::MeminitializeridContext>(0);
}

tree::TerminalNode *CtcLangParser::MemInitializerContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::MemInitializerContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::BracedInitListContext *CtcLangParser::MemInitializerContext::bracedInitList()
{
    return getRuleContext<CtcLangParser::BracedInitListContext>(0);
}

CtcLangParser::ExpressionListContext *CtcLangParser::MemInitializerContext::expressionList()
{
    return getRuleContext<CtcLangParser::ExpressionListContext>(0);
}

size_t CtcLangParser::MemInitializerContext::getRuleIndex() const
{
    return CtcLangParser::RuleMemInitializer;
}

std::any CtcLangParser::MemInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMemInitializer(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MemInitializerContext *CtcLangParser::memInitializer()
{
    MemInitializerContext *_localctx =
        _tracker.createInstance<MemInitializerContext>(_ctx, getState());
    enterRule(_localctx, 344, CtcLangParser::RuleMemInitializer);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1925);
        meminitializerid();
        setState(1932);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::LeftParen: {
                setState(1926);
                match(CtcLangParser::LeftParen);
                setState(1928);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
                    ((((_la - 66) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 66)) & 2359886237200456865) != 0) ||
                    _la == CtcLangParser::Identifier)
                {
                    setState(1927);
                    expressionList();
                }
                setState(1930);
                match(CtcLangParser::RightParen);
                break;
            }

            case CtcLangParser::LeftBrace: {
                setState(1931);
                bracedInitList();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MeminitializeridContext
//------------------------------------------------------------------

CtcLangParser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::ClassOrDeclTypeContext *CtcLangParser::MeminitializeridContext::classOrDeclType()
{
    return getRuleContext<CtcLangParser::ClassOrDeclTypeContext>(0);
}

tree::TerminalNode *CtcLangParser::MeminitializeridContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::MeminitializeridContext::getRuleIndex() const
{
    return CtcLangParser::RuleMeminitializerid;
}

std::any CtcLangParser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitMeminitializerid(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::MeminitializeridContext *CtcLangParser::meminitializerid()
{
    MeminitializeridContext *_localctx =
        _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
    enterRule(_localctx, 346, CtcLangParser::RuleMeminitializerid);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1936);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1934);
                classOrDeclType();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1935);
                match(CtcLangParser::Identifier);
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- OperatorFunctionIdContext
//------------------------------------------------------------------

CtcLangParser::OperatorFunctionIdContext::OperatorFunctionIdContext(ParserRuleContext *parent,
                                                                    size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::OperatorFunctionIdContext::Operator()
{
    return getToken(CtcLangParser::Operator, 0);
}

CtcLangParser::TheOperatorContext *CtcLangParser::OperatorFunctionIdContext::theOperator()
{
    return getRuleContext<CtcLangParser::TheOperatorContext>(0);
}

size_t CtcLangParser::OperatorFunctionIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleOperatorFunctionId;
}

std::any CtcLangParser::OperatorFunctionIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitOperatorFunctionId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::OperatorFunctionIdContext *CtcLangParser::operatorFunctionId()
{
    OperatorFunctionIdContext *_localctx =
        _tracker.createInstance<OperatorFunctionIdContext>(_ctx, getState());
    enterRule(_localctx, 348, CtcLangParser::RuleOperatorFunctionId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1938);
        match(CtcLangParser::Operator);
        setState(1939);
        theOperator();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LiteralOperatorIdContext
//------------------------------------------------------------------

CtcLangParser::LiteralOperatorIdContext::LiteralOperatorIdContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LiteralOperatorIdContext::Operator()
{
    return getToken(CtcLangParser::Operator, 0);
}

tree::TerminalNode *CtcLangParser::LiteralOperatorIdContext::StringLiteral()
{
    return getToken(CtcLangParser::StringLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralOperatorIdContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

tree::TerminalNode *CtcLangParser::LiteralOperatorIdContext::UserDefinedStringLiteral()
{
    return getToken(CtcLangParser::UserDefinedStringLiteral, 0);
}

size_t CtcLangParser::LiteralOperatorIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleLiteralOperatorId;
}

std::any CtcLangParser::LiteralOperatorIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLiteralOperatorId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LiteralOperatorIdContext *CtcLangParser::literalOperatorId()
{
    LiteralOperatorIdContext *_localctx =
        _tracker.createInstance<LiteralOperatorIdContext>(_ctx, getState());
    enterRule(_localctx, 350, CtcLangParser::RuleLiteralOperatorId);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1941);
        match(CtcLangParser::Operator);
        setState(1945);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::StringLiteral: {
                setState(1942);
                match(CtcLangParser::StringLiteral);
                setState(1943);
                match(CtcLangParser::Identifier);
                break;
            }

            case CtcLangParser::UserDefinedStringLiteral: {
                setState(1944);
                match(CtcLangParser::UserDefinedStringLiteral);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateDeclarationContext
//------------------------------------------------------------------

CtcLangParser::TemplateDeclarationContext::TemplateDeclarationContext(ParserRuleContext *parent,
                                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TemplateDeclarationContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

tree::TerminalNode *CtcLangParser::TemplateDeclarationContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

CtcLangParser::TemplateparameterListContext *CtcLangParser::TemplateDeclarationContext::
    templateparameterList()
{
    return getRuleContext<CtcLangParser::TemplateparameterListContext>(0);
}

tree::TerminalNode *CtcLangParser::TemplateDeclarationContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

CtcLangParser::DeclarationContext *CtcLangParser::TemplateDeclarationContext::declaration()
{
    return getRuleContext<CtcLangParser::DeclarationContext>(0);
}

size_t CtcLangParser::TemplateDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateDeclaration;
}

std::any CtcLangParser::TemplateDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateDeclarationContext *CtcLangParser::templateDeclaration()
{
    TemplateDeclarationContext *_localctx =
        _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 352, CtcLangParser::RuleTemplateDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1947);
        match(CtcLangParser::Template);
        setState(1948);
        match(CtcLangParser::Less);
        setState(1949);
        templateparameterList();
        setState(1950);
        match(CtcLangParser::Greater);
        setState(1951);
        declaration();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateparameterListContext
//------------------------------------------------------------------

CtcLangParser::TemplateparameterListContext::TemplateparameterListContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::TemplateParameterContext *> CtcLangParser::TemplateparameterListContext::
    templateParameter()
{
    return getRuleContexts<CtcLangParser::TemplateParameterContext>();
}

CtcLangParser::TemplateParameterContext *CtcLangParser::TemplateparameterListContext::
    templateParameter(size_t i)
{
    return getRuleContext<CtcLangParser::TemplateParameterContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TemplateparameterListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::TemplateparameterListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::TemplateparameterListContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateparameterList;
}

std::any CtcLangParser::TemplateparameterListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateparameterList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateparameterListContext *CtcLangParser::templateparameterList()
{
    TemplateparameterListContext *_localctx =
        _tracker.createInstance<TemplateparameterListContext>(_ctx, getState());
    enterRule(_localctx, 354, CtcLangParser::RuleTemplateparameterList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1953);
        templateParameter();
        setState(1958);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(1954);
            match(CtcLangParser::Comma);
            setState(1955);
            templateParameter();
            setState(1960);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateParameterContext
//------------------------------------------------------------------

CtcLangParser::TemplateParameterContext::TemplateParameterContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TypeParameterContext *CtcLangParser::TemplateParameterContext::typeParameter()
{
    return getRuleContext<CtcLangParser::TypeParameterContext>(0);
}

CtcLangParser::ParameterDeclarationContext *CtcLangParser::TemplateParameterContext::
    parameterDeclaration()
{
    return getRuleContext<CtcLangParser::ParameterDeclarationContext>(0);
}

size_t CtcLangParser::TemplateParameterContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateParameter;
}

std::any CtcLangParser::TemplateParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateParameter(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateParameterContext *CtcLangParser::templateParameter()
{
    TemplateParameterContext *_localctx =
        _tracker.createInstance<TemplateParameterContext>(_ctx, getState());
    enterRule(_localctx, 356, CtcLangParser::RuleTemplateParameter);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(1963);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(1961);
                typeParameter();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(1962);
                parameterDeclaration();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeParameterContext
//------------------------------------------------------------------

CtcLangParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent,
                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Class()
{
    return getToken(CtcLangParser::Class, 0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Typename_()
{
    return getToken(CtcLangParser::Typename_, 0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

CtcLangParser::TheTypeIdContext *CtcLangParser::TypeParameterContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

CtcLangParser::TemplateparameterListContext *CtcLangParser::TypeParameterContext::
    templateparameterList()
{
    return getRuleContext<CtcLangParser::TemplateparameterListContext>(0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

tree::TerminalNode *CtcLangParser::TypeParameterContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::TypeParameterContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeParameter;
}

std::any CtcLangParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeParameter(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeParameterContext *CtcLangParser::typeParameter()
{
    TypeParameterContext *_localctx =
        _tracker.createInstance<TypeParameterContext>(_ctx, getState());
    enterRule(_localctx, 358, CtcLangParser::RuleTypeParameter);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1974);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Class:
            case CtcLangParser::Template: {
                setState(1970);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Template)
                {
                    setState(1965);
                    match(CtcLangParser::Template);
                    setState(1966);
                    match(CtcLangParser::Less);
                    setState(1967);
                    templateparameterList();
                    setState(1968);
                    match(CtcLangParser::Greater);
                }
                setState(1972);
                match(CtcLangParser::Class);
                break;
            }

            case CtcLangParser::Typename_: {
                setState(1973);
                match(CtcLangParser::Typename_);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
        setState(1987);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx))
        {
            case 1: {
                setState(1977);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Ellipsis)
                {
                    setState(1976);
                    match(CtcLangParser::Ellipsis);
                }
                setState(1980);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Identifier)
                {
                    setState(1979);
                    match(CtcLangParser::Identifier);
                }
                break;
            }

            case 2: {
                setState(1983);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Identifier)
                {
                    setState(1982);
                    match(CtcLangParser::Identifier);
                }
                setState(1985);
                match(CtcLangParser::Assign);
                setState(1986);
                theTypeId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SimpleTemplateIdContext
//------------------------------------------------------------------

CtcLangParser::SimpleTemplateIdContext::SimpleTemplateIdContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TemplateNameContext *CtcLangParser::SimpleTemplateIdContext::templateName()
{
    return getRuleContext<CtcLangParser::TemplateNameContext>(0);
}

tree::TerminalNode *CtcLangParser::SimpleTemplateIdContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

tree::TerminalNode *CtcLangParser::SimpleTemplateIdContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

CtcLangParser::TemplateArgumentListContext *CtcLangParser::SimpleTemplateIdContext::
    templateArgumentList()
{
    return getRuleContext<CtcLangParser::TemplateArgumentListContext>(0);
}

size_t CtcLangParser::SimpleTemplateIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleSimpleTemplateId;
}

std::any CtcLangParser::SimpleTemplateIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitSimpleTemplateId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::simpleTemplateId()
{
    SimpleTemplateIdContext *_localctx =
        _tracker.createInstance<SimpleTemplateIdContext>(_ctx, getState());
    enterRule(_localctx, 360, CtcLangParser::RuleSimpleTemplateId);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(1989);
        templateName();
        setState(1990);
        match(CtcLangParser::Less);
        setState(1992);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1176352048690968322) != 0) ||
            ((((_la - 66) & ~0x3fULL) == 0) && ((1ULL << (_la - 66)) & 2359886237192133671) != 0) ||
            _la == CtcLangParser::Identifier)
        {
            setState(1991);
            templateArgumentList();
        }
        setState(1994);
        match(CtcLangParser::Greater);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateIdContext
//------------------------------------------------------------------

CtcLangParser::TemplateIdContext::TemplateIdContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::TemplateIdContext::simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode *CtcLangParser::TemplateIdContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

tree::TerminalNode *CtcLangParser::TemplateIdContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

CtcLangParser::OperatorFunctionIdContext *CtcLangParser::TemplateIdContext::operatorFunctionId()
{
    return getRuleContext<CtcLangParser::OperatorFunctionIdContext>(0);
}

CtcLangParser::LiteralOperatorIdContext *CtcLangParser::TemplateIdContext::literalOperatorId()
{
    return getRuleContext<CtcLangParser::LiteralOperatorIdContext>(0);
}

CtcLangParser::TemplateArgumentListContext *CtcLangParser::TemplateIdContext::templateArgumentList()
{
    return getRuleContext<CtcLangParser::TemplateArgumentListContext>(0);
}

size_t CtcLangParser::TemplateIdContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateId;
}

std::any CtcLangParser::TemplateIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateId(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateIdContext *CtcLangParser::templateId()
{
    TemplateIdContext *_localctx = _tracker.createInstance<TemplateIdContext>(_ctx, getState());
    enterRule(_localctx, 362, CtcLangParser::RuleTemplateId);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2007);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(1996);
                simpleTemplateId();
                break;
            }

            case CtcLangParser::Operator: {
                enterOuterAlt(_localctx, 2);
                setState(1999);
                _errHandler->sync(this);
                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx))
                {
                    case 1: {
                        setState(1997);
                        operatorFunctionId();
                        break;
                    }

                    case 2: {
                        setState(1998);
                        literalOperatorId();
                        break;
                    }

                    default:
                        break;
                }
                setState(2001);
                match(CtcLangParser::Less);
                setState(2003);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1176352048690968322) != 0) ||
                    ((((_la - 66) & ~0x3fULL) == 0) &&
                     ((1ULL << (_la - 66)) & 2359886237192133671) != 0) ||
                    _la == CtcLangParser::Identifier)
                {
                    setState(2002);
                    templateArgumentList();
                }
                setState(2005);
                match(CtcLangParser::Greater);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateNameContext
//------------------------------------------------------------------

CtcLangParser::TemplateNameContext::TemplateNameContext(ParserRuleContext *parent,
                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TemplateNameContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

size_t CtcLangParser::TemplateNameContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateName;
}

std::any CtcLangParser::TemplateNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateName(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateNameContext *CtcLangParser::templateName()
{
    TemplateNameContext *_localctx = _tracker.createInstance<TemplateNameContext>(_ctx, getState());
    enterRule(_localctx, 364, CtcLangParser::RuleTemplateName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2009);
        match(CtcLangParser::Identifier);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateArgumentListContext
//------------------------------------------------------------------

CtcLangParser::TemplateArgumentListContext::TemplateArgumentListContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::TemplateArgumentContext *> CtcLangParser::TemplateArgumentListContext::
    templateArgument()
{
    return getRuleContexts<CtcLangParser::TemplateArgumentContext>();
}

CtcLangParser::TemplateArgumentContext *CtcLangParser::TemplateArgumentListContext::
    templateArgument(size_t i)
{
    return getRuleContext<CtcLangParser::TemplateArgumentContext>(i);
}

std::vector<CtcLangParser::AccessSpecifierContext *> CtcLangParser::TemplateArgumentListContext::
    accessSpecifier()
{
    return getRuleContexts<CtcLangParser::AccessSpecifierContext>();
}

CtcLangParser::AccessSpecifierContext *CtcLangParser::TemplateArgumentListContext::accessSpecifier(
    size_t i)
{
    return getRuleContext<CtcLangParser::AccessSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TemplateArgumentListContext::Ellipsis()
{
    return getTokens(CtcLangParser::Ellipsis);
}

tree::TerminalNode *CtcLangParser::TemplateArgumentListContext::Ellipsis(size_t i)
{
    return getToken(CtcLangParser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TemplateArgumentListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::TemplateArgumentListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::TemplateArgumentListContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateArgumentList;
}

std::any CtcLangParser::TemplateArgumentListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateArgumentList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateArgumentListContext *CtcLangParser::templateArgumentList()
{
    TemplateArgumentListContext *_localctx =
        _tracker.createInstance<TemplateArgumentListContext>(_ctx, getState());
    enterRule(_localctx, 366, CtcLangParser::RuleTemplateArgumentList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2012);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx))
        {
            case 1: {
                setState(2011);
                accessSpecifier();
                break;
            }

            default:
                break;
        }
        setState(2014);
        templateArgument();
        setState(2016);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(2015);
            match(CtcLangParser::Ellipsis);
        }
        setState(2028);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(2018);
            match(CtcLangParser::Comma);
            setState(2020);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx))
            {
                case 1: {
                    setState(2019);
                    accessSpecifier();
                    break;
                }

                default:
                    break;
            }
            setState(2022);
            templateArgument();
            setState(2024);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Ellipsis)
            {
                setState(2023);
                match(CtcLangParser::Ellipsis);
            }
            setState(2030);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TemplateArgumentContext
//------------------------------------------------------------------

CtcLangParser::TemplateArgumentContext::TemplateArgumentContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TheTypeIdContext *CtcLangParser::TemplateArgumentContext::theTypeId()
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::TemplateArgumentContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

CtcLangParser::IdExpressionContext *CtcLangParser::TemplateArgumentContext::idExpression()
{
    return getRuleContext<CtcLangParser::IdExpressionContext>(0);
}

size_t CtcLangParser::TemplateArgumentContext::getRuleIndex() const
{
    return CtcLangParser::RuleTemplateArgument;
}

std::any CtcLangParser::TemplateArgumentContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTemplateArgument(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TemplateArgumentContext *CtcLangParser::templateArgument()
{
    TemplateArgumentContext *_localctx =
        _tracker.createInstance<TemplateArgumentContext>(_ctx, getState());
    enterRule(_localctx, 368, CtcLangParser::RuleTemplateArgument);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2034);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(2031);
                theTypeId();
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(2032);
                constantExpression();
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(2033);
                idExpression();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeNameSpecifierContext
//------------------------------------------------------------------

CtcLangParser::TypeNameSpecifierContext::TypeNameSpecifierContext(ParserRuleContext *parent,
                                                                  size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TypeNameSpecifierContext::Typename_()
{
    return getToken(CtcLangParser::Typename_, 0);
}

CtcLangParser::NestedNameSpecifierContext *CtcLangParser::TypeNameSpecifierContext::
    nestedNameSpecifier()
{
    return getRuleContext<CtcLangParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode *CtcLangParser::TypeNameSpecifierContext::Identifier()
{
    return getToken(CtcLangParser::Identifier, 0);
}

CtcLangParser::SimpleTemplateIdContext *CtcLangParser::TypeNameSpecifierContext::simpleTemplateId()
{
    return getRuleContext<CtcLangParser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode *CtcLangParser::TypeNameSpecifierContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

size_t CtcLangParser::TypeNameSpecifierContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeNameSpecifier;
}

std::any CtcLangParser::TypeNameSpecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeNameSpecifier(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeNameSpecifierContext *CtcLangParser::typeNameSpecifier()
{
    TypeNameSpecifierContext *_localctx =
        _tracker.createInstance<TypeNameSpecifierContext>(_ctx, getState());
    enterRule(_localctx, 370, CtcLangParser::RuleTypeNameSpecifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2036);
        match(CtcLangParser::Typename_);
        setState(2037);
        nestedNameSpecifier(0);
        setState(2043);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx))
        {
            case 1: {
                setState(2038);
                match(CtcLangParser::Identifier);
                break;
            }

            case 2: {
                setState(2040);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Template)
                {
                    setState(2039);
                    match(CtcLangParser::Template);
                }
                setState(2042);
                simpleTemplateId();
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExplicitInstantiationContext
//------------------------------------------------------------------

CtcLangParser::ExplicitInstantiationContext::ExplicitInstantiationContext(ParserRuleContext *parent,
                                                                          size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ExplicitInstantiationContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

CtcLangParser::DeclarationContext *CtcLangParser::ExplicitInstantiationContext::declaration()
{
    return getRuleContext<CtcLangParser::DeclarationContext>(0);
}

tree::TerminalNode *CtcLangParser::ExplicitInstantiationContext::Extern()
{
    return getToken(CtcLangParser::Extern, 0);
}

size_t CtcLangParser::ExplicitInstantiationContext::getRuleIndex() const
{
    return CtcLangParser::RuleExplicitInstantiation;
}

std::any CtcLangParser::ExplicitInstantiationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExplicitInstantiation(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExplicitInstantiationContext *CtcLangParser::explicitInstantiation()
{
    ExplicitInstantiationContext *_localctx =
        _tracker.createInstance<ExplicitInstantiationContext>(_ctx, getState());
    enterRule(_localctx, 372, CtcLangParser::RuleExplicitInstantiation);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2046);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Extern)
        {
            setState(2045);
            match(CtcLangParser::Extern);
        }
        setState(2048);
        match(CtcLangParser::Template);
        setState(2049);
        declaration();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExplicitSpecializationContext
//------------------------------------------------------------------

CtcLangParser::ExplicitSpecializationContext::ExplicitSpecializationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ExplicitSpecializationContext::Template()
{
    return getToken(CtcLangParser::Template, 0);
}

tree::TerminalNode *CtcLangParser::ExplicitSpecializationContext::Less()
{
    return getToken(CtcLangParser::Less, 0);
}

tree::TerminalNode *CtcLangParser::ExplicitSpecializationContext::Greater()
{
    return getToken(CtcLangParser::Greater, 0);
}

CtcLangParser::DeclarationContext *CtcLangParser::ExplicitSpecializationContext::declaration()
{
    return getRuleContext<CtcLangParser::DeclarationContext>(0);
}

size_t CtcLangParser::ExplicitSpecializationContext::getRuleIndex() const
{
    return CtcLangParser::RuleExplicitSpecialization;
}

std::any CtcLangParser::ExplicitSpecializationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExplicitSpecialization(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExplicitSpecializationContext *CtcLangParser::explicitSpecialization()
{
    ExplicitSpecializationContext *_localctx =
        _tracker.createInstance<ExplicitSpecializationContext>(_ctx, getState());
    enterRule(_localctx, 374, CtcLangParser::RuleExplicitSpecialization);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2051);
        match(CtcLangParser::Template);
        setState(2052);
        match(CtcLangParser::Less);
        setState(2053);
        match(CtcLangParser::Greater);
        setState(2054);
        declaration();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TryBlockContext
//------------------------------------------------------------------

CtcLangParser::TryBlockContext::TryBlockContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TryBlockContext::Try()
{
    return getToken(CtcLangParser::Try, 0);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::TryBlockContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

CtcLangParser::HandlerSeqContext *CtcLangParser::TryBlockContext::handlerSeq()
{
    return getRuleContext<CtcLangParser::HandlerSeqContext>(0);
}

size_t CtcLangParser::TryBlockContext::getRuleIndex() const
{
    return CtcLangParser::RuleTryBlock;
}

std::any CtcLangParser::TryBlockContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTryBlock(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TryBlockContext *CtcLangParser::tryBlock()
{
    TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
    enterRule(_localctx, 376, CtcLangParser::RuleTryBlock);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2056);
        match(CtcLangParser::Try);
        setState(2057);
        compoundStatement();
        setState(2058);
        handlerSeq();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FunctionTryBlockContext
//------------------------------------------------------------------

CtcLangParser::FunctionTryBlockContext::FunctionTryBlockContext(ParserRuleContext *parent,
                                                                size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::FunctionTryBlockContext::Try()
{
    return getToken(CtcLangParser::Try, 0);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::FunctionTryBlockContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

CtcLangParser::HandlerSeqContext *CtcLangParser::FunctionTryBlockContext::handlerSeq()
{
    return getRuleContext<CtcLangParser::HandlerSeqContext>(0);
}

CtcLangParser::ConstructorInitializerContext *CtcLangParser::FunctionTryBlockContext::
    constructorInitializer()
{
    return getRuleContext<CtcLangParser::ConstructorInitializerContext>(0);
}

size_t CtcLangParser::FunctionTryBlockContext::getRuleIndex() const
{
    return CtcLangParser::RuleFunctionTryBlock;
}

std::any CtcLangParser::FunctionTryBlockContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitFunctionTryBlock(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::FunctionTryBlockContext *CtcLangParser::functionTryBlock()
{
    FunctionTryBlockContext *_localctx =
        _tracker.createInstance<FunctionTryBlockContext>(_ctx, getState());
    enterRule(_localctx, 378, CtcLangParser::RuleFunctionTryBlock);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2060);
        match(CtcLangParser::Try);
        setState(2062);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Colon)
        {
            setState(2061);
            constructorInitializer();
        }
        setState(2064);
        compoundStatement();
        setState(2065);
        handlerSeq();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- HandlerSeqContext
//------------------------------------------------------------------

CtcLangParser::HandlerSeqContext::HandlerSeqContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::HandlerContext *> CtcLangParser::HandlerSeqContext::handler()
{
    return getRuleContexts<CtcLangParser::HandlerContext>();
}

CtcLangParser::HandlerContext *CtcLangParser::HandlerSeqContext::handler(size_t i)
{
    return getRuleContext<CtcLangParser::HandlerContext>(i);
}

size_t CtcLangParser::HandlerSeqContext::getRuleIndex() const
{
    return CtcLangParser::RuleHandlerSeq;
}

std::any CtcLangParser::HandlerSeqContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitHandlerSeq(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::HandlerSeqContext *CtcLangParser::handlerSeq()
{
    HandlerSeqContext *_localctx = _tracker.createInstance<HandlerSeqContext>(_ctx, getState());
    enterRule(_localctx, 380, CtcLangParser::RuleHandlerSeq);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2068);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do
        {
            setState(2067);
            handler();
            setState(2070);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (_la == CtcLangParser::Catch);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- HandlerContext
//------------------------------------------------------------------

CtcLangParser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::HandlerContext::Catch()
{
    return getToken(CtcLangParser::Catch, 0);
}

tree::TerminalNode *CtcLangParser::HandlerContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ExceptionDeclarationContext *CtcLangParser::HandlerContext::exceptionDeclaration()
{
    return getRuleContext<CtcLangParser::ExceptionDeclarationContext>(0);
}

tree::TerminalNode *CtcLangParser::HandlerContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::CompoundStatementContext *CtcLangParser::HandlerContext::compoundStatement()
{
    return getRuleContext<CtcLangParser::CompoundStatementContext>(0);
}

size_t CtcLangParser::HandlerContext::getRuleIndex() const
{
    return CtcLangParser::RuleHandler;
}

std::any CtcLangParser::HandlerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitHandler(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::HandlerContext *CtcLangParser::handler()
{
    HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
    enterRule(_localctx, 382, CtcLangParser::RuleHandler);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2072);
        match(CtcLangParser::Catch);
        setState(2073);
        match(CtcLangParser::LeftParen);
        setState(2074);
        exceptionDeclaration();
        setState(2075);
        match(CtcLangParser::RightParen);
        setState(2076);
        compoundStatement();
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExceptionDeclarationContext
//------------------------------------------------------------------

CtcLangParser::ExceptionDeclarationContext::ExceptionDeclarationContext(ParserRuleContext *parent,
                                                                        size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::TypeSpecifierSeqContext *CtcLangParser::ExceptionDeclarationContext::
    typeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::TypeSpecifierSeqContext>(0);
}

CtcLangParser::AttributeSpecifierSeqContext *CtcLangParser::ExceptionDeclarationContext::
    attributeSpecifierSeq()
{
    return getRuleContext<CtcLangParser::AttributeSpecifierSeqContext>(0);
}

CtcLangParser::DeclaratorContext *CtcLangParser::ExceptionDeclarationContext::declarator()
{
    return getRuleContext<CtcLangParser::DeclaratorContext>(0);
}

CtcLangParser::AbstractDeclaratorContext *CtcLangParser::ExceptionDeclarationContext::
    abstractDeclarator()
{
    return getRuleContext<CtcLangParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode *CtcLangParser::ExceptionDeclarationContext::Ellipsis()
{
    return getToken(CtcLangParser::Ellipsis, 0);
}

size_t CtcLangParser::ExceptionDeclarationContext::getRuleIndex() const
{
    return CtcLangParser::RuleExceptionDeclaration;
}

std::any CtcLangParser::ExceptionDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExceptionDeclaration(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExceptionDeclarationContext *CtcLangParser::exceptionDeclaration()
{
    ExceptionDeclarationContext *_localctx =
        _tracker.createInstance<ExceptionDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 384, CtcLangParser::RuleExceptionDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2087);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Alignas:
            case CtcLangParser::Auto:
            case CtcLangParser::Bool:
            case CtcLangParser::Char:
            case CtcLangParser::Char16:
            case CtcLangParser::Char32:
            case CtcLangParser::Class:
            case CtcLangParser::Const:
            case CtcLangParser::Decltype:
            case CtcLangParser::Double:
            case CtcLangParser::Enum:
            case CtcLangParser::Float:
            case CtcLangParser::Int:
            case CtcLangParser::Long:
            case CtcLangParser::Private:
            case CtcLangParser::Protected:
            case CtcLangParser::Public:
            case CtcLangParser::Interface:
            case CtcLangParser::Short:
            case CtcLangParser::Signed:
            case CtcLangParser::Record:
            case CtcLangParser::Struct:
            case CtcLangParser::Typename_:
            case CtcLangParser::Unsigned:
            case CtcLangParser::Void:
            case CtcLangParser::Volatile:
            case CtcLangParser::Wchar:
            case CtcLangParser::LeftBracket:
            case CtcLangParser::Doublecolon:
            case CtcLangParser::Identifier: {
                enterOuterAlt(_localctx, 1);
                setState(2079);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == CtcLangParser::Alignas || _la == CtcLangParser::LeftBracket)
                {
                    setState(2078);
                    attributeSpecifierSeq();
                }
                setState(2081);
                typeSpecifierSeq();
                setState(2084);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx))
                {
                    case 1: {
                        setState(2082);
                        declarator();
                        break;
                    }

                    case 2: {
                        setState(2083);
                        abstractDeclarator();
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case CtcLangParser::Ellipsis: {
                enterOuterAlt(_localctx, 2);
                setState(2086);
                match(CtcLangParser::Ellipsis);
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ThrowExpressionContext
//------------------------------------------------------------------

CtcLangParser::ThrowExpressionContext::ThrowExpressionContext(ParserRuleContext *parent,
                                                              size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::ThrowExpressionContext::Throw()
{
    return getToken(CtcLangParser::Throw, 0);
}

CtcLangParser::AssignmentExpressionContext *CtcLangParser::ThrowExpressionContext::
    assignmentExpression()
{
    return getRuleContext<CtcLangParser::AssignmentExpressionContext>(0);
}

size_t CtcLangParser::ThrowExpressionContext::getRuleIndex() const
{
    return CtcLangParser::RuleThrowExpression;
}

std::any CtcLangParser::ThrowExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitThrowExpression(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ThrowExpressionContext *CtcLangParser::throwExpression()
{
    ThrowExpressionContext *_localctx =
        _tracker.createInstance<ThrowExpressionContext>(_ctx, getState());
    enterRule(_localctx, 386, CtcLangParser::RuleThrowExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2089);
        match(CtcLangParser::Throw);
        setState(2091);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & -1716784038347749122) != 0) ||
            ((((_la - 66) & ~0x3fULL) == 0) && ((1ULL << (_la - 66)) & 2359886237192068257) != 0) ||
            _la == CtcLangParser::Identifier)
        {
            setState(2090);
            assignmentExpression();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExceptionSpecificationContext
//------------------------------------------------------------------

CtcLangParser::ExceptionSpecificationContext::ExceptionSpecificationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

CtcLangParser::DynamicExceptionSpecificationContext *CtcLangParser::ExceptionSpecificationContext::
    dynamicExceptionSpecification()
{
    return getRuleContext<CtcLangParser::DynamicExceptionSpecificationContext>(0);
}

CtcLangParser::NoeExceptSpecificationContext *CtcLangParser::ExceptionSpecificationContext::
    noeExceptSpecification()
{
    return getRuleContext<CtcLangParser::NoeExceptSpecificationContext>(0);
}

size_t CtcLangParser::ExceptionSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleExceptionSpecification;
}

std::any CtcLangParser::ExceptionSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitExceptionSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::ExceptionSpecificationContext *CtcLangParser::exceptionSpecification()
{
    ExceptionSpecificationContext *_localctx =
        _tracker.createInstance<ExceptionSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 388, CtcLangParser::RuleExceptionSpecification);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2095);
        _errHandler->sync(this);
        switch (_input->LA(1))
        {
            case CtcLangParser::Throw: {
                enterOuterAlt(_localctx, 1);
                setState(2093);
                dynamicExceptionSpecification();
                break;
            }

            case CtcLangParser::Noexcept: {
                enterOuterAlt(_localctx, 2);
                setState(2094);
                noeExceptSpecification();
                break;
            }

            default:
                throw NoViableAltException(this);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DynamicExceptionSpecificationContext
//------------------------------------------------------------------

CtcLangParser::DynamicExceptionSpecificationContext::DynamicExceptionSpecificationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::DynamicExceptionSpecificationContext::Throw()
{
    return getToken(CtcLangParser::Throw, 0);
}

tree::TerminalNode *CtcLangParser::DynamicExceptionSpecificationContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::DynamicExceptionSpecificationContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

CtcLangParser::TypeIdListContext *CtcLangParser::DynamicExceptionSpecificationContext::typeIdList()
{
    return getRuleContext<CtcLangParser::TypeIdListContext>(0);
}

size_t CtcLangParser::DynamicExceptionSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleDynamicExceptionSpecification;
}

std::any CtcLangParser::DynamicExceptionSpecificationContext::accept(
    tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitDynamicExceptionSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::DynamicExceptionSpecificationContext *CtcLangParser::dynamicExceptionSpecification()
{
    DynamicExceptionSpecificationContext *_localctx =
        _tracker.createInstance<DynamicExceptionSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 390, CtcLangParser::RuleDynamicExceptionSpecification);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2097);
        match(CtcLangParser::Throw);
        setState(2098);
        match(CtcLangParser::LeftParen);
        setState(2100);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 14) & ~0x3fULL) == 0) &&
             ((1ULL << (_la - 14)) & -9195895228255157277) != 0) ||
            ((((_la - 78) & ~0x3fULL) == 0) && ((1ULL << (_la - 78)) & 18577348462903353) != 0))
        {
            setState(2099);
            typeIdList();
        }
        setState(2102);
        match(CtcLangParser::RightParen);
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeIdListContext
//------------------------------------------------------------------

CtcLangParser::TypeIdListContext::TypeIdListContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

std::vector<CtcLangParser::TheTypeIdContext *> CtcLangParser::TypeIdListContext::theTypeId()
{
    return getRuleContexts<CtcLangParser::TheTypeIdContext>();
}

CtcLangParser::TheTypeIdContext *CtcLangParser::TypeIdListContext::theTypeId(size_t i)
{
    return getRuleContext<CtcLangParser::TheTypeIdContext>(i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TypeIdListContext::Ellipsis()
{
    return getTokens(CtcLangParser::Ellipsis);
}

tree::TerminalNode *CtcLangParser::TypeIdListContext::Ellipsis(size_t i)
{
    return getToken(CtcLangParser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TypeIdListContext::Comma()
{
    return getTokens(CtcLangParser::Comma);
}

tree::TerminalNode *CtcLangParser::TypeIdListContext::Comma(size_t i)
{
    return getToken(CtcLangParser::Comma, i);
}

size_t CtcLangParser::TypeIdListContext::getRuleIndex() const
{
    return CtcLangParser::RuleTypeIdList;
}

std::any CtcLangParser::TypeIdListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTypeIdList(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TypeIdListContext *CtcLangParser::typeIdList()
{
    TypeIdListContext *_localctx = _tracker.createInstance<TypeIdListContext>(_ctx, getState());
    enterRule(_localctx, 392, CtcLangParser::RuleTypeIdList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2104);
        theTypeId();
        setState(2106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CtcLangParser::Ellipsis)
        {
            setState(2105);
            match(CtcLangParser::Ellipsis);
        }
        setState(2115);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == CtcLangParser::Comma)
        {
            setState(2108);
            match(CtcLangParser::Comma);
            setState(2109);
            theTypeId();
            setState(2111);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CtcLangParser::Ellipsis)
            {
                setState(2110);
                match(CtcLangParser::Ellipsis);
            }
            setState(2117);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NoeExceptSpecificationContext
//------------------------------------------------------------------

CtcLangParser::NoeExceptSpecificationContext::NoeExceptSpecificationContext(
    ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::NoeExceptSpecificationContext::Noexcept()
{
    return getToken(CtcLangParser::Noexcept, 0);
}

tree::TerminalNode *CtcLangParser::NoeExceptSpecificationContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

CtcLangParser::ConstantExpressionContext *CtcLangParser::NoeExceptSpecificationContext::
    constantExpression()
{
    return getRuleContext<CtcLangParser::ConstantExpressionContext>(0);
}

tree::TerminalNode *CtcLangParser::NoeExceptSpecificationContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

size_t CtcLangParser::NoeExceptSpecificationContext::getRuleIndex() const
{
    return CtcLangParser::RuleNoeExceptSpecification;
}

std::any CtcLangParser::NoeExceptSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitNoeExceptSpecification(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::NoeExceptSpecificationContext *CtcLangParser::noeExceptSpecification()
{
    NoeExceptSpecificationContext *_localctx =
        _tracker.createInstance<NoeExceptSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 394, CtcLangParser::RuleNoeExceptSpecification);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2124);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(2118);
                match(CtcLangParser::Noexcept);
                setState(2119);
                match(CtcLangParser::LeftParen);
                setState(2120);
                constantExpression();
                setState(2121);
                match(CtcLangParser::RightParen);
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(2123);
                match(CtcLangParser::Noexcept);
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TheOperatorContext
//------------------------------------------------------------------

CtcLangParser::TheOperatorContext::TheOperatorContext(ParserRuleContext *parent,
                                                      size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::New()
{
    return getToken(CtcLangParser::New, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::LeftBracket()
{
    return getToken(CtcLangParser::LeftBracket, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::RightBracket()
{
    return getToken(CtcLangParser::RightBracket, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Delete()
{
    return getToken(CtcLangParser::Delete, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Plus()
{
    return getToken(CtcLangParser::Plus, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Minus()
{
    return getToken(CtcLangParser::Minus, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Star()
{
    return getToken(CtcLangParser::Star, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Div()
{
    return getToken(CtcLangParser::Div, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Mod()
{
    return getToken(CtcLangParser::Mod, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Caret()
{
    return getToken(CtcLangParser::Caret, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::And()
{
    return getToken(CtcLangParser::And, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Or()
{
    return getToken(CtcLangParser::Or, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Tilde()
{
    return getToken(CtcLangParser::Tilde, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Not()
{
    return getToken(CtcLangParser::Not, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Assign()
{
    return getToken(CtcLangParser::Assign, 0);
}

std::vector<tree::TerminalNode *> CtcLangParser::TheOperatorContext::Greater()
{
    return getTokens(CtcLangParser::Greater);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Greater(size_t i)
{
    return getToken(CtcLangParser::Greater, i);
}

std::vector<tree::TerminalNode *> CtcLangParser::TheOperatorContext::Less()
{
    return getTokens(CtcLangParser::Less);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Less(size_t i)
{
    return getToken(CtcLangParser::Less, i);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::GreaterEqual()
{
    return getToken(CtcLangParser::GreaterEqual, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::PlusAssign()
{
    return getToken(CtcLangParser::PlusAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::MinusAssign()
{
    return getToken(CtcLangParser::MinusAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::StarAssign()
{
    return getToken(CtcLangParser::StarAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::ModAssign()
{
    return getToken(CtcLangParser::ModAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::XorAssign()
{
    return getToken(CtcLangParser::XorAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::AndAssign()
{
    return getToken(CtcLangParser::AndAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::OrAssign()
{
    return getToken(CtcLangParser::OrAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::RightShiftAssign()
{
    return getToken(CtcLangParser::RightShiftAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::LeftShiftAssign()
{
    return getToken(CtcLangParser::LeftShiftAssign, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Equal()
{
    return getToken(CtcLangParser::Equal, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::NotEqual()
{
    return getToken(CtcLangParser::NotEqual, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::LessEqual()
{
    return getToken(CtcLangParser::LessEqual, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::AndAnd()
{
    return getToken(CtcLangParser::AndAnd, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::OrOr()
{
    return getToken(CtcLangParser::OrOr, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::PlusPlus()
{
    return getToken(CtcLangParser::PlusPlus, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::MinusMinus()
{
    return getToken(CtcLangParser::MinusMinus, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Comma()
{
    return getToken(CtcLangParser::Comma, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::ArrowStar()
{
    return getToken(CtcLangParser::ArrowStar, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::Arrow()
{
    return getToken(CtcLangParser::Arrow, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::LeftParen()
{
    return getToken(CtcLangParser::LeftParen, 0);
}

tree::TerminalNode *CtcLangParser::TheOperatorContext::RightParen()
{
    return getToken(CtcLangParser::RightParen, 0);
}

size_t CtcLangParser::TheOperatorContext::getRuleIndex() const
{
    return CtcLangParser::RuleTheOperator;
}

std::any CtcLangParser::TheOperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitTheOperator(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::TheOperatorContext *CtcLangParser::theOperator()
{
    TheOperatorContext *_localctx = _tracker.createInstance<TheOperatorContext>(_ctx, getState());
    enterRule(_localctx, 396, CtcLangParser::RuleTheOperator);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        setState(2177);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx))
        {
            case 1: {
                enterOuterAlt(_localctx, 1);
                setState(2126);
                match(CtcLangParser::New);
                setState(2129);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx))
                {
                    case 1: {
                        setState(2127);
                        match(CtcLangParser::LeftBracket);
                        setState(2128);
                        match(CtcLangParser::RightBracket);
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case 2: {
                enterOuterAlt(_localctx, 2);
                setState(2131);
                match(CtcLangParser::Delete);
                setState(2134);
                _errHandler->sync(this);

                switch (
                    getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx))
                {
                    case 1: {
                        setState(2132);
                        match(CtcLangParser::LeftBracket);
                        setState(2133);
                        match(CtcLangParser::RightBracket);
                        break;
                    }

                    default:
                        break;
                }
                break;
            }

            case 3: {
                enterOuterAlt(_localctx, 3);
                setState(2136);
                match(CtcLangParser::Plus);
                break;
            }

            case 4: {
                enterOuterAlt(_localctx, 4);
                setState(2137);
                match(CtcLangParser::Minus);
                break;
            }

            case 5: {
                enterOuterAlt(_localctx, 5);
                setState(2138);
                match(CtcLangParser::Star);
                break;
            }

            case 6: {
                enterOuterAlt(_localctx, 6);
                setState(2139);
                match(CtcLangParser::Div);
                break;
            }

            case 7: {
                enterOuterAlt(_localctx, 7);
                setState(2140);
                match(CtcLangParser::Mod);
                break;
            }

            case 8: {
                enterOuterAlt(_localctx, 8);
                setState(2141);
                match(CtcLangParser::Caret);
                break;
            }

            case 9: {
                enterOuterAlt(_localctx, 9);
                setState(2142);
                match(CtcLangParser::And);
                break;
            }

            case 10: {
                enterOuterAlt(_localctx, 10);
                setState(2143);
                match(CtcLangParser::Or);
                break;
            }

            case 11: {
                enterOuterAlt(_localctx, 11);
                setState(2144);
                match(CtcLangParser::Tilde);
                break;
            }

            case 12: {
                enterOuterAlt(_localctx, 12);
                setState(2145);
                match(CtcLangParser::Not);
                break;
            }

            case 13: {
                enterOuterAlt(_localctx, 13);
                setState(2146);
                match(CtcLangParser::Assign);
                break;
            }

            case 14: {
                enterOuterAlt(_localctx, 14);
                setState(2147);
                match(CtcLangParser::Greater);
                break;
            }

            case 15: {
                enterOuterAlt(_localctx, 15);
                setState(2148);
                match(CtcLangParser::Less);
                break;
            }

            case 16: {
                enterOuterAlt(_localctx, 16);
                setState(2149);
                match(CtcLangParser::GreaterEqual);
                break;
            }

            case 17: {
                enterOuterAlt(_localctx, 17);
                setState(2150);
                match(CtcLangParser::PlusAssign);
                break;
            }

            case 18: {
                enterOuterAlt(_localctx, 18);
                setState(2151);
                match(CtcLangParser::MinusAssign);
                break;
            }

            case 19: {
                enterOuterAlt(_localctx, 19);
                setState(2152);
                match(CtcLangParser::StarAssign);
                break;
            }

            case 20: {
                enterOuterAlt(_localctx, 20);
                setState(2153);
                match(CtcLangParser::ModAssign);
                break;
            }

            case 21: {
                enterOuterAlt(_localctx, 21);
                setState(2154);
                match(CtcLangParser::XorAssign);
                break;
            }

            case 22: {
                enterOuterAlt(_localctx, 22);
                setState(2155);
                match(CtcLangParser::AndAssign);
                break;
            }

            case 23: {
                enterOuterAlt(_localctx, 23);
                setState(2156);
                match(CtcLangParser::OrAssign);
                break;
            }

            case 24: {
                enterOuterAlt(_localctx, 24);
                setState(2157);
                match(CtcLangParser::Less);
                setState(2158);
                match(CtcLangParser::Less);
                break;
            }

            case 25: {
                enterOuterAlt(_localctx, 25);
                setState(2159);
                match(CtcLangParser::Greater);
                setState(2160);
                match(CtcLangParser::Greater);
                break;
            }

            case 26: {
                enterOuterAlt(_localctx, 26);
                setState(2161);
                match(CtcLangParser::RightShiftAssign);
                break;
            }

            case 27: {
                enterOuterAlt(_localctx, 27);
                setState(2162);
                match(CtcLangParser::LeftShiftAssign);
                break;
            }

            case 28: {
                enterOuterAlt(_localctx, 28);
                setState(2163);
                match(CtcLangParser::Equal);
                break;
            }

            case 29: {
                enterOuterAlt(_localctx, 29);
                setState(2164);
                match(CtcLangParser::NotEqual);
                break;
            }

            case 30: {
                enterOuterAlt(_localctx, 30);
                setState(2165);
                match(CtcLangParser::LessEqual);
                break;
            }

            case 31: {
                enterOuterAlt(_localctx, 31);
                setState(2166);
                match(CtcLangParser::AndAnd);
                break;
            }

            case 32: {
                enterOuterAlt(_localctx, 32);
                setState(2167);
                match(CtcLangParser::OrOr);
                break;
            }

            case 33: {
                enterOuterAlt(_localctx, 33);
                setState(2168);
                match(CtcLangParser::PlusPlus);
                break;
            }

            case 34: {
                enterOuterAlt(_localctx, 34);
                setState(2169);
                match(CtcLangParser::MinusMinus);
                break;
            }

            case 35: {
                enterOuterAlt(_localctx, 35);
                setState(2170);
                match(CtcLangParser::Comma);
                break;
            }

            case 36: {
                enterOuterAlt(_localctx, 36);
                setState(2171);
                match(CtcLangParser::ArrowStar);
                break;
            }

            case 37: {
                enterOuterAlt(_localctx, 37);
                setState(2172);
                match(CtcLangParser::Arrow);
                break;
            }

            case 38: {
                enterOuterAlt(_localctx, 38);
                setState(2173);
                match(CtcLangParser::LeftParen);
                setState(2174);
                match(CtcLangParser::RightParen);
                break;
            }

            case 39: {
                enterOuterAlt(_localctx, 39);
                setState(2175);
                match(CtcLangParser::LeftBracket);
                setState(2176);
                match(CtcLangParser::RightBracket);
                break;
            }

            default:
                break;
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LiteralContext
//------------------------------------------------------------------

CtcLangParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
    : ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *CtcLangParser::LiteralContext::IntegerLiteral()
{
    return getToken(CtcLangParser::IntegerLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::CharacterLiteral()
{
    return getToken(CtcLangParser::CharacterLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::FloatingLiteral()
{
    return getToken(CtcLangParser::FloatingLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::StringLiteral()
{
    return getToken(CtcLangParser::StringLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::BooleanLiteral()
{
    return getToken(CtcLangParser::BooleanLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::PointerLiteral()
{
    return getToken(CtcLangParser::PointerLiteral, 0);
}

tree::TerminalNode *CtcLangParser::LiteralContext::UserDefinedLiteral()
{
    return getToken(CtcLangParser::UserDefinedLiteral, 0);
}

size_t CtcLangParser::LiteralContext::getRuleIndex() const
{
    return CtcLangParser::RuleLiteral;
}

std::any CtcLangParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<CtcLangVisitor *>(visitor))
        return parserVisitor->visitLiteral(this);
    else
        return visitor->visitChildren(this);
}

CtcLangParser::LiteralContext *CtcLangParser::literal()
{
    LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
    enterRule(_localctx, 398, CtcLangParser::RuleLiteral);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try
    {
        enterOuterAlt(_localctx, 1);
        setState(2179);
        _la = _input->LA(1);
        if (!((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 254) != 0)))
        {
            _errHandler->recoverInline(this);
        }
        else
        {
            _errHandler->reportMatch(this);
            consume();
        }
    }
    catch (RecognitionException &e)
    {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

bool CtcLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex)
{
    switch (ruleIndex)
    {
        case 5:
            return nestedNameSpecifierSempred(
                antlrcpp::downCast<NestedNameSpecifierContext *>(context), predicateIndex);
        case 15:
            return postfixExpressionSempred(antlrcpp::downCast<PostfixExpressionContext *>(context),
                                            predicateIndex);
        case 25:
            return noPointerNewDeclaratorSempred(
                antlrcpp::downCast<NoPointerNewDeclaratorContext *>(context), predicateIndex);
        case 115:
            return noPointerDeclaratorSempred(
                antlrcpp::downCast<NoPointerDeclaratorContext *>(context), predicateIndex);
        case 126:
            return noPointerAbstractDeclaratorSempred(
                antlrcpp::downCast<NoPointerAbstractDeclaratorContext *>(context), predicateIndex);
        case 128:
            return noPointerAbstractPackDeclaratorSempred(
                antlrcpp::downCast<NoPointerAbstractPackDeclaratorContext *>(context),
                predicateIndex);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx,
                                               size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 0:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::postfixExpressionSempred(PostfixExpressionContext *_localctx,
                                             size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 1:
            return precpred(_ctx, 7);
        case 2:
            return precpred(_ctx, 6);
        case 3:
            return precpred(_ctx, 4);
        case 4:
            return precpred(_ctx, 3);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx,
                                                  size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 5:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx,
                                               size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 6:
            return precpred(_ctx, 2);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::noPointerAbstractDeclaratorSempred(
    NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 7:
            return precpred(_ctx, 4);

        default:
            break;
    }
    return true;
}

bool CtcLangParser::noPointerAbstractPackDeclaratorSempred(
    NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex)
{
    switch (predicateIndex)
    {
        case 8:
            return precpred(_ctx, 2);

        default:
            break;
    }
    return true;
}

void CtcLangParser::initialize()
{
#if ANTLR4_USE_THREAD_LOCAL_CACHE
    ctclangParserInitialize();
#else
    ::antlr4::internal::call_once(ctclangParserOnceFlag, ctclangParserInitialize);
#endif
}
