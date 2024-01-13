
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
      "main", "statement", "control_flow_stmt", "switch_case", "switch_body", 
      "switch_stmt", "if_stmt", "do_while_stmt", "while_stmt", "forCondition", 
      "declarationSpecifiers", "initDeclaratorList", "initDeclarator", "initializer", 
      "initializerList", "designation", "designatorList", "designator", 
      "declarator", "constantExpression", "declarationSpecifier", "forDeclaration", 
      "forExpression", "for_stmt", "access_modifier", "interface_element", 
      "interface_body", "interface_decl", "enum_modifier", "enum_body", 
      "enum_decl", "using_decl", "namespace_decl", "fn_specifier", "fn_decl", 
      "type_argument", "type_argument_list", "argumentExpressionList", "use_decl", 
      "compile_if_predicate", "cctp_decl", "storage_specifier", "var_decl_specifier", 
      "lambda_body", "lambda_capture_modifier", "lambda_capture_by", "lambda_expression", 
      "constant", "primary_expression", "multiplicativeExpression", "additiveExpression", 
      "shiftExpression", "relationalExpression", "equalityExpression", "andExpression", 
      "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
      "logicalOrExpression", "conditional_expression", "string_literal", 
      "assignment_operator", "postfix_expression", "unaryOperator", "cast_expression", 
      "unary_expression", "assignment_expression", "expression", "type", 
      "identifier_specifier", "unsigned_specifier", "type_qualifier", "typeQualifierList", 
      "pointer", "specifierQualifierList", "refqualifier", "abstractDeclarator", 
      "type_specifier", "var_decl", "vdeclarator"
    },
    std::vector<std::string>{
      "", "';'", "':'", "'{'", "'}'", "'('", "')'", "','", "'='", "'['", 
      "']'", "'.'", "'!'", "'<'", "'>'", "'&'", "'this'", "'fun'", "'*'", 
      "'/'", "'%'", "'+'", "'-'", "'<<'", "'>>'", "'<='", "'>='", "'=='", 
      "'!='", "'^'", "'|'", "'&&'", "'||'", "'\\u003F'", "'\"'", "'*='", 
      "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", 
      "'|='", "'->'", "'++'", "'--'", "'~'", "'sizeof'", "", "", "", "'public'", 
      "'private'", "'interface'", "'class'", "'enum'", "'using'", "'namespace'", 
      "'inline'", "'noexcept'", "'use'", "'compile_if'", "'static'", "'extern'", 
      "'constexpr'", "'consteval'", "'dynamic_cast'", "'void'", "'auto'", 
      "'char'", "'bool'", "'short'", "'do'", "'while'", "'for'", "'int'", 
      "'long'", "'float'", "'double'", "'double128'", "'unsigned'", "'const'", 
      "'volatile'", "'if'", "'switch'", "'break'", "'continue'", "'else'", 
      "'default'", "'case'", "'return'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "DigitSequence", 
      "Digit_sequence", "Identifier", "Public", "Private", "Interface", 
      "Class", "Enum", "Using", "Namespace", "Inline", "Noexcept", "Use", 
      "Compile_if", "Static", "Extern", "Constexpr", "Consteval", "Dynamic_cast", 
      "Void", "Auto", "Char", "Bool", "Short", "Do", "While", "For", "Int", 
      "Long", "Float", "Double", "Double128", "Unsigned", "Const", "Volatile", 
      "If", "Switch", "Break", "Continue", "Else", "Default", "Case", "Return", 
      "IntegerConstant", "FloatingConstant", "CharacterConstant", "EncodingPrefix", 
      "SCharSequence"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,97,784,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,5,1,178,8,1,10,1,12,1,181,9,1,1,2,1,2,3,2,185,8,
  	2,1,2,1,2,1,2,1,2,1,2,3,2,192,8,2,1,3,1,3,1,3,1,3,3,3,198,8,3,1,3,1,3,
  	1,3,3,3,203,8,3,1,4,1,4,5,4,207,8,4,10,4,12,4,210,9,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,232,
  	8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,9,1,9,3,9,254,8,9,3,9,256,8,9,1,9,1,9,3,9,260,8,9,1,9,1,9,3,9,
  	264,8,9,1,10,4,10,267,8,10,11,10,12,10,268,1,11,1,11,1,11,5,11,274,8,
  	11,10,11,12,11,277,9,11,1,12,1,12,1,12,3,12,282,8,12,1,13,1,13,1,13,1,
  	13,3,13,288,8,13,1,13,1,13,3,13,292,8,13,1,14,3,14,295,8,14,1,14,1,14,
  	1,14,3,14,300,8,14,1,14,5,14,303,8,14,10,14,12,14,306,9,14,1,15,1,15,
  	1,15,1,16,4,16,312,8,16,11,16,12,16,313,1,17,1,17,1,17,1,17,1,17,1,17,
  	3,17,322,8,17,1,18,1,18,3,18,326,8,18,1,18,1,18,1,19,1,19,1,20,1,20,1,
  	20,3,20,335,8,20,1,21,1,21,3,21,339,8,21,1,22,1,22,1,22,5,22,344,8,22,
  	10,22,12,22,347,9,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,
  	1,25,1,25,3,25,361,8,25,1,25,1,25,1,25,1,25,1,25,1,25,5,25,369,8,25,10,
  	25,12,25,372,9,25,1,25,1,25,1,26,5,26,377,8,26,10,26,12,26,380,9,26,1,
  	27,1,27,1,27,1,27,1,27,1,27,3,27,388,8,27,1,28,1,28,1,29,1,29,1,29,5,
  	29,395,8,29,10,29,12,29,398,9,29,1,30,1,30,3,30,402,8,30,1,30,1,30,1,
  	30,1,30,1,30,3,30,409,8,30,1,31,1,31,1,31,1,31,1,31,1,31,3,31,417,8,31,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,3,32,428,8,32,1,33,1,33,
  	1,34,3,34,433,8,34,1,34,1,34,1,34,1,34,1,34,1,34,5,34,441,8,34,10,34,
  	12,34,444,9,34,1,34,1,34,1,34,1,34,1,34,3,34,451,8,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,5,34,459,8,34,10,34,12,34,462,9,34,1,34,1,34,3,34,466,
  	8,34,1,35,1,35,3,35,470,8,35,1,36,1,36,1,36,5,36,475,8,36,10,36,12,36,
  	478,9,36,1,37,1,37,1,37,5,37,483,8,37,10,37,12,37,486,9,37,1,38,1,38,
  	1,38,1,38,1,39,1,39,1,39,3,39,495,8,39,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,
  	3,44,517,8,44,1,45,1,45,1,45,1,45,5,45,523,8,45,10,45,12,45,526,9,45,
  	1,45,1,45,1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,47,1,47,1,48,1,48,1,48,
  	1,48,4,48,543,8,48,11,48,12,48,544,1,48,1,48,1,48,1,48,3,48,551,8,48,
  	1,49,1,49,1,49,5,49,556,8,49,10,49,12,49,559,9,49,1,50,1,50,1,50,5,50,
  	564,8,50,10,50,12,50,567,9,50,1,51,1,51,1,51,5,51,572,8,51,10,51,12,51,
  	575,9,51,1,52,1,52,1,52,5,52,580,8,52,10,52,12,52,583,9,52,1,53,1,53,
  	1,53,5,53,588,8,53,10,53,12,53,591,9,53,1,54,1,54,1,54,5,54,596,8,54,
  	10,54,12,54,599,9,54,1,55,1,55,1,55,5,55,604,8,55,10,55,12,55,607,9,55,
  	1,56,1,56,1,56,5,56,612,8,56,10,56,12,56,615,9,56,1,57,1,57,1,57,5,57,
  	620,8,57,10,57,12,57,623,9,57,1,58,1,58,1,58,5,58,628,8,58,10,58,12,58,
  	631,9,58,1,59,1,59,1,59,1,59,1,59,1,59,3,59,639,8,59,1,60,3,60,642,8,
  	60,1,60,1,60,3,60,646,8,60,1,60,1,60,1,61,1,61,1,62,1,62,1,62,1,62,1,
  	62,1,62,1,62,1,62,1,62,5,62,661,8,62,10,62,12,62,664,9,62,1,63,1,63,1,
  	64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	64,3,64,683,8,64,1,65,5,65,686,8,65,10,65,12,65,689,9,65,1,65,1,65,1,
  	65,1,65,1,65,1,65,3,65,697,8,65,1,66,1,66,1,66,1,66,1,66,1,66,3,66,705,
  	8,66,1,67,1,67,1,67,5,67,710,8,67,10,67,12,67,713,9,67,1,68,1,68,1,69,
  	1,69,5,69,719,8,69,10,69,12,69,722,9,69,1,70,1,70,1,71,1,71,1,72,4,72,
  	729,8,72,11,72,12,72,730,1,73,1,73,3,73,735,8,73,4,73,737,8,73,11,73,
  	12,73,738,1,74,1,74,1,74,3,74,744,8,74,1,74,3,74,747,8,74,1,75,1,75,1,
  	76,1,76,3,76,753,8,76,1,77,1,77,3,77,757,8,77,1,78,3,78,760,8,78,1,78,
  	3,78,763,8,78,1,78,1,78,1,79,1,79,1,79,1,79,1,79,3,79,772,8,79,1,79,1,
  	79,1,79,1,79,1,79,1,79,3,79,780,8,79,1,79,1,79,1,79,0,0,80,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,
  	102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,134,136,
  	138,140,142,144,146,148,150,152,154,156,158,0,17,1,0,53,54,1,0,60,61,
  	1,0,64,65,1,0,66,67,1,0,93,95,1,0,18,20,1,0,21,22,1,0,23,24,2,0,13,14,
  	25,26,1,0,27,28,2,0,8,8,35,44,2,0,11,11,45,45,5,0,12,12,15,15,18,18,21,
  	22,48,48,2,0,46,47,49,49,3,0,52,52,69,73,77,81,1,0,83,84,2,0,15,15,31,
  	31,809,0,160,1,0,0,0,2,179,1,0,0,0,4,191,1,0,0,0,6,202,1,0,0,0,8,204,
  	1,0,0,0,10,213,1,0,0,0,12,219,1,0,0,0,14,233,1,0,0,0,16,243,1,0,0,0,18,
  	255,1,0,0,0,20,266,1,0,0,0,22,270,1,0,0,0,24,278,1,0,0,0,26,291,1,0,0,
  	0,28,294,1,0,0,0,30,307,1,0,0,0,32,311,1,0,0,0,34,321,1,0,0,0,36,325,
  	1,0,0,0,38,329,1,0,0,0,40,334,1,0,0,0,42,336,1,0,0,0,44,340,1,0,0,0,46,
  	348,1,0,0,0,48,356,1,0,0,0,50,358,1,0,0,0,52,378,1,0,0,0,54,381,1,0,0,
  	0,56,389,1,0,0,0,58,391,1,0,0,0,60,399,1,0,0,0,62,410,1,0,0,0,64,427,
  	1,0,0,0,66,429,1,0,0,0,68,465,1,0,0,0,70,467,1,0,0,0,72,471,1,0,0,0,74,
  	479,1,0,0,0,76,487,1,0,0,0,78,494,1,0,0,0,80,496,1,0,0,0,82,504,1,0,0,
  	0,84,506,1,0,0,0,86,508,1,0,0,0,88,516,1,0,0,0,90,518,1,0,0,0,92,529,
  	1,0,0,0,94,536,1,0,0,0,96,550,1,0,0,0,98,552,1,0,0,0,100,560,1,0,0,0,
  	102,568,1,0,0,0,104,576,1,0,0,0,106,584,1,0,0,0,108,592,1,0,0,0,110,600,
  	1,0,0,0,112,608,1,0,0,0,114,616,1,0,0,0,116,624,1,0,0,0,118,632,1,0,0,
  	0,120,641,1,0,0,0,122,649,1,0,0,0,124,651,1,0,0,0,126,665,1,0,0,0,128,
  	682,1,0,0,0,130,687,1,0,0,0,132,704,1,0,0,0,134,706,1,0,0,0,136,714,1,
  	0,0,0,138,716,1,0,0,0,140,723,1,0,0,0,142,725,1,0,0,0,144,728,1,0,0,0,
  	146,736,1,0,0,0,148,743,1,0,0,0,150,748,1,0,0,0,152,752,1,0,0,0,154,754,
  	1,0,0,0,156,759,1,0,0,0,158,766,1,0,0,0,160,161,3,2,1,0,161,162,5,0,0,
  	1,162,1,1,0,0,0,163,178,3,4,2,0,164,178,3,10,5,0,165,178,3,12,6,0,166,
  	178,3,14,7,0,167,178,3,16,8,0,168,178,3,46,23,0,169,178,3,54,27,0,170,
  	178,3,60,30,0,171,178,3,62,31,0,172,178,3,64,32,0,173,178,3,80,40,0,174,
  	178,3,156,78,0,175,178,3,68,34,0,176,178,3,76,38,0,177,163,1,0,0,0,177,
  	164,1,0,0,0,177,165,1,0,0,0,177,166,1,0,0,0,177,167,1,0,0,0,177,168,1,
  	0,0,0,177,169,1,0,0,0,177,170,1,0,0,0,177,171,1,0,0,0,177,172,1,0,0,0,
  	177,173,1,0,0,0,177,174,1,0,0,0,177,175,1,0,0,0,177,176,1,0,0,0,178,181,
  	1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,3,1,0,0,0,181,179,1,0,0,0,
  	182,184,5,92,0,0,183,185,3,96,48,0,184,183,1,0,0,0,184,185,1,0,0,0,185,
  	186,1,0,0,0,186,192,5,1,0,0,187,188,5,87,0,0,188,192,5,1,0,0,189,190,
  	5,88,0,0,190,192,5,1,0,0,191,182,1,0,0,0,191,187,1,0,0,0,191,189,1,0,
  	0,0,192,5,1,0,0,0,193,194,5,91,0,0,194,195,3,96,48,0,195,197,5,2,0,0,
  	196,198,3,2,1,0,197,196,1,0,0,0,197,198,1,0,0,0,198,203,1,0,0,0,199,200,
  	5,90,0,0,200,201,5,2,0,0,201,203,3,2,1,0,202,193,1,0,0,0,202,199,1,0,
  	0,0,203,7,1,0,0,0,204,208,5,3,0,0,205,207,3,6,3,0,206,205,1,0,0,0,207,
  	210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,211,1,0,0,0,210,208,1,
  	0,0,0,211,212,5,4,0,0,212,9,1,0,0,0,213,214,5,86,0,0,214,215,5,5,0,0,
  	215,216,3,134,67,0,216,217,5,6,0,0,217,218,3,8,4,0,218,11,1,0,0,0,219,
  	220,5,85,0,0,220,221,5,5,0,0,221,222,3,134,67,0,222,223,5,6,0,0,223,224,
  	5,3,0,0,224,225,3,2,1,0,225,231,5,4,0,0,226,227,5,89,0,0,227,228,5,3,
  	0,0,228,229,3,2,1,0,229,230,5,4,0,0,230,232,1,0,0,0,231,226,1,0,0,0,231,
  	232,1,0,0,0,232,13,1,0,0,0,233,234,5,74,0,0,234,235,5,3,0,0,235,236,3,
  	2,1,0,236,237,5,4,0,0,237,238,5,75,0,0,238,239,5,5,0,0,239,240,3,134,
  	67,0,240,241,5,6,0,0,241,242,5,1,0,0,242,15,1,0,0,0,243,244,5,75,0,0,
  	244,245,5,5,0,0,245,246,3,134,67,0,246,247,5,6,0,0,247,248,5,3,0,0,248,
  	249,3,2,1,0,249,250,5,4,0,0,250,17,1,0,0,0,251,256,3,42,21,0,252,254,
  	3,134,67,0,253,252,1,0,0,0,253,254,1,0,0,0,254,256,1,0,0,0,255,251,1,
  	0,0,0,255,253,1,0,0,0,256,257,1,0,0,0,257,259,5,1,0,0,258,260,3,44,22,
  	0,259,258,1,0,0,0,259,260,1,0,0,0,260,261,1,0,0,0,261,263,5,1,0,0,262,
  	264,3,44,22,0,263,262,1,0,0,0,263,264,1,0,0,0,264,19,1,0,0,0,265,267,
  	3,40,20,0,266,265,1,0,0,0,267,268,1,0,0,0,268,266,1,0,0,0,268,269,1,0,
  	0,0,269,21,1,0,0,0,270,275,3,24,12,0,271,272,5,7,0,0,272,274,3,24,12,
  	0,273,271,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,
  	23,1,0,0,0,277,275,1,0,0,0,278,281,3,36,18,0,279,280,5,8,0,0,280,282,
  	3,26,13,0,281,279,1,0,0,0,281,282,1,0,0,0,282,25,1,0,0,0,283,292,3,132,
  	66,0,284,285,5,3,0,0,285,287,3,28,14,0,286,288,5,7,0,0,287,286,1,0,0,
  	0,287,288,1,0,0,0,288,289,1,0,0,0,289,290,5,4,0,0,290,292,1,0,0,0,291,
  	283,1,0,0,0,291,284,1,0,0,0,292,27,1,0,0,0,293,295,3,30,15,0,294,293,
  	1,0,0,0,294,295,1,0,0,0,295,296,1,0,0,0,296,304,3,26,13,0,297,299,5,7,
  	0,0,298,300,3,30,15,0,299,298,1,0,0,0,299,300,1,0,0,0,300,301,1,0,0,0,
  	301,303,3,26,13,0,302,297,1,0,0,0,303,306,1,0,0,0,304,302,1,0,0,0,304,
  	305,1,0,0,0,305,29,1,0,0,0,306,304,1,0,0,0,307,308,3,32,16,0,308,309,
  	5,8,0,0,309,31,1,0,0,0,310,312,3,34,17,0,311,310,1,0,0,0,312,313,1,0,
  	0,0,313,311,1,0,0,0,313,314,1,0,0,0,314,33,1,0,0,0,315,316,5,9,0,0,316,
  	317,3,38,19,0,317,318,5,10,0,0,318,322,1,0,0,0,319,320,5,11,0,0,320,322,
  	5,52,0,0,321,315,1,0,0,0,321,319,1,0,0,0,322,35,1,0,0,0,323,326,3,146,
  	73,0,324,326,3,150,75,0,325,323,1,0,0,0,325,324,1,0,0,0,325,326,1,0,0,
  	0,326,327,1,0,0,0,327,328,5,52,0,0,328,37,1,0,0,0,329,330,3,118,59,0,
  	330,39,1,0,0,0,331,335,3,82,41,0,332,335,3,142,71,0,333,335,3,136,68,
  	0,334,331,1,0,0,0,334,332,1,0,0,0,334,333,1,0,0,0,335,41,1,0,0,0,336,
  	338,3,20,10,0,337,339,3,22,11,0,338,337,1,0,0,0,338,339,1,0,0,0,339,43,
  	1,0,0,0,340,345,3,132,66,0,341,342,5,7,0,0,342,344,3,132,66,0,343,341,
  	1,0,0,0,344,347,1,0,0,0,345,343,1,0,0,0,345,346,1,0,0,0,346,45,1,0,0,
  	0,347,345,1,0,0,0,348,349,5,76,0,0,349,350,5,5,0,0,350,351,3,18,9,0,351,
  	352,5,6,0,0,352,353,5,3,0,0,353,354,3,2,1,0,354,355,5,4,0,0,355,47,1,
  	0,0,0,356,357,7,0,0,0,357,49,1,0,0,0,358,360,3,48,24,0,359,361,3,82,41,
  	0,360,359,1,0,0,0,360,361,1,0,0,0,361,362,1,0,0,0,362,363,3,154,77,0,
  	363,364,5,52,0,0,364,365,5,5,0,0,365,366,3,72,36,0,366,370,5,6,0,0,367,
  	369,3,66,33,0,368,367,1,0,0,0,369,372,1,0,0,0,370,368,1,0,0,0,370,371,
  	1,0,0,0,371,373,1,0,0,0,372,370,1,0,0,0,373,374,5,1,0,0,374,51,1,0,0,
  	0,375,377,3,50,25,0,376,375,1,0,0,0,377,380,1,0,0,0,378,376,1,0,0,0,378,
  	379,1,0,0,0,379,53,1,0,0,0,380,378,1,0,0,0,381,382,5,55,0,0,382,383,5,
  	52,0,0,383,384,5,3,0,0,384,385,3,52,26,0,385,387,5,4,0,0,386,388,5,1,
  	0,0,387,386,1,0,0,0,387,388,1,0,0,0,388,55,1,0,0,0,389,390,5,56,0,0,390,
  	57,1,0,0,0,391,396,5,52,0,0,392,393,5,7,0,0,393,395,5,52,0,0,394,392,
  	1,0,0,0,395,398,1,0,0,0,396,394,1,0,0,0,396,397,1,0,0,0,397,59,1,0,0,
  	0,398,396,1,0,0,0,399,401,5,57,0,0,400,402,3,56,28,0,401,400,1,0,0,0,
  	401,402,1,0,0,0,402,403,1,0,0,0,403,404,5,52,0,0,404,405,5,3,0,0,405,
  	406,3,58,29,0,406,408,5,4,0,0,407,409,5,1,0,0,408,407,1,0,0,0,408,409,
  	1,0,0,0,409,61,1,0,0,0,410,416,5,58,0,0,411,412,5,52,0,0,412,417,5,1,
  	0,0,413,414,5,59,0,0,414,415,5,52,0,0,415,417,5,1,0,0,416,411,1,0,0,0,
  	416,413,1,0,0,0,417,63,1,0,0,0,418,419,5,59,0,0,419,420,5,52,0,0,420,
  	421,5,3,0,0,421,422,3,2,1,0,422,423,5,4,0,0,423,428,1,0,0,0,424,425,5,
  	59,0,0,425,426,5,52,0,0,426,428,5,1,0,0,427,418,1,0,0,0,427,424,1,0,0,
  	0,428,65,1,0,0,0,429,430,7,1,0,0,430,67,1,0,0,0,431,433,3,82,41,0,432,
  	431,1,0,0,0,432,433,1,0,0,0,433,434,1,0,0,0,434,435,3,154,77,0,435,436,
  	5,52,0,0,436,437,5,5,0,0,437,438,3,72,36,0,438,442,5,6,0,0,439,441,3,
  	66,33,0,440,439,1,0,0,0,441,444,1,0,0,0,442,440,1,0,0,0,442,443,1,0,0,
  	0,443,445,1,0,0,0,444,442,1,0,0,0,445,446,5,3,0,0,446,447,3,2,1,0,447,
  	448,5,4,0,0,448,466,1,0,0,0,449,451,3,82,41,0,450,449,1,0,0,0,450,451,
  	1,0,0,0,451,452,1,0,0,0,452,453,3,154,77,0,453,454,5,52,0,0,454,455,5,
  	5,0,0,455,456,3,72,36,0,456,460,5,6,0,0,457,459,3,66,33,0,458,457,1,0,
  	0,0,459,462,1,0,0,0,460,458,1,0,0,0,460,461,1,0,0,0,461,463,1,0,0,0,462,
  	460,1,0,0,0,463,464,5,1,0,0,464,466,1,0,0,0,465,432,1,0,0,0,465,450,1,
  	0,0,0,466,69,1,0,0,0,467,469,3,136,68,0,468,470,5,52,0,0,469,468,1,0,
  	0,0,469,470,1,0,0,0,470,71,1,0,0,0,471,476,3,70,35,0,472,473,5,7,0,0,
  	473,475,3,70,35,0,474,472,1,0,0,0,475,478,1,0,0,0,476,474,1,0,0,0,476,
  	477,1,0,0,0,477,73,1,0,0,0,478,476,1,0,0,0,479,484,3,132,66,0,480,481,
  	5,7,0,0,481,483,3,132,66,0,482,480,1,0,0,0,483,486,1,0,0,0,484,482,1,
  	0,0,0,484,485,1,0,0,0,485,75,1,0,0,0,486,484,1,0,0,0,487,488,5,62,0,0,
  	488,489,5,52,0,0,489,490,5,1,0,0,490,77,1,0,0,0,491,495,5,52,0,0,492,
  	493,5,12,0,0,493,495,5,52,0,0,494,491,1,0,0,0,494,492,1,0,0,0,495,79,
  	1,0,0,0,496,497,5,63,0,0,497,498,5,13,0,0,498,499,3,78,39,0,499,500,5,
  	14,0,0,500,501,5,3,0,0,501,502,3,2,1,0,502,503,5,4,0,0,503,81,1,0,0,0,
  	504,505,7,2,0,0,505,83,1,0,0,0,506,507,7,3,0,0,507,85,1,0,0,0,508,509,
  	5,3,0,0,509,510,3,2,1,0,510,511,5,4,0,0,511,87,1,0,0,0,512,513,5,15,0,
  	0,513,517,5,52,0,0,514,517,5,52,0,0,515,517,5,16,0,0,516,512,1,0,0,0,
  	516,514,1,0,0,0,516,515,1,0,0,0,517,89,1,0,0,0,518,519,5,9,0,0,519,524,
  	3,88,44,0,520,521,5,7,0,0,521,523,3,88,44,0,522,520,1,0,0,0,523,526,1,
  	0,0,0,524,522,1,0,0,0,524,525,1,0,0,0,525,527,1,0,0,0,526,524,1,0,0,0,
  	527,528,5,10,0,0,528,91,1,0,0,0,529,530,5,17,0,0,530,531,3,90,45,0,531,
  	532,5,5,0,0,532,533,3,72,36,0,533,534,5,6,0,0,534,535,3,86,43,0,535,93,
  	1,0,0,0,536,537,7,4,0,0,537,95,1,0,0,0,538,551,5,52,0,0,539,551,3,94,
  	47,0,540,551,3,92,46,0,541,543,3,120,60,0,542,541,1,0,0,0,543,544,1,0,
  	0,0,544,542,1,0,0,0,544,545,1,0,0,0,545,551,1,0,0,0,546,547,5,5,0,0,547,
  	548,3,134,67,0,548,549,5,6,0,0,549,551,1,0,0,0,550,538,1,0,0,0,550,539,
  	1,0,0,0,550,540,1,0,0,0,550,542,1,0,0,0,550,546,1,0,0,0,551,97,1,0,0,
  	0,552,557,3,128,64,0,553,554,7,5,0,0,554,556,3,128,64,0,555,553,1,0,0,
  	0,556,559,1,0,0,0,557,555,1,0,0,0,557,558,1,0,0,0,558,99,1,0,0,0,559,
  	557,1,0,0,0,560,565,3,98,49,0,561,562,7,6,0,0,562,564,3,98,49,0,563,561,
  	1,0,0,0,564,567,1,0,0,0,565,563,1,0,0,0,565,566,1,0,0,0,566,101,1,0,0,
  	0,567,565,1,0,0,0,568,573,3,100,50,0,569,570,7,7,0,0,570,572,3,100,50,
  	0,571,569,1,0,0,0,572,575,1,0,0,0,573,571,1,0,0,0,573,574,1,0,0,0,574,
  	103,1,0,0,0,575,573,1,0,0,0,576,581,3,102,51,0,577,578,7,8,0,0,578,580,
  	3,102,51,0,579,577,1,0,0,0,580,583,1,0,0,0,581,579,1,0,0,0,581,582,1,
  	0,0,0,582,105,1,0,0,0,583,581,1,0,0,0,584,589,3,104,52,0,585,586,7,9,
  	0,0,586,588,3,104,52,0,587,585,1,0,0,0,588,591,1,0,0,0,589,587,1,0,0,
  	0,589,590,1,0,0,0,590,107,1,0,0,0,591,589,1,0,0,0,592,597,3,106,53,0,
  	593,594,5,15,0,0,594,596,3,106,53,0,595,593,1,0,0,0,596,599,1,0,0,0,597,
  	595,1,0,0,0,597,598,1,0,0,0,598,109,1,0,0,0,599,597,1,0,0,0,600,605,3,
  	108,54,0,601,602,5,29,0,0,602,604,3,108,54,0,603,601,1,0,0,0,604,607,
  	1,0,0,0,605,603,1,0,0,0,605,606,1,0,0,0,606,111,1,0,0,0,607,605,1,0,0,
  	0,608,613,3,110,55,0,609,610,5,30,0,0,610,612,3,110,55,0,611,609,1,0,
  	0,0,612,615,1,0,0,0,613,611,1,0,0,0,613,614,1,0,0,0,614,113,1,0,0,0,615,
  	613,1,0,0,0,616,621,3,112,56,0,617,618,5,31,0,0,618,620,3,112,56,0,619,
  	617,1,0,0,0,620,623,1,0,0,0,621,619,1,0,0,0,621,622,1,0,0,0,622,115,1,
  	0,0,0,623,621,1,0,0,0,624,629,3,114,57,0,625,626,5,32,0,0,626,628,3,114,
  	57,0,627,625,1,0,0,0,628,631,1,0,0,0,629,627,1,0,0,0,629,630,1,0,0,0,
  	630,117,1,0,0,0,631,629,1,0,0,0,632,638,3,116,58,0,633,634,5,33,0,0,634,
  	635,3,134,67,0,635,636,5,2,0,0,636,637,3,118,59,0,637,639,1,0,0,0,638,
  	633,1,0,0,0,638,639,1,0,0,0,639,119,1,0,0,0,640,642,5,96,0,0,641,640,
  	1,0,0,0,641,642,1,0,0,0,642,643,1,0,0,0,643,645,5,34,0,0,644,646,5,97,
  	0,0,645,644,1,0,0,0,645,646,1,0,0,0,646,647,1,0,0,0,647,648,5,34,0,0,
  	648,121,1,0,0,0,649,650,7,10,0,0,650,123,1,0,0,0,651,662,3,96,48,0,652,
  	653,5,5,0,0,653,654,3,74,37,0,654,655,5,6,0,0,655,661,1,0,0,0,656,657,
  	7,11,0,0,657,661,5,52,0,0,658,661,5,46,0,0,659,661,5,47,0,0,660,652,1,
  	0,0,0,660,656,1,0,0,0,660,658,1,0,0,0,660,659,1,0,0,0,661,664,1,0,0,0,
  	662,660,1,0,0,0,662,663,1,0,0,0,663,125,1,0,0,0,664,662,1,0,0,0,665,666,
  	7,12,0,0,666,127,1,0,0,0,667,668,5,5,0,0,668,669,3,154,77,0,669,670,5,
  	6,0,0,670,671,3,128,64,0,671,683,1,0,0,0,672,673,5,68,0,0,673,674,5,13,
  	0,0,674,675,3,154,77,0,675,676,5,14,0,0,676,677,5,5,0,0,677,678,3,128,
  	64,0,678,679,5,6,0,0,679,683,1,0,0,0,680,683,3,130,65,0,681,683,5,51,
  	0,0,682,667,1,0,0,0,682,672,1,0,0,0,682,680,1,0,0,0,682,681,1,0,0,0,683,
  	129,1,0,0,0,684,686,7,13,0,0,685,684,1,0,0,0,686,689,1,0,0,0,687,685,
  	1,0,0,0,687,688,1,0,0,0,688,696,1,0,0,0,689,687,1,0,0,0,690,697,3,124,
  	62,0,691,692,3,126,63,0,692,693,3,128,64,0,693,697,1,0,0,0,694,695,5,
  	49,0,0,695,697,3,154,77,0,696,690,1,0,0,0,696,691,1,0,0,0,696,694,1,0,
  	0,0,697,131,1,0,0,0,698,705,3,118,59,0,699,700,3,130,65,0,700,701,3,122,
  	61,0,701,702,3,132,66,0,702,705,1,0,0,0,703,705,5,51,0,0,704,698,1,0,
  	0,0,704,699,1,0,0,0,704,703,1,0,0,0,705,133,1,0,0,0,706,711,3,132,66,
  	0,707,708,5,7,0,0,708,710,3,132,66,0,709,707,1,0,0,0,710,713,1,0,0,0,
  	711,709,1,0,0,0,711,712,1,0,0,0,712,135,1,0,0,0,713,711,1,0,0,0,714,715,
  	7,14,0,0,715,137,1,0,0,0,716,720,5,18,0,0,717,719,5,18,0,0,718,717,1,
  	0,0,0,719,722,1,0,0,0,720,718,1,0,0,0,720,721,1,0,0,0,721,139,1,0,0,0,
  	722,720,1,0,0,0,723,724,5,82,0,0,724,141,1,0,0,0,725,726,7,15,0,0,726,
  	143,1,0,0,0,727,729,3,142,71,0,728,727,1,0,0,0,729,730,1,0,0,0,730,728,
  	1,0,0,0,730,731,1,0,0,0,731,145,1,0,0,0,732,734,5,18,0,0,733,735,3,144,
  	72,0,734,733,1,0,0,0,734,735,1,0,0,0,735,737,1,0,0,0,736,732,1,0,0,0,
  	737,738,1,0,0,0,738,736,1,0,0,0,738,739,1,0,0,0,739,147,1,0,0,0,740,744,
  	3,140,70,0,741,744,3,136,68,0,742,744,3,142,71,0,743,740,1,0,0,0,743,
  	741,1,0,0,0,743,742,1,0,0,0,744,746,1,0,0,0,745,747,3,148,74,0,746,745,
  	1,0,0,0,746,747,1,0,0,0,747,149,1,0,0,0,748,749,7,16,0,0,749,151,1,0,
  	0,0,750,753,3,146,73,0,751,753,3,150,75,0,752,750,1,0,0,0,752,751,1,0,
  	0,0,753,153,1,0,0,0,754,756,3,148,74,0,755,757,3,152,76,0,756,755,1,0,
  	0,0,756,757,1,0,0,0,757,155,1,0,0,0,758,760,3,82,41,0,759,758,1,0,0,0,
  	759,760,1,0,0,0,760,762,1,0,0,0,761,763,3,84,42,0,762,761,1,0,0,0,762,
  	763,1,0,0,0,763,764,1,0,0,0,764,765,3,158,79,0,765,157,1,0,0,0,766,767,
  	3,154,77,0,767,771,5,52,0,0,768,769,3,122,61,0,769,770,3,96,48,0,770,
  	772,1,0,0,0,771,768,1,0,0,0,771,772,1,0,0,0,772,773,1,0,0,0,773,774,5,
  	7,0,0,774,775,3,154,77,0,775,779,5,52,0,0,776,777,3,122,61,0,777,778,
  	3,96,48,0,778,780,1,0,0,0,779,776,1,0,0,0,779,780,1,0,0,0,780,781,1,0,
  	0,0,781,782,5,1,0,0,782,159,1,0,0,0,80,177,179,184,191,197,202,208,231,
  	253,255,259,263,268,275,281,287,291,294,299,304,313,321,325,334,338,345,
  	360,370,378,387,396,401,408,416,427,432,442,450,460,465,469,476,484,494,
  	516,524,544,550,557,565,573,581,589,597,605,613,621,629,638,641,645,660,
  	662,682,687,696,704,711,720,730,734,738,743,746,752,756,759,762,771,779
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
    setState(160);
    statement();
    setState(161);
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

std::vector<ctcParser::Control_flow_stmtContext *> ctcParser::StatementContext::control_flow_stmt() {
  return getRuleContexts<ctcParser::Control_flow_stmtContext>();
}

ctcParser::Control_flow_stmtContext* ctcParser::StatementContext::control_flow_stmt(size_t i) {
  return getRuleContext<ctcParser::Control_flow_stmtContext>(i);
}

std::vector<ctcParser::Switch_stmtContext *> ctcParser::StatementContext::switch_stmt() {
  return getRuleContexts<ctcParser::Switch_stmtContext>();
}

ctcParser::Switch_stmtContext* ctcParser::StatementContext::switch_stmt(size_t i) {
  return getRuleContext<ctcParser::Switch_stmtContext>(i);
}

std::vector<ctcParser::If_stmtContext *> ctcParser::StatementContext::if_stmt() {
  return getRuleContexts<ctcParser::If_stmtContext>();
}

ctcParser::If_stmtContext* ctcParser::StatementContext::if_stmt(size_t i) {
  return getRuleContext<ctcParser::If_stmtContext>(i);
}

std::vector<ctcParser::Do_while_stmtContext *> ctcParser::StatementContext::do_while_stmt() {
  return getRuleContexts<ctcParser::Do_while_stmtContext>();
}

ctcParser::Do_while_stmtContext* ctcParser::StatementContext::do_while_stmt(size_t i) {
  return getRuleContext<ctcParser::Do_while_stmtContext>(i);
}

std::vector<ctcParser::While_stmtContext *> ctcParser::StatementContext::while_stmt() {
  return getRuleContexts<ctcParser::While_stmtContext>();
}

ctcParser::While_stmtContext* ctcParser::StatementContext::while_stmt(size_t i) {
  return getRuleContext<ctcParser::While_stmtContext>(i);
}

std::vector<ctcParser::For_stmtContext *> ctcParser::StatementContext::for_stmt() {
  return getRuleContexts<ctcParser::For_stmtContext>();
}

ctcParser::For_stmtContext* ctcParser::StatementContext::for_stmt(size_t i) {
  return getRuleContext<ctcParser::For_stmtContext>(i);
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
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 1236950514921) != 0)) {
      setState(177);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(163);
        control_flow_stmt();
        break;
      }

      case 2: {
        setState(164);
        switch_stmt();
        break;
      }

      case 3: {
        setState(165);
        if_stmt();
        break;
      }

      case 4: {
        setState(166);
        do_while_stmt();
        break;
      }

      case 5: {
        setState(167);
        while_stmt();
        break;
      }

      case 6: {
        setState(168);
        for_stmt();
        break;
      }

      case 7: {
        setState(169);
        interface_decl();
        break;
      }

      case 8: {
        setState(170);
        enum_decl();
        break;
      }

      case 9: {
        setState(171);
        using_decl();
        break;
      }

      case 10: {
        setState(172);
        namespace_decl();
        break;
      }

      case 11: {
        setState(173);
        cctp_decl();
        break;
      }

      case 12: {
        setState(174);
        var_decl();
        break;
      }

      case 13: {
        setState(175);
        fn_decl();
        break;
      }

      case 14: {
        setState(176);
        use_decl();
        break;
      }

      default:
        break;
      }
      setState(181);
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

