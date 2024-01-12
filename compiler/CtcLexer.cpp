
// Generated from ctc.g4 by ANTLR 4.13.1


#include "CtcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CtcLexerStaticData final {
  CtcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CtcLexerStaticData(const CtcLexerStaticData&) = delete;
  CtcLexerStaticData(CtcLexerStaticData&&) = delete;
  CtcLexerStaticData& operator=(const CtcLexerStaticData&) = delete;
  CtcLexerStaticData& operator=(CtcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ctclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CtcLexerStaticData *ctclexerLexerStaticData = nullptr;

void ctclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ctclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(ctclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CtcLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "T__34", "T__35", "T__36", "T__37", "T__38", "T__39", "T__40", 
      "T__41", "T__42", "T__43", "T__44", "T__45", "T__46", "T__47", "T__48", 
      "T__49", "T__50", "T__51", "T__52", "T__53", "T__54", "T__55", "T__56", 
      "T__57", "T__58", "T__59", "T__60", "T__61", "T__62", "T__63", "T__64", 
      "T__65", "T__66", "T__67", "T__68", "T__69", "T__70", "T__71", "T__72", 
      "T__73", "T__74", "T__75", "IntegerConstant", "BinaryConstant", "DecimalConstant", 
      "OctalConstant", "HexadecimalConstant", "HexadecimalPrefix", "NonzeroDigit", 
      "OctalDigit", "HexadecimalDigit", "IntegerSuffix", "UnsignedSuffix", 
      "LongSuffix", "LongLongSuffix", "FloatingConstant", "DecimalFloatingConstant", 
      "HexadecimalFloatingConstant", "FractionalConstant", "ExponentPart", 
      "Sign", "DigitSequence", "HexadecimalFractionalConstant", "BinaryExponentPart", 
      "HexadecimalDigitSequence", "FloatingSuffix", "CharacterConstant", 
      "CCharSequence", "CChar", "EscapeSequence", "SimpleEscapeSequence", 
      "OctalEscapeSequence", "HexadecimalEscapeSequence", "EncodingPrefix", 
      "SCharSequence", "SChar", "Digit_sequence", "Identifier_non_digit", 
      "Digit"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'inline'", "'noexcept'", "'('", "')'", "'{'", "'}'", "';'", "','", 
      "'use'", "'%if'", "'%else'", "'%def'", "'\\n'", "'static'", "'extern'", 
      "'constexpr'", "'consteval'", "'&'", "'this'", "'['", "']'", "'fun'", 
      "'*'", "'/'", "'%'", "'+'", "'-'", "'<<'", "'>>'", "'<'", "'>'", "'<='", 
      "'>='", "'=='", "'!='", "'^'", "'|'", "'&&'", "'||'", "'\\u003F'", 
      "':'", "'\"'", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", 
      "'>>='", "'&='", "'^='", "'|='", "'.'", "'->'", "'++'", "'--'", "'~'", 
      "'!'", "'dynamic_cast'", "'sizeof'", "'void'", "'auto'", "'char'", 
      "'bool'", "'short'", "'int'", "'long'", "'float'", "'double'", "'double128'", 
      "'const'", "'volatile'", "'**'", "'unsigned'", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "DigitSequence", "Digit_sequence"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,78,766,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,1,22,
  	1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,
  	1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,
  	1,34,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,37,1,38,1,38,1,38,1,39,
  	1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,43,1,44,1,44,1,44,1,45,
  	1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,49,1,49,
  	1,49,1,49,1,50,1,50,1,50,1,51,1,51,1,51,1,52,1,52,1,52,1,53,1,53,1,54,
  	1,54,1,54,1,55,1,55,1,55,1,56,1,56,1,56,1,57,1,57,1,58,1,58,1,59,1,59,
  	1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,60,1,60,1,60,
  	1,60,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,62,1,62,1,62,1,62,1,62,
  	1,63,1,63,1,63,1,63,1,63,1,64,1,64,1,64,1,64,1,64,1,65,1,65,1,65,1,65,
  	1,65,1,65,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,67,1,67,1,68,1,68,1,68,
  	1,68,1,68,1,68,1,69,1,69,1,69,1,69,1,69,1,69,1,69,1,70,1,70,1,70,1,70,
  	1,70,1,70,1,70,1,70,1,70,1,70,1,71,1,71,1,71,1,71,1,71,1,71,1,72,1,72,
  	1,72,1,72,1,72,1,72,1,72,1,72,1,72,1,73,1,73,1,73,1,74,1,74,1,74,1,74,
  	1,74,1,74,1,74,1,74,1,74,1,75,1,75,1,75,1,76,1,76,3,76,533,8,76,1,76,
  	1,76,3,76,537,8,76,1,76,1,76,3,76,541,8,76,1,76,3,76,544,8,76,1,77,1,
  	77,1,77,4,77,549,8,77,11,77,12,77,550,1,78,1,78,5,78,555,8,78,10,78,12,
  	78,558,9,78,1,79,1,79,5,79,562,8,79,10,79,12,79,565,9,79,1,80,1,80,4,
  	80,569,8,80,11,80,12,80,570,1,81,1,81,1,81,1,82,1,82,1,83,1,83,1,84,1,
  	84,1,85,1,85,3,85,584,8,85,1,85,1,85,1,85,1,85,1,85,3,85,591,8,85,1,85,
  	1,85,3,85,595,8,85,3,85,597,8,85,1,86,1,86,1,87,1,87,1,88,1,88,1,88,1,
  	88,3,88,607,8,88,1,89,1,89,3,89,611,8,89,1,90,1,90,3,90,615,8,90,1,90,
  	3,90,618,8,90,1,90,1,90,1,90,3,90,623,8,90,3,90,625,8,90,1,91,1,91,1,
  	91,3,91,630,8,91,1,91,1,91,3,91,634,8,91,1,92,3,92,637,8,92,1,92,1,92,
  	1,92,1,92,1,92,3,92,644,8,92,1,93,1,93,3,93,648,8,93,1,93,1,93,1,94,1,
  	94,1,95,4,95,655,8,95,11,95,12,95,656,1,96,3,96,660,8,96,1,96,1,96,1,
  	96,1,96,1,96,3,96,667,8,96,1,97,1,97,3,97,671,8,97,1,97,1,97,1,98,4,98,
  	676,8,98,11,98,12,98,677,1,99,1,99,1,100,1,100,1,100,1,100,1,100,1,100,
  	1,100,1,100,1,100,1,100,1,100,1,100,1,100,1,100,1,100,1,100,1,100,1,100,
  	1,100,1,100,1,100,1,100,3,100,704,8,100,1,101,4,101,707,8,101,11,101,
  	12,101,708,1,102,1,102,3,102,713,8,102,1,103,1,103,1,103,3,103,718,8,
  	103,1,104,1,104,1,104,1,105,1,105,1,105,3,105,726,8,105,1,105,3,105,729,
  	8,105,1,106,1,106,1,106,1,106,4,106,735,8,106,11,106,12,106,736,1,107,
  	1,107,1,107,3,107,742,8,107,1,108,4,108,745,8,108,11,108,12,108,746,1,
  	109,1,109,1,109,1,109,1,109,1,109,1,109,3,109,756,8,109,1,110,4,110,759,
  	8,110,11,110,12,110,760,1,111,1,111,1,112,1,112,0,0,113,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,
  	17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,
  	57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,
  	40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,51,
  	103,52,105,53,107,54,109,55,111,56,113,57,115,58,117,59,119,60,121,61,
  	123,62,125,63,127,64,129,65,131,66,133,67,135,68,137,69,139,70,141,71,
  	143,72,145,73,147,74,149,75,151,76,153,0,155,0,157,0,159,0,161,0,163,
  	0,165,0,167,0,169,0,171,0,173,0,175,0,177,0,179,0,181,0,183,0,185,0,187,
  	0,189,0,191,77,193,0,195,0,197,0,199,0,201,0,203,0,205,0,207,0,209,0,
  	211,0,213,0,215,0,217,0,219,0,221,78,223,0,225,0,1,0,18,2,0,66,66,98,
  	98,1,0,48,49,2,0,88,88,120,120,1,0,49,57,1,0,48,55,3,0,48,57,65,70,97,
  	102,2,0,85,85,117,117,2,0,76,76,108,108,2,0,69,69,101,101,2,0,43,43,45,
  	45,2,0,80,80,112,112,4,0,70,70,76,76,102,102,108,108,4,0,10,10,13,13,
  	39,39,92,92,10,0,34,34,39,39,63,63,92,92,97,98,102,102,110,110,114,114,
  	116,116,118,118,3,0,76,76,85,85,117,117,4,0,10,10,13,13,34,34,92,92,3,
  	0,65,90,95,95,97,122,1,0,48,57,778,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,
  	0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,
  	1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,
  	0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,
  	0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,
  	1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,
  	0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,
  	0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,
  	0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,
  	0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,
  	0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,
  	0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,
  	0,191,1,0,0,0,0,221,1,0,0,0,1,227,1,0,0,0,3,234,1,0,0,0,5,243,1,0,0,0,
  	7,245,1,0,0,0,9,247,1,0,0,0,11,249,1,0,0,0,13,251,1,0,0,0,15,253,1,0,
  	0,0,17,255,1,0,0,0,19,259,1,0,0,0,21,263,1,0,0,0,23,269,1,0,0,0,25,274,
  	1,0,0,0,27,276,1,0,0,0,29,283,1,0,0,0,31,290,1,0,0,0,33,300,1,0,0,0,35,
  	310,1,0,0,0,37,312,1,0,0,0,39,317,1,0,0,0,41,319,1,0,0,0,43,321,1,0,0,
  	0,45,325,1,0,0,0,47,327,1,0,0,0,49,329,1,0,0,0,51,331,1,0,0,0,53,333,
  	1,0,0,0,55,335,1,0,0,0,57,338,1,0,0,0,59,341,1,0,0,0,61,343,1,0,0,0,63,
  	345,1,0,0,0,65,348,1,0,0,0,67,351,1,0,0,0,69,354,1,0,0,0,71,357,1,0,0,
  	0,73,359,1,0,0,0,75,361,1,0,0,0,77,364,1,0,0,0,79,367,1,0,0,0,81,369,
  	1,0,0,0,83,371,1,0,0,0,85,373,1,0,0,0,87,375,1,0,0,0,89,378,1,0,0,0,91,
  	381,1,0,0,0,93,384,1,0,0,0,95,387,1,0,0,0,97,390,1,0,0,0,99,394,1,0,0,
  	0,101,398,1,0,0,0,103,401,1,0,0,0,105,404,1,0,0,0,107,407,1,0,0,0,109,
  	409,1,0,0,0,111,412,1,0,0,0,113,415,1,0,0,0,115,418,1,0,0,0,117,420,1,
  	0,0,0,119,422,1,0,0,0,121,435,1,0,0,0,123,442,1,0,0,0,125,447,1,0,0,0,
  	127,452,1,0,0,0,129,457,1,0,0,0,131,462,1,0,0,0,133,468,1,0,0,0,135,472,
  	1,0,0,0,137,477,1,0,0,0,139,483,1,0,0,0,141,490,1,0,0,0,143,500,1,0,0,
  	0,145,506,1,0,0,0,147,515,1,0,0,0,149,518,1,0,0,0,151,527,1,0,0,0,153,
  	543,1,0,0,0,155,545,1,0,0,0,157,552,1,0,0,0,159,559,1,0,0,0,161,566,1,
  	0,0,0,163,572,1,0,0,0,165,575,1,0,0,0,167,577,1,0,0,0,169,579,1,0,0,0,
  	171,596,1,0,0,0,173,598,1,0,0,0,175,600,1,0,0,0,177,606,1,0,0,0,179,610,
  	1,0,0,0,181,624,1,0,0,0,183,626,1,0,0,0,185,643,1,0,0,0,187,645,1,0,0,
  	0,189,651,1,0,0,0,191,654,1,0,0,0,193,666,1,0,0,0,195,668,1,0,0,0,197,
  	675,1,0,0,0,199,679,1,0,0,0,201,703,1,0,0,0,203,706,1,0,0,0,205,712,1,
  	0,0,0,207,717,1,0,0,0,209,719,1,0,0,0,211,722,1,0,0,0,213,730,1,0,0,0,
  	215,741,1,0,0,0,217,744,1,0,0,0,219,755,1,0,0,0,221,758,1,0,0,0,223,762,
  	1,0,0,0,225,764,1,0,0,0,227,228,5,105,0,0,228,229,5,110,0,0,229,230,5,
  	108,0,0,230,231,5,105,0,0,231,232,5,110,0,0,232,233,5,101,0,0,233,2,1,
  	0,0,0,234,235,5,110,0,0,235,236,5,111,0,0,236,237,5,101,0,0,237,238,5,
  	120,0,0,238,239,5,99,0,0,239,240,5,101,0,0,240,241,5,112,0,0,241,242,
  	5,116,0,0,242,4,1,0,0,0,243,244,5,40,0,0,244,6,1,0,0,0,245,246,5,41,0,
  	0,246,8,1,0,0,0,247,248,5,123,0,0,248,10,1,0,0,0,249,250,5,125,0,0,250,
  	12,1,0,0,0,251,252,5,59,0,0,252,14,1,0,0,0,253,254,5,44,0,0,254,16,1,
  	0,0,0,255,256,5,117,0,0,256,257,5,115,0,0,257,258,5,101,0,0,258,18,1,
  	0,0,0,259,260,5,37,0,0,260,261,5,105,0,0,261,262,5,102,0,0,262,20,1,0,
  	0,0,263,264,5,37,0,0,264,265,5,101,0,0,265,266,5,108,0,0,266,267,5,115,
  	0,0,267,268,5,101,0,0,268,22,1,0,0,0,269,270,5,37,0,0,270,271,5,100,0,
  	0,271,272,5,101,0,0,272,273,5,102,0,0,273,24,1,0,0,0,274,275,5,10,0,0,
  	275,26,1,0,0,0,276,277,5,115,0,0,277,278,5,116,0,0,278,279,5,97,0,0,279,
  	280,5,116,0,0,280,281,5,105,0,0,281,282,5,99,0,0,282,28,1,0,0,0,283,284,
  	5,101,0,0,284,285,5,120,0,0,285,286,5,116,0,0,286,287,5,101,0,0,287,288,
  	5,114,0,0,288,289,5,110,0,0,289,30,1,0,0,0,290,291,5,99,0,0,291,292,5,
  	111,0,0,292,293,5,110,0,0,293,294,5,115,0,0,294,295,5,116,0,0,295,296,
  	5,101,0,0,296,297,5,120,0,0,297,298,5,112,0,0,298,299,5,114,0,0,299,32,
  	1,0,0,0,300,301,5,99,0,0,301,302,5,111,0,0,302,303,5,110,0,0,303,304,
  	5,115,0,0,304,305,5,116,0,0,305,306,5,101,0,0,306,307,5,118,0,0,307,308,
  	5,97,0,0,308,309,5,108,0,0,309,34,1,0,0,0,310,311,5,38,0,0,311,36,1,0,
  	0,0,312,313,5,116,0,0,313,314,5,104,0,0,314,315,5,105,0,0,315,316,5,115,
  	0,0,316,38,1,0,0,0,317,318,5,91,0,0,318,40,1,0,0,0,319,320,5,93,0,0,320,
  	42,1,0,0,0,321,322,5,102,0,0,322,323,5,117,0,0,323,324,5,110,0,0,324,
  	44,1,0,0,0,325,326,5,42,0,0,326,46,1,0,0,0,327,328,5,47,0,0,328,48,1,
  	0,0,0,329,330,5,37,0,0,330,50,1,0,0,0,331,332,5,43,0,0,332,52,1,0,0,0,
  	333,334,5,45,0,0,334,54,1,0,0,0,335,336,5,60,0,0,336,337,5,60,0,0,337,
  	56,1,0,0,0,338,339,5,62,0,0,339,340,5,62,0,0,340,58,1,0,0,0,341,342,5,
  	60,0,0,342,60,1,0,0,0,343,344,5,62,0,0,344,62,1,0,0,0,345,346,5,60,0,
  	0,346,347,5,61,0,0,347,64,1,0,0,0,348,349,5,62,0,0,349,350,5,61,0,0,350,
  	66,1,0,0,0,351,352,5,61,0,0,352,353,5,61,0,0,353,68,1,0,0,0,354,355,5,
  	33,0,0,355,356,5,61,0,0,356,70,1,0,0,0,357,358,5,94,0,0,358,72,1,0,0,
  	0,359,360,5,124,0,0,360,74,1,0,0,0,361,362,5,38,0,0,362,363,5,38,0,0,
  	363,76,1,0,0,0,364,365,5,124,0,0,365,366,5,124,0,0,366,78,1,0,0,0,367,
  	368,5,63,0,0,368,80,1,0,0,0,369,370,5,58,0,0,370,82,1,0,0,0,371,372,5,
  	34,0,0,372,84,1,0,0,0,373,374,5,61,0,0,374,86,1,0,0,0,375,376,5,42,0,
  	0,376,377,5,61,0,0,377,88,1,0,0,0,378,379,5,47,0,0,379,380,5,61,0,0,380,
  	90,1,0,0,0,381,382,5,37,0,0,382,383,5,61,0,0,383,92,1,0,0,0,384,385,5,
  	43,0,0,385,386,5,61,0,0,386,94,1,0,0,0,387,388,5,45,0,0,388,389,5,61,
  	0,0,389,96,1,0,0,0,390,391,5,60,0,0,391,392,5,60,0,0,392,393,5,61,0,0,
  	393,98,1,0,0,0,394,395,5,62,0,0,395,396,5,62,0,0,396,397,5,61,0,0,397,
  	100,1,0,0,0,398,399,5,38,0,0,399,400,5,61,0,0,400,102,1,0,0,0,401,402,
  	5,94,0,0,402,403,5,61,0,0,403,104,1,0,0,0,404,405,5,124,0,0,405,406,5,
  	61,0,0,406,106,1,0,0,0,407,408,5,46,0,0,408,108,1,0,0,0,409,410,5,45,
  	0,0,410,411,5,62,0,0,411,110,1,0,0,0,412,413,5,43,0,0,413,414,5,43,0,
  	0,414,112,1,0,0,0,415,416,5,45,0,0,416,417,5,45,0,0,417,114,1,0,0,0,418,
  	419,5,126,0,0,419,116,1,0,0,0,420,421,5,33,0,0,421,118,1,0,0,0,422,423,
  	5,100,0,0,423,424,5,121,0,0,424,425,5,110,0,0,425,426,5,97,0,0,426,427,
  	5,109,0,0,427,428,5,105,0,0,428,429,5,99,0,0,429,430,5,95,0,0,430,431,
  	5,99,0,0,431,432,5,97,0,0,432,433,5,115,0,0,433,434,5,116,0,0,434,120,
  	1,0,0,0,435,436,5,115,0,0,436,437,5,105,0,0,437,438,5,122,0,0,438,439,
  	5,101,0,0,439,440,5,111,0,0,440,441,5,102,0,0,441,122,1,0,0,0,442,443,
  	5,118,0,0,443,444,5,111,0,0,444,445,5,105,0,0,445,446,5,100,0,0,446,124,
  	1,0,0,0,447,448,5,97,0,0,448,449,5,117,0,0,449,450,5,116,0,0,450,451,
  	5,111,0,0,451,126,1,0,0,0,452,453,5,99,0,0,453,454,5,104,0,0,454,455,
  	5,97,0,0,455,456,5,114,0,0,456,128,1,0,0,0,457,458,5,98,0,0,458,459,5,
  	111,0,0,459,460,5,111,0,0,460,461,5,108,0,0,461,130,1,0,0,0,462,463,5,
  	115,0,0,463,464,5,104,0,0,464,465,5,111,0,0,465,466,5,114,0,0,466,467,
  	5,116,0,0,467,132,1,0,0,0,468,469,5,105,0,0,469,470,5,110,0,0,470,471,
  	5,116,0,0,471,134,1,0,0,0,472,473,5,108,0,0,473,474,5,111,0,0,474,475,
  	5,110,0,0,475,476,5,103,0,0,476,136,1,0,0,0,477,478,5,102,0,0,478,479,
  	5,108,0,0,479,480,5,111,0,0,480,481,5,97,0,0,481,482,5,116,0,0,482,138,
  	1,0,0,0,483,484,5,100,0,0,484,485,5,111,0,0,485,486,5,117,0,0,486,487,
  	5,98,0,0,487,488,5,108,0,0,488,489,5,101,0,0,489,140,1,0,0,0,490,491,
  	5,100,0,0,491,492,5,111,0,0,492,493,5,117,0,0,493,494,5,98,0,0,494,495,
  	5,108,0,0,495,496,5,101,0,0,496,497,5,49,0,0,497,498,5,50,0,0,498,499,
  	5,56,0,0,499,142,1,0,0,0,500,501,5,99,0,0,501,502,5,111,0,0,502,503,5,
  	110,0,0,503,504,5,115,0,0,504,505,5,116,0,0,505,144,1,0,0,0,506,507,5,
  	118,0,0,507,508,5,111,0,0,508,509,5,108,0,0,509,510,5,97,0,0,510,511,
  	5,116,0,0,511,512,5,105,0,0,512,513,5,108,0,0,513,514,5,101,0,0,514,146,
  	1,0,0,0,515,516,5,42,0,0,516,517,5,42,0,0,517,148,1,0,0,0,518,519,5,117,
  	0,0,519,520,5,110,0,0,520,521,5,115,0,0,521,522,5,105,0,0,522,523,5,103,
  	0,0,523,524,5,110,0,0,524,525,5,101,0,0,525,526,5,100,0,0,526,150,1,0,
  	0,0,527,528,5,58,0,0,528,529,5,58,0,0,529,152,1,0,0,0,530,532,3,157,78,
  	0,531,533,3,171,85,0,532,531,1,0,0,0,532,533,1,0,0,0,533,544,1,0,0,0,
  	534,536,3,159,79,0,535,537,3,171,85,0,536,535,1,0,0,0,536,537,1,0,0,0,
  	537,544,1,0,0,0,538,540,3,161,80,0,539,541,3,171,85,0,540,539,1,0,0,0,
  	540,541,1,0,0,0,541,544,1,0,0,0,542,544,3,155,77,0,543,530,1,0,0,0,543,
  	534,1,0,0,0,543,538,1,0,0,0,543,542,1,0,0,0,544,154,1,0,0,0,545,546,5,
  	48,0,0,546,548,7,0,0,0,547,549,7,1,0,0,548,547,1,0,0,0,549,550,1,0,0,
  	0,550,548,1,0,0,0,550,551,1,0,0,0,551,156,1,0,0,0,552,556,3,165,82,0,
  	553,555,3,225,112,0,554,553,1,0,0,0,555,558,1,0,0,0,556,554,1,0,0,0,556,
  	557,1,0,0,0,557,158,1,0,0,0,558,556,1,0,0,0,559,563,5,48,0,0,560,562,
  	3,167,83,0,561,560,1,0,0,0,562,565,1,0,0,0,563,561,1,0,0,0,563,564,1,
  	0,0,0,564,160,1,0,0,0,565,563,1,0,0,0,566,568,3,163,81,0,567,569,3,169,
  	84,0,568,567,1,0,0,0,569,570,1,0,0,0,570,568,1,0,0,0,570,571,1,0,0,0,
  	571,162,1,0,0,0,572,573,5,48,0,0,573,574,7,2,0,0,574,164,1,0,0,0,575,
  	576,7,3,0,0,576,166,1,0,0,0,577,578,7,4,0,0,578,168,1,0,0,0,579,580,7,
  	5,0,0,580,170,1,0,0,0,581,583,3,173,86,0,582,584,3,175,87,0,583,582,1,
  	0,0,0,583,584,1,0,0,0,584,597,1,0,0,0,585,586,3,173,86,0,586,587,3,177,
  	88,0,587,597,1,0,0,0,588,590,3,175,87,0,589,591,3,173,86,0,590,589,1,
  	0,0,0,590,591,1,0,0,0,591,597,1,0,0,0,592,594,3,177,88,0,593,595,3,173,
  	86,0,594,593,1,0,0,0,594,595,1,0,0,0,595,597,1,0,0,0,596,581,1,0,0,0,
  	596,585,1,0,0,0,596,588,1,0,0,0,596,592,1,0,0,0,597,172,1,0,0,0,598,599,
  	7,6,0,0,599,174,1,0,0,0,600,601,7,7,0,0,601,176,1,0,0,0,602,603,5,108,
  	0,0,603,607,5,108,0,0,604,605,5,76,0,0,605,607,5,76,0,0,606,602,1,0,0,
  	0,606,604,1,0,0,0,607,178,1,0,0,0,608,611,3,181,90,0,609,611,3,183,91,
  	0,610,608,1,0,0,0,610,609,1,0,0,0,611,180,1,0,0,0,612,614,3,185,92,0,
  	613,615,3,187,93,0,614,613,1,0,0,0,614,615,1,0,0,0,615,617,1,0,0,0,616,
  	618,3,199,99,0,617,616,1,0,0,0,617,618,1,0,0,0,618,625,1,0,0,0,619,620,
  	3,191,95,0,620,622,3,187,93,0,621,623,3,199,99,0,622,621,1,0,0,0,622,
  	623,1,0,0,0,623,625,1,0,0,0,624,612,1,0,0,0,624,619,1,0,0,0,625,182,1,
  	0,0,0,626,629,3,163,81,0,627,630,3,193,96,0,628,630,3,197,98,0,629,627,
  	1,0,0,0,629,628,1,0,0,0,630,631,1,0,0,0,631,633,3,195,97,0,632,634,3,
  	199,99,0,633,632,1,0,0,0,633,634,1,0,0,0,634,184,1,0,0,0,635,637,3,191,
  	95,0,636,635,1,0,0,0,636,637,1,0,0,0,637,638,1,0,0,0,638,639,5,46,0,0,
  	639,644,3,191,95,0,640,641,3,191,95,0,641,642,5,46,0,0,642,644,1,0,0,
  	0,643,636,1,0,0,0,643,640,1,0,0,0,644,186,1,0,0,0,645,647,7,8,0,0,646,
  	648,3,189,94,0,647,646,1,0,0,0,647,648,1,0,0,0,648,649,1,0,0,0,649,650,
  	3,191,95,0,650,188,1,0,0,0,651,652,7,9,0,0,652,190,1,0,0,0,653,655,3,
  	225,112,0,654,653,1,0,0,0,655,656,1,0,0,0,656,654,1,0,0,0,656,657,1,0,
  	0,0,657,192,1,0,0,0,658,660,3,197,98,0,659,658,1,0,0,0,659,660,1,0,0,
  	0,660,661,1,0,0,0,661,662,5,46,0,0,662,667,3,197,98,0,663,664,3,197,98,
  	0,664,665,5,46,0,0,665,667,1,0,0,0,666,659,1,0,0,0,666,663,1,0,0,0,667,
  	194,1,0,0,0,668,670,7,10,0,0,669,671,3,189,94,0,670,669,1,0,0,0,670,671,
  	1,0,0,0,671,672,1,0,0,0,672,673,3,191,95,0,673,196,1,0,0,0,674,676,3,
  	169,84,0,675,674,1,0,0,0,676,677,1,0,0,0,677,675,1,0,0,0,677,678,1,0,
  	0,0,678,198,1,0,0,0,679,680,7,11,0,0,680,200,1,0,0,0,681,682,5,39,0,0,
  	682,683,3,203,101,0,683,684,5,39,0,0,684,704,1,0,0,0,685,686,5,76,0,0,
  	686,687,5,39,0,0,687,688,1,0,0,0,688,689,3,203,101,0,689,690,5,39,0,0,
  	690,704,1,0,0,0,691,692,5,117,0,0,692,693,5,39,0,0,693,694,1,0,0,0,694,
  	695,3,203,101,0,695,696,5,39,0,0,696,704,1,0,0,0,697,698,5,85,0,0,698,
  	699,5,39,0,0,699,700,1,0,0,0,700,701,3,203,101,0,701,702,5,39,0,0,702,
  	704,1,0,0,0,703,681,1,0,0,0,703,685,1,0,0,0,703,691,1,0,0,0,703,697,1,
  	0,0,0,704,202,1,0,0,0,705,707,3,205,102,0,706,705,1,0,0,0,707,708,1,0,
  	0,0,708,706,1,0,0,0,708,709,1,0,0,0,709,204,1,0,0,0,710,713,8,12,0,0,
  	711,713,3,207,103,0,712,710,1,0,0,0,712,711,1,0,0,0,713,206,1,0,0,0,714,
  	718,3,209,104,0,715,718,3,211,105,0,716,718,3,213,106,0,717,714,1,0,0,
  	0,717,715,1,0,0,0,717,716,1,0,0,0,718,208,1,0,0,0,719,720,5,92,0,0,720,
  	721,7,13,0,0,721,210,1,0,0,0,722,723,5,92,0,0,723,725,3,167,83,0,724,
  	726,3,167,83,0,725,724,1,0,0,0,725,726,1,0,0,0,726,728,1,0,0,0,727,729,
  	3,167,83,0,728,727,1,0,0,0,728,729,1,0,0,0,729,212,1,0,0,0,730,731,5,
  	92,0,0,731,732,5,120,0,0,732,734,1,0,0,0,733,735,3,169,84,0,734,733,1,
  	0,0,0,735,736,1,0,0,0,736,734,1,0,0,0,736,737,1,0,0,0,737,214,1,0,0,0,
  	738,739,5,117,0,0,739,742,5,56,0,0,740,742,7,14,0,0,741,738,1,0,0,0,741,
  	740,1,0,0,0,742,216,1,0,0,0,743,745,3,219,109,0,744,743,1,0,0,0,745,746,
  	1,0,0,0,746,744,1,0,0,0,746,747,1,0,0,0,747,218,1,0,0,0,748,756,8,15,
  	0,0,749,756,3,207,103,0,750,751,5,92,0,0,751,756,5,10,0,0,752,753,5,92,
  	0,0,753,754,5,13,0,0,754,756,5,10,0,0,755,748,1,0,0,0,755,749,1,0,0,0,
  	755,750,1,0,0,0,755,752,1,0,0,0,756,220,1,0,0,0,757,759,3,225,112,0,758,
  	757,1,0,0,0,759,760,1,0,0,0,760,758,1,0,0,0,760,761,1,0,0,0,761,222,1,
  	0,0,0,762,763,7,16,0,0,763,224,1,0,0,0,764,765,7,17,0,0,765,226,1,0,0,
  	0,40,0,532,536,540,543,550,556,563,570,583,590,594,596,606,610,614,617,
  	622,624,629,633,636,643,647,656,659,666,670,677,703,708,712,717,725,728,
  	736,741,746,755,760,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ctclexerLexerStaticData = staticData.release();
}

}

CtcLexer::CtcLexer(CharStream *input) : Lexer(input) {
  CtcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *ctclexerLexerStaticData->atn, ctclexerLexerStaticData->decisionToDFA, ctclexerLexerStaticData->sharedContextCache);
}

CtcLexer::~CtcLexer() {
  delete _interpreter;
}

std::string CtcLexer::getGrammarFileName() const {
  return "ctc.g4";
}

const std::vector<std::string>& CtcLexer::getRuleNames() const {
  return ctclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CtcLexer::getChannelNames() const {
  return ctclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CtcLexer::getModeNames() const {
  return ctclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CtcLexer::getVocabulary() const {
  return ctclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CtcLexer::getSerializedATN() const {
  return ctclexerLexerStaticData->serializedATN;
}

const atn::ATN& CtcLexer::getATN() const {
  return *ctclexerLexerStaticData->atn;
}




void CtcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ctclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(ctclexerLexerOnceFlag, ctclexerLexerInitialize);
#endif
}
