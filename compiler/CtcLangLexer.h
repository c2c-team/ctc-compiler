
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once

#include "antlr4-runtime.h"

class CtcLangLexer : public antlr4::Lexer
{
  public:
    enum
    {
        IntegerLiteral = 1,
        CharacterLiteral = 2,
        FloatingLiteral = 3,
        StringLiteral = 4,
        BooleanLiteral = 5,
        PointerLiteral = 6,
        UserDefinedLiteral = 7,
        MultiLineMacro = 8,
        Directive = 9,
        Alignas = 10,
        Alignof = 11,
        AsmMSVC = 12,
        Asm = 13,
        Auto = 14,
        Bool = 15,
        Break = 16,
        Case = 17,
        Catch = 18,
        Char = 19,
        Char16 = 20,
        Char32 = 21,
        Class = 22,
        Const = 23,
        Constexpr = 24,
        Const_cast = 25,
        Bit_cast = 26,
        Continue = 27,
        Decltype = 28,
        Default = 29,
        Delete = 30,
        Do = 31,
        Double = 32,
        Dynamic_cast = 33,
        Else = 34,
        Enum = 35,
        Explicit = 36,
        Export = 37,
        Extern = 38,
        False_ = 39,
        Final = 40,
        Float = 41,
        For = 42,
        Goto = 43,
        If = 44,
        Inline = 45,
        Int = 46,
        Long = 47,
        Mutable = 48,
        Namespace = 49,
        New = 50,
        Noexcept = 51,
        Nullptr = 52,
        Operator = 53,
        Override = 54,
        Private = 55,
        Protected = 56,
        Public = 57,
        Interface = 58,
        Reinterpret_cast = 59,
        Return = 60,
        Short = 61,
        Signed = 62,
        Sizeof = 63,
        Static = 64,
        Static_assert = 65,
        Static_cast = 66,
        Record = 67,
        Struct = 68,
        Switch = 69,
        Template = 70,
        This = 71,
        Thread_local = 72,
        Throw = 73,
        True_ = 74,
        Try = 75,
        Typeid_ = 76,
        Typename_ = 77,
        Unsigned = 78,
        Using = 79,
        Virtual = 80,
        Void = 81,
        Volatile = 82,
        Wchar = 83,
        While = 84,
        LeftParen = 85,
        RightParen = 86,
        LeftBracket = 87,
        RightBracket = 88,
        LeftBrace = 89,
        RightBrace = 90,
        Plus = 91,
        Minus = 92,
        Star = 93,
        Div = 94,
        Mod = 95,
        Caret = 96,
        And = 97,
        Or = 98,
        Tilde = 99,
        Not = 100,
        Assign = 101,
        Less = 102,
        Greater = 103,
        PlusAssign = 104,
        MinusAssign = 105,
        StarAssign = 106,
        DivAssign = 107,
        ModAssign = 108,
        XorAssign = 109,
        AndAssign = 110,
        OrAssign = 111,
        LeftShiftAssign = 112,
        RightShiftAssign = 113,
        Equal = 114,
        NotEqual = 115,
        LessEqual = 116,
        GreaterEqual = 117,
        AndAnd = 118,
        OrOr = 119,
        PlusPlus = 120,
        MinusMinus = 121,
        Comma = 122,
        ArrowStar = 123,
        Arrow = 124,
        Question = 125,
        Colon = 126,
        Doublecolon = 127,
        Semi = 128,
        Dot = 129,
        DotStar = 130,
        Ellipsis = 131,
        Identifier = 132,
        DecimalLiteral = 133,
        OctalLiteral = 134,
        HexadecimalLiteral = 135,
        BinaryLiteral = 136,
        Integersuffix = 137,
        UserDefinedIntegerLiteral = 138,
        UserDefinedFloatingLiteral = 139,
        UserDefinedStringLiteral = 140,
        UserDefinedCharacterLiteral = 141,
        Whitespace = 142,
        Newline = 143,
        BlockComment = 144,
        LineComment = 145
    };

    explicit CtcLangLexer(antlr4::CharStream *input);

    ~CtcLangLexer() override;

    std::string getGrammarFileName() const override;

    const std::vector<std::string> &getRuleNames() const override;

    const std::vector<std::string> &getChannelNames() const override;

    const std::vector<std::string> &getModeNames() const override;

    const antlr4::dfa::Vocabulary &getVocabulary() const override;

    antlr4::atn::SerializedATNView getSerializedATN() const override;

    const antlr4::atn::ATN &getATN() const override;

    // By default the static state used to implement the lexer is lazily initialized during the
    // first call to the constructor. You can call this function if you wish to initialize the
    // static state ahead of time.
    static void initialize();

  private:
    // Individual action functions triggered by action() above.

    // Individual semantic predicate functions triggered by sempred() above.
};