//----------------- Control_flow_stmtContext ------------------------------------------------------------------

ctcParser::Control_flow_stmtContext::Control_flow_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Control_flow_stmtContext::Return() {
  return getToken(ctcParser::Return, 0);
}

ctcParser::Primary_expressionContext* ctcParser::Control_flow_stmtContext::primary_expression() {
  return getRuleContext<ctcParser::Primary_expressionContext>(0);
}

tree::TerminalNode* ctcParser::Control_flow_stmtContext::Break() {
  return getToken(ctcParser::Break, 0);
}

tree::TerminalNode* ctcParser::Control_flow_stmtContext::Continue() {
  return getToken(ctcParser::Continue, 0);
}


size_t ctcParser::Control_flow_stmtContext::getRuleIndex() const {
  return ctcParser::RuleControl_flow_stmt;
}


std::any ctcParser::Control_flow_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitControl_flow_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Control_flow_stmtContext* ctcParser::control_flow_stmt() {
  Control_flow_stmtContext *_localctx = _tracker.createInstance<Control_flow_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, ctcParser::RuleControl_flow_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Return: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        match(ctcParser::Return);
        setState(184);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4503616807370784) != 0) || ((((_la - 93) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 93)) & 15) != 0)) {
          setState(183);
          primary_expression();
        }
        setState(186);
        match(ctcParser::T__0);
        break;
      }

      case ctcParser::Break: {
        enterOuterAlt(_localctx, 2);
        setState(187);
        match(ctcParser::Break);
        setState(188);
        match(ctcParser::T__0);
        break;
      }

      case ctcParser::Continue: {
        enterOuterAlt(_localctx, 3);
        setState(189);
        match(ctcParser::Continue);
        setState(190);
        match(ctcParser::T__0);
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

//----------------- Switch_caseContext ------------------------------------------------------------------

ctcParser::Switch_caseContext::Switch_caseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Switch_caseContext::Case() {
  return getToken(ctcParser::Case, 0);
}

ctcParser::Primary_expressionContext* ctcParser::Switch_caseContext::primary_expression() {
  return getRuleContext<ctcParser::Primary_expressionContext>(0);
}

ctcParser::StatementContext* ctcParser::Switch_caseContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}

