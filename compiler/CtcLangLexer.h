
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CtcLangLexer : public antlr4::Lexer {
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

  explicit CtcLangLexer(antlr4::CharStream *input);

  ~CtcLangLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

