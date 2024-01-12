
// Generated from ctc.g4 by ANTLR 4.13.1


#include "ctcVisitor.h"

#include "ctcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CtcParserStaticData final {
  CtcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CtcParserStaticData(const CtcParserStaticData&) = delete;
  CtcParserStaticData(CtcParserStaticData&&) = delete;
  CtcParserStaticData& operator=(const CtcParserStaticData&) = delete;
  CtcParserStaticData& operator=(CtcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ctcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CtcParserStaticData *ctcParserStaticData = nullptr;

void ctcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ctcParserStaticData != nullptr) {
    return;
  }
#else
  assert(ctcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CtcParserStaticData>(
    std::vector<std::string>{
      "main", "statement", "access_modifier", "interface_element", "interface_body", 
      "interface_decl", "enum_modifier", "enum_body", "enum_decl", "using_decl", 
      "namespace_decl", "fn_specifier", "fn_decl", "type_argument", "type_argument_list", 
      "argumentExpressionList", "use_decl", "compile_if_predicate", "cctp_decl", 
      "storage_specifier", "var_decl_specifier", "lambda_body", "lambda_capture_modifier", 
      "lambda_capture_by", "lambda_expression", "constant", "primary_expression", 
      "multiplicativeExpression", "additiveExpression", "shiftExpression", 
      "relationalExpression", "equalityExpression", "andExpression", "exclusiveOrExpression", 
      "inclusiveOrExpression", "logicalAndExpression", "logicalOrExpression", 
      "conditional_expression", "string_literal", "assignment_operator", 
      "postfix_expression", "unaryOperator", "cast_expression", "unary_expression", 
      "assignment_expression", "expression", "type", "identifier_specifier", 
      "unsigned_specifier", "type_specifier", "identifier", "var_decl", 
      "declarator"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "','", "'!'", "'<'", "'>'", 
      "'&'", "'this'", "'['", "']'", "'fun'", "'*'", "'/'", "'%'", "'+'", 
      "'-'", "'<<'", "'>>'", "'<='", "'>='", "'=='", "'!='", "'^'", "'|'", 
      "'&&'", "'||'", "'\\u003F'", "':'", "'\"'", "'='", "'*='", "'/='", 
      "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", 
      "'.'", "'->'", "'++'", "'--'", "'~'", "'sizeof'", "'::'", "", "", 
      "'public'", "'private'", "'interface'", "'class'", "'enum'", "'using'", 
      "'namespace'", "'inline'", "'noexcept'", "'use'", "'compile_if'", 
      "'static'", "'extern'", "'constexpr'", "'consteval'", "'dynamic_cast'", 
      "'void'", "'auto'", "'char'", "'bool'", "'short'", "'int'", "'long'", 
      "'float'", "'double'", "'double128'", "'unsigned'", "'const'", "'volatile'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "DigitSequence", "Digit_sequence", "Public", "Private", "Interface", 
      "Class", "Enum", "Using", "Namespace", "Inline", "Noexcept", "Use", 
      "Compile_if", "Static", "Extern", "Constexpr", "Consteval", "Dynamic_cast", 
      "Void", "Auto", "Char", "Bool", "Short", "Int", "Long", "Float", "Double", 
      "Double128", "Unsigned", "Const", "Volatile", "IntegerConstant", "FloatingConstant", 
      "CharacterConstant", "EncodingPrefix", "SCharSequence", "Identifier_non_digit", 
      "Digit"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,88,560,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,5,1,118,8,1,10,1,12,1,121,9,1,1,2,1,2,1,3,1,3,3,3,127,8,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,5,3,135,8,3,10,3,12,3,138,9,3,1,3,1,3,1,4,5,4,143,
  	8,4,10,4,12,4,146,9,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,154,8,5,1,6,1,6,1,7,
  	1,7,1,7,5,7,161,8,7,10,7,12,7,164,9,7,1,8,1,8,3,8,168,8,8,1,8,1,8,1,8,
  	1,8,1,8,3,8,175,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,185,8,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,197,8,10,1,11,1,11,
  	1,12,3,12,202,8,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,210,8,12,10,12,
  	12,12,213,9,12,1,12,1,12,1,12,1,12,1,12,3,12,220,8,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,5,12,228,8,12,10,12,12,12,231,9,12,1,12,1,12,3,12,235,
  	8,12,1,13,1,13,3,13,239,8,13,1,14,1,14,1,14,5,14,244,8,14,10,14,12,14,
  	247,9,14,1,15,1,15,1,15,5,15,252,8,15,10,15,12,15,255,9,15,1,16,1,16,
  	1,16,1,16,1,17,1,17,1,17,3,17,264,8,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	3,22,286,8,22,1,23,1,23,1,23,1,23,5,23,292,8,23,10,23,12,23,295,9,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,26,
  	1,26,4,26,312,8,26,11,26,12,26,313,1,26,1,26,1,26,1,26,3,26,320,8,26,
  	1,27,1,27,1,27,5,27,325,8,27,10,27,12,27,328,9,27,1,28,1,28,1,28,5,28,
  	333,8,28,10,28,12,28,336,9,28,1,29,1,29,1,29,5,29,341,8,29,10,29,12,29,
  	344,9,29,1,30,1,30,1,30,5,30,349,8,30,10,30,12,30,352,9,30,1,31,1,31,
  	1,31,5,31,357,8,31,10,31,12,31,360,9,31,1,32,1,32,1,32,5,32,365,8,32,
  	10,32,12,32,368,9,32,1,33,1,33,1,33,5,33,373,8,33,10,33,12,33,376,9,33,
  	1,34,1,34,1,34,5,34,381,8,34,10,34,12,34,384,9,34,1,35,1,35,1,35,5,35,
  	389,8,35,10,35,12,35,392,9,35,1,36,1,36,1,36,5,36,397,8,36,10,36,12,36,
  	400,9,36,1,37,1,37,1,37,1,37,1,37,1,37,3,37,408,8,37,1,38,3,38,411,8,
  	38,1,38,1,38,3,38,415,8,38,1,38,1,38,1,39,1,39,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,40,1,40,1,40,5,40,430,8,40,10,40,12,40,433,9,40,1,41,1,41,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,
  	42,3,42,452,8,42,1,43,5,43,455,8,43,10,43,12,43,458,9,43,1,43,1,43,1,
  	43,1,43,1,43,1,43,3,43,466,8,43,1,44,1,44,1,44,1,44,1,44,1,44,3,44,474,
  	8,44,1,45,1,45,1,45,5,45,479,8,45,10,45,12,45,482,9,45,1,46,1,46,1,46,
  	1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,3,46,495,8,46,1,47,1,47,5,47,
  	499,8,47,10,47,12,47,502,9,47,1,48,1,48,1,49,3,49,507,8,49,1,49,3,49,
  	510,8,49,1,49,3,49,513,8,49,1,49,1,49,3,49,517,8,49,1,50,1,50,1,50,5,
  	50,522,8,50,10,50,12,50,525,9,50,1,50,1,50,1,50,5,50,530,8,50,10,50,12,
  	50,533,9,50,1,51,3,51,536,8,51,1,51,3,51,539,8,51,1,51,1,51,1,52,1,52,
  	1,52,1,52,1,52,3,52,548,8,52,1,52,1,52,1,52,1,52,1,52,1,52,3,52,556,8,
  	52,1,52,1,52,1,52,0,1,100,53,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,0,15,1,0,53,54,1,0,60,
  	61,1,0,64,65,1,0,66,67,1,0,82,84,1,0,15,17,1,0,18,19,1,0,20,21,2,0,8,
  	9,22,23,1,0,24,25,1,0,33,43,1,0,44,45,5,0,7,7,10,10,15,15,18,19,48,48,
  	2,0,46,47,49,49,1,0,87,88,587,0,106,1,0,0,0,2,119,1,0,0,0,4,122,1,0,0,
  	0,6,124,1,0,0,0,8,144,1,0,0,0,10,147,1,0,0,0,12,155,1,0,0,0,14,157,1,
  	0,0,0,16,165,1,0,0,0,18,176,1,0,0,0,20,196,1,0,0,0,22,198,1,0,0,0,24,
  	234,1,0,0,0,26,236,1,0,0,0,28,240,1,0,0,0,30,248,1,0,0,0,32,256,1,0,0,
  	0,34,263,1,0,0,0,36,265,1,0,0,0,38,273,1,0,0,0,40,275,1,0,0,0,42,277,
  	1,0,0,0,44,285,1,0,0,0,46,287,1,0,0,0,48,298,1,0,0,0,50,305,1,0,0,0,52,
  	319,1,0,0,0,54,321,1,0,0,0,56,329,1,0,0,0,58,337,1,0,0,0,60,345,1,0,0,
  	0,62,353,1,0,0,0,64,361,1,0,0,0,66,369,1,0,0,0,68,377,1,0,0,0,70,385,
  	1,0,0,0,72,393,1,0,0,0,74,401,1,0,0,0,76,410,1,0,0,0,78,418,1,0,0,0,80,
  	420,1,0,0,0,82,434,1,0,0,0,84,451,1,0,0,0,86,456,1,0,0,0,88,473,1,0,0,
  	0,90,475,1,0,0,0,92,494,1,0,0,0,94,496,1,0,0,0,96,503,1,0,0,0,98,506,
  	1,0,0,0,100,518,1,0,0,0,102,535,1,0,0,0,104,542,1,0,0,0,106,107,3,2,1,
  	0,107,108,5,0,0,1,108,1,1,0,0,0,109,118,3,10,5,0,110,118,3,16,8,0,111,
  	118,3,18,9,0,112,118,3,20,10,0,113,118,3,36,18,0,114,118,3,102,51,0,115,
  	118,3,24,12,0,116,118,3,32,16,0,117,109,1,0,0,0,117,110,1,0,0,0,117,111,
  	1,0,0,0,117,112,1,0,0,0,117,113,1,0,0,0,117,114,1,0,0,0,117,115,1,0,0,
  	0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,
  	3,1,0,0,0,121,119,1,0,0,0,122,123,7,0,0,0,123,5,1,0,0,0,124,126,3,4,2,
  	0,125,127,3,38,19,0,126,125,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,
  	129,3,98,49,0,129,130,3,100,50,0,130,131,5,1,0,0,131,132,3,28,14,0,132,
  	136,5,2,0,0,133,135,3,22,11,0,134,133,1,0,0,0,135,138,1,0,0,0,136,134,
  	1,0,0,0,136,137,1,0,0,0,137,139,1,0,0,0,138,136,1,0,0,0,139,140,5,3,0,
  	0,140,7,1,0,0,0,141,143,3,6,3,0,142,141,1,0,0,0,143,146,1,0,0,0,144,142,
  	1,0,0,0,144,145,1,0,0,0,145,9,1,0,0,0,146,144,1,0,0,0,147,148,5,55,0,
  	0,148,149,3,100,50,0,149,150,5,4,0,0,150,151,3,8,4,0,151,153,5,5,0,0,
  	152,154,5,3,0,0,153,152,1,0,0,0,153,154,1,0,0,0,154,11,1,0,0,0,155,156,
  	5,56,0,0,156,13,1,0,0,0,157,162,3,100,50,0,158,159,5,6,0,0,159,161,3,
  	100,50,0,160,158,1,0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,
  	0,0,163,15,1,0,0,0,164,162,1,0,0,0,165,167,5,57,0,0,166,168,3,12,6,0,
  	167,166,1,0,0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,170,3,100,50,0,170,
  	171,5,4,0,0,171,172,3,14,7,0,172,174,5,5,0,0,173,175,5,3,0,0,174,173,
  	1,0,0,0,174,175,1,0,0,0,175,17,1,0,0,0,176,184,5,58,0,0,177,178,3,100,
  	50,0,178,179,5,3,0,0,179,185,1,0,0,0,180,181,5,59,0,0,181,182,3,100,50,
  	0,182,183,5,3,0,0,183,185,1,0,0,0,184,177,1,0,0,0,184,180,1,0,0,0,185,
  	19,1,0,0,0,186,187,5,59,0,0,187,188,3,100,50,0,188,189,5,4,0,0,189,190,
  	3,2,1,0,190,191,5,5,0,0,191,197,1,0,0,0,192,193,5,59,0,0,193,194,3,100,
  	50,0,194,195,5,3,0,0,195,197,1,0,0,0,196,186,1,0,0,0,196,192,1,0,0,0,
  	197,21,1,0,0,0,198,199,7,1,0,0,199,23,1,0,0,0,200,202,3,38,19,0,201,200,
  	1,0,0,0,201,202,1,0,0,0,202,203,1,0,0,0,203,204,3,98,49,0,204,205,3,100,
  	50,0,205,206,5,1,0,0,206,207,3,28,14,0,207,211,5,2,0,0,208,210,3,22,11,
  	0,209,208,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,
  	214,1,0,0,0,213,211,1,0,0,0,214,215,5,4,0,0,215,216,3,2,1,0,216,217,5,
  	5,0,0,217,235,1,0,0,0,218,220,3,38,19,0,219,218,1,0,0,0,219,220,1,0,0,
  	0,220,221,1,0,0,0,221,222,3,98,49,0,222,223,3,100,50,0,223,224,5,1,0,
  	0,224,225,3,28,14,0,225,229,5,2,0,0,226,228,3,22,11,0,227,226,1,0,0,0,
  	228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,232,1,0,0,0,231,229,
  	1,0,0,0,232,233,5,3,0,0,233,235,1,0,0,0,234,201,1,0,0,0,234,219,1,0,0,
  	0,235,25,1,0,0,0,236,238,3,92,46,0,237,239,3,100,50,0,238,237,1,0,0,0,
  	238,239,1,0,0,0,239,27,1,0,0,0,240,245,3,26,13,0,241,242,5,6,0,0,242,
  	244,3,26,13,0,243,241,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,245,246,
  	1,0,0,0,246,29,1,0,0,0,247,245,1,0,0,0,248,253,3,88,44,0,249,250,5,6,
  	0,0,250,252,3,88,44,0,251,249,1,0,0,0,252,255,1,0,0,0,253,251,1,0,0,0,
  	253,254,1,0,0,0,254,31,1,0,0,0,255,253,1,0,0,0,256,257,5,62,0,0,257,258,
  	3,100,50,0,258,259,5,3,0,0,259,33,1,0,0,0,260,264,3,100,50,0,261,262,
  	5,7,0,0,262,264,3,100,50,0,263,260,1,0,0,0,263,261,1,0,0,0,264,35,1,0,
  	0,0,265,266,5,63,0,0,266,267,5,8,0,0,267,268,3,34,17,0,268,269,5,9,0,
  	0,269,270,5,4,0,0,270,271,3,2,1,0,271,272,5,5,0,0,272,37,1,0,0,0,273,
  	274,7,2,0,0,274,39,1,0,0,0,275,276,7,3,0,0,276,41,1,0,0,0,277,278,5,4,
  	0,0,278,279,3,2,1,0,279,280,5,5,0,0,280,43,1,0,0,0,281,282,5,10,0,0,282,
  	286,3,100,50,0,283,286,3,100,50,0,284,286,5,11,0,0,285,281,1,0,0,0,285,
  	283,1,0,0,0,285,284,1,0,0,0,286,45,1,0,0,0,287,288,5,12,0,0,288,293,3,
  	44,22,0,289,290,5,6,0,0,290,292,3,44,22,0,291,289,1,0,0,0,292,295,1,0,
  	0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,296,1,0,0,0,295,293,1,0,0,0,296,
  	297,5,13,0,0,297,47,1,0,0,0,298,299,5,14,0,0,299,300,3,46,23,0,300,301,
  	5,1,0,0,301,302,3,28,14,0,302,303,5,2,0,0,303,304,3,42,21,0,304,49,1,
  	0,0,0,305,306,7,4,0,0,306,51,1,0,0,0,307,320,3,100,50,0,308,320,3,50,
  	25,0,309,320,3,48,24,0,310,312,3,76,38,0,311,310,1,0,0,0,312,313,1,0,
  	0,0,313,311,1,0,0,0,313,314,1,0,0,0,314,320,1,0,0,0,315,316,5,1,0,0,316,
  	317,3,90,45,0,317,318,5,2,0,0,318,320,1,0,0,0,319,307,1,0,0,0,319,308,
  	1,0,0,0,319,309,1,0,0,0,319,311,1,0,0,0,319,315,1,0,0,0,320,53,1,0,0,
  	0,321,326,3,84,42,0,322,323,7,5,0,0,323,325,3,84,42,0,324,322,1,0,0,0,
  	325,328,1,0,0,0,326,324,1,0,0,0,326,327,1,0,0,0,327,55,1,0,0,0,328,326,
  	1,0,0,0,329,334,3,54,27,0,330,331,7,6,0,0,331,333,3,54,27,0,332,330,1,
  	0,0,0,333,336,1,0,0,0,334,332,1,0,0,0,334,335,1,0,0,0,335,57,1,0,0,0,
  	336,334,1,0,0,0,337,342,3,56,28,0,338,339,7,7,0,0,339,341,3,56,28,0,340,
  	338,1,0,0,0,341,344,1,0,0,0,342,340,1,0,0,0,342,343,1,0,0,0,343,59,1,
  	0,0,0,344,342,1,0,0,0,345,350,3,58,29,0,346,347,7,8,0,0,347,349,3,58,
  	29,0,348,346,1,0,0,0,349,352,1,0,0,0,350,348,1,0,0,0,350,351,1,0,0,0,
  	351,61,1,0,0,0,352,350,1,0,0,0,353,358,3,60,30,0,354,355,7,9,0,0,355,
  	357,3,60,30,0,356,354,1,0,0,0,357,360,1,0,0,0,358,356,1,0,0,0,358,359,
  	1,0,0,0,359,63,1,0,0,0,360,358,1,0,0,0,361,366,3,62,31,0,362,363,5,10,
  	0,0,363,365,3,62,31,0,364,362,1,0,0,0,365,368,1,0,0,0,366,364,1,0,0,0,
  	366,367,1,0,0,0,367,65,1,0,0,0,368,366,1,0,0,0,369,374,3,64,32,0,370,
  	371,5,26,0,0,371,373,3,64,32,0,372,370,1,0,0,0,373,376,1,0,0,0,374,372,
  	1,0,0,0,374,375,1,0,0,0,375,67,1,0,0,0,376,374,1,0,0,0,377,382,3,66,33,
  	0,378,379,5,27,0,0,379,381,3,66,33,0,380,378,1,0,0,0,381,384,1,0,0,0,
  	382,380,1,0,0,0,382,383,1,0,0,0,383,69,1,0,0,0,384,382,1,0,0,0,385,390,
  	3,68,34,0,386,387,5,28,0,0,387,389,3,68,34,0,388,386,1,0,0,0,389,392,
  	1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,391,71,1,0,0,0,392,390,1,0,0,
  	0,393,398,3,70,35,0,394,395,5,29,0,0,395,397,3,70,35,0,396,394,1,0,0,
  	0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,1,0,0,0,399,73,1,0,0,0,400,
  	398,1,0,0,0,401,407,3,72,36,0,402,403,5,30,0,0,403,404,3,90,45,0,404,
  	405,5,31,0,0,405,406,3,74,37,0,406,408,1,0,0,0,407,402,1,0,0,0,407,408,
  	1,0,0,0,408,75,1,0,0,0,409,411,5,85,0,0,410,409,1,0,0,0,410,411,1,0,0,
  	0,411,412,1,0,0,0,412,414,5,32,0,0,413,415,5,86,0,0,414,413,1,0,0,0,414,
  	415,1,0,0,0,415,416,1,0,0,0,416,417,5,32,0,0,417,77,1,0,0,0,418,419,7,
  	10,0,0,419,79,1,0,0,0,420,431,3,52,26,0,421,422,5,1,0,0,422,423,3,30,
  	15,0,423,424,5,2,0,0,424,430,1,0,0,0,425,426,7,11,0,0,426,430,3,100,50,
  	0,427,430,5,46,0,0,428,430,5,47,0,0,429,421,1,0,0,0,429,425,1,0,0,0,429,
  	427,1,0,0,0,429,428,1,0,0,0,430,433,1,0,0,0,431,429,1,0,0,0,431,432,1,
  	0,0,0,432,81,1,0,0,0,433,431,1,0,0,0,434,435,7,12,0,0,435,83,1,0,0,0,
  	436,437,5,1,0,0,437,438,3,98,49,0,438,439,5,2,0,0,439,440,3,84,42,0,440,
  	452,1,0,0,0,441,442,5,68,0,0,442,443,5,8,0,0,443,444,3,98,49,0,444,445,
  	5,9,0,0,445,446,5,1,0,0,446,447,3,84,42,0,447,448,5,2,0,0,448,452,1,0,
  	0,0,449,452,3,86,43,0,450,452,5,52,0,0,451,436,1,0,0,0,451,441,1,0,0,
  	0,451,449,1,0,0,0,451,450,1,0,0,0,452,85,1,0,0,0,453,455,7,13,0,0,454,
  	453,1,0,0,0,455,458,1,0,0,0,456,454,1,0,0,0,456,457,1,0,0,0,457,465,1,
  	0,0,0,458,456,1,0,0,0,459,466,3,80,40,0,460,461,3,82,41,0,461,462,3,84,
  	42,0,462,466,1,0,0,0,463,464,5,49,0,0,464,466,3,98,49,0,465,459,1,0,0,
  	0,465,460,1,0,0,0,465,463,1,0,0,0,466,87,1,0,0,0,467,474,3,74,37,0,468,
  	469,3,86,43,0,469,470,3,78,39,0,470,471,3,88,44,0,471,474,1,0,0,0,472,
  	474,5,52,0,0,473,467,1,0,0,0,473,468,1,0,0,0,473,472,1,0,0,0,474,89,1,
  	0,0,0,475,480,3,88,44,0,476,477,5,6,0,0,477,479,3,88,44,0,478,476,1,0,
  	0,0,479,482,1,0,0,0,480,478,1,0,0,0,480,481,1,0,0,0,481,91,1,0,0,0,482,
  	480,1,0,0,0,483,495,3,100,50,0,484,495,5,69,0,0,485,495,5,70,0,0,486,
  	495,5,71,0,0,487,495,5,72,0,0,488,495,5,73,0,0,489,495,5,74,0,0,490,495,
  	5,75,0,0,491,495,5,76,0,0,492,495,5,77,0,0,493,495,5,78,0,0,494,483,1,
  	0,0,0,494,484,1,0,0,0,494,485,1,0,0,0,494,486,1,0,0,0,494,487,1,0,0,0,
  	494,488,1,0,0,0,494,489,1,0,0,0,494,490,1,0,0,0,494,491,1,0,0,0,494,492,
  	1,0,0,0,494,493,1,0,0,0,495,93,1,0,0,0,496,500,5,15,0,0,497,499,5,15,
  	0,0,498,497,1,0,0,0,499,502,1,0,0,0,500,498,1,0,0,0,500,501,1,0,0,0,501,
  	95,1,0,0,0,502,500,1,0,0,0,503,504,5,79,0,0,504,97,1,0,0,0,505,507,3,
  	96,48,0,506,505,1,0,0,0,506,507,1,0,0,0,507,509,1,0,0,0,508,510,5,80,
  	0,0,509,508,1,0,0,0,509,510,1,0,0,0,510,512,1,0,0,0,511,513,5,81,0,0,
  	512,511,1,0,0,0,512,513,1,0,0,0,513,514,1,0,0,0,514,516,3,92,46,0,515,
  	517,3,94,47,0,516,515,1,0,0,0,516,517,1,0,0,0,517,99,1,0,0,0,518,519,
  	6,50,-1,0,519,523,5,87,0,0,520,522,7,14,0,0,521,520,1,0,0,0,522,525,1,
  	0,0,0,523,521,1,0,0,0,523,524,1,0,0,0,524,531,1,0,0,0,525,523,1,0,0,0,
  	526,527,10,1,0,0,527,528,5,50,0,0,528,530,3,100,50,2,529,526,1,0,0,0,
  	530,533,1,0,0,0,531,529,1,0,0,0,531,532,1,0,0,0,532,101,1,0,0,0,533,531,
  	1,0,0,0,534,536,3,38,19,0,535,534,1,0,0,0,535,536,1,0,0,0,536,538,1,0,
  	0,0,537,539,3,40,20,0,538,537,1,0,0,0,538,539,1,0,0,0,539,540,1,0,0,0,
  	540,541,3,104,52,0,541,103,1,0,0,0,542,543,3,98,49,0,543,547,3,100,50,
  	0,544,545,3,78,39,0,545,546,3,52,26,0,546,548,1,0,0,0,547,544,1,0,0,0,
  	547,548,1,0,0,0,548,549,1,0,0,0,549,550,5,6,0,0,550,551,3,98,49,0,551,
  	555,3,100,50,0,552,553,3,78,39,0,553,554,3,52,26,0,554,556,1,0,0,0,555,
  	552,1,0,0,0,555,556,1,0,0,0,556,557,1,0,0,0,557,558,5,3,0,0,558,105,1,
  	0,0,0,56,117,119,126,136,144,153,162,167,174,184,196,201,211,219,229,
  	234,238,245,253,263,285,293,313,319,326,334,342,350,358,366,374,382,390,
  	398,407,410,414,429,431,451,456,465,473,480,494,500,506,509,512,516,523,
  	531,535,538,547,555
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ctcParserStaticData = staticData.release();
}

}

ctcParser::ctcParser(TokenStream *input) : ctcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ctcParser::ctcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ctcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ctcParserStaticData->atn, ctcParserStaticData->decisionToDFA, ctcParserStaticData->sharedContextCache, options);
}