tree::TerminalNode* ctcParser::Switch_caseContext::Default() {
  return getToken(ctcParser::Default, 0);
}


size_t ctcParser::Switch_caseContext::getRuleIndex() const {
  return ctcParser::RuleSwitch_case;
}


std::any ctcParser::Switch_caseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitSwitch_case(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Switch_caseContext* ctcParser::switch_case() {
  Switch_caseContext *_localctx = _tracker.createInstance<Switch_caseContext>(_ctx, getState());
  enterRule(_localctx, 6, ctcParser::RuleSwitch_case);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Case: {
        enterOuterAlt(_localctx, 1);
        setState(193);
        match(ctcParser::Case);
        setState(194);
        primary_expression();
        setState(195);
        match(ctcParser::T__1);
        setState(197);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(196);
          statement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case ctcParser::Default: {
        enterOuterAlt(_localctx, 2);
        setState(199);
        match(ctcParser::Default);
        setState(200);
        match(ctcParser::T__1);
        setState(201);
        statement();
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

//----------------- Switch_bodyContext ------------------------------------------------------------------

ctcParser::Switch_bodyContext::Switch_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Switch_caseContext *> ctcParser::Switch_bodyContext::switch_case() {
  return getRuleContexts<ctcParser::Switch_caseContext>();
}

ctcParser::Switch_caseContext* ctcParser::Switch_bodyContext::switch_case(size_t i) {
  return getRuleContext<ctcParser::Switch_caseContext>(i);
}


size_t ctcParser::Switch_bodyContext::getRuleIndex() const {
  return ctcParser::RuleSwitch_body;
}


std::any ctcParser::Switch_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitSwitch_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Switch_bodyContext* ctcParser::switch_body() {
  Switch_bodyContext *_localctx = _tracker.createInstance<Switch_bodyContext>(_ctx, getState());
  enterRule(_localctx, 8, ctcParser::RuleSwitch_body);
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
    setState(204);
    match(ctcParser::T__2);
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Default

    || _la == ctcParser::Case) {
      setState(205);
      switch_case();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(211);
    match(ctcParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_stmtContext ------------------------------------------------------------------

ctcParser::Switch_stmtContext::Switch_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Switch_stmtContext::Switch() {
  return getToken(ctcParser::Switch, 0);
}

ctcParser::ExpressionContext* ctcParser::Switch_stmtContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}

ctcParser::Switch_bodyContext* ctcParser::Switch_stmtContext::switch_body() {
  return getRuleContext<ctcParser::Switch_bodyContext>(0);
}


size_t ctcParser::Switch_stmtContext::getRuleIndex() const {
  return ctcParser::RuleSwitch_stmt;
}


std::any ctcParser::Switch_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitSwitch_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Switch_stmtContext* ctcParser::switch_stmt() {
  Switch_stmtContext *_localctx = _tracker.createInstance<Switch_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, ctcParser::RuleSwitch_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(ctcParser::Switch);
    setState(214);
    match(ctcParser::T__4);
    setState(215);
    expression();
    setState(216);
    match(ctcParser::T__5);
    setState(217);
    switch_body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

ctcParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::If_stmtContext::If() {
  return getToken(ctcParser::If, 0);
}

ctcParser::ExpressionContext* ctcParser::If_stmtContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}

std::vector<ctcParser::StatementContext *> ctcParser::If_stmtContext::statement() {
  return getRuleContexts<ctcParser::StatementContext>();
}

ctcParser::StatementContext* ctcParser::If_stmtContext::statement(size_t i) {
  return getRuleContext<ctcParser::StatementContext>(i);
}

tree::TerminalNode* ctcParser::If_stmtContext::Else() {
  return getToken(ctcParser::Else, 0);
}


size_t ctcParser::If_stmtContext::getRuleIndex() const {
  return ctcParser::RuleIf_stmt;
}


std::any ctcParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::If_stmtContext* ctcParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, ctcParser::RuleIf_stmt);
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
    setState(219);
    match(ctcParser::If);
    setState(220);
    match(ctcParser::T__4);
    setState(221);
    expression();
    setState(222);
    match(ctcParser::T__5);
    setState(223);
    match(ctcParser::T__2);
    setState(224);
    statement();
    setState(225);
    match(ctcParser::T__3);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Else) {
      setState(226);
      match(ctcParser::Else);
      setState(227);
      match(ctcParser::T__2);
      setState(228);
      statement();
      setState(229);
      match(ctcParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_while_stmtContext ------------------------------------------------------------------

ctcParser::Do_while_stmtContext::Do_while_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Do_while_stmtContext::Do() {
  return getToken(ctcParser::Do, 0);
}

ctcParser::StatementContext* ctcParser::Do_while_stmtContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}

tree::TerminalNode* ctcParser::Do_while_stmtContext::While() {
  return getToken(ctcParser::While, 0);
}

ctcParser::ExpressionContext* ctcParser::Do_while_stmtContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}


size_t ctcParser::Do_while_stmtContext::getRuleIndex() const {
  return ctcParser::RuleDo_while_stmt;
}


std::any ctcParser::Do_while_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDo_while_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Do_while_stmtContext* ctcParser::do_while_stmt() {
  Do_while_stmtContext *_localctx = _tracker.createInstance<Do_while_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, ctcParser::RuleDo_while_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(ctcParser::Do);
    setState(234);
    match(ctcParser::T__2);
    setState(235);
    statement();
    setState(236);
    match(ctcParser::T__3);
    setState(237);
    match(ctcParser::While);
    setState(238);
    match(ctcParser::T__4);
    setState(239);
    expression();
    setState(240);
    match(ctcParser::T__5);
    setState(241);
    match(ctcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

ctcParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::While_stmtContext::While() {
  return getToken(ctcParser::While, 0);
}

ctcParser::ExpressionContext* ctcParser::While_stmtContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}

ctcParser::StatementContext* ctcParser::While_stmtContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}


size_t ctcParser::While_stmtContext::getRuleIndex() const {
  return ctcParser::RuleWhile_stmt;
}


std::any ctcParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::While_stmtContext* ctcParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, ctcParser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(ctcParser::While);
    setState(244);
    match(ctcParser::T__4);
    setState(245);
    expression();
    setState(246);
    match(ctcParser::T__5);
    setState(247);
    match(ctcParser::T__2);
    setState(248);
    statement();
    setState(249);
    match(ctcParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

ctcParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::ForDeclarationContext* ctcParser::ForConditionContext::forDeclaration() {
  return getRuleContext<ctcParser::ForDeclarationContext>(0);
}

std::vector<ctcParser::ForExpressionContext *> ctcParser::ForConditionContext::forExpression() {
  return getRuleContexts<ctcParser::ForExpressionContext>();
}

ctcParser::ForExpressionContext* ctcParser::ForConditionContext::forExpression(size_t i) {
  return getRuleContext<ctcParser::ForExpressionContext>(i);
}

ctcParser::ExpressionContext* ctcParser::ForConditionContext::expression() {
  return getRuleContext<ctcParser::ExpressionContext>(0);
}


size_t ctcParser::ForConditionContext::getRuleIndex() const {
  return ctcParser::RuleForCondition;
}


std::any ctcParser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ForConditionContext* ctcParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 18, ctcParser::RuleForCondition);
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
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(251);
      forDeclaration();
      break;
    }

    case 2: {
      setState(253);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & 503316481) != 0)) {
        setState(252);
        expression();
      }
      break;
    }

    default:
      break;
    }
    setState(257);
    match(ctcParser::T__0);
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 503316481) != 0)) {
      setState(258);
      forExpression();
    }
    setState(261);
    match(ctcParser::T__0);
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 503316481) != 0)) {
      setState(262);
      forExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

ctcParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::DeclarationSpecifierContext *> ctcParser::DeclarationSpecifiersContext::declarationSpecifier() {
  return getRuleContexts<ctcParser::DeclarationSpecifierContext>();
}

ctcParser::DeclarationSpecifierContext* ctcParser::DeclarationSpecifiersContext::declarationSpecifier(size_t i) {
  return getRuleContext<ctcParser::DeclarationSpecifierContext>(i);
}


size_t ctcParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return ctcParser::RuleDeclarationSpecifiers;
}


