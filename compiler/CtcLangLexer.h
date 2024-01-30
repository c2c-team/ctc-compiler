
// Generated from CtcLang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CtcLangLexer : public antlr4::Lexer {
public:
  enum {
    IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4, 
    BooleanLiteral = 5, PointerLiteral = 6, UserDefinedLiteral = 7, MultiLineMacro = 8, 
    Directive = 9, Alignas = 10, Alignof = 11, Asm = 12, Auto = 13, Bool = 14, 
    Break = 15, Case = 16, Catch = 17, Char = 18, Char16 = 19, Char32 = 20, 
    Class = 21, Const = 22, Constexpr = 23, Const_cast = 24, Continue = 25, 
    Decltype = 26, Default = 27, Delete = 28, Do = 29, Double = 30, Dynamic_cast = 31, 
    Else = 32, Enum = 33, Explicit = 34, Export = 35, Extern = 36, False_ = 37, 
    Final = 38, Float = 39, For = 40, Friend = 41, Goto = 42, If = 43, Inline = 44, 
    Int = 45, Long = 46, Mutable = 47, Namespace = 48, New = 49, Noexcept = 50, 
    Nullptr = 51, Operator = 52, Override = 53, Private = 54, Protected = 55, 
    Public = 56, Interface = 57, Register = 58, Reinterpret_cast = 59, Return = 60, 
    Short = 61, Signed = 62, Sizeof = 63, Static = 64, Static_assert = 65, 
    Static_cast = 66, Record = 67, Struct = 68, Switch = 69, Template = 70, 
    This = 71, Thread_local = 72, Throw = 73, True_ = 74, Try = 75, Typedef = 76, 
    Typeid_ = 77, Typename_ = 78, Union = 79, Unsigned = 80, Using = 81, 
    Virtual = 82, Void = 83, Volatile = 84, Wchar = 85, While = 86, LeftParen = 87, 
    RightParen = 88, LeftBracket = 89, RightBracket = 90, LeftBrace = 91, 
    RightBrace = 92, Plus = 93, Minus = 94, Star = 95, Div = 96, Mod = 97, 
    Caret = 98, And = 99, Or = 100, Tilde = 101, Not = 102, Assign = 103, 
    Less = 104, Greater = 105, PlusAssign = 106, MinusAssign = 107, StarAssign = 108, 
    DivAssign = 109, ModAssign = 110, XorAssign = 111, AndAssign = 112, 
    OrAssign = 113, LeftShiftAssign = 114, RightShiftAssign = 115, Equal = 116, 
    NotEqual = 117, LessEqual = 118, GreaterEqual = 119, AndAnd = 120, OrOr = 121, 
    PlusPlus = 122, MinusMinus = 123, Comma = 124, ArrowStar = 125, Arrow = 126, 
    Question = 127, Colon = 128, Doublecolon = 129, Semi = 130, Dot = 131, 
    DotStar = 132, Ellipsis = 133, Identifier = 134, DecimalLiteral = 135, 
    OctalLiteral = 136, HexadecimalLiteral = 137, BinaryLiteral = 138, Integersuffix = 139, 
    UserDefinedIntegerLiteral = 140, UserDefinedFloatingLiteral = 141, UserDefinedStringLiteral = 142, 
    UserDefinedCharacterLiteral = 143, Whitespace = 144, Newline = 145, 
    BlockComment = 146, LineComment = 147
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

