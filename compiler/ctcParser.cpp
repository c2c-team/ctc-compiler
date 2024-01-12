
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
      "assignment_expression", "expression", "type", "cv_specifier", "identifier_specifier", 
      "unsigned_specifier", "type_specifier", "identifier", "var_decl", 
      "declarator"
    },
    std::vector<std::string>{
      "", "'public'", "'private'", "'('", "')'", "';'", "'interface'", "'{'", 
      "'}'", "'class'", "','", "'enum'", "'using'", "'namespace'", "'inline'", 
      "'noexcept'", "'use'", "'!'", "'compile_if'", "'<'", "'>'", "'static'", 
      "'extern'", "'constexpr'", "'consteval'", "'&'", "'this'", "'['", 
      "']'", "'fun'", "'*'", "'/'", "'%'", "'+'", "'-'", "'<<'", "'>>'", 
      "'<='", "'>='", "'=='", "'!='", "'^'", "'|'", "'&&'", "'||'", "'\\u003F'", 
      "':'", "'\"'", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", 
      "'>>='", "'&='", "'^='", "'|='", "'.'", "'->'", "'++'", "'--'", "'~'", 
      "'dynamic_cast'", "'sizeof'", "'void'", "'auto'", "'char'", "'bool'", 
      "'short'", "'int'", "'long'", "'float'", "'double'", "'double128'", 
      "'const'", "'volatile'", "'**'", "'unsigned'", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "DigitSequence", 
      "Digit_sequence", "IntegerConstant", "FloatingConstant", "CharacterConstant", 
      "EncodingPrefix", "SCharSequence", "Identifier_non_digit", "Digit"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,89,556,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,1,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,5,1,120,8,1,10,1,12,1,123,9,1,1,2,1,2,1,3,1,3,3,3,129,
  	8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,137,8,3,10,3,12,3,140,9,3,1,3,1,3,1,4,
  	5,4,145,8,4,10,4,12,4,148,9,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,156,8,5,1,6,
  	1,6,1,7,1,7,1,7,5,7,163,8,7,10,7,12,7,166,9,7,1,8,1,8,3,8,170,8,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,177,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,187,8,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,199,8,10,1,11,
  	1,11,1,12,3,12,204,8,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,212,8,12,10,
  	12,12,12,215,9,12,1,12,1,12,1,12,1,12,1,12,3,12,222,8,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,5,12,230,8,12,10,12,12,12,233,9,12,1,12,1,12,3,12,237,
  	8,12,1,13,1,13,3,13,241,8,13,1,14,1,14,1,14,5,14,246,8,14,10,14,12,14,
  	249,9,14,1,15,1,15,1,15,5,15,254,8,15,10,15,12,15,257,9,15,1,16,1,16,
  	1,16,1,16,1,17,1,17,1,17,3,17,266,8,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	3,22,288,8,22,1,23,1,23,1,23,1,23,5,23,294,8,23,10,23,12,23,297,9,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,26,
  	1,26,4,26,314,8,26,11,26,12,26,315,1,26,1,26,1,26,1,26,3,26,322,8,26,
  	1,27,1,27,1,27,5,27,327,8,27,10,27,12,27,330,9,27,1,28,1,28,1,28,5,28,
  	335,8,28,10,28,12,28,338,9,28,1,29,1,29,1,29,5,29,343,8,29,10,29,12,29,
  	346,9,29,1,30,1,30,1,30,5,30,351,8,30,10,30,12,30,354,9,30,1,31,1,31,
  	1,31,5,31,359,8,31,10,31,12,31,362,9,31,1,32,1,32,1,32,5,32,367,8,32,
  	10,32,12,32,370,9,32,1,33,1,33,1,33,5,33,375,8,33,10,33,12,33,378,9,33,
  	1,34,1,34,1,34,5,34,383,8,34,10,34,12,34,386,9,34,1,35,1,35,1,35,5,35,
  	391,8,35,10,35,12,35,394,9,35,1,36,1,36,1,36,5,36,399,8,36,10,36,12,36,
  	402,9,36,1,37,1,37,1,37,1,37,1,37,1,37,3,37,410,8,37,1,38,3,38,413,8,
  	38,1,38,1,38,3,38,417,8,38,1,38,1,38,1,39,1,39,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,40,1,40,1,40,5,40,432,8,40,10,40,12,40,435,9,40,1,41,1,41,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,
  	42,3,42,454,8,42,1,43,5,43,457,8,43,10,43,12,43,460,9,43,1,43,1,43,1,
  	43,1,43,1,43,1,43,3,43,468,8,43,1,44,1,44,1,44,1,44,1,44,1,44,3,44,476,
  	8,44,1,45,1,45,1,45,5,45,481,8,45,10,45,12,45,484,9,45,1,46,1,46,1,46,
  	1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,3,46,497,8,46,1,47,1,47,1,48,
  	1,48,1,49,1,49,1,50,3,50,506,8,50,1,50,3,50,509,8,50,1,50,1,50,3,50,513,
  	8,50,1,51,1,51,1,51,5,51,518,8,51,10,51,12,51,521,9,51,1,51,1,51,1,51,
  	5,51,526,8,51,10,51,12,51,529,9,51,1,52,3,52,532,8,52,1,52,3,52,535,8,
  	52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,3,53,544,8,53,1,53,1,53,1,53,1,
  	53,1,53,1,53,3,53,552,8,53,1,53,1,53,1,53,0,1,102,54,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,
  	60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,
  	106,0,17,1,0,1,2,1,0,14,15,1,0,21,22,1,0,23,24,1,0,83,85,1,0,30,32,1,
  	0,33,34,1,0,35,36,2,0,19,20,37,38,1,0,39,40,1,0,48,58,1,0,59,60,5,0,17,
  	17,25,25,30,30,33,34,63,63,2,0,61,62,65,65,1,0,76,77,3,0,25,25,30,30,
  	78,78,1,0,88,89,580,0,108,1,0,0,0,2,121,1,0,0,0,4,124,1,0,0,0,6,126,1,
  	0,0,0,8,146,1,0,0,0,10,149,1,0,0,0,12,157,1,0,0,0,14,159,1,0,0,0,16,167,
  	1,0,0,0,18,178,1,0,0,0,20,198,1,0,0,0,22,200,1,0,0,0,24,236,1,0,0,0,26,
  	238,1,0,0,0,28,242,1,0,0,0,30,250,1,0,0,0,32,258,1,0,0,0,34,265,1,0,0,
  	0,36,267,1,0,0,0,38,275,1,0,0,0,40,277,1,0,0,0,42,279,1,0,0,0,44,287,
  	1,0,0,0,46,289,1,0,0,0,48,300,1,0,0,0,50,307,1,0,0,0,52,321,1,0,0,0,54,
  	323,1,0,0,0,56,331,1,0,0,0,58,339,1,0,0,0,60,347,1,0,0,0,62,355,1,0,0,
  	0,64,363,1,0,0,0,66,371,1,0,0,0,68,379,1,0,0,0,70,387,1,0,0,0,72,395,
  	1,0,0,0,74,403,1,0,0,0,76,412,1,0,0,0,78,420,1,0,0,0,80,422,1,0,0,0,82,
  	436,1,0,0,0,84,453,1,0,0,0,86,458,1,0,0,0,88,475,1,0,0,0,90,477,1,0,0,
  	0,92,496,1,0,0,0,94,498,1,0,0,0,96,500,1,0,0,0,98,502,1,0,0,0,100,505,
  	1,0,0,0,102,514,1,0,0,0,104,531,1,0,0,0,106,538,1,0,0,0,108,109,3,2,1,
  	0,109,110,5,0,0,1,110,1,1,0,0,0,111,120,3,10,5,0,112,120,3,16,8,0,113,
  	120,3,18,9,0,114,120,3,20,10,0,115,120,3,36,18,0,116,120,3,104,52,0,117,
  	120,3,24,12,0,118,120,3,32,16,0,119,111,1,0,0,0,119,112,1,0,0,0,119,113,
  	1,0,0,0,119,114,1,0,0,0,119,115,1,0,0,0,119,116,1,0,0,0,119,117,1,0,0,
  	0,119,118,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,
  	3,1,0,0,0,123,121,1,0,0,0,124,125,7,0,0,0,125,5,1,0,0,0,126,128,3,4,2,
  	0,127,129,3,38,19,0,128,127,1,0,0,0,128,129,1,0,0,0,129,130,1,0,0,0,130,
  	131,3,100,50,0,131,132,3,102,51,0,132,133,5,3,0,0,133,134,3,28,14,0,134,
  	138,5,4,0,0,135,137,3,22,11,0,136,135,1,0,0,0,137,140,1,0,0,0,138,136,
  	1,0,0,0,138,139,1,0,0,0,139,141,1,0,0,0,140,138,1,0,0,0,141,142,5,5,0,
  	0,142,7,1,0,0,0,143,145,3,6,3,0,144,143,1,0,0,0,145,148,1,0,0,0,146,144,
  	1,0,0,0,146,147,1,0,0,0,147,9,1,0,0,0,148,146,1,0,0,0,149,150,5,6,0,0,
  	150,151,3,102,51,0,151,152,5,7,0,0,152,153,3,8,4,0,153,155,5,8,0,0,154,
  	156,5,5,0,0,155,154,1,0,0,0,155,156,1,0,0,0,156,11,1,0,0,0,157,158,5,
  	9,0,0,158,13,1,0,0,0,159,164,3,102,51,0,160,161,5,10,0,0,161,163,3,102,
  	51,0,162,160,1,0,0,0,163,166,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,
  	165,15,1,0,0,0,166,164,1,0,0,0,167,169,5,11,0,0,168,170,3,12,6,0,169,
  	168,1,0,0,0,169,170,1,0,0,0,170,171,1,0,0,0,171,172,3,102,51,0,172,173,
  	5,7,0,0,173,174,3,14,7,0,174,176,5,8,0,0,175,177,5,5,0,0,176,175,1,0,
  	0,0,176,177,1,0,0,0,177,17,1,0,0,0,178,186,5,12,0,0,179,180,3,102,51,
  	0,180,181,5,5,0,0,181,187,1,0,0,0,182,183,5,13,0,0,183,184,3,102,51,0,
  	184,185,5,5,0,0,185,187,1,0,0,0,186,179,1,0,0,0,186,182,1,0,0,0,187,19,
  	1,0,0,0,188,189,5,13,0,0,189,190,3,102,51,0,190,191,5,7,0,0,191,192,3,
  	2,1,0,192,193,5,8,0,0,193,199,1,0,0,0,194,195,5,13,0,0,195,196,3,102,
  	51,0,196,197,5,5,0,0,197,199,1,0,0,0,198,188,1,0,0,0,198,194,1,0,0,0,
  	199,21,1,0,0,0,200,201,7,1,0,0,201,23,1,0,0,0,202,204,3,38,19,0,203,202,
  	1,0,0,0,203,204,1,0,0,0,204,205,1,0,0,0,205,206,3,100,50,0,206,207,3,
  	102,51,0,207,208,5,3,0,0,208,209,3,28,14,0,209,213,5,4,0,0,210,212,3,
  	22,11,0,211,210,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,
  	0,214,216,1,0,0,0,215,213,1,0,0,0,216,217,5,7,0,0,217,218,3,2,1,0,218,
  	219,5,8,0,0,219,237,1,0,0,0,220,222,3,38,19,0,221,220,1,0,0,0,221,222,
  	1,0,0,0,222,223,1,0,0,0,223,224,3,100,50,0,224,225,3,102,51,0,225,226,
  	5,3,0,0,226,227,3,28,14,0,227,231,5,4,0,0,228,230,3,22,11,0,229,228,1,
  	0,0,0,230,233,1,0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,234,1,0,0,0,
  	233,231,1,0,0,0,234,235,5,5,0,0,235,237,1,0,0,0,236,203,1,0,0,0,236,221,
  	1,0,0,0,237,25,1,0,0,0,238,240,3,92,46,0,239,241,3,102,51,0,240,239,1,
  	0,0,0,240,241,1,0,0,0,241,27,1,0,0,0,242,247,3,26,13,0,243,244,5,10,0,
  	0,244,246,3,26,13,0,245,243,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,
  	248,1,0,0,0,248,29,1,0,0,0,249,247,1,0,0,0,250,255,3,88,44,0,251,252,
  	5,10,0,0,252,254,3,88,44,0,253,251,1,0,0,0,254,257,1,0,0,0,255,253,1,
  	0,0,0,255,256,1,0,0,0,256,31,1,0,0,0,257,255,1,0,0,0,258,259,5,16,0,0,
  	259,260,3,102,51,0,260,261,5,5,0,0,261,33,1,0,0,0,262,266,3,102,51,0,
  	263,264,5,17,0,0,264,266,3,102,51,0,265,262,1,0,0,0,265,263,1,0,0,0,266,
  	35,1,0,0,0,267,268,5,18,0,0,268,269,5,19,0,0,269,270,3,34,17,0,270,271,
  	5,20,0,0,271,272,5,7,0,0,272,273,3,2,1,0,273,274,5,8,0,0,274,37,1,0,0,
  	0,275,276,7,2,0,0,276,39,1,0,0,0,277,278,7,3,0,0,278,41,1,0,0,0,279,280,
  	5,7,0,0,280,281,3,2,1,0,281,282,5,8,0,0,282,43,1,0,0,0,283,284,5,25,0,
  	0,284,288,3,102,51,0,285,288,3,102,51,0,286,288,5,26,0,0,287,283,1,0,
  	0,0,287,285,1,0,0,0,287,286,1,0,0,0,288,45,1,0,0,0,289,290,5,27,0,0,290,
  	295,3,44,22,0,291,292,5,10,0,0,292,294,3,44,22,0,293,291,1,0,0,0,294,
  	297,1,0,0,0,295,293,1,0,0,0,295,296,1,0,0,0,296,298,1,0,0,0,297,295,1,
  	0,0,0,298,299,5,28,0,0,299,47,1,0,0,0,300,301,5,29,0,0,301,302,3,46,23,
  	0,302,303,5,3,0,0,303,304,3,28,14,0,304,305,5,4,0,0,305,306,3,42,21,0,
  	306,49,1,0,0,0,307,308,7,4,0,0,308,51,1,0,0,0,309,322,3,102,51,0,310,
  	322,3,50,25,0,311,322,3,48,24,0,312,314,3,76,38,0,313,312,1,0,0,0,314,
  	315,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,322,1,0,0,0,317,318,5,
  	3,0,0,318,319,3,90,45,0,319,320,5,4,0,0,320,322,1,0,0,0,321,309,1,0,0,
  	0,321,310,1,0,0,0,321,311,1,0,0,0,321,313,1,0,0,0,321,317,1,0,0,0,322,
  	53,1,0,0,0,323,328,3,84,42,0,324,325,7,5,0,0,325,327,3,84,42,0,326,324,
  	1,0,0,0,327,330,1,0,0,0,328,326,1,0,0,0,328,329,1,0,0,0,329,55,1,0,0,
  	0,330,328,1,0,0,0,331,336,3,54,27,0,332,333,7,6,0,0,333,335,3,54,27,0,
  	334,332,1,0,0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,337,1,0,0,0,337,57,
  	1,0,0,0,338,336,1,0,0,0,339,344,3,56,28,0,340,341,7,7,0,0,341,343,3,56,
  	28,0,342,340,1,0,0,0,343,346,1,0,0,0,344,342,1,0,0,0,344,345,1,0,0,0,
  	345,59,1,0,0,0,346,344,1,0,0,0,347,352,3,58,29,0,348,349,7,8,0,0,349,
  	351,3,58,29,0,350,348,1,0,0,0,351,354,1,0,0,0,352,350,1,0,0,0,352,353,
  	1,0,0,0,353,61,1,0,0,0,354,352,1,0,0,0,355,360,3,60,30,0,356,357,7,9,
  	0,0,357,359,3,60,30,0,358,356,1,0,0,0,359,362,1,0,0,0,360,358,1,0,0,0,
  	360,361,1,0,0,0,361,63,1,0,0,0,362,360,1,0,0,0,363,368,3,62,31,0,364,
  	365,5,25,0,0,365,367,3,62,31,0,366,364,1,0,0,0,367,370,1,0,0,0,368,366,
  	1,0,0,0,368,369,1,0,0,0,369,65,1,0,0,0,370,368,1,0,0,0,371,376,3,64,32,
  	0,372,373,5,41,0,0,373,375,3,64,32,0,374,372,1,0,0,0,375,378,1,0,0,0,
  	376,374,1,0,0,0,376,377,1,0,0,0,377,67,1,0,0,0,378,376,1,0,0,0,379,384,
  	3,66,33,0,380,381,5,42,0,0,381,383,3,66,33,0,382,380,1,0,0,0,383,386,
  	1,0,0,0,384,382,1,0,0,0,384,385,1,0,0,0,385,69,1,0,0,0,386,384,1,0,0,
  	0,387,392,3,68,34,0,388,389,5,43,0,0,389,391,3,68,34,0,390,388,1,0,0,
  	0,391,394,1,0,0,0,392,390,1,0,0,0,392,393,1,0,0,0,393,71,1,0,0,0,394,
  	392,1,0,0,0,395,400,3,70,35,0,396,397,5,44,0,0,397,399,3,70,35,0,398,
  	396,1,0,0,0,399,402,1,0,0,0,400,398,1,0,0,0,400,401,1,0,0,0,401,73,1,
  	0,0,0,402,400,1,0,0,0,403,409,3,72,36,0,404,405,5,45,0,0,405,406,3,90,
  	45,0,406,407,5,46,0,0,407,408,3,74,37,0,408,410,1,0,0,0,409,404,1,0,0,
  	0,409,410,1,0,0,0,410,75,1,0,0,0,411,413,5,86,0,0,412,411,1,0,0,0,412,
  	413,1,0,0,0,413,414,1,0,0,0,414,416,5,47,0,0,415,417,5,87,0,0,416,415,
  	1,0,0,0,416,417,1,0,0,0,417,418,1,0,0,0,418,419,5,47,0,0,419,77,1,0,0,
  	0,420,421,7,10,0,0,421,79,1,0,0,0,422,433,3,52,26,0,423,424,5,3,0,0,424,
  	425,3,30,15,0,425,426,5,4,0,0,426,432,1,0,0,0,427,428,7,11,0,0,428,432,
  	3,102,51,0,429,432,5,61,0,0,430,432,5,62,0,0,431,423,1,0,0,0,431,427,
  	1,0,0,0,431,429,1,0,0,0,431,430,1,0,0,0,432,435,1,0,0,0,433,431,1,0,0,
  	0,433,434,1,0,0,0,434,81,1,0,0,0,435,433,1,0,0,0,436,437,7,12,0,0,437,
  	83,1,0,0,0,438,439,5,3,0,0,439,440,3,100,50,0,440,441,5,4,0,0,441,442,
  	3,84,42,0,442,454,1,0,0,0,443,444,5,64,0,0,444,445,5,19,0,0,445,446,3,
  	100,50,0,446,447,5,20,0,0,447,448,5,3,0,0,448,449,3,84,42,0,449,450,5,
  	4,0,0,450,454,1,0,0,0,451,454,3,86,43,0,452,454,5,82,0,0,453,438,1,0,
  	0,0,453,443,1,0,0,0,453,451,1,0,0,0,453,452,1,0,0,0,454,85,1,0,0,0,455,
  	457,7,13,0,0,456,455,1,0,0,0,457,460,1,0,0,0,458,456,1,0,0,0,458,459,
  	1,0,0,0,459,467,1,0,0,0,460,458,1,0,0,0,461,468,3,80,40,0,462,463,3,82,
  	41,0,463,464,3,84,42,0,464,468,1,0,0,0,465,466,5,65,0,0,466,468,3,100,
  	50,0,467,461,1,0,0,0,467,462,1,0,0,0,467,465,1,0,0,0,468,87,1,0,0,0,469,
  	476,3,74,37,0,470,471,3,86,43,0,471,472,3,78,39,0,472,473,3,88,44,0,473,
  	476,1,0,0,0,474,476,5,82,0,0,475,469,1,0,0,0,475,470,1,0,0,0,475,474,
  	1,0,0,0,476,89,1,0,0,0,477,482,3,88,44,0,478,479,5,10,0,0,479,481,3,88,
  	44,0,480,478,1,0,0,0,481,484,1,0,0,0,482,480,1,0,0,0,482,483,1,0,0,0,
  	483,91,1,0,0,0,484,482,1,0,0,0,485,497,3,102,51,0,486,497,5,66,0,0,487,
  	497,5,67,0,0,488,497,5,68,0,0,489,497,5,69,0,0,490,497,5,70,0,0,491,497,
  	5,71,0,0,492,497,5,72,0,0,493,497,5,73,0,0,494,497,5,74,0,0,495,497,5,
  	75,0,0,496,485,1,0,0,0,496,486,1,0,0,0,496,487,1,0,0,0,496,488,1,0,0,
  	0,496,489,1,0,0,0,496,490,1,0,0,0,496,491,1,0,0,0,496,492,1,0,0,0,496,
  	493,1,0,0,0,496,494,1,0,0,0,496,495,1,0,0,0,497,93,1,0,0,0,498,499,7,
  	14,0,0,499,95,1,0,0,0,500,501,7,15,0,0,501,97,1,0,0,0,502,503,5,79,0,
  	0,503,99,1,0,0,0,504,506,3,98,49,0,505,504,1,0,0,0,505,506,1,0,0,0,506,
  	508,1,0,0,0,507,509,3,94,47,0,508,507,1,0,0,0,508,509,1,0,0,0,509,510,
  	1,0,0,0,510,512,3,92,46,0,511,513,3,96,48,0,512,511,1,0,0,0,512,513,1,
  	0,0,0,513,101,1,0,0,0,514,515,6,51,-1,0,515,519,5,88,0,0,516,518,7,16,
  	0,0,517,516,1,0,0,0,518,521,1,0,0,0,519,517,1,0,0,0,519,520,1,0,0,0,520,
  	527,1,0,0,0,521,519,1,0,0,0,522,523,10,1,0,0,523,524,5,80,0,0,524,526,
  	3,102,51,2,525,522,1,0,0,0,526,529,1,0,0,0,527,525,1,0,0,0,527,528,1,
  	0,0,0,528,103,1,0,0,0,529,527,1,0,0,0,530,532,3,38,19,0,531,530,1,0,0,
  	0,531,532,1,0,0,0,532,534,1,0,0,0,533,535,3,40,20,0,534,533,1,0,0,0,534,
  	535,1,0,0,0,535,536,1,0,0,0,536,537,3,106,53,0,537,105,1,0,0,0,538,539,
  	3,100,50,0,539,543,3,102,51,0,540,541,3,78,39,0,541,542,3,52,26,0,542,
  	544,1,0,0,0,543,540,1,0,0,0,543,544,1,0,0,0,544,545,1,0,0,0,545,546,5,
  	10,0,0,546,547,3,100,50,0,547,551,3,102,51,0,548,549,3,78,39,0,549,550,
  	3,52,26,0,550,552,1,0,0,0,551,548,1,0,0,0,551,552,1,0,0,0,552,553,1,0,
  	0,0,553,554,5,5,0,0,554,107,1,0,0,0,54,119,121,128,138,146,155,164,169,
  	176,186,198,203,213,221,231,236,240,247,255,265,287,295,315,321,328,336,
  	344,352,360,368,376,384,392,400,409,412,416,431,433,453,458,467,475,482,
  	496,505,508,512,519,527,531,534,543,551
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
    setState(108);
    statement();
    setState(109);
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
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31799360) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 4206591) != 0)) {
      setState(119);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(111);
        interface_decl();
        break;
      }

      case 2: {
        setState(112);
        enum_decl();
        break;
      }

      case 3: {
        setState(113);
        using_decl();
        break;
      }

      case 4: {
        setState(114);
        namespace_decl();
        break;
      }

      case 5: {
        setState(115);
        cctp_decl();
        break;
      }

      case 6: {
        setState(116);
        var_decl();
        break;
      }

      case 7: {
        setState(117);
        fn_decl();
        break;
      }

      case 8: {
        setState(118);
        use_decl();
        break;
      }

      default:
        break;
      }
      setState(123);
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
    setState(124);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__0

    || _la == ctcParser::T__1)) {
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
    setState(126);
    access_modifier();
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__20

    || _la == ctcParser::T__21) {
      setState(127);
      storage_specifier();
    }
    setState(130);
    type_specifier();
    setState(131);
    identifier(0);
    setState(132);
    match(ctcParser::T__2);
    setState(133);
    type_argument_list();
    setState(134);
    match(ctcParser::T__3);
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__13

    || _la == ctcParser::T__14) {
      setState(135);
      fn_specifier();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
    match(ctcParser::T__4);
   
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
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__0

    || _la == ctcParser::T__1) {
      setState(143);
      interface_element();
      setState(148);
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
    setState(149);
    match(ctcParser::T__5);
    setState(150);
    identifier(0);
    setState(151);
    match(ctcParser::T__6);
    setState(152);
    interface_body();
    setState(153);
    match(ctcParser::T__7);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__4) {
      setState(154);
      match(ctcParser::T__4);
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
    setState(157);
    match(ctcParser::T__8);
   
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
    setState(159);
    identifier(0);
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(160);
      match(ctcParser::T__9);
      setState(161);
      identifier(0);
      setState(166);
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
    setState(167);
    match(ctcParser::T__10);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__8) {
      setState(168);
      enum_modifier();
    }
    setState(171);
    identifier(0);
    setState(172);
    match(ctcParser::T__6);
    setState(173);
    enum_body();
    setState(174);
    match(ctcParser::T__7);
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__4) {
      setState(175);
      match(ctcParser::T__4);
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

ctcParser::IdentifierContext* ctcParser::Using_declContext::identifier() {
  return getRuleContext<ctcParser::IdentifierContext>(0);
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
    setState(178);
    match(ctcParser::T__11);
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        setState(179);
        identifier(0);
        setState(180);
        match(ctcParser::T__4);
        break;
      }

      case ctcParser::T__12: {
        setState(182);
        match(ctcParser::T__12);
        setState(183);
        identifier(0);
        setState(184);
        match(ctcParser::T__4);
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
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(188);
      match(ctcParser::T__12);
      setState(189);
      identifier(0);
      setState(190);
      match(ctcParser::T__6);
      setState(191);
      statement();
      setState(192);
      match(ctcParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      match(ctcParser::T__12);
      setState(195);
      identifier(0);
      setState(196);
      match(ctcParser::T__4);
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
    setState(200);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__13

    || _la == ctcParser::T__14)) {
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
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::T__20

      || _la == ctcParser::T__21) {
        setState(202);
        storage_specifier();
      }
      setState(205);
      type_specifier();
      setState(206);
      identifier(0);
      setState(207);
      match(ctcParser::T__2);
      setState(208);
      type_argument_list();
      setState(209);
      match(ctcParser::T__3);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::T__13

      || _la == ctcParser::T__14) {
        setState(210);
        fn_specifier();
        setState(215);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(216);
      match(ctcParser::T__6);
      setState(217);
      statement();
      setState(218);
      match(ctcParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::T__20

      || _la == ctcParser::T__21) {
        setState(220);
        storage_specifier();
      }
      setState(223);
      type_specifier();
      setState(224);
      identifier(0);
      setState(225);
      match(ctcParser::T__2);
      setState(226);
      type_argument_list();
      setState(227);
      match(ctcParser::T__3);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::T__13

      || _la == ctcParser::T__14) {
        setState(228);
        fn_specifier();
        setState(233);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(234);
      match(ctcParser::T__4);
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
    setState(238);
    type();
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Identifier_non_digit) {
      setState(239);
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
    setState(242);
    type_argument();
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(243);
      match(ctcParser::T__9);
      setState(244);
      type_argument();
      setState(249);
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
    setState(250);
    assignment_expression();
    setState(255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(251);
      match(ctcParser::T__9);
      setState(252);
      assignment_expression();
      setState(257);
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
    setState(258);
    match(ctcParser::T__15);
    setState(259);
    identifier(0);
    setState(260);
    match(ctcParser::T__4);
   
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
    setState(265);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(262);
        identifier(0);
        break;
      }

      case ctcParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(263);
        match(ctcParser::T__16);
        setState(264);
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
    setState(267);
    match(ctcParser::T__17);
    setState(268);
    match(ctcParser::T__18);
    setState(269);
    compile_if_predicate();
    setState(270);
    match(ctcParser::T__19);
    setState(271);
    match(ctcParser::T__6);
    setState(272);
    statement();
    setState(273);
    match(ctcParser::T__7);
   
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
    setState(275);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__20

    || _la == ctcParser::T__21)) {
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
    setState(277);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__22

    || _la == ctcParser::T__23)) {
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
    setState(279);
    match(ctcParser::T__6);
    setState(280);
    statement();
    setState(281);
    match(ctcParser::T__7);
   
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
    setState(287);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__24: {
        enterOuterAlt(_localctx, 1);
        setState(283);
        match(ctcParser::T__24);
        setState(284);
        identifier(0);
        break;
      }

      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 2);
        setState(285);
        identifier(0);
        break;
      }

      case ctcParser::T__25: {
        enterOuterAlt(_localctx, 3);
        setState(286);
        match(ctcParser::T__25);
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
    setState(289);
    match(ctcParser::T__26);
    setState(290);
    lambda_capture_modifier();
    setState(295);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(291);
      match(ctcParser::T__9);
      setState(292);
      lambda_capture_modifier();
      setState(297);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(298);
    match(ctcParser::T__27);
   
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
    setState(300);
    match(ctcParser::T__28);
    setState(301);
    lambda_capture_by();
    setState(302);
    match(ctcParser::T__2);
    setState(303);
    type_argument_list();
    setState(304);
    match(ctcParser::T__3);
    setState(305);
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
    setState(307);
    _la = _input->LA(1);
    if (!(((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & 7) != 0))) {
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
    setState(321);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(309);
        identifier(0);
        break;
      }

      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant: {
        enterOuterAlt(_localctx, 2);
        setState(310);
        constant();
        break;
      }

      case ctcParser::T__28: {
        enterOuterAlt(_localctx, 3);
        setState(311);
        lambda_expression();
        break;
      }

      case ctcParser::T__46:
      case ctcParser::EncodingPrefix: {
        enterOuterAlt(_localctx, 4);
        setState(313); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(312);
          string_literal();
          setState(315); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ctcParser::T__46

        || _la == ctcParser::EncodingPrefix);
        break;
      }

      case ctcParser::T__2: {
        enterOuterAlt(_localctx, 5);
        setState(317);
        match(ctcParser::T__2);
        setState(318);
        expression();
        setState(319);
        match(ctcParser::T__3);
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
    setState(323);
    cast_expression();
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7516192768) != 0)) {
      setState(324);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7516192768) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(325);
      cast_expression();
      setState(330);
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
    setState(331);
    multiplicativeExpression();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__32

    || _la == ctcParser::T__33) {
      setState(332);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__32

      || _la == ctcParser::T__33)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(333);
      multiplicativeExpression();
      setState(338);
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
    setState(339);
    additiveExpression();
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__34

    || _la == ctcParser::T__35) {
      setState(340);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__34

      || _la == ctcParser::T__35)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(341);
      additiveExpression();
      setState(346);
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
    setState(347);
    shiftExpression();
    setState(352);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 412318433280) != 0)) {
      setState(348);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 412318433280) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(349);
      shiftExpression();
      setState(354);
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
    setState(355);
    relationalExpression();
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__38

    || _la == ctcParser::T__39) {
      setState(356);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__38

      || _la == ctcParser::T__39)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(357);
      relationalExpression();
      setState(362);
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
    setState(363);
    equalityExpression();
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__24) {
      setState(364);
      match(ctcParser::T__24);
      setState(365);
      equalityExpression();
      setState(370);
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
    setState(371);
    andExpression();
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__40) {
      setState(372);
      match(ctcParser::T__40);
      setState(373);
      andExpression();
      setState(378);
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
    setState(379);
    exclusiveOrExpression();
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__41) {
      setState(380);
      match(ctcParser::T__41);
      setState(381);
      exclusiveOrExpression();
      setState(386);
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
    setState(387);
    inclusiveOrExpression();
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__42) {
      setState(388);
      match(ctcParser::T__42);
      setState(389);
      inclusiveOrExpression();
      setState(394);
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
    setState(395);
    logicalAndExpression();
    setState(400);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__43) {
      setState(396);
      match(ctcParser::T__43);
      setState(397);
      logicalAndExpression();
      setState(402);
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
    setState(403);
    logicalOrExpression();
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__44) {
      setState(404);
      match(ctcParser::T__44);
      setState(405);
      expression();
      setState(406);
      match(ctcParser::T__45);
      setState(407);
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
    setState(412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::EncodingPrefix) {
      setState(411);
      match(ctcParser::EncodingPrefix);
    }
    setState(414);
    match(ctcParser::T__46);
    setState(416);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::SCharSequence) {
      setState(415);
      match(ctcParser::SCharSequence);
    }
    setState(418);
    match(ctcParser::T__46);
   
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
    setState(420);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576179277326712832) != 0))) {
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
    setState(422);
    primary_expression();
    setState(433);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8646911284551352328) != 0)) {
      setState(431);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ctcParser::T__2: {
          setState(423);
          match(ctcParser::T__2);
          setState(424);
          argumentExpressionList();
          setState(425);
          match(ctcParser::T__3);
          break;
        }

        case ctcParser::T__58:
        case ctcParser::T__59: {
          setState(427);
          _la = _input->LA(1);
          if (!(_la == ctcParser::T__58

          || _la == ctcParser::T__59)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(428);
          identifier(0);
          break;
        }

        case ctcParser::T__60: {
          setState(429);
          match(ctcParser::T__60);
          break;
        }

        case ctcParser::T__61: {
          setState(430);
          match(ctcParser::T__61);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(435);
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
    setState(436);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372009977544704) != 0))) {
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
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(438);
      match(ctcParser::T__2);
      setState(439);
      type_specifier();
      setState(440);
      match(ctcParser::T__3);
      setState(441);
      cast_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(443);
      match(ctcParser::T__63);
      setState(444);
      match(ctcParser::T__18);
      setState(445);
      type_specifier();
      setState(446);
      match(ctcParser::T__19);
      setState(447);
      match(ctcParser::T__2);
      setState(448);
      cast_expression();
      setState(449);
      match(ctcParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(451);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(452);
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
    setState(458);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(455);
        _la = _input->LA(1);
        if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 61)) & 19) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(460);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(467);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__2:
      case ctcParser::T__28:
      case ctcParser::T__46:
      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant:
      case ctcParser::EncodingPrefix:
      case ctcParser::Identifier_non_digit: {
        setState(461);
        postfix_expression();
        break;
      }

      case ctcParser::T__16:
      case ctcParser::T__24:
      case ctcParser::T__29:
      case ctcParser::T__32:
      case ctcParser::T__33:
      case ctcParser::T__62: {
        setState(462);
        unaryOperator();
        setState(463);
        cast_expression();
        break;
      }

      case ctcParser::T__64: {
        setState(465);
        match(ctcParser::T__64);
        setState(466);
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
    setState(475);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(469);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(470);
      unary_expression();
      setState(471);
      assignment_operator();
      setState(472);
      assignment_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(474);
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
    setState(477);
    assignment_expression();
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__9) {
      setState(478);
      match(ctcParser::T__9);
      setState(479);
      assignment_expression();
      setState(484);
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
    setState(496);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier_non_digit: {
        enterOuterAlt(_localctx, 1);
        setState(485);
        identifier(0);
        break;
      }

      case ctcParser::T__65: {
        enterOuterAlt(_localctx, 2);
        setState(486);
        match(ctcParser::T__65);
        break;
      }

      case ctcParser::T__66: {
        enterOuterAlt(_localctx, 3);
        setState(487);
        match(ctcParser::T__66);
        break;
      }

      case ctcParser::T__67: {
        enterOuterAlt(_localctx, 4);
        setState(488);
        match(ctcParser::T__67);
        break;
      }

      case ctcParser::T__68: {
        enterOuterAlt(_localctx, 5);
        setState(489);
        match(ctcParser::T__68);
        break;
      }

      case ctcParser::T__69: {
        enterOuterAlt(_localctx, 6);
        setState(490);
        match(ctcParser::T__69);
        break;
      }

      case ctcParser::T__70: {
        enterOuterAlt(_localctx, 7);
        setState(491);
        match(ctcParser::T__70);
        break;
      }

      case ctcParser::T__71: {
        enterOuterAlt(_localctx, 8);
        setState(492);
        match(ctcParser::T__71);
        break;
      }

      case ctcParser::T__72: {
        enterOuterAlt(_localctx, 9);
        setState(493);
        match(ctcParser::T__72);
        break;
      }

      case ctcParser::T__73: {
        enterOuterAlt(_localctx, 10);
        setState(494);
        match(ctcParser::T__73);
        break;
      }

      case ctcParser::T__74: {
        enterOuterAlt(_localctx, 11);
        setState(495);
        match(ctcParser::T__74);
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

//----------------- Cv_specifierContext ------------------------------------------------------------------

ctcParser::Cv_specifierContext::Cv_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::Cv_specifierContext::getRuleIndex() const {
  return ctcParser::RuleCv_specifier;
}


std::any ctcParser::Cv_specifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitCv_specifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Cv_specifierContext* ctcParser::cv_specifier() {
  Cv_specifierContext *_localctx = _tracker.createInstance<Cv_specifierContext>(_ctx, getState());
  enterRule(_localctx, 94, ctcParser::RuleCv_specifier);
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
    setState(498);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__75

    || _la == ctcParser::T__76)) {
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
  enterRule(_localctx, 96, ctcParser::RuleIdentifier_specifier);
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
    setState(500);
    _la = _input->LA(1);
    if (!(((((_la - 25) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 25)) & 9007199254741025) != 0))) {
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

//----------------- Unsigned_specifierContext ------------------------------------------------------------------

ctcParser::Unsigned_specifierContext::Unsigned_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 98, ctcParser::RuleUnsigned_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(ctcParser::T__78);
   
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

ctcParser::Cv_specifierContext* ctcParser::Type_specifierContext::cv_specifier() {
  return getRuleContext<ctcParser::Cv_specifierContext>(0);
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
  enterRule(_localctx, 100, ctcParser::RuleType_specifier);
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
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__78) {
      setState(504);
      unsigned_specifier();
    }
    setState(508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__75

    || _la == ctcParser::T__76) {
      setState(507);
      cv_specifier();
    }
    setState(510);
    type();
    setState(512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(511);
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
  size_t startState = 102;
  enterRecursionRule(_localctx, 102, ctcParser::RuleIdentifier, precedence);

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
    setState(515);
    match(ctcParser::Identifier_non_digit);
    setState(519);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(516);
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
      setState(521);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
    _ctx->stop = _input->LT(-1);
    setState(527);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifier);
        setState(522);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(523);
        match(ctcParser::T__79);
        setState(524);
        identifier(2); 
      }
      setState(529);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
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
  enterRule(_localctx, 104, ctcParser::RuleVar_decl);
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
    setState(531);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__20

    || _la == ctcParser::T__21) {
      setState(530);
      storage_specifier();
    }
    setState(534);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__22

    || _la == ctcParser::T__23) {
      setState(533);
      var_decl_specifier();
    }
    setState(536);
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
  enterRule(_localctx, 106, ctcParser::RuleDeclarator);
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
    setState(538);
    type_specifier();
    setState(539);
    identifier(0);
    setState(543);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576179277326712832) != 0)) {
      setState(540);
      assignment_operator();
      setState(541);
      primary_expression();
    }

    setState(545);
    match(ctcParser::T__9);
    setState(546);
    type_specifier();
    setState(547);
    identifier(0);
    setState(551);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 576179277326712832) != 0)) {
      setState(548);
      assignment_operator();
      setState(549);
      primary_expression();
    }
    setState(553);
    match(ctcParser::T__4);
   
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
    case 51: return identifierSempred(antlrcpp::downCast<IdentifierContext *>(context), predicateIndex);

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