std::any ctcParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DeclarationSpecifiersContext* ctcParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 20, ctcParser::RuleDeclarationSpecifiers);

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
    setState(266); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(265);
              declarationSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(268); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

ctcParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::InitDeclaratorContext *> ctcParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<ctcParser::InitDeclaratorContext>();
}

ctcParser::InitDeclaratorContext* ctcParser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<ctcParser::InitDeclaratorContext>(i);
}


size_t ctcParser::InitDeclaratorListContext::getRuleIndex() const {
  return ctcParser::RuleInitDeclaratorList;
}


std::any ctcParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::InitDeclaratorListContext* ctcParser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 22, ctcParser::RuleInitDeclaratorList);
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
    setState(270);
    initDeclarator();
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(271);
      match(ctcParser::T__6);
      setState(272);
      initDeclarator();
      setState(277);
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

//----------------- InitDeclaratorContext ------------------------------------------------------------------

ctcParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::DeclaratorContext* ctcParser::InitDeclaratorContext::declarator() {
  return getRuleContext<ctcParser::DeclaratorContext>(0);
}

ctcParser::InitializerContext* ctcParser::InitDeclaratorContext::initializer() {
  return getRuleContext<ctcParser::InitializerContext>(0);
}


size_t ctcParser::InitDeclaratorContext::getRuleIndex() const {
  return ctcParser::RuleInitDeclarator;
}