ctcParser::~ctcParser() {
  delete _interpreter;
}

const atn::ATN& ctcParser::getATN() const {
  return *ctcParserStaticData->atn;
}

std::string ctcParser::getGrammarFileName() const {
  return "ctc.g4";
}

const std::vector<std::string>& ctcParser::getRuleNames() const {
  return ctcParserStaticData->ruleNames;
}

const dfa::Vocabulary& ctcParser::getVocabulary() const {
  return ctcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ctcParser::getSerializedATN() const {
  return ctcParserStaticData->serializedATN;
}


//----------------- MainContext ------------------------------------------------------------------

ctcParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::StatementContext* ctcParser::MainContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}

tree::TerminalNode* ctcParser::MainContext::EOF() {
  return getToken(ctcParser::EOF, 0);
}


size_t ctcParser::MainContext::getRuleIndex() const {
  return ctcParser::RuleMain;
}


std::any ctcParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::MainContext* ctcParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, ctcParser::RuleMain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    statement();
    setState(107);
    match(ctcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ctcParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Interface_declContext *> ctcParser::StatementContext::interface_decl() {
  return getRuleContexts<ctcParser::Interface_declContext>();
}

ctcParser::Interface_declContext* ctcParser::StatementContext::interface_decl(size_t i) {
  return getRuleContext<ctcParser::Interface_declContext>(i);
}

std::vector<ctcParser::Enum_declContext *> ctcParser::StatementContext::enum_decl() {
  return getRuleContexts<ctcParser::Enum_declContext>();
}

ctcParser::Enum_declContext* ctcParser::StatementContext::enum_decl(size_t i) {
  return getRuleContext<ctcParser::Enum_declContext>(i);
}

std::vector<ctcParser::Using_declContext *> ctcParser::StatementContext::using_decl() {
  return getRuleContexts<ctcParser::Using_declContext>();
}

ctcParser::Using_declContext* ctcParser::StatementContext::using_decl(size_t i) {
  return getRuleContext<ctcParser::Using_declContext>(i);
}

std::vector<ctcParser::Namespace_declContext *> ctcParser::StatementContext::namespace_decl() {
  return getRuleContexts<ctcParser::Namespace_declContext>();
}

ctcParser::Namespace_declContext* ctcParser::StatementContext::namespace_decl(size_t i) {
  return getRuleContext<ctcParser::Namespace_declContext>(i);
}

std::vector<ctcParser::Cctp_declContext *> ctcParser::StatementContext::cctp_decl() {
  return getRuleContexts<ctcParser::Cctp_declContext>();
}

ctcParser::Cctp_declContext* ctcParser::StatementContext::cctp_decl(size_t i) {
  return getRuleContext<ctcParser::Cctp_declContext>(i);
}

std::vector<ctcParser::Var_declContext *> ctcParser::StatementContext::var_decl() {
  return getRuleContexts<ctcParser::Var_declContext>();
}

ctcParser::Var_declContext* ctcParser::StatementContext::var_decl(size_t i) {
  return getRuleContext<ctcParser::Var_declContext>(i);
}

std::vector<ctcParser::Fn_declContext *> ctcParser::StatementContext::fn_decl() {
  return getRuleContexts<ctcParser::Fn_declContext>();
}

ctcParser::Fn_declContext* ctcParser::StatementContext::fn_decl(size_t i) {
  return getRuleContext<ctcParser::Fn_declContext>(i);
}

std::vector<ctcParser::Use_declContext *> ctcParser::StatementContext::use_decl() {
  return getRuleContexts<ctcParser::Use_declContext>();
}

ctcParser::Use_declContext* ctcParser::StatementContext::use_decl(size_t i) {
  return getRuleContext<ctcParser::Use_declContext>(i);
}


size_t ctcParser::StatementContext::getRuleIndex() const {
  return ctcParser::RuleStatement;
}


std::any ctcParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::StatementContext* ctcParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ctcParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 55) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 55)) & 4429176733) != 0)) {
      setState(117);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(109);
        interface_decl();
        break;
      }

      case 2: {
        setState(110);
        enum_decl();
        break;
      }

      case 3: {
        setState(111);
        using_decl();
        break;
      }

      case 4: {
        setState(112);
        namespace_decl();
        break;
      }

      case 5: {
        setState(113);
        cctp_decl();
        break;
      }

      case 6: {
        setState(114);
        var_decl();
        break;
      }

      case 7: {
        setState(115);
        fn_decl();
        break;
      }

      case 8: {
        setState(116);
        use_decl();
        break;
      }

      default:
        break;
      }
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Access_modifierContext ------------------------------------------------------------------