std::any ctcParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::InitDeclaratorContext* ctcParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 24, ctcParser::RuleInitDeclarator);
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
    setState(278);
    declarator();
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__7) {
      setState(279);
      match(ctcParser::T__7);
      setState(280);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

ctcParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Assignment_expressionContext* ctcParser::InitializerContext::assignment_expression() {
  return getRuleContext<ctcParser::Assignment_expressionContext>(0);
}

ctcParser::InitializerListContext* ctcParser::InitializerContext::initializerList() {
  return getRuleContext<ctcParser::InitializerListContext>(0);
}


size_t ctcParser::InitializerContext::getRuleIndex() const {
  return ctcParser::RuleInitializer;
}


std::any ctcParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::InitializerContext* ctcParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 26, ctcParser::RuleInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__4:
      case ctcParser::T__11:
      case ctcParser::T__14:
      case ctcParser::T__16:
      case ctcParser::T__17:
      case ctcParser::T__20:
      case ctcParser::T__21:
      case ctcParser::T__33:
      case ctcParser::T__45:
      case ctcParser::T__46:
      case ctcParser::T__47:
      case ctcParser::T__48:
      case ctcParser::Digit_sequence:
      case ctcParser::Identifier:
      case ctcParser::Dynamic_cast:
      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant:
      case ctcParser::EncodingPrefix: {
        enterOuterAlt(_localctx, 1);
        setState(283);
        assignment_expression();
        break;
      }

      case ctcParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(284);
        match(ctcParser::T__2);
        setState(285);
        initializerList();
        setState(287);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ctcParser::T__6) {
          setState(286);
          match(ctcParser::T__6);
        }
        setState(289);
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

//----------------- InitializerListContext ------------------------------------------------------------------

ctcParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::InitializerContext *> ctcParser::InitializerListContext::initializer() {
  return getRuleContexts<ctcParser::InitializerContext>();
}

ctcParser::InitializerContext* ctcParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<ctcParser::InitializerContext>(i);
}

std::vector<ctcParser::DesignationContext *> ctcParser::InitializerListContext::designation() {
  return getRuleContexts<ctcParser::DesignationContext>();
}

ctcParser::DesignationContext* ctcParser::InitializerListContext::designation(size_t i) {
  return getRuleContext<ctcParser::DesignationContext>(i);
}


size_t ctcParser::InitializerListContext::getRuleIndex() const {
  return ctcParser::RuleInitializerList;
}


std::any ctcParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::InitializerListContext* ctcParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 28, ctcParser::RuleInitializerList);
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
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__8

    || _la == ctcParser::T__10) {
      setState(293);
      designation();
    }
    setState(296);
    initializer();
    setState(304);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(297);
        match(ctcParser::T__6);
        setState(299);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ctcParser::T__8

        || _la == ctcParser::T__10) {
          setState(298);
          designation();
        }
        setState(301);
        initializer(); 
      }
      setState(306);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignationContext ------------------------------------------------------------------

ctcParser::DesignationContext::DesignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::DesignatorListContext* ctcParser::DesignationContext::designatorList() {
  return getRuleContext<ctcParser::DesignatorListContext>(0);
}


size_t ctcParser::DesignationContext::getRuleIndex() const {
  return ctcParser::RuleDesignation;
}


std::any ctcParser::DesignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDesignation(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DesignationContext* ctcParser::designation() {
  DesignationContext *_localctx = _tracker.createInstance<DesignationContext>(_ctx, getState());
  enterRule(_localctx, 30, ctcParser::RuleDesignation);

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
    designatorList();
    setState(308);
    match(ctcParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorListContext ------------------------------------------------------------------

ctcParser::DesignatorListContext::DesignatorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::DesignatorContext *> ctcParser::DesignatorListContext::designator() {
  return getRuleContexts<ctcParser::DesignatorContext>();
}

ctcParser::DesignatorContext* ctcParser::DesignatorListContext::designator(size_t i) {
  return getRuleContext<ctcParser::DesignatorContext>(i);
}


size_t ctcParser::DesignatorListContext::getRuleIndex() const {
  return ctcParser::RuleDesignatorList;
}


std::any ctcParser::DesignatorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDesignatorList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DesignatorListContext* ctcParser::designatorList() {
  DesignatorListContext *_localctx = _tracker.createInstance<DesignatorListContext>(_ctx, getState());
  enterRule(_localctx, 32, ctcParser::RuleDesignatorList);
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
    setState(311); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(310);
      designator();
      setState(313); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ctcParser::T__8

    || _la == ctcParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

ctcParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::ConstantExpressionContext* ctcParser::DesignatorContext::constantExpression() {
  return getRuleContext<ctcParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* ctcParser::DesignatorContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}


size_t ctcParser::DesignatorContext::getRuleIndex() const {
  return ctcParser::RuleDesignator;
}


std::any ctcParser::DesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDesignator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DesignatorContext* ctcParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 34, ctcParser::RuleDesignator);

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
      case ctcParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(315);
        match(ctcParser::T__8);
        setState(316);
        constantExpression();
        setState(317);
        match(ctcParser::T__9);
        break;
      }

      case ctcParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(319);
        match(ctcParser::T__10);
        setState(320);
        match(ctcParser::Identifier);
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

//----------------- DeclaratorContext ------------------------------------------------------------------

ctcParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::DeclaratorContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}

ctcParser::PointerContext* ctcParser::DeclaratorContext::pointer() {
  return getRuleContext<ctcParser::PointerContext>(0);
}

ctcParser::RefqualifierContext* ctcParser::DeclaratorContext::refqualifier() {
  return getRuleContext<ctcParser::RefqualifierContext>(0);
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
  enterRule(_localctx, 36, ctcParser::RuleDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__17: {
        setState(323);
        pointer();
        break;
      }

      case ctcParser::T__14:
      case ctcParser::T__30: {
        setState(324);
        refqualifier();
        break;
      }

      case ctcParser::Identifier: {
        break;
      }

    default:
      break;
    }
    setState(327);
    match(ctcParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

ctcParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Conditional_expressionContext* ctcParser::ConstantExpressionContext::conditional_expression() {
  return getRuleContext<ctcParser::Conditional_expressionContext>(0);
}


size_t ctcParser::ConstantExpressionContext::getRuleIndex() const {
  return ctcParser::RuleConstantExpression;
}


std::any ctcParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ConstantExpressionContext* ctcParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, ctcParser::RuleConstantExpression);

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
    conditional_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

ctcParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Storage_specifierContext* ctcParser::DeclarationSpecifierContext::storage_specifier() {
  return getRuleContext<ctcParser::Storage_specifierContext>(0);
}

ctcParser::Type_qualifierContext* ctcParser::DeclarationSpecifierContext::type_qualifier() {
  return getRuleContext<ctcParser::Type_qualifierContext>(0);
}

ctcParser::TypeContext* ctcParser::DeclarationSpecifierContext::type() {
  return getRuleContext<ctcParser::TypeContext>(0);
}


size_t ctcParser::DeclarationSpecifierContext::getRuleIndex() const {
  return ctcParser::RuleDeclarationSpecifier;
}


std::any ctcParser::DeclarationSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::DeclarationSpecifierContext* ctcParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 40, ctcParser::RuleDeclarationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Static:
      case ctcParser::Extern: {
        enterOuterAlt(_localctx, 1);
        setState(331);
        storage_specifier();
        break;
      }

      case ctcParser::Const:
      case ctcParser::Volatile: {
        enterOuterAlt(_localctx, 2);
        setState(332);
        type_qualifier();
        break;
      }

      case ctcParser::Identifier:
      case ctcParser::Void:
      case ctcParser::Auto:
      case ctcParser::Char:
      case ctcParser::Bool:
      case ctcParser::Short:
      case ctcParser::Int:
      case ctcParser::Long:
      case ctcParser::Float:
      case ctcParser::Double:
      case ctcParser::Double128: {
        enterOuterAlt(_localctx, 3);
        setState(333);
        type();
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

//----------------- ForDeclarationContext ------------------------------------------------------------------

ctcParser::ForDeclarationContext::ForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::DeclarationSpecifiersContext* ctcParser::ForDeclarationContext::declarationSpecifiers() {
  return getRuleContext<ctcParser::DeclarationSpecifiersContext>(0);
}

ctcParser::InitDeclaratorListContext* ctcParser::ForDeclarationContext::initDeclaratorList() {
  return getRuleContext<ctcParser::InitDeclaratorListContext>(0);
}


size_t ctcParser::ForDeclarationContext::getRuleIndex() const {
  return ctcParser::RuleForDeclaration;
}


std::any ctcParser::ForDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitForDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ForDeclarationContext* ctcParser::forDeclaration() {
  ForDeclarationContext *_localctx = _tracker.createInstance<ForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, ctcParser::RuleForDeclaration);
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
    setState(336);
    declarationSpecifiers();
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4503601775149056) != 0)) {
      setState(337);
      initDeclaratorList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForExpressionContext ------------------------------------------------------------------

ctcParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Assignment_expressionContext *> ctcParser::ForExpressionContext::assignment_expression() {
  return getRuleContexts<ctcParser::Assignment_expressionContext>();
}

ctcParser::Assignment_expressionContext* ctcParser::ForExpressionContext::assignment_expression(size_t i) {
  return getRuleContext<ctcParser::Assignment_expressionContext>(i);
}


size_t ctcParser::ForExpressionContext::getRuleIndex() const {
  return ctcParser::RuleForExpression;
}


std::any ctcParser::ForExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitForExpression(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::ForExpressionContext* ctcParser::forExpression() {
  ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, ctcParser::RuleForExpression);
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
    setState(340);
    assignment_expression();
    setState(345);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(341);
      match(ctcParser::T__6);
      setState(342);
      assignment_expression();
      setState(347);
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

//----------------- For_stmtContext ------------------------------------------------------------------

ctcParser::For_stmtContext::For_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::For_stmtContext::For() {
  return getToken(ctcParser::For, 0);
}

ctcParser::ForConditionContext* ctcParser::For_stmtContext::forCondition() {
  return getRuleContext<ctcParser::ForConditionContext>(0);
}

ctcParser::StatementContext* ctcParser::For_stmtContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}


size_t ctcParser::For_stmtContext::getRuleIndex() const {
  return ctcParser::RuleFor_stmt;
}


std::any ctcParser::For_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitFor_stmt(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::For_stmtContext* ctcParser::for_stmt() {
  For_stmtContext *_localctx = _tracker.createInstance<For_stmtContext>(_ctx, getState());
  enterRule(_localctx, 46, ctcParser::RuleFor_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(ctcParser::For);
    setState(349);
    match(ctcParser::T__4);
    setState(350);
    forCondition();
    setState(351);
    match(ctcParser::T__5);
    setState(352);
    match(ctcParser::T__2);
    setState(353);
    statement();
    setState(354);
    match(ctcParser::T__3);
   
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
  enterRule(_localctx, 48, ctcParser::RuleAccess_modifier);
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
    setState(356);
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

tree::TerminalNode* ctcParser::Interface_elementContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 50, ctcParser::RuleInterface_element);
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
    setState(358);
    access_modifier();
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(359);
      storage_specifier();
    }
    setState(362);
    type_specifier();
    setState(363);
    match(ctcParser::Identifier);
    setState(364);
    match(ctcParser::T__4);
    setState(365);
    type_argument_list();
    setState(366);
    match(ctcParser::T__5);
    setState(370);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Inline

    || _la == ctcParser::Noexcept) {
      setState(367);
      fn_specifier();
      setState(372);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(373);
    match(ctcParser::T__0);
   
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
  enterRule(_localctx, 52, ctcParser::RuleInterface_body);
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
    setState(378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(375);
      interface_element();
      setState(380);
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

tree::TerminalNode* ctcParser::Interface_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 54, ctcParser::RuleInterface_decl);
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
    setState(381);
    match(ctcParser::Interface);
    setState(382);
    match(ctcParser::Identifier);
    setState(383);
    match(ctcParser::T__2);
    setState(384);
    interface_body();
    setState(385);
    match(ctcParser::T__3);
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__0) {
      setState(386);
      match(ctcParser::T__0);
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
  enterRule(_localctx, 56, ctcParser::RuleEnum_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
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

std::vector<tree::TerminalNode *> ctcParser::Enum_bodyContext::Identifier() {
  return getTokens(ctcParser::Identifier);
}

tree::TerminalNode* ctcParser::Enum_bodyContext::Identifier(size_t i) {
  return getToken(ctcParser::Identifier, i);
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
  enterRule(_localctx, 58, ctcParser::RuleEnum_body);
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
    setState(391);
    match(ctcParser::Identifier);
    setState(396);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(392);
      match(ctcParser::T__6);
      setState(393);
      match(ctcParser::Identifier);
      setState(398);
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

tree::TerminalNode* ctcParser::Enum_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 60, ctcParser::RuleEnum_decl);
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
    setState(399);
    match(ctcParser::Enum);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Class) {
      setState(400);
      enum_modifier();
    }
    setState(403);
    match(ctcParser::Identifier);
    setState(404);
    match(ctcParser::T__2);
    setState(405);
    enum_body();
    setState(406);
    match(ctcParser::T__3);
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__0) {
      setState(407);
      match(ctcParser::T__0);
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

tree::TerminalNode* ctcParser::Using_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 62, ctcParser::RuleUsing_decl);

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
    match(ctcParser::Using);
    setState(416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier: {
        setState(411);
        match(ctcParser::Identifier);
        setState(412);
        match(ctcParser::T__0);
        break;
      }

      case ctcParser::Namespace: {
        setState(413);
        match(ctcParser::Namespace);
        setState(414);
        match(ctcParser::Identifier);
        setState(415);
        match(ctcParser::T__0);
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

tree::TerminalNode* ctcParser::Namespace_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 64, ctcParser::RuleNamespace_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(427);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(418);
      match(ctcParser::Namespace);
      setState(419);
      match(ctcParser::Identifier);
      setState(420);
      match(ctcParser::T__2);
      setState(421);
      statement();
      setState(422);
      match(ctcParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(424);
      match(ctcParser::Namespace);
      setState(425);
      match(ctcParser::Identifier);
      setState(426);
      match(ctcParser::T__0);
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
  enterRule(_localctx, 66, ctcParser::RuleFn_specifier);
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
    setState(429);
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

tree::TerminalNode* ctcParser::Fn_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 68, ctcParser::RuleFn_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(465);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(432);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(431);
        storage_specifier();
      }
      setState(434);
      type_specifier();
      setState(435);
      match(ctcParser::Identifier);
      setState(436);
      match(ctcParser::T__4);
      setState(437);
      type_argument_list();
      setState(438);
      match(ctcParser::T__5);
      setState(442);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(439);
        fn_specifier();
        setState(444);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(445);
      match(ctcParser::T__2);
      setState(446);
      statement();
      setState(447);
      match(ctcParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(450);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(449);
        storage_specifier();
      }
      setState(452);
      type_specifier();
      setState(453);
      match(ctcParser::Identifier);
      setState(454);
      match(ctcParser::T__4);
      setState(455);
      type_argument_list();
      setState(456);
      match(ctcParser::T__5);
      setState(460);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(457);
        fn_specifier();
        setState(462);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(463);
      match(ctcParser::T__0);
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

tree::TerminalNode* ctcParser::Type_argumentContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 70, ctcParser::RuleType_argument);
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
    setState(467);
    type();
    setState(469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Identifier) {
      setState(468);
      match(ctcParser::Identifier);
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
  enterRule(_localctx, 72, ctcParser::RuleType_argument_list);
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
    setState(471);
    type_argument();
    setState(476);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(472);
      match(ctcParser::T__6);
      setState(473);
      type_argument();
      setState(478);
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
  enterRule(_localctx, 74, ctcParser::RuleArgumentExpressionList);
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
    setState(479);
    assignment_expression();
    setState(484);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(480);
      match(ctcParser::T__6);
      setState(481);
      assignment_expression();
      setState(486);
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

tree::TerminalNode* ctcParser::Use_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 76, ctcParser::RuleUse_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(ctcParser::Use);
    setState(488);
    match(ctcParser::Identifier);
    setState(489);
    match(ctcParser::T__0);
   
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

tree::TerminalNode* ctcParser::Compile_if_predicateContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 78, ctcParser::RuleCompile_if_predicate);

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
      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(491);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(492);
        match(ctcParser::T__11);
        setState(493);
        match(ctcParser::Identifier);
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
  enterRule(_localctx, 80, ctcParser::RuleCctp_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(ctcParser::Compile_if);
    setState(497);
    match(ctcParser::T__12);
    setState(498);
    compile_if_predicate();
    setState(499);
    match(ctcParser::T__13);
    setState(500);
    match(ctcParser::T__2);
    setState(501);
    statement();
    setState(502);
    match(ctcParser::T__3);
   
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
  enterRule(_localctx, 82, ctcParser::RuleStorage_specifier);
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
    setState(504);
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
  enterRule(_localctx, 84, ctcParser::RuleVar_decl_specifier);
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
  enterRule(_localctx, 86, ctcParser::RuleLambda_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(ctcParser::T__2);
    setState(509);
    statement();
    setState(510);
    match(ctcParser::T__3);
   
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

tree::TerminalNode* ctcParser::Lambda_capture_modifierContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 88, ctcParser::RuleLambda_capture_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(516);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(512);
        match(ctcParser::T__14);
        setState(513);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(515);
        match(ctcParser::T__15);
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
  enterRule(_localctx, 90, ctcParser::RuleLambda_capture_by);
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
    setState(518);
    match(ctcParser::T__8);
    setState(519);
    lambda_capture_modifier();
    setState(524);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(520);
      match(ctcParser::T__6);
      setState(521);
      lambda_capture_modifier();
      setState(526);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(527);
    match(ctcParser::T__9);
   
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
  enterRule(_localctx, 92, ctcParser::RuleLambda_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    match(ctcParser::T__16);
    setState(530);
    lambda_capture_by();
    setState(531);
    match(ctcParser::T__4);
    setState(532);
    type_argument_list();
    setState(533);
    match(ctcParser::T__5);
    setState(534);
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
  enterRule(_localctx, 94, ctcParser::RuleConstant);
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
    setState(536);
    _la = _input->LA(1);
    if (!(((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & 7) != 0))) {
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

tree::TerminalNode* ctcParser::Primary_expressionContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 96, ctcParser::RulePrimary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(550);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(538);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant: {
        enterOuterAlt(_localctx, 2);
        setState(539);
        constant();
        break;
      }

      case ctcParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(540);
        lambda_expression();
        break;
      }

      case ctcParser::T__33:
      case ctcParser::EncodingPrefix: {
        enterOuterAlt(_localctx, 4);
        setState(542); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(541);
          string_literal();
          setState(544); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ctcParser::T__33

        || _la == ctcParser::EncodingPrefix);
        break;
      }

      case ctcParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(546);
        match(ctcParser::T__4);
        setState(547);
        expression();
        setState(548);
        match(ctcParser::T__5);
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
  enterRule(_localctx, 98, ctcParser::RuleMultiplicativeExpression);
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
    setState(552);
    cast_expression();
    setState(557);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1835008) != 0)) {
      setState(553);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1835008) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(554);
      cast_expression();
      setState(559);
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
  enterRule(_localctx, 100, ctcParser::RuleAdditiveExpression);
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
    setState(560);
    multiplicativeExpression();
    setState(565);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__20

    || _la == ctcParser::T__21) {
      setState(561);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__20

      || _la == ctcParser::T__21)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(562);
      multiplicativeExpression();
      setState(567);
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
  enterRule(_localctx, 102, ctcParser::RuleShiftExpression);
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
    setState(568);
    additiveExpression();
    setState(573);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__22

    || _la == ctcParser::T__23) {
      setState(569);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__22

      || _la == ctcParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(570);
      additiveExpression();
      setState(575);
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
  enterRule(_localctx, 104, ctcParser::RuleRelationalExpression);
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
    setState(576);
    shiftExpression();
    setState(581);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100687872) != 0)) {
      setState(577);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 100687872) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(578);
      shiftExpression();
      setState(583);
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
  enterRule(_localctx, 106, ctcParser::RuleEqualityExpression);
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
    setState(584);
    relationalExpression();
    setState(589);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__26

    || _la == ctcParser::T__27) {
      setState(585);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__26

      || _la == ctcParser::T__27)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(586);
      relationalExpression();
      setState(591);
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
  enterRule(_localctx, 108, ctcParser::RuleAndExpression);
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
    setState(592);
    equalityExpression();
    setState(597);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__14) {
      setState(593);
      match(ctcParser::T__14);
      setState(594);
      equalityExpression();
      setState(599);
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
  enterRule(_localctx, 110, ctcParser::RuleExclusiveOrExpression);
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
    setState(600);
    andExpression();
    setState(605);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__28) {
      setState(601);
      match(ctcParser::T__28);
      setState(602);
      andExpression();
      setState(607);
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
  enterRule(_localctx, 112, ctcParser::RuleInclusiveOrExpression);
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
    setState(608);
    exclusiveOrExpression();
    setState(613);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__29) {
      setState(609);
      match(ctcParser::T__29);
      setState(610);
      exclusiveOrExpression();
      setState(615);
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
  enterRule(_localctx, 114, ctcParser::RuleLogicalAndExpression);
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
    setState(616);
    inclusiveOrExpression();
    setState(621);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__30) {
      setState(617);
      match(ctcParser::T__30);
      setState(618);
      inclusiveOrExpression();
      setState(623);
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
  enterRule(_localctx, 116, ctcParser::RuleLogicalOrExpression);
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
    setState(624);
    logicalAndExpression();
    setState(629);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__31) {
      setState(625);
      match(ctcParser::T__31);
      setState(626);
      logicalAndExpression();
      setState(631);
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
  enterRule(_localctx, 118, ctcParser::RuleConditional_expression);
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
    setState(632);
    logicalOrExpression();
    setState(638);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__32) {
      setState(633);
      match(ctcParser::T__32);
      setState(634);
      expression();
      setState(635);
      match(ctcParser::T__1);
      setState(636);
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
  enterRule(_localctx, 120, ctcParser::RuleString_literal);
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
    setState(641);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::EncodingPrefix) {
      setState(640);
      match(ctcParser::EncodingPrefix);
    }
    setState(643);
    match(ctcParser::T__33);
    setState(645);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::SCharSequence) {
      setState(644);
      match(ctcParser::SCharSequence);
    }
    setState(647);
    match(ctcParser::T__33);
   
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
  enterRule(_localctx, 122, ctcParser::RuleAssignment_operator);
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
    setState(649);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35150012350720) != 0))) {
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

std::vector<tree::TerminalNode *> ctcParser::Postfix_expressionContext::Identifier() {
  return getTokens(ctcParser::Identifier);
}

tree::TerminalNode* ctcParser::Postfix_expressionContext::Identifier(size_t i) {
  return getToken(ctcParser::Identifier, i);
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
  enterRule(_localctx, 124, ctcParser::RulePostfix_expression);
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
    setState(651);
    primary_expression();
    setState(662);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 246290604623904) != 0)) {
      setState(660);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ctcParser::T__4: {
          setState(652);
          match(ctcParser::T__4);
          setState(653);
          argumentExpressionList();
          setState(654);
          match(ctcParser::T__5);
          break;
        }

        case ctcParser::T__10:
        case ctcParser::T__44: {
          setState(656);
          _la = _input->LA(1);
          if (!(_la == ctcParser::T__10

          || _la == ctcParser::T__44)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(657);
          match(ctcParser::Identifier);
          break;
        }

        case ctcParser::T__45: {
          setState(658);
          match(ctcParser::T__45);
          break;
        }

        case ctcParser::T__46: {
          setState(659);
          match(ctcParser::T__46);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(664);
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
  enterRule(_localctx, 126, ctcParser::RuleUnaryOperator);
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
    setState(665);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 281474983301120) != 0))) {
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
  enterRule(_localctx, 128, ctcParser::RuleCast_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(682);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(667);
      match(ctcParser::T__4);
      setState(668);
      type_specifier();
      setState(669);
      match(ctcParser::T__5);
      setState(670);
      cast_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(672);
      match(ctcParser::Dynamic_cast);
      setState(673);
      match(ctcParser::T__12);
      setState(674);
      type_specifier();
      setState(675);
      match(ctcParser::T__13);
      setState(676);
      match(ctcParser::T__4);
      setState(677);
      cast_expression();
      setState(678);
      match(ctcParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(680);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(681);
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
  enterRule(_localctx, 130, ctcParser::RuleUnary_expression);
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
    setState(687);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(684);
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
      setState(689);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
    setState(696);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__4:
      case ctcParser::T__16:
      case ctcParser::T__33:
      case ctcParser::Identifier:
      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant:
      case ctcParser::EncodingPrefix: {
        setState(690);
        postfix_expression();
        break;
      }

      case ctcParser::T__11:
      case ctcParser::T__14:
      case ctcParser::T__17:
      case ctcParser::T__20:
      case ctcParser::T__21:
      case ctcParser::T__47: {
        setState(691);
        unaryOperator();
        setState(692);
        cast_expression();
        break;
      }

      case ctcParser::T__48: {
        setState(694);
        match(ctcParser::T__48);
        setState(695);
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
  enterRule(_localctx, 132, ctcParser::RuleAssignment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(704);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(698);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(699);
      unary_expression();
      setState(700);
      assignment_operator();
      setState(701);
      assignment_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(703);
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
  enterRule(_localctx, 134, ctcParser::RuleExpression);
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
    setState(706);
    assignment_expression();
    setState(711);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__6) {
      setState(707);
      match(ctcParser::T__6);
      setState(708);
      assignment_expression();
      setState(713);
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

tree::TerminalNode* ctcParser::TypeContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
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
  enterRule(_localctx, 136, ctcParser::RuleType);
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
    setState(714);
    _la = _input->LA(1);
    if (!(((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 1044250625) != 0))) {
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
  enterRule(_localctx, 138, ctcParser::RuleIdentifier_specifier);
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
    setState(716);
    match(ctcParser::T__17);
    setState(720);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__17) {
      setState(717);
      match(ctcParser::T__17);
      setState(722);
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
  enterRule(_localctx, 140, ctcParser::RuleUnsigned_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(723);
    match(ctcParser::Unsigned);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_qualifierContext ------------------------------------------------------------------

ctcParser::Type_qualifierContext::Type_qualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Type_qualifierContext::Const() {
  return getToken(ctcParser::Const, 0);
}

tree::TerminalNode* ctcParser::Type_qualifierContext::Volatile() {
  return getToken(ctcParser::Volatile, 0);
}


size_t ctcParser::Type_qualifierContext::getRuleIndex() const {
  return ctcParser::RuleType_qualifier;
}


std::any ctcParser::Type_qualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitType_qualifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Type_qualifierContext* ctcParser::type_qualifier() {
  Type_qualifierContext *_localctx = _tracker.createInstance<Type_qualifierContext>(_ctx, getState());
  enterRule(_localctx, 142, ctcParser::RuleType_qualifier);
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
    setState(725);
    _la = _input->LA(1);
    if (!(_la == ctcParser::Const

    || _la == ctcParser::Volatile)) {
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

//----------------- TypeQualifierListContext ------------------------------------------------------------------

ctcParser::TypeQualifierListContext::TypeQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Type_qualifierContext *> ctcParser::TypeQualifierListContext::type_qualifier() {
  return getRuleContexts<ctcParser::Type_qualifierContext>();
}

ctcParser::Type_qualifierContext* ctcParser::TypeQualifierListContext::type_qualifier(size_t i) {
  return getRuleContext<ctcParser::Type_qualifierContext>(i);
}


size_t ctcParser::TypeQualifierListContext::getRuleIndex() const {
  return ctcParser::RuleTypeQualifierList;
}


std::any ctcParser::TypeQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitTypeQualifierList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::TypeQualifierListContext* ctcParser::typeQualifierList() {
  TypeQualifierListContext *_localctx = _tracker.createInstance<TypeQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 144, ctcParser::RuleTypeQualifierList);
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
    setState(728); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(727);
      type_qualifier();
      setState(730); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ctcParser::Const

    || _la == ctcParser::Volatile);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

ctcParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::TypeQualifierListContext *> ctcParser::PointerContext::typeQualifierList() {
  return getRuleContexts<ctcParser::TypeQualifierListContext>();
}

ctcParser::TypeQualifierListContext* ctcParser::PointerContext::typeQualifierList(size_t i) {
  return getRuleContext<ctcParser::TypeQualifierListContext>(i);
}


size_t ctcParser::PointerContext::getRuleIndex() const {
  return ctcParser::RulePointer;
}


std::any ctcParser::PointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitPointer(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::PointerContext* ctcParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 146, ctcParser::RulePointer);
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
    setState(736); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(732);
              match(ctcParser::T__17);
              setState(734);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == ctcParser::Const

              || _la == ctcParser::Volatile) {
                setState(733);
                typeQualifierList();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(738); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

ctcParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Unsigned_specifierContext* ctcParser::SpecifierQualifierListContext::unsigned_specifier() {
  return getRuleContext<ctcParser::Unsigned_specifierContext>(0);
}

ctcParser::TypeContext* ctcParser::SpecifierQualifierListContext::type() {
  return getRuleContext<ctcParser::TypeContext>(0);
}

ctcParser::Type_qualifierContext* ctcParser::SpecifierQualifierListContext::type_qualifier() {
  return getRuleContext<ctcParser::Type_qualifierContext>(0);
}

ctcParser::SpecifierQualifierListContext* ctcParser::SpecifierQualifierListContext::specifierQualifierList() {
  return getRuleContext<ctcParser::SpecifierQualifierListContext>(0);
}


size_t ctcParser::SpecifierQualifierListContext::getRuleIndex() const {
  return ctcParser::RuleSpecifierQualifierList;
}


std::any ctcParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::SpecifierQualifierListContext* ctcParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 148, ctcParser::RuleSpecifierQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Unsigned: {
        setState(740);
        unsigned_specifier();
        break;
      }

      case ctcParser::Identifier:
      case ctcParser::Void:
      case ctcParser::Auto:
      case ctcParser::Char:
      case ctcParser::Bool:
      case ctcParser::Short:
      case ctcParser::Int:
      case ctcParser::Long:
      case ctcParser::Float:
      case ctcParser::Double:
      case ctcParser::Double128: {
        setState(741);
        type();
        break;
      }

      case ctcParser::Const:
      case ctcParser::Volatile: {
        setState(742);
        type_qualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(746);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      setState(745);
      specifierQualifierList();
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

//----------------- RefqualifierContext ------------------------------------------------------------------

ctcParser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::RefqualifierContext::getRuleIndex() const {
  return ctcParser::RuleRefqualifier;
}


std::any ctcParser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::RefqualifierContext* ctcParser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 150, ctcParser::RuleRefqualifier);
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
    setState(748);
    _la = _input->LA(1);
    if (!(_la == ctcParser::T__14

    || _la == ctcParser::T__30)) {
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

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

ctcParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::PointerContext* ctcParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<ctcParser::PointerContext>(0);
}

ctcParser::RefqualifierContext* ctcParser::AbstractDeclaratorContext::refqualifier() {
  return getRuleContext<ctcParser::RefqualifierContext>(0);
}


size_t ctcParser::AbstractDeclaratorContext::getRuleIndex() const {
  return ctcParser::RuleAbstractDeclarator;
}


std::any ctcParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::AbstractDeclaratorContext* ctcParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 152, ctcParser::RuleAbstractDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(752);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(750);
        pointer();
        break;
      }

      case ctcParser::T__14:
      case ctcParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(751);
        refqualifier();
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

//----------------- Type_specifierContext ------------------------------------------------------------------

ctcParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::SpecifierQualifierListContext* ctcParser::Type_specifierContext::specifierQualifierList() {
  return getRuleContext<ctcParser::SpecifierQualifierListContext>(0);
}

ctcParser::AbstractDeclaratorContext* ctcParser::Type_specifierContext::abstractDeclarator() {
  return getRuleContext<ctcParser::AbstractDeclaratorContext>(0);
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
  enterRule(_localctx, 154, ctcParser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(754);
    specifierQualifierList();
    setState(756);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(755);
      abstractDeclarator();
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

//----------------- Var_declContext ------------------------------------------------------------------

ctcParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::VdeclaratorContext* ctcParser::Var_declContext::vdeclarator() {
  return getRuleContext<ctcParser::VdeclaratorContext>(0);
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
  enterRule(_localctx, 156, ctcParser::RuleVar_decl);
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
    setState(759);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(758);
      storage_specifier();
    }
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Constexpr

    || _la == ctcParser::Consteval) {
      setState(761);
      var_decl_specifier();
    }
    setState(764);
    vdeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VdeclaratorContext ------------------------------------------------------------------

ctcParser::VdeclaratorContext::VdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Type_specifierContext *> ctcParser::VdeclaratorContext::type_specifier() {
  return getRuleContexts<ctcParser::Type_specifierContext>();
}

ctcParser::Type_specifierContext* ctcParser::VdeclaratorContext::type_specifier(size_t i) {
  return getRuleContext<ctcParser::Type_specifierContext>(i);
}

std::vector<tree::TerminalNode *> ctcParser::VdeclaratorContext::Identifier() {
  return getTokens(ctcParser::Identifier);
}

tree::TerminalNode* ctcParser::VdeclaratorContext::Identifier(size_t i) {
  return getToken(ctcParser::Identifier, i);
}

std::vector<ctcParser::Assignment_operatorContext *> ctcParser::VdeclaratorContext::assignment_operator() {
  return getRuleContexts<ctcParser::Assignment_operatorContext>();
}

ctcParser::Assignment_operatorContext* ctcParser::VdeclaratorContext::assignment_operator(size_t i) {
  return getRuleContext<ctcParser::Assignment_operatorContext>(i);
}

std::vector<ctcParser::Primary_expressionContext *> ctcParser::VdeclaratorContext::primary_expression() {
  return getRuleContexts<ctcParser::Primary_expressionContext>();
}

ctcParser::Primary_expressionContext* ctcParser::VdeclaratorContext::primary_expression(size_t i) {
  return getRuleContext<ctcParser::Primary_expressionContext>(i);
}


size_t ctcParser::VdeclaratorContext::getRuleIndex() const {
  return ctcParser::RuleVdeclarator;
}


std::any ctcParser::VdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitVdeclarator(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::VdeclaratorContext* ctcParser::vdeclarator() {
  VdeclaratorContext *_localctx = _tracker.createInstance<VdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 158, ctcParser::RuleVdeclarator);
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
    setState(766);
    type_specifier();
    setState(767);
    match(ctcParser::Identifier);
    setState(771);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35150012350720) != 0)) {
      setState(768);
      assignment_operator();
      setState(769);
      primary_expression();
    }

    setState(773);
    match(ctcParser::T__6);
    setState(774);
    type_specifier();
    setState(775);
    match(ctcParser::Identifier);
    setState(779);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35150012350720) != 0)) {
      setState(776);
      assignment_operator();
      setState(777);
      primary_expression();
    }
    setState(781);
    match(ctcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ctcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ctcParserInitialize();
#else
  ::antlr4::internal::call_once(ctcParserOnceFlag, ctcParserInitialize);
#endif
}