ctcParser::Access_modifierContext::Access_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Access_modifierContext::Public() {
  return getToken(ctcParser::Public, 0);
}

tree::TerminalNode* ctcParser::Access_modifierContext::Private() {
  return getToken(ctcParser::Private, 0);
}


size_t ctcParser::Access_modifierContext::getRuleIndex() const {
  return ctcParser::RuleAccess_modifier;
}


std::any ctcParser::Access_modifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAccess_modifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Access_modifierContext* ctcParser::access_modifier() {
  Access_modifierContext *_localctx = _tracker.createInstance<Access_modifierContext>(_ctx, getState());
  enterRule(_localctx, 4, ctcParser::RuleAccess_modifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _la = _input->LA(1);
    if (!(_la == ctcParser::Public

    || _la == ctcParser::Private)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_elementContext ------------------------------------------------------------------

ctcParser::Interface_elementContext::Interface_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Access_modifierContext* ctcParser::Interface_elementContext::access_modifier() {
  return getRuleContext<ctcParser::Access_modifierContext>(0);
}

ctcParser::Type_specifierContext* ctcParser::Interface_elementContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}

ctcParser::IdentifierContext* ctcParser::Interface_elementContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::Type_argument_listContext* ctcParser::Interface_elementContext::type_argument_list() {
  return getRuleContext<ctcParser::Type_argument_listContext>(0);
}

ctcParser::Storage_specifierContext* ctcParser::Interface_elementContext::storage_specifier() {
  return getRuleContext<ctcParser::Storage_specifierContext>(0);
}

std::vector<ctcParser::Fn_specifierContext *> ctcParser::Interface_elementContext::fn_specifier() {
  return getRuleContexts<ctcParser::Fn_specifierContext>();
}

ctcParser::Fn_specifierContext* ctcParser::Interface_elementContext::fn_specifier(size_t i) {
  return getRuleContext<ctcParser::Fn_specifierContext>(i);
}


size_t ctcParser::Interface_elementContext::getRuleIndex() const {
  return ctcParser::RuleInterface_element;
}


std::any ctcParser::Interface_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInterface_element(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Interface_elementContext* ctcParser::interface_element() {
  Interface_elementContext *_localctx = _tracker.createInstance<Interface_elementContext>(_ctx, getState());
  enterRule(_localctx, 6, ctcParser::RuleInterface_element);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    access_modifier();
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(125);
      storage_specifier();
    }
    setState(128);
    type_specifier();
    setState(129);
    identifier(0);
    setState(130);
    match(ctcParser::T__0);
    setState(131);
    type_argument_list();
    setState(132);
    match(ctcParser::T__1);
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Inline

    || _la == ctcParser::Noexcept) {
      setState(133);
      fn_specifier();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(ctcParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_bodyContext ------------------------------------------------------------------

ctcParser::Interface_bodyContext::Interface_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Interface_elementContext *> ctcParser::Interface_bodyContext::interface_element() {
  return getRuleContexts<ctcParser::Interface_elementContext>();
}

ctcParser::Interface_elementContext* ctcParser::Interface_bodyContext::interface_element(size_t i) {
  return getRuleContext<ctcParser::Interface_elementContext>(i);
}


size_t ctcParser::Interface_bodyContext::getRuleIndex() const {
  return ctcParser::RuleInterface_body;
}


std::any ctcParser::Interface_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInterface_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Interface_bodyContext* ctcParser::interface_body() {
  Interface_bodyContext *_localctx = _tracker.createInstance<Interface_bodyContext>(_ctx, getState());
  enterRule(_localctx, 8, ctcParser::RuleInterface_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(141);
      interface_element();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_declContext ------------------------------------------------------------------

ctcParser::Interface_declContext::Interface_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Interface_declContext::Interface() {
  return getToken(ctcParser::Interface, 0);
}

ctcParser::IdentifierContext* ctcParser::Interface_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::Interface_bodyContext* ctcParser::Interface_declContext::interface_body() {
  return getRuleContext<ctcParser::Interface_bodyContext>(0);
}


size_t ctcParser::Interface_declContext::getRuleIndex() const {
  return ctcParser::RuleInterface_decl;
}


std::any ctcParser::Interface_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInterface_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Interface_declContext* ctcParser::interface_decl() {
  Interface_declContext *_localctx = _tracker.createInstance<Interface_declContext>(_ctx, getState());
  enterRule(_localctx, 10, ctcParser::RuleInterface_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(ctcParser::Interface);
    setState(148);
    identifier(0);
    setState(149);
    match(ctcParser::T__3);
    setState(150);
    interface_body();
    setState(151);
    match(ctcParser::T__4);
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(152);
      match(ctcParser::T__2);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_modifierContext ------------------------------------------------------------------

ctcParser::Enum_modifierContext::Enum_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Enum_modifierContext::Class() {
  return getToken(ctcParser::Class, 0);
}


size_t ctcParser::Enum_modifierContext::getRuleIndex() const {
  return ctcParser::RuleEnum_modifier;
}


std::any ctcParser::Enum_modifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitEnum_modifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Enum_modifierContext* ctcParser::enum_modifier() {
  Enum_modifierContext *_localctx = _tracker.createInstance<Enum_modifierContext>(_ctx, getState());
  enterRule(_localctx, 12, ctcParser::RuleEnum_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(ctcParser::Class);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_bodyContext ------------------------------------------------------------------

ctcParser::Enum_bodyContext::Enum_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::IdentifierContext *> ctcParser::Enum_bodyContext::identifier() {
  return getRuleContexts<ctcParser::IdentifierContext>();
}

ctcParser::IdentifierContext* ctcParser::Enum_bodyContext::identifier(size_t i) {
  return getRuleContext<ctcParser::IdentifierContext>(i);
}


size_t ctcParser::Enum_bodyContext::getRuleIndex() const {
  return ctcParser::RuleEnum_body;
}


std::any ctcParser::Enum_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitEnum_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Enum_bodyContext* ctcParser::enum_body() {
  Enum_bodyContext *_localctx = _tracker.createInstance<Enum_bodyContext>(_ctx, getState());
  enterRule(_localctx, 14, ctcParser::RuleEnum_body);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    identifier(0);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__5) {
      setState(158);
      match(ctcParser::T__5);
      setState(159);
      identifier(0);
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_declContext ------------------------------------------------------------------

ctcParser::Enum_declContext::Enum_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Enum_declContext::Enum() {
  return getToken(ctcParser::Enum, 0);
}

ctcParser::IdentifierContext* ctcParser::Enum_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::Enum_bodyContext* ctcParser::Enum_declContext::enum_body() {
  return getRuleContext<ctcParser::Enum_bodyContext>(0);
}

ctcParser::Enum_modifierContext* ctcParser::Enum_declContext::enum_modifier() {
  return getRuleContext<ctcParser::Enum_modifierContext>(0);
}


size_t ctcParser::Enum_declContext::getRuleIndex() const {
  return ctcParser::RuleEnum_decl;
}


std::any ctcParser::Enum_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitEnum_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Enum_declContext* ctcParser::enum_decl() {
  Enum_declContext *_localctx = _tracker.createInstance<Enum_declContext>(_ctx, getState());
  enterRule(_localctx, 16, ctcParser::RuleEnum_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(ctcParser::Enum);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Class) {
      setState(166);
      enum_modifier();
    }
    setState(169);
    identifier(0);
    setState(170);
    match(ctcParser::T__3);
    setState(171);
    enum_body();
    setState(172);
    match(ctcParser::T__4);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(173);
      match(ctcParser::T__2);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_declContext ------------------------------------------------------------------

ctcParser::Using_declContext::Using_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Using_declContext::Using() {
  return getToken(ctcParser::Using, 0);
}

ctcParser::IdentifierContext* ctcParser::Using_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

tree::TerminalNode* ctcParser::Using_declContext::Namespace() {
  return getToken(ctcParser::Namespace, 0);
}


size_t ctcParser::Using_declContext::getRuleIndex() const {
  return ctcParser::RuleUsing_decl;
}


std::any ctcParser::Using_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitUsing_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Using_declContext* ctcParser::using_decl() {
  Using_declContext *_localctx = _tracker.createInstance<Using_declContext>(_ctx, getState());
  enterRule(_localctx, 18, ctcParser::RuleUsing_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(ctcParser::Using);
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        setState(177);
        identifier(0);
        setState(178);
        match(ctcParser::T__2);
        break;
      }

      case ctcParser::Namespace: {
        setState(180);
        match(ctcParser::Namespace);
        setState(181);
        identifier(0);
        setState(182);
        match(ctcParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declContext ------------------------------------------------------------------

ctcParser::Namespace_declContext::Namespace_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Namespace_declContext::Namespace() {
  return getToken(ctcParser::Namespace, 0);
}

ctcParser::IdentifierContext* ctcParser::Namespace_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::StatementContext* ctcParser::Namespace_declContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}


size_t ctcParser::Namespace_declContext::getRuleIndex() const {
  return ctcParser::RuleNamespace_decl;
}


std::any ctcParser::Namespace_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitNamespace_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Namespace_declContext* ctcParser::namespace_decl() {
  Namespace_declContext *_localctx = _tracker.createInstance<Namespace_declContext>(_ctx, getState());
  enterRule(_localctx, 20, ctcParser::RuleNamespace_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(ctcParser::Namespace);
      setState(187);
      identifier(0);
      setState(188);
      match(ctcParser::T__3);
      setState(189);
      statement();
      setState(190);
      match(ctcParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      match(ctcParser::Namespace);
      setState(193);
      identifier(0);
      setState(194);
      match(ctcParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fn_specifierContext ------------------------------------------------------------------

ctcParser::Fn_specifierContext::Fn_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Fn_specifierContext::Inline() {
  return getToken(ctcParser::Inline, 0);
}

tree::TerminalNode* ctcParser::Fn_specifierContext::Noexcept() {
  return getToken(ctcParser::Noexcept, 0);
}


size_t ctcParser::Fn_specifierContext::getRuleIndex() const {
  return ctcParser::RuleFn_specifier;
}


std::any ctcParser::Fn_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitFn_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Fn_specifierContext* ctcParser::fn_specifier() {
  Fn_specifierContext *_localctx = _tracker.createInstance<Fn_specifierContext>(_ctx, getState());
  enterRule(_localctx, 22, ctcParser::RuleFn_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    _la = _input->LA(1);
    if (!(_la == ctcParser::Inline

    || _la == ctcParser::Noexcept)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fn_declContext ------------------------------------------------------------------

ctcParser::Fn_declContext::Fn_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Type_specifierContext* ctcParser::Fn_declContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}

ctcParser::IdentifierContext* ctcParser::Fn_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::Type_argument_listContext* ctcParser::Fn_declContext::type_argument_list() {
  return getRuleContext<ctcParser::Type_argument_listContext>(0);
}

ctcParser::StatementContext* ctcParser::Fn_declContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}

ctcParser::Storage_specifierContext* ctcParser::Fn_declContext::storage_specifier() {
  return getRuleContext<ctcParser::Storage_specifierContext>(0);
}

std::vector<ctcParser::Fn_specifierContext *> ctcParser::Fn_declContext::fn_specifier() {
  return getRuleContexts<ctcParser::Fn_specifierContext>();
}

ctcParser::Fn_specifierContext* ctcParser::Fn_declContext::fn_specifier(size_t i) {
  return getRuleContext<ctcParser::Fn_specifierContext>(i);
}


size_t ctcParser::Fn_declContext::getRuleIndex() const {
  return ctcParser::RuleFn_decl;
}


std::any ctcParser::Fn_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitFn_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Fn_declContext* ctcParser::fn_decl() {
  Fn_declContext *_localctx = _tracker.createInstance<Fn_declContext>(_ctx, getState());
  enterRule(_localctx, 24, ctcParser::RuleFn_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(200);
        storage_specifier();
      }
      setState(203);
      type_specifier();
      setState(204);
      identifier(0);
      setState(205);
      match(ctcParser::T__0);
      setState(206);
      type_argument_list();
      setState(207);
      match(ctcParser::T__1);
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(208);
        fn_specifier();
        setState(213);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(214);
      match(ctcParser::T__3);
      setState(215);
      statement();
      setState(216);
      match(ctcParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(219);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(218);
        storage_specifier();
      }
      setState(221);
      type_specifier();
      setState(222);
      identifier(0);
      setState(223);
      match(ctcParser::T__0);
      setState(224);
      type_argument_list();
      setState(225);
      match(ctcParser::T__1);
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(226);
        fn_specifier();
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(232);
      match(ctcParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_argumentContext ------------------------------------------------------------------

ctcParser::Type_argumentContext::Type_argumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::TypeContext* ctcParser::Type_argumentContext::type() {
  return getRuleContext<ctcParser::TypeContext>(0);
}

ctcParser::IdentifierContext* ctcParser::Type_argumentContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}


size_t ctcParser::Type_argumentContext::getRuleIndex() const {
  return ctcParser::RuleType_argument;
}


std::any ctcParser::Type_argumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitType_argument(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Type_argumentContext* ctcParser::type_argument() {
  Type_argumentContext *_localctx = _tracker.createInstance<Type_argumentContext>(_ctx, getState());
  enterRule(_localctx, 26, ctcParser::RuleType_argument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    type();
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Identifier_non_digit) {
      setState(237);
      identifier(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_argument_listContext ------------------------------------------------------------------

ctcParser::Type_argument_listContext::Type_argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Type_argumentContext *> ctcParser::Type_argument_listContext::type_argument() {
  return getRuleContexts<ctcParser::Type_argumentContext>();
}

ctcParser::Type_argumentContext* ctcParser::Type_argument_listContext::type_argument(size_t i) {
  return getRuleContext<ctcParser::Type_argumentContext>(i);
}


size_t ctcParser::Type_argument_listContext::getRuleIndex() const {
  return ctcParser::RuleType_argument_list;
}


std::any ctcParser::Type_argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitType_argument_list(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Type_argument_listContext* ctcParser::type_argument_list() {
  Type_argument_listContext *_localctx = _tracker.createInstance<Type_argument_listContext>(_ctx, getState());
  enterRule(_localctx, 28, ctcParser::RuleType_argument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    type_argument();
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__5) {
      setState(241);
      match(ctcParser::T__5);
      setState(242);
      type_argument();
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentExpressionListContext ------------------------------------------------------------------

ctcParser::ArgumentExpressionListContext::ArgumentExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Assignment_expressionContext *> ctcParser::ArgumentExpressionListContext::assignment_expression() {
  return getRuleContexts<ctcParser::Assignment_expressionContext>();
}

ctcParser::Assignment_expressionContext* ctcParser::ArgumentExpressionListContext::assignment_expression(size_t i) {
  return getRuleContext<ctcParser::Assignment_expressionContext>(i);
}


size_t ctcParser::ArgumentExpressionListContext::getRuleIndex() const {
  return ctcParser::RuleArgumentExpressionList;
}


std::any ctcParser::ArgumentExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitArgumentExpressionList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ArgumentExpressionListContext* ctcParser::argumentExpressionList() {
  ArgumentExpressionListContext *_localctx = _tracker.createInstance<ArgumentExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 30, ctcParser::RuleArgumentExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    assignment_expression();
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__5) {
      setState(249);
      match(ctcParser::T__5);
      setState(250);
      assignment_expression();
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Use_declContext ------------------------------------------------------------------

ctcParser::Use_declContext::Use_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Use_declContext::Use() {
  return getToken(ctcParser::Use, 0);
}

ctcParser::IdentifierContext* ctcParser::Use_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}


size_t ctcParser::Use_declContext::getRuleIndex() const {
  return ctcParser::RuleUse_decl;
}


std::any ctcParser::Use_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitUse_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Use_declContext* ctcParser::use_decl() {
  Use_declContext *_localctx = _tracker.createInstance<Use_declContext>(_ctx, getState());
  enterRule(_localctx, 32, ctcParser::RuleUse_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(ctcParser::Use);
    setState(257);
    identifier(0);
    setState(258);
    match(ctcParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compile_if_predicateContext ------------------------------------------------------------------

ctcParser::Compile_if_predicateContext::Compile_if_predicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::IdentifierContext* ctcParser::Compile_if_predicateContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}


size_t ctcParser::Compile_if_predicateContext::getRuleIndex() const {
  return ctcParser::RuleCompile_if_predicate;
}


std::any ctcParser::Compile_if_predicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitCompile_if_predicate(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Compile_if_predicateContext* ctcParser::compile_if_predicate() {
  Compile_if_predicateContext *_localctx = _tracker.createInstance<Compile_if_predicateContext>(_ctx, getState());
  enterRule(_localctx, 34, ctcParser::RuleCompile_if_predicate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(260);
        identifier(0);
        break;
      }

      case ctcParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(261);
        match(ctcParser::T__6);
        setState(262);
        identifier(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cctp_declContext ------------------------------------------------------------------

ctcParser::Cctp_declContext::Cctp_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Cctp_declContext::Compile_if() {
  return getToken(ctcParser::Compile_if, 0);
}

ctcParser::Compile_if_predicateContext* ctcParser::Cctp_declContext::compile_if_predicate() {
  return getRuleContext<ctcParser::Compile_if_predicateContext>(0);
}

ctcParser::StatementContext* ctcParser::Cctp_declContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}


size_t ctcParser::Cctp_declContext::getRuleIndex() const {
  return ctcParser::RuleCctp_decl;
}


std::any ctcParser::Cctp_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitCctp_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Cctp_declContext* ctcParser::cctp_decl() {
  Cctp_declContext *_localctx = _tracker.createInstance<Cctp_declContext>(_ctx, getState());
  enterRule(_localctx, 36, ctcParser::RuleCctp_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(ctcParser::Compile_if);
    setState(266);
    match(ctcParser::T__7);
    setState(267);
    compile_if_predicate();
    setState(268);
    match(ctcParser::T__8);
    setState(269);
    match(ctcParser::T__3);
    setState(270);
    statement();
    setState(271);
    match(ctcParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Storage_specifierContext ------------------------------------------------------------------

ctcParser::Storage_specifierContext::Storage_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Storage_specifierContext::Static() {
  return getToken(ctcParser::Static, 0);
}

tree::TerminalNode* ctcParser::Storage_specifierContext::Extern() {
  return getToken(ctcParser::Extern, 0);
}


size_t ctcParser::Storage_specifierContext::getRuleIndex() const {
  return ctcParser::RuleStorage_specifier;
}


std::any ctcParser::Storage_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitStorage_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Storage_specifierContext* ctcParser::storage_specifier() {
  Storage_specifierContext *_localctx = _tracker.createInstance<Storage_specifierContext>(_ctx, getState());
  enterRule(_localctx, 38, ctcParser::RuleStorage_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _la = _input->LA(1);
    if (!(_la == ctcParser::Static

    || _la == ctcParser::Extern)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_decl_specifierContext ------------------------------------------------------------------

ctcParser::Var_decl_specifierContext::Var_decl_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Var_decl_specifierContext::Constexpr() {
  return getToken(ctcParser::Constexpr, 0);
}

tree::TerminalNode* ctcParser::Var_decl_specifierContext::Consteval() {
  return getToken(ctcParser::Consteval, 0);
}


size_t ctcParser::Var_decl_specifierContext::getRuleIndex() const {
  return ctcParser::RuleVar_decl_specifier;
}


std::any ctcParser::Var_decl_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitVar_decl_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Var_decl_specifierContext* ctcParser::var_decl_specifier() {
  Var_decl_specifierContext *_localctx = _tracker.createInstance<Var_decl_specifierContext>(_ctx, getState());
  enterRule(_localctx, 40, ctcParser::RuleVar_decl_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _la = _input->LA(1);
    if (!(_la == ctcParser::Constexpr

    || _la == ctcParser::Consteval)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_bodyContext ------------------------------------------------------------------

ctcParser::Lambda_bodyContext::Lambda_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::StatementContext* ctcParser::Lambda_bodyContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}


size_t ctcParser::Lambda_bodyContext::getRuleIndex() const {
  return ctcParser::RuleLambda_body;
}


std::any ctcParser::Lambda_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLambda_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Lambda_bodyContext* ctcParser::lambda_body() {
  Lambda_bodyContext *_localctx = _tracker.createInstance<Lambda_bodyContext>(_ctx, getState());
  enterRule(_localctx, 42, ctcParser::RuleLambda_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(ctcParser::T__3);
    setState(278);
    statement();
    setState(279);
    match(ctcParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_capture_modifierContext ------------------------------------------------------------------

ctcParser::Lambda_capture_modifierContext::Lambda_capture_modifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::IdentifierContext* ctcParser::Lambda_capture_modifierContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}


size_t ctcParser::Lambda_capture_modifierContext::getRuleIndex() const {
  return ctcParser::RuleLambda_capture_modifier;
}


std::any ctcParser::Lambda_capture_modifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLambda_capture_modifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Lambda_capture_modifierContext* ctcParser::lambda_capture_modifier() {
  Lambda_capture_modifierContext *_localctx = _tracker.createInstance<Lambda_capture_modifierContext>(_ctx, getState());
  enterRule(_localctx, 44, ctcParser::RuleLambda_capture_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(281);
        match(ctcParser::T__9);
        setState(282);
        identifier(0);
        break;
      }

      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 2);
        setState(283);
        identifier(0);
        break;
      }

      case ctcParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(284);
        match(ctcParser::T__10);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_capture_byContext ------------------------------------------------------------------

ctcParser::Lambda_capture_byContext::Lambda_capture_byContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Lambda_capture_modifierContext *> ctcParser::Lambda_capture_byContext::lambda_capture_modifier() {
  return getRuleContexts<ctcParser::Lambda_capture_modifierContext>();
}

ctcParser::Lambda_capture_modifierContext* ctcParser::Lambda_capture_byContext::lambda_capture_modifier(size_t i) {
  return getRuleContext<ctcParser::Lambda_capture_modifierContext>(i);
}


size_t ctcParser::Lambda_capture_byContext::getRuleIndex() const {
  return ctcParser::RuleLambda_capture_by;
}


std::any ctcParser::Lambda_capture_byContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLambda_capture_by(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Lambda_capture_byContext* ctcParser::lambda_capture_by() {
  Lambda_capture_byContext *_localctx = _tracker.createInstance<Lambda_capture_byContext>(_ctx, getState());
  enterRule(_localctx, 46, ctcParser::RuleLambda_capture_by);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(ctcParser::T__11);
    setState(288);
    lambda_capture_modifier();
    setState(293);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__5) {
      setState(289);
      match(ctcParser::T__5);
      setState(290);
      lambda_capture_modifier();
      setState(295);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(296);
    match(ctcParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lambda_expressionContext ------------------------------------------------------------------

ctcParser::Lambda_expressionContext::Lambda_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Lambda_capture_byContext* ctcParser::Lambda_expressionContext::lambda_capture_by() {
  return getRuleContext<ctcParser::Lambda_capture_byContext>(0);
}

ctcParser::Type_argument_listContext* ctcParser::Lambda_expressionContext::type_argument_list() {
  return getRuleContext<ctcParser::Type_argument_listContext>(0);
}

ctcParser::Lambda_bodyContext* ctcParser::Lambda_expressionContext::lambda_body() {
  return getRuleContext<ctcParser::Lambda_bodyContext>(0);
}


size_t ctcParser::Lambda_expressionContext::getRuleIndex() const {
  return ctcParser::RuleLambda_expression;
}


std::any ctcParser::Lambda_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLambda_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Lambda_expressionContext* ctcParser::lambda_expression() {
  Lambda_expressionContext *_localctx = _tracker.createInstance<Lambda_expressionContext>(_ctx, getState());
  enterRule(_localctx, 48, ctcParser::RuleLambda_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(ctcParser::T__13);
    setState(299);
    lambda_capture_by();
    setState(300);
    match(ctcParser::T__0);
    setState(301);
    type_argument_list();
    setState(302);
    match(ctcParser::T__1);
    setState(303);
    lambda_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

ctcParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::ConstantContext::IntegerConstant() {
  return getToken(ctcParser::IntegerConstant, 0);
}

tree::TerminalNode* ctcParser::ConstantContext::FloatingConstant() {
  return getToken(ctcParser::FloatingConstant, 0);
}

tree::TerminalNode* ctcParser::ConstantContext::CharacterConstant() {
  return getToken(ctcParser::CharacterConstant, 0);
}


size_t ctcParser::ConstantContext::getRuleIndex() const {
  return ctcParser::RuleConstant;
}


std::any ctcParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ConstantContext* ctcParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 50, ctcParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _la = _input->LA(1);
    if (!(((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

ctcParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::IdentifierContext* ctcParser::Primary_expressionContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

ctcParser::ConstantContext* ctcParser::Primary_expressionContext::constant() {
  return getRuleContext<ctcParser::ConstantContext>(0);
}

ctcParser::Lambda_expressionContext* ctcParser::Primary_expressionContext::lambda_expression() {
  return getRuleContext<ctcParser::Lambda_expressionContext>(0);
}

std::vector<ctcParser::String_literalContext *> ctcParser::Primary_expressionContext::string_literal() {
  return getRuleContexts<ctcParser::String_literalContext>();
}

ctcParser::String_literalContext* ctcParser::Primary_expressionContext::string_literal(size_t i) {
  return getRuleContext<ctcParser::String_literalContext>(i);
}

ctcParser::ExpressionContext* ctcParser::Primary_expressionContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}


size_t ctcParser::Primary_expressionContext::getRuleIndex() const {
  return ctcParser::RulePrimary_expression;
}


std::any ctcParser::Primary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitPrimary_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Primary_expressionContext* ctcParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 52, ctcParser::RulePrimary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(319);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(307);
        identifier(0);
        break;
      }

      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant: {
        enterOuterAlt(_localctx, 2);
        setState(308);
        constant();
        break;
      }

      case ctcParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(309);
        lambda_expression();
        break;
      }

      case ctcParser::T__31:
      case ctcParser::EncodingPrefix: {
        enterOuterAlt(_localctx, 4);
        setState(311); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(310);
          string_literal();
          setState(313); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ctcParser::T__31

        || _la == ctcParser::EncodingPrefix);
        break;
      }

      case ctcParser::T__0: {
        enterOuterAlt(_localctx, 5);
        setState(315);
        match(ctcParser::T__0);
        setState(316);
        expression();
        setState(317);
        match(ctcParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

ctcParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Cast_expressionContext *> ctcParser::MultiplicativeExpressionContext::cast_expression() {
  return getRuleContexts<ctcParser::Cast_expressionContext>();
}

ctcParser::Cast_expressionContext* ctcParser::MultiplicativeExpressionContext::cast_expression(size_t i) {
  return getRuleContext<ctcParser::Cast_expressionContext>(i);
}


size_t ctcParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return ctcParser::RuleMultiplicativeExpression;
}


std::any ctcParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::MultiplicativeExpressionContext* ctcParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, ctcParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    cast_expression();
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0)) {
      setState(322);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 229376) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(323);
      cast_expression();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

ctcParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::MultiplicativeExpressionContext *> ctcParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<ctcParser::MultiplicativeExpressionContext>();
}

ctcParser::MultiplicativeExpressionContext* ctcParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<ctcParser::MultiplicativeExpressionContext>(i);
}


size_t ctcParser::AdditiveExpressionContext::getRuleIndex() const {
  return ctcParser::RuleAdditiveExpression;
}


std::any ctcParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::AdditiveExpressionContext* ctcParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, ctcParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    multiplicativeExpression();
    setState(334);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__17

    || _la == ctcParser::T__18) {
      setState(330);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__17

      || _la == ctcParser::T__18)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(331);
      multiplicativeExpression();
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

ctcParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::AdditiveExpressionContext *> ctcParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<ctcParser::AdditiveExpressionContext>();
}

ctcParser::AdditiveExpressionContext* ctcParser::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<ctcParser::AdditiveExpressionContext>(i);
}


size_t ctcParser::ShiftExpressionContext::getRuleIndex() const {
  return ctcParser::RuleShiftExpression;
}


std::any ctcParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ShiftExpressionContext* ctcParser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, ctcParser::RuleShiftExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    additiveExpression();
    setState(342);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__19

    || _la == ctcParser::T__20) {
      setState(338);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__19

      || _la == ctcParser::T__20)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(339);
      additiveExpression();
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

ctcParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::ShiftExpressionContext *> ctcParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContexts<ctcParser::ShiftExpressionContext>();
}

ctcParser::ShiftExpressionContext* ctcParser::RelationalExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<ctcParser::ShiftExpressionContext>(i);
}


size_t ctcParser::RelationalExpressionContext::getRuleIndex() const {
  return ctcParser::RuleRelationalExpression;
}


std::any ctcParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::RelationalExpressionContext* ctcParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, ctcParser::RuleRelationalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    shiftExpression();
    setState(350);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12583680) != 0)) {
      setState(346);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 12583680) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(347);
      shiftExpression();
      setState(352);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

ctcParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::RelationalExpressionContext *> ctcParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<ctcParser::RelationalExpressionContext>();
}

ctcParser::RelationalExpressionContext* ctcParser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<ctcParser::RelationalExpressionContext>(i);
}


size_t ctcParser::EqualityExpressionContext::getRuleIndex() const {
  return ctcParser::RuleEqualityExpression;
}


std::any ctcParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::EqualityExpressionContext* ctcParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, ctcParser::RuleEqualityExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    relationalExpression();
    setState(358);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__23

    || _la == ctcParser::T__24) {
      setState(354);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__23

      || _la == ctcParser::T__24)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(355);
      relationalExpression();
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

ctcParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::EqualityExpressionContext *> ctcParser::AndExpressionContext::equalityExpression() {
  return getRuleContexts<ctcParser::EqualityExpressionContext>();
}

ctcParser::EqualityExpressionContext* ctcParser::AndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<ctcParser::EqualityExpressionContext>(i);
}


size_t ctcParser::AndExpressionContext::getRuleIndex() const {
  return ctcParser::RuleAndExpression;
}


std::any ctcParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::AndExpressionContext* ctcParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 64, ctcParser::RuleAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    equalityExpression();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(362);
      match(ctcParser::T__9);
      setState(363);
      equalityExpression();
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

ctcParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::AndExpressionContext *> ctcParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<ctcParser::AndExpressionContext>();
}

ctcParser::AndExpressionContext* ctcParser::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<ctcParser::AndExpressionContext>(i);
}


size_t ctcParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return ctcParser::RuleExclusiveOrExpression;
}


std::any ctcParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ExclusiveOrExpressionContext* ctcParser::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, ctcParser::RuleExclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    andExpression();
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__25) {
      setState(370);
      match(ctcParser::T__25);
      setState(371);
      andExpression();
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

ctcParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::ExclusiveOrExpressionContext *> ctcParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<ctcParser::ExclusiveOrExpressionContext>();
}

ctcParser::ExclusiveOrExpressionContext* ctcParser::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<ctcParser::ExclusiveOrExpressionContext>(i);
}


size_t ctcParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return ctcParser::RuleInclusiveOrExpression;
}


std::any ctcParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::InclusiveOrExpressionContext* ctcParser::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 68, ctcParser::RuleInclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    exclusiveOrExpression();
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__26) {
      setState(378);
      match(ctcParser::T__26);
      setState(379);
      exclusiveOrExpression();
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

ctcParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::InclusiveOrExpressionContext *> ctcParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContexts<ctcParser::InclusiveOrExpressionContext>();
}

ctcParser::InclusiveOrExpressionContext* ctcParser::LogicalAndExpressionContext::inclusiveOrExpression(size_t i) {
  return getRuleContext<ctcParser::InclusiveOrExpressionContext>(i);
}


size_t ctcParser::LogicalAndExpressionContext::getRuleIndex() const {
  return ctcParser::RuleLogicalAndExpression;
}


std::any ctcParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::LogicalAndExpressionContext* ctcParser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, ctcParser::RuleLogicalAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    inclusiveOrExpression();
    setState(390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__27) {
      setState(386);
      match(ctcParser::T__27);
      setState(387);
      inclusiveOrExpression();
      setState(392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

ctcParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::LogicalAndExpressionContext *> ctcParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<ctcParser::LogicalAndExpressionContext>();
}

ctcParser::LogicalAndExpressionContext* ctcParser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<ctcParser::LogicalAndExpressionContext>(i);
}


size_t ctcParser::LogicalOrExpressionContext::getRuleIndex() const {
  return ctcParser::RuleLogicalOrExpression;
}


std::any ctcParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::LogicalOrExpressionContext* ctcParser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, ctcParser::RuleLogicalOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    logicalAndExpression();
    setState(398);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__28) {
      setState(394);
      match(ctcParser::T__28);
      setState(395);
      logicalAndExpression();
      setState(400);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_expressionContext ------------------------------------------------------------------

ctcParser::Conditional_expressionContext::Conditional_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::LogicalOrExpressionContext* ctcParser::Conditional_expressionContext::logicalOrExpression() {
  return getRuleContext<ctcParser::LogicalOrExpressionContext>(0);
}

ctcParser::ExpressionContext* ctcParser::Conditional_expressionContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}

ctcParser::Conditional_expressionContext* ctcParser::Conditional_expressionContext::conditional_expression() {
  return getRuleContext<ctcParser::Conditional_expressionContext>(0);
}


size_t ctcParser::Conditional_expressionContext::getRuleIndex() const {
  return ctcParser::RuleConditional_expression;
}


std::any ctcParser::Conditional_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitConditional_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Conditional_expressionContext* ctcParser::conditional_expression() {
  Conditional_expressionContext *_localctx = _tracker.createInstance<Conditional_expressionContext>(_ctx, getState());
  enterRule(_localctx, 74, ctcParser::RuleConditional_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    logicalOrExpression();
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__29) {
      setState(402);
      match(ctcParser::T__29);
      setState(403);
      expression();
      setState(404);
      match(ctcParser::T__30);
      setState(405);
      conditional_expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_literalContext ------------------------------------------------------------------

ctcParser::String_literalContext::String_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::String_literalContext::EncodingPrefix() {
  return getToken(ctcParser::EncodingPrefix, 0);
}

tree::TerminalNode* ctcParser::String_literalContext::SCharSequence() {
  return getToken(ctcParser::SCharSequence, 0);
}


size_t ctcParser::String_literalContext::getRuleIndex() const {
  return ctcParser::RuleString_literal;
}


std::any ctcParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::String_literalContext* ctcParser::string_literal() {
  String_literalContext *_localctx = _tracker.createInstance<String_literalContext>(_ctx, getState());
  enterRule(_localctx, 76, ctcParser::RuleString_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::EncodingPrefix) {
      setState(409);
      match(ctcParser::EncodingPrefix);
    }
    setState(412);
    match(ctcParser::T__31);
    setState(414);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::SCharSequence) {
      setState(413);
      match(ctcParser::SCharSequence);
    }
    setState(416);
    match(ctcParser::T__31);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorContext ------------------------------------------------------------------

ctcParser::Assignment_operatorContext::Assignment_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::Assignment_operatorContext::getRuleIndex() const {
  return ctcParser::RuleAssignment_operator;
}


std::any ctcParser::Assignment_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAssignment_operator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Assignment_operatorContext* ctcParser::assignment_operator() {
  Assignment_operatorContext *_localctx = _tracker.createInstance<Assignment_operatorContext>(_ctx, getState());
  enterRule(_localctx, 78, ctcParser::RuleAssignment_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17583596109824) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_expressionContext ------------------------------------------------------------------

ctcParser::Postfix_expressionContext::Postfix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Primary_expressionContext* ctcParser::Postfix_expressionContext::primary_expression() {
  return getRuleContext<ctcParser::Primary_expressionContext>(0);
}

std::vector<ctcParser::ArgumentExpressionListContext *> ctcParser::Postfix_expressionContext::argumentExpressionList() {
  return getRuleContexts<ctcParser::ArgumentExpressionListContext>();
}

ctcParser::ArgumentExpressionListContext* ctcParser::Postfix_expressionContext::argumentExpressionList(size_t i) {
  return getRuleContext<ctcParser::ArgumentExpressionListContext>(i);
}

std::vector<ctcParser::IdentifierContext *> ctcParser::Postfix_expressionContext::identifier() {
  return getRuleContexts<ctcParser::IdentifierContext>();
}

ctcParser::IdentifierContext* ctcParser::Postfix_expressionContext::identifier(size_t i) {
  return getRuleContext<ctcParser::IdentifierContext>(i);
}


size_t ctcParser::Postfix_expressionContext::getRuleIndex() const {
  return ctcParser::RulePostfix_expression;
}


std::any ctcParser::Postfix_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitPostfix_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Postfix_expressionContext* ctcParser::postfix_expression() {
  Postfix_expressionContext *_localctx = _tracker.createInstance<Postfix_expressionContext>(_ctx, getState());
  enterRule(_localctx, 80, ctcParser::RulePostfix_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    primary_expression();
    setState(431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 263882790666242) != 0)) {
      setState(429);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ctcParser::T__0: {
          setState(421);
          match(ctcParser::T__0);
          setState(422);
          argumentExpressionList();
          setState(423);
          match(ctcParser::T__1);
          break;
        }

        case ctcParser::T__43:
        case ctcParser::T__44: {
          setState(425);
          _la = _input->LA(1);
          if (!(_la == ctcParser::T__43

          || _la == ctcParser::T__44)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(426);
          identifier(0);
          break;
        }

        case ctcParser::T__45: {
          setState(427);
          match(ctcParser::T__45);
          break;
        }

        case ctcParser::T__46: {
          setState(428);
          match(ctcParser::T__46);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(433);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

ctcParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::UnaryOperatorContext::getRuleIndex() const {
  return ctcParser::RuleUnaryOperator;
}


std::any ctcParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::UnaryOperatorContext* ctcParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 82, ctcParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 281474977531008) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cast_expressionContext ------------------------------------------------------------------

ctcParser::Cast_expressionContext::Cast_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Type_specifierContext* ctcParser::Cast_expressionContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}

ctcParser::Cast_expressionContext* ctcParser::Cast_expressionContext::cast_expression() {
  return getRuleContext<ctcParser::Cast_expressionContext>(0);
}

tree::TerminalNode* ctcParser::Cast_expressionContext::Dynamic_cast() {
  return getToken(ctcParser::Dynamic_cast, 0);
}

ctcParser::Unary_expressionContext* ctcParser::Cast_expressionContext::unary_expression() {
  return getRuleContext<ctcParser::Unary_expressionContext>(0);
}

tree::TerminalNode* ctcParser::Cast_expressionContext::Digit_sequence() {
  return getToken(ctcParser::Digit_sequence, 0);
}


size_t ctcParser::Cast_expressionContext::getRuleIndex() const {
  return ctcParser::RuleCast_expression;
}


std::any ctcParser::Cast_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitCast_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Cast_expressionContext* ctcParser::cast_expression() {
  Cast_expressionContext *_localctx = _tracker.createInstance<Cast_expressionContext>(_ctx, getState());
  enterRule(_localctx, 84, ctcParser::RuleCast_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(451);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(436);
      match(ctcParser::T__0);
      setState(437);
      type_specifier();
      setState(438);
      match(ctcParser::T__1);
      setState(439);
      cast_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(441);
      match(ctcParser::Dynamic_cast);
      setState(442);
      match(ctcParser::T__7);
      setState(443);
      type_specifier();
      setState(444);
      match(ctcParser::T__8);
      setState(445);
      match(ctcParser::T__0);
      setState(446);
      cast_expression();
      setState(447);
      match(ctcParser::T__1);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(449);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(450);
      match(ctcParser::Digit_sequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

ctcParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Postfix_expressionContext* ctcParser::Unary_expressionContext::postfix_expression() {
  return getRuleContext<ctcParser::Postfix_expressionContext>(0);
}

ctcParser::UnaryOperatorContext* ctcParser::Unary_expressionContext::unaryOperator() {
  return getRuleContext<ctcParser::UnaryOperatorContext>(0);
}

ctcParser::Cast_expressionContext* ctcParser::Unary_expressionContext::cast_expression() {
  return getRuleContext<ctcParser::Cast_expressionContext>(0);
}

ctcParser::Type_specifierContext* ctcParser::Unary_expressionContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}


size_t ctcParser::Unary_expressionContext::getRuleIndex() const {
  return ctcParser::RuleUnary_expression;
}


std::any ctcParser::Unary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitUnary_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Unary_expressionContext* ctcParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 86, ctcParser::RuleUnary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(456);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(453);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 774056185954304) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(458);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(465);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__0:
      case ctcParser::T__13:
      case ctcParser::T__31:
      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant:
      case ctcParser::EncodingPrefix:
      case ctcParser::Identifier_non_digit: {
        setState(459);
        postfix_expression();
        break;
      }

      case ctcParser::T__6:
      case ctcParser::T__9:
      case ctcParser::T__14:
      case ctcParser::T__17:
      case ctcParser::T__18:
      case ctcParser::T__47: {
        setState(460);
        unaryOperator();
        setState(461);
        cast_expression();
        break;
      }

      case ctcParser::T__48: {
        setState(463);
        match(ctcParser::T__48);
        setState(464);
        type_specifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_expressionContext ------------------------------------------------------------------

ctcParser::Assignment_expressionContext::Assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Conditional_expressionContext* ctcParser::Assignment_expressionContext::conditional_expression() {
  return getRuleContext<ctcParser::Conditional_expressionContext>(0);
}

ctcParser::Unary_expressionContext* ctcParser::Assignment_expressionContext::unary_expression() {
  return getRuleContext<ctcParser::Unary_expressionContext>(0);
}

ctcParser::Assignment_operatorContext* ctcParser::Assignment_expressionContext::assignment_operator() {
  return getRuleContext<ctcParser::Assignment_operatorContext>(0);
}

ctcParser::Assignment_expressionContext* ctcParser::Assignment_expressionContext::assignment_expression() {
  return getRuleContext<ctcParser::Assignment_expressionContext>(0);
}

tree::TerminalNode* ctcParser::Assignment_expressionContext::Digit_sequence() {
  return getToken(ctcParser::Digit_sequence, 0);
}


size_t ctcParser::Assignment_expressionContext::getRuleIndex() const {
  return ctcParser::RuleAssignment_expression;
}


std::any ctcParser::Assignment_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAssignment_expression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Assignment_expressionContext* ctcParser::assignment_expression() {
  Assignment_expressionContext *_localctx = _tracker.createInstance<Assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 88, ctcParser::RuleAssignment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(473);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(467);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(468);
      unary_expression();
      setState(469);
      assignment_operator();
      setState(470);
      assignment_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(472);
      match(ctcParser::Digit_sequence);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ctcParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Assignment_expressionContext *> ctcParser::ExpressionContext::assignment_expression() {
  return getRuleContexts<ctcParser::Assignment_expressionContext>();
}

ctcParser::Assignment_expressionContext* ctcParser::ExpressionContext::assignment_expression(size_t i) {
  return getRuleContext<ctcParser::Assignment_expressionContext>(i);
}


size_t ctcParser::ExpressionContext::getRuleIndex() const {
  return ctcParser::RuleExpression;
}


std::any ctcParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ExpressionContext* ctcParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, ctcParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    assignment_expression();
    setState(480);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__5) {
      setState(476);
      match(ctcParser::T__5);
      setState(477);
      assignment_expression();
      setState(482);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ctcParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::IdentifierContext* ctcParser::TypeContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
}

tree::TerminalNode* ctcParser::TypeContext::Void() {
  return getToken(ctcParser::Void, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Auto() {
  return getToken(ctcParser::Auto, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Char() {
  return getToken(ctcParser::Char, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Bool() {
  return getToken(ctcParser::Bool, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Short() {
  return getToken(ctcParser::Short, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Int() {
  return getToken(ctcParser::Int, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Long() {
  return getToken(ctcParser::Long, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Float() {
  return getToken(ctcParser::Float, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Double() {
  return getToken(ctcParser::Double, 0);
}

tree::TerminalNode* ctcParser::TypeContext::Double128() {
  return getToken(ctcParser::Double128, 0);
}


size_t ctcParser::TypeContext::getRuleIndex() const {
  return ctcParser::RuleType;
}


std::any ctcParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::TypeContext* ctcParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 92, ctcParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(483);
        identifier(0);
        break;
      }

      case ctcParser::Void: {
        enterOuterAlt(_localctx, 2);
        setState(484);
        match(ctcParser::Void);
        break;
      }

      case ctcParser::Auto: {
        enterOuterAlt(_localctx, 3);
        setState(485);
        match(ctcParser::Auto);
        break;
      }

      case ctcParser::Char: {
        enterOuterAlt(_localctx, 4);
        setState(486);
        match(ctcParser::Char);
        break;
      }

      case ctcParser::Bool: {
        enterOuterAlt(_localctx, 5);
        setState(487);
        match(ctcParser::Bool);
        break;
      }

      case ctcParser::Short: {
        enterOuterAlt(_localctx, 6);
        setState(488);
        match(ctcParser::Short);
        break;
      }

      case ctcParser::Int: {
        enterOuterAlt(_localctx, 7);
        setState(489);
        match(ctcParser::Int);
        break;
      }

      case ctcParser::Long: {
        enterOuterAlt(_localctx, 8);
        setState(490);
        match(ctcParser::Long);
        break;
      }

      case ctcParser::Float: {
        enterOuterAlt(_localctx, 9);
        setState(491);
        match(ctcParser::Float);
        break;
      }

      case ctcParser::Double: {
        enterOuterAlt(_localctx, 10);
        setState(492);
        match(ctcParser::Double);
        break;
      }

      case ctcParser::Double128: {
        enterOuterAlt(_localctx, 11);
        setState(493);
        match(ctcParser::Double128);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Identifier_specifierContext ------------------------------------------------------------------

ctcParser::Identifier_specifierContext::Identifier_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::Identifier_specifierContext::getRuleIndex() const {
  return ctcParser::RuleIdentifier_specifier;
}


std::any ctcParser::Identifier_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitIdentifier_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Identifier_specifierContext* ctcParser::identifier_specifier() {
  Identifier_specifierContext *_localctx = _tracker.createInstance<Identifier_specifierContext>(_ctx, getState());
  enterRule(_localctx, 94, ctcParser::RuleIdentifier_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(ctcParser::T__14);
    setState(500);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(497);
        match(ctcParser::T__14); 
      }
      setState(502);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unsigned_specifierContext ------------------------------------------------------------------

ctcParser::Unsigned_specifierContext::Unsigned_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Unsigned_specifierContext::Unsigned() {
  return getToken(ctcParser::Unsigned, 0);
}


size_t ctcParser::Unsigned_specifierContext::getRuleIndex() const {
  return ctcParser::RuleUnsigned_specifier;
}


std::any ctcParser::Unsigned_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitUnsigned_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Unsigned_specifierContext* ctcParser::unsigned_specifier() {
  Unsigned_specifierContext *_localctx = _tracker.createInstance<Unsigned_specifierContext>(_ctx, getState());
  enterRule(_localctx, 96, ctcParser::RuleUnsigned_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(ctcParser::Unsigned);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

ctcParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::TypeContext* ctcParser::Type_specifierContext::type() {
  return getRuleContext<ctcParser::TypeContext>(0);
}

ctcParser::Unsigned_specifierContext* ctcParser::Type_specifierContext::unsigned_specifier() {
  return getRuleContext<ctcParser::Unsigned_specifierContext>(0);
}

tree::TerminalNode* ctcParser::Type_specifierContext::Const() {
  return getToken(ctcParser::Const, 0);
}

tree::TerminalNode* ctcParser::Type_specifierContext::Volatile() {
  return getToken(ctcParser::Volatile, 0);
}

ctcParser::Identifier_specifierContext* ctcParser::Type_specifierContext::identifier_specifier() {
  return getRuleContext<ctcParser::Identifier_specifierContext>(0);
}


size_t ctcParser::Type_specifierContext::getRuleIndex() const {
  return ctcParser::RuleType_specifier;
}


std::any ctcParser::Type_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitType_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Type_specifierContext* ctcParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 98, ctcParser::RuleType_specifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Unsigned) {
      setState(505);
      unsigned_specifier();
    }
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Const) {
      setState(508);
      match(ctcParser::Const);
    }
    setState(512);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Volatile) {
      setState(511);
      match(ctcParser::Volatile);
    }
    setState(514);
    type();
    setState(516);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(515);
      identifier_specifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ctcParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ctcParser::IdentifierContext::Identifier_non_digit() {
  return getTokens(ctcParser::Identifier_non_digit);
}

tree::TerminalNode* ctcParser::IdentifierContext::Identifier_non_digit(size_t i) {
  return getToken(ctcParser::Identifier_non_digit, i);
}

std::vector<tree::TerminalNode *> ctcParser::IdentifierContext::Digit() {
  return getTokens(ctcParser::Digit);
}

tree::TerminalNode* ctcParser::IdentifierContext::Digit(size_t i) {
  return getToken(ctcParser::Digit, i);
}

std::vector<ctcParser::IdentifierContext *> ctcParser::IdentifierContext::identifier() {
  return getRuleContexts<ctcParser::IdentifierContext>();
}

ctcParser::IdentifierContext* ctcParser::IdentifierContext::identifier(size_t i) {
  return getRuleContext<ctcParser::IdentifierContext>(i);
}


size_t ctcParser::IdentifierContext::getRuleIndex() const {
  return ctcParser::RuleIdentifier;
}


std::any ctcParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}


ctcParser::IdentifierContext* ctcParser::identifier() {
   return identifier(0);
}

ctcParser::IdentifierContext* ctcParser::identifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ctcParser::IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, parentState);
  ctcParser::IdentifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, ctcParser::RuleIdentifier, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(519);
    match(ctcParser::Identifier_non_digit);
    setState(523);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(520);
        _la = _input->LA(1);
        if (!(_la == ctcParser::Identifier_non_digit

        || _la == ctcParser::Digit)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(525);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    _ctx->stop = _input->LT(-1);
    setState(531);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifier);
        setState(526);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(527);
        match(ctcParser::T__49);
        setState(528);
        identifier(2); 
      }
      setState(533);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

ctcParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::DeclaratorContext* ctcParser::Var_declContext::declarator() {
  return getRuleContext<ctcParser::DeclaratorContext>(0);
}

ctcParser::Storage_specifierContext* ctcParser::Var_declContext::storage_specifier() {
  return getRuleContext<ctcParser::Storage_specifierContext>(0);
}

ctcParser::Var_decl_specifierContext* ctcParser::Var_declContext::var_decl_specifier() {
  return getRuleContext<ctcParser::Var_decl_specifierContext>(0);
}


size_t ctcParser::Var_declContext::getRuleIndex() const {
  return ctcParser::RuleVar_decl;
}


std::any ctcParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Var_declContext* ctcParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 102, ctcParser::RuleVar_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(534);
      storage_specifier();
    }
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Constexpr

    || _la == ctcParser::Consteval) {
      setState(537);
      var_decl_specifier();
    }
    setState(540);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

ctcParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Type_specifierContext *> ctcParser::DeclaratorContext::type_specifier() {
  return getRuleContexts<ctcParser::Type_specifierContext>();
}

ctcParser::Type_specifierContext* ctcParser::DeclaratorContext::type_specifier(size_t i) {
  return getRuleContext<ctcParser::Type_specifierContext>(i);
}

std::vector<ctcParser::IdentifierContext *> ctcParser::DeclaratorContext::identifier() {
  return getRuleContexts<ctcParser::IdentifierContext>();
}

ctcParser::IdentifierContext* ctcParser::DeclaratorContext::identifier(size_t i) {
  return getRuleContext<ctcParser::IdentifierContext>(i);
}

std::vector<ctcParser::Assignment_operatorContext *> ctcParser::DeclaratorContext::assignment_operator() {
  return getRuleContexts<ctcParser::Assignment_operatorContext>();
}

ctcParser::Assignment_operatorContext* ctcParser::DeclaratorContext::assignment_operator(size_t i) {
  return getRuleContext<ctcParser::Assignment_operatorContext>(i);
}

std::vector<ctcParser::Primary_expressionContext *> ctcParser::DeclaratorContext::primary_expression() {
  return getRuleContexts<ctcParser::Primary_expressionContext>();
}

ctcParser::Primary_expressionContext* ctcParser::DeclaratorContext::primary_expression(size_t i) {
  return getRuleContext<ctcParser::Primary_expressionContext>(i);
}


size_t ctcParser::DeclaratorContext::getRuleIndex() const {
  return ctcParser::RuleDeclarator;
}


std::any ctcParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DeclaratorContext* ctcParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 104, ctcParser::RuleDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    type_specifier();
    setState(543);
    identifier(0);
    setState(547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17583596109824) != 0)) {
      setState(544);
      assignment_operator();
      setState(545);
      primary_expression();
    }

    setState(549);
    match(ctcParser::T__5);
    setState(550);
    type_specifier();
    setState(551);
    identifier(0);
    setState(555);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17583596109824) != 0)) {
      setState(552);
      assignment_operator();
      setState(553);
      primary_expression();
    }
    setState(557);
    match(ctcParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ctcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 50: return identifierSempred(antlrcpp::downCast<IdentifierContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ctcParser::identifierSempred(IdentifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void ctcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ctcParserInitialize();
#else
  ::antlr4::internal::call_once(ctcParserOnceFlag, ctcParserInitialize);
#endif
}
