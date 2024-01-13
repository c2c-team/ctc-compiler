
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
      "main", "statement", "asm_body", "asm_def", "class_field_def", "class_method_def", 
      "class_body", "class_implement", "class_qualifier", "class_decl", 
      "control_flow_stmt", "switch_case", "switch_body", "switch_stmt", 
      "if_stmt", "do_while_stmt", "while_stmt", "forCondition", "declarationSpecifiers", 
      "initDeclaratorList", "initDeclarator", "initializer", "initializerList", 
      "designation", "designatorList", "designator", "declarator", "constantExpression", 
      "declarationSpecifier", "forDeclaration", "forExpression", "for_stmt", 
      "access_modifier", "interface_element", "interface_body", "interface_decl", 
      "enum_modifier", "enum_body", "enum_decl", "using_decl", "namespace_decl", 
      "fn_specifier", "fn_decl", "type_argument", "type_argument_list", 
      "argumentExpressionList", "use_decl", "compile_if_predicate", "cctp_decl", 
      "storage_specifier", "var_decl_specifier", "lambda_body", "lambda_capture_modifier", 
      "lambda_capture_by", "lambda_expression", "constant", "primary_expression", 
      "multiplicativeExpression", "additiveExpression", "shiftExpression", 
      "relationalExpression", "equalityExpression", "andExpression", "exclusiveOrExpression", 
      "inclusiveOrExpression", "logicalAndExpression", "logicalOrExpression", 
      "conditional_expression", "string_literal", "assignment_operator", 
      "postfix_expression", "unaryOperator", "cast_expression", "unary_expression", 
      "assignment_expression", "expression", "type", "identifier_specifier", 
      "unsigned_specifier", "type_qualifier", "typeQualifierList", "pointer", 
      "specifierQualifierList", "refqualifier", "abstractDeclarator", "type_specifier", 
      "var_decl", "vdeclarator"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'='", "'('", "')'", "':'", "','", "'['", 
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
      "'default'", "'case'", "'return'", "'override'", "'__asm__'", "'at'", 
      "'intel'"
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
      "Override", "Asm", "Att", "Intel", "Sealed", "IntegerConstant", "FloatingConstant", 
      "CharacterConstant", "EncodingPrefix", "SCharSequence"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,102,904,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,2,87,7,87,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,196,8,1,10,1,12,1,199,9,1,
  	1,2,1,2,5,2,203,8,2,10,2,12,2,206,9,2,1,2,1,2,1,3,1,3,3,3,212,8,3,1,3,
  	3,3,215,8,3,1,3,1,3,3,3,219,8,3,1,4,3,4,222,8,4,1,4,3,4,225,8,4,1,4,1,
  	4,1,4,1,4,3,4,231,8,4,1,4,1,4,1,5,3,5,236,8,5,1,5,3,5,239,8,5,1,5,3,5,
  	242,8,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,250,8,5,10,5,12,5,253,9,5,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,5,6,262,8,6,10,6,12,6,265,9,6,1,6,1,6,1,7,1,7,1,7,
  	1,7,5,7,273,8,7,10,7,12,7,276,9,7,1,8,1,8,1,9,3,9,281,8,9,1,9,3,9,284,
  	8,9,1,9,1,9,1,9,3,9,289,8,9,1,9,1,9,3,9,293,8,9,1,10,1,10,3,10,297,8,
  	10,1,10,1,10,1,10,1,10,1,10,3,10,304,8,10,1,11,1,11,1,11,1,11,3,11,310,
  	8,11,1,11,1,11,1,11,3,11,315,8,11,1,12,1,12,5,12,319,8,12,10,12,12,12,
  	322,9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,344,8,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,17,1,17,3,17,366,8,17,3,17,368,8,17,1,17,1,17,3,17,372,8,17,1,
  	17,1,17,3,17,376,8,17,1,18,4,18,379,8,18,11,18,12,18,380,1,19,1,19,1,
  	19,5,19,386,8,19,10,19,12,19,389,9,19,1,20,1,20,1,20,3,20,394,8,20,1,
  	21,1,21,1,21,1,21,3,21,400,8,21,1,21,1,21,3,21,404,8,21,1,22,3,22,407,
  	8,22,1,22,1,22,1,22,3,22,412,8,22,1,22,5,22,415,8,22,10,22,12,22,418,
  	9,22,1,23,1,23,1,23,1,24,4,24,424,8,24,11,24,12,24,425,1,25,1,25,1,25,
  	1,25,1,25,1,25,3,25,434,8,25,1,26,1,26,3,26,438,8,26,1,26,1,26,1,27,1,
  	27,1,28,1,28,1,28,3,28,447,8,28,1,29,1,29,3,29,451,8,29,1,30,1,30,1,30,
  	5,30,456,8,30,10,30,12,30,459,9,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,32,1,32,1,33,1,33,3,33,473,8,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	5,33,481,8,33,10,33,12,33,484,9,33,1,33,1,33,1,34,5,34,489,8,34,10,34,
  	12,34,492,9,34,1,35,1,35,1,35,1,35,1,35,1,35,3,35,500,8,35,1,36,1,36,
  	1,37,1,37,1,37,5,37,507,8,37,10,37,12,37,510,9,37,1,38,1,38,3,38,514,
  	8,38,1,38,1,38,1,38,1,38,1,38,3,38,521,8,38,1,39,1,39,1,39,1,39,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,39,3,39,534,8,39,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,3,40,545,8,40,1,41,1,41,1,42,3,42,550,8,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,5,42,558,8,42,10,42,12,42,561,9,42,1,42,1,42,1,
  	42,1,42,1,42,3,42,568,8,42,1,42,1,42,1,42,1,42,1,42,1,42,5,42,576,8,42,
  	10,42,12,42,579,9,42,1,42,1,42,3,42,583,8,42,1,43,1,43,3,43,587,8,43,
  	1,44,1,44,1,44,5,44,592,8,44,10,44,12,44,595,9,44,1,45,1,45,1,45,5,45,
  	600,8,45,10,45,12,45,603,9,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,3,47,
  	612,8,47,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,49,1,49,1,50,1,50,
  	1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,3,52,634,8,52,1,53,1,53,1,53,
  	1,53,5,53,640,8,53,10,53,12,53,643,9,53,1,53,1,53,1,54,1,54,1,54,1,54,
  	1,54,1,54,1,54,1,55,1,55,1,56,1,56,1,56,1,56,4,56,660,8,56,11,56,12,56,
  	661,1,56,1,56,1,56,1,56,3,56,668,8,56,1,57,1,57,1,57,5,57,673,8,57,10,
  	57,12,57,676,9,57,1,58,1,58,1,58,5,58,681,8,58,10,58,12,58,684,9,58,1,
  	59,1,59,1,59,5,59,689,8,59,10,59,12,59,692,9,59,1,60,1,60,1,60,5,60,697,
  	8,60,10,60,12,60,700,9,60,1,61,1,61,1,61,5,61,705,8,61,10,61,12,61,708,
  	9,61,1,62,1,62,1,62,5,62,713,8,62,10,62,12,62,716,9,62,1,63,1,63,1,63,
  	5,63,721,8,63,10,63,12,63,724,9,63,1,64,1,64,1,64,5,64,729,8,64,10,64,
  	12,64,732,9,64,1,65,1,65,1,65,5,65,737,8,65,10,65,12,65,740,9,65,1,66,
  	1,66,1,66,5,66,745,8,66,10,66,12,66,748,9,66,1,67,1,67,1,67,1,67,1,67,
  	1,67,3,67,756,8,67,1,68,3,68,759,8,68,1,68,1,68,3,68,763,8,68,1,68,1,
  	68,1,69,1,69,1,70,1,70,1,70,1,70,1,70,1,70,1,70,1,70,1,70,5,70,778,8,
  	70,10,70,12,70,781,9,70,1,71,1,71,1,72,1,72,1,72,1,72,1,72,1,72,1,72,
  	1,72,1,72,1,72,1,72,1,72,1,72,1,72,1,72,3,72,800,8,72,1,73,5,73,803,8,
  	73,10,73,12,73,806,9,73,1,73,1,73,1,73,1,73,1,73,1,73,3,73,814,8,73,1,
  	74,1,74,1,74,1,74,1,74,1,74,3,74,822,8,74,1,75,1,75,1,75,5,75,827,8,75,
  	10,75,12,75,830,9,75,1,76,1,76,1,77,1,77,5,77,836,8,77,10,77,12,77,839,
  	9,77,1,78,1,78,1,79,1,79,1,80,4,80,846,8,80,11,80,12,80,847,1,81,1,81,
  	3,81,852,8,81,4,81,854,8,81,11,81,12,81,855,1,82,1,82,1,82,3,82,861,8,
  	82,1,82,3,82,864,8,82,1,83,1,83,1,84,1,84,3,84,870,8,84,1,85,1,85,3,85,
  	874,8,85,1,86,3,86,877,8,86,1,86,3,86,880,8,86,1,86,1,86,1,87,1,87,1,
  	87,1,87,3,87,888,8,87,1,87,1,87,1,87,1,87,1,87,3,87,895,8,87,5,87,897,
  	8,87,10,87,12,87,900,9,87,1,87,1,87,1,87,0,0,88,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,
  	108,110,112,114,116,118,120,122,124,126,128,130,132,134,136,138,140,142,
  	144,146,148,150,152,154,156,158,160,162,164,166,168,170,172,174,0,19,
  	1,0,2,2,1,0,95,96,1,0,53,54,1,0,60,61,1,0,64,65,1,0,66,67,1,0,98,100,
  	1,0,18,20,1,0,21,22,1,0,23,24,2,0,13,14,25,26,1,0,27,28,2,0,4,4,35,44,
  	2,0,11,11,45,45,5,0,12,12,15,15,18,18,21,22,48,48,2,0,46,47,49,49,3,0,
  	52,52,69,73,77,81,1,0,83,84,2,0,15,15,31,31,943,0,176,1,0,0,0,2,197,1,
  	0,0,0,4,200,1,0,0,0,6,209,1,0,0,0,8,221,1,0,0,0,10,235,1,0,0,0,12,258,
  	1,0,0,0,14,268,1,0,0,0,16,277,1,0,0,0,18,280,1,0,0,0,20,303,1,0,0,0,22,
  	314,1,0,0,0,24,316,1,0,0,0,26,325,1,0,0,0,28,331,1,0,0,0,30,345,1,0,0,
  	0,32,355,1,0,0,0,34,367,1,0,0,0,36,378,1,0,0,0,38,382,1,0,0,0,40,390,
  	1,0,0,0,42,403,1,0,0,0,44,406,1,0,0,0,46,419,1,0,0,0,48,423,1,0,0,0,50,
  	433,1,0,0,0,52,437,1,0,0,0,54,441,1,0,0,0,56,446,1,0,0,0,58,448,1,0,0,
  	0,60,452,1,0,0,0,62,460,1,0,0,0,64,468,1,0,0,0,66,470,1,0,0,0,68,490,
  	1,0,0,0,70,493,1,0,0,0,72,501,1,0,0,0,74,503,1,0,0,0,76,511,1,0,0,0,78,
  	522,1,0,0,0,80,544,1,0,0,0,82,546,1,0,0,0,84,582,1,0,0,0,86,584,1,0,0,
  	0,88,588,1,0,0,0,90,596,1,0,0,0,92,604,1,0,0,0,94,611,1,0,0,0,96,613,
  	1,0,0,0,98,621,1,0,0,0,100,623,1,0,0,0,102,625,1,0,0,0,104,633,1,0,0,
  	0,106,635,1,0,0,0,108,646,1,0,0,0,110,653,1,0,0,0,112,667,1,0,0,0,114,
  	669,1,0,0,0,116,677,1,0,0,0,118,685,1,0,0,0,120,693,1,0,0,0,122,701,1,
  	0,0,0,124,709,1,0,0,0,126,717,1,0,0,0,128,725,1,0,0,0,130,733,1,0,0,0,
  	132,741,1,0,0,0,134,749,1,0,0,0,136,758,1,0,0,0,138,766,1,0,0,0,140,768,
  	1,0,0,0,142,782,1,0,0,0,144,799,1,0,0,0,146,804,1,0,0,0,148,821,1,0,0,
  	0,150,823,1,0,0,0,152,831,1,0,0,0,154,833,1,0,0,0,156,840,1,0,0,0,158,
  	842,1,0,0,0,160,845,1,0,0,0,162,853,1,0,0,0,164,860,1,0,0,0,166,865,1,
  	0,0,0,168,869,1,0,0,0,170,871,1,0,0,0,172,876,1,0,0,0,174,883,1,0,0,0,
  	176,177,3,2,1,0,177,178,5,0,0,1,178,1,1,0,0,0,179,196,3,6,3,0,180,196,
  	3,18,9,0,181,196,3,20,10,0,182,196,3,26,13,0,183,196,3,28,14,0,184,196,
  	3,30,15,0,185,196,3,32,16,0,186,196,3,62,31,0,187,196,3,70,35,0,188,196,
  	3,76,38,0,189,196,3,78,39,0,190,196,3,80,40,0,191,196,3,96,48,0,192,196,
  	3,172,86,0,193,196,3,84,42,0,194,196,3,92,46,0,195,179,1,0,0,0,195,180,
  	1,0,0,0,195,181,1,0,0,0,195,182,1,0,0,0,195,183,1,0,0,0,195,184,1,0,0,
  	0,195,185,1,0,0,0,195,186,1,0,0,0,195,187,1,0,0,0,195,188,1,0,0,0,195,
  	189,1,0,0,0,195,190,1,0,0,0,195,191,1,0,0,0,195,192,1,0,0,0,195,193,1,
  	0,0,0,195,194,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,198,1,0,0,0,
  	198,3,1,0,0,0,199,197,1,0,0,0,200,204,5,1,0,0,201,203,8,0,0,0,202,201,
  	1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,207,1,0,0,
  	0,206,204,1,0,0,0,207,208,5,2,0,0,208,5,1,0,0,0,209,211,5,94,0,0,210,
  	212,7,1,0,0,211,210,1,0,0,0,211,212,1,0,0,0,212,214,1,0,0,0,213,215,5,
  	84,0,0,214,213,1,0,0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,218,3,4,2,
  	0,217,219,5,3,0,0,218,217,1,0,0,0,218,219,1,0,0,0,219,7,1,0,0,0,220,222,
  	3,64,32,0,221,220,1,0,0,0,221,222,1,0,0,0,222,224,1,0,0,0,223,225,5,64,
  	0,0,224,223,1,0,0,0,224,225,1,0,0,0,225,226,1,0,0,0,226,227,3,170,85,
  	0,227,230,5,52,0,0,228,229,5,4,0,0,229,231,3,148,74,0,230,228,1,0,0,0,
  	230,231,1,0,0,0,231,232,1,0,0,0,232,233,5,3,0,0,233,9,1,0,0,0,234,236,
  	3,64,32,0,235,234,1,0,0,0,235,236,1,0,0,0,236,238,1,0,0,0,237,239,5,64,
  	0,0,238,237,1,0,0,0,238,239,1,0,0,0,239,241,1,0,0,0,240,242,5,93,0,0,
  	241,240,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,3,170,85,0,244,
  	245,5,52,0,0,245,246,5,5,0,0,246,247,3,88,44,0,247,251,5,6,0,0,248,250,
  	3,82,41,0,249,248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,
  	0,0,252,254,1,0,0,0,253,251,1,0,0,0,254,255,5,1,0,0,255,256,3,2,1,0,256,
  	257,5,2,0,0,257,11,1,0,0,0,258,263,5,1,0,0,259,262,3,8,4,0,260,262,3,
  	10,5,0,261,259,1,0,0,0,261,260,1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,
  	0,263,264,1,0,0,0,264,266,1,0,0,0,265,263,1,0,0,0,266,267,5,2,0,0,267,
  	13,1,0,0,0,268,269,5,7,0,0,269,274,5,52,0,0,270,271,5,8,0,0,271,273,5,
  	52,0,0,272,270,1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,
  	0,275,15,1,0,0,0,276,274,1,0,0,0,277,278,5,97,0,0,278,17,1,0,0,0,279,
  	281,3,64,32,0,280,279,1,0,0,0,280,281,1,0,0,0,281,283,1,0,0,0,282,284,
  	3,16,8,0,283,282,1,0,0,0,283,284,1,0,0,0,284,285,1,0,0,0,285,286,5,56,
  	0,0,286,288,5,52,0,0,287,289,3,14,7,0,288,287,1,0,0,0,288,289,1,0,0,0,
  	289,290,1,0,0,0,290,292,3,12,6,0,291,293,5,3,0,0,292,291,1,0,0,0,292,
  	293,1,0,0,0,293,19,1,0,0,0,294,296,5,92,0,0,295,297,3,112,56,0,296,295,
  	1,0,0,0,296,297,1,0,0,0,297,298,1,0,0,0,298,304,5,3,0,0,299,300,5,87,
  	0,0,300,304,5,3,0,0,301,302,5,88,0,0,302,304,5,3,0,0,303,294,1,0,0,0,
  	303,299,1,0,0,0,303,301,1,0,0,0,304,21,1,0,0,0,305,306,5,91,0,0,306,307,
  	3,112,56,0,307,309,5,7,0,0,308,310,3,2,1,0,309,308,1,0,0,0,309,310,1,
  	0,0,0,310,315,1,0,0,0,311,312,5,90,0,0,312,313,5,7,0,0,313,315,3,2,1,
  	0,314,305,1,0,0,0,314,311,1,0,0,0,315,23,1,0,0,0,316,320,5,1,0,0,317,
  	319,3,22,11,0,318,317,1,0,0,0,319,322,1,0,0,0,320,318,1,0,0,0,320,321,
  	1,0,0,0,321,323,1,0,0,0,322,320,1,0,0,0,323,324,5,2,0,0,324,25,1,0,0,
  	0,325,326,5,86,0,0,326,327,5,5,0,0,327,328,3,150,75,0,328,329,5,6,0,0,
  	329,330,3,24,12,0,330,27,1,0,0,0,331,332,5,85,0,0,332,333,5,5,0,0,333,
  	334,3,150,75,0,334,335,5,6,0,0,335,336,5,1,0,0,336,337,3,2,1,0,337,343,
  	5,2,0,0,338,339,5,89,0,0,339,340,5,1,0,0,340,341,3,2,1,0,341,342,5,2,
  	0,0,342,344,1,0,0,0,343,338,1,0,0,0,343,344,1,0,0,0,344,29,1,0,0,0,345,
  	346,5,74,0,0,346,347,5,1,0,0,347,348,3,2,1,0,348,349,5,2,0,0,349,350,
  	5,75,0,0,350,351,5,5,0,0,351,352,3,150,75,0,352,353,5,6,0,0,353,354,5,
  	3,0,0,354,31,1,0,0,0,355,356,5,75,0,0,356,357,5,5,0,0,357,358,3,150,75,
  	0,358,359,5,6,0,0,359,360,5,1,0,0,360,361,3,2,1,0,361,362,5,2,0,0,362,
  	33,1,0,0,0,363,368,3,58,29,0,364,366,3,150,75,0,365,364,1,0,0,0,365,366,
  	1,0,0,0,366,368,1,0,0,0,367,363,1,0,0,0,367,365,1,0,0,0,368,369,1,0,0,
  	0,369,371,5,3,0,0,370,372,3,60,30,0,371,370,1,0,0,0,371,372,1,0,0,0,372,
  	373,1,0,0,0,373,375,5,3,0,0,374,376,3,60,30,0,375,374,1,0,0,0,375,376,
  	1,0,0,0,376,35,1,0,0,0,377,379,3,56,28,0,378,377,1,0,0,0,379,380,1,0,
  	0,0,380,378,1,0,0,0,380,381,1,0,0,0,381,37,1,0,0,0,382,387,3,40,20,0,
  	383,384,5,8,0,0,384,386,3,40,20,0,385,383,1,0,0,0,386,389,1,0,0,0,387,
  	385,1,0,0,0,387,388,1,0,0,0,388,39,1,0,0,0,389,387,1,0,0,0,390,393,3,
  	52,26,0,391,392,5,4,0,0,392,394,3,42,21,0,393,391,1,0,0,0,393,394,1,0,
  	0,0,394,41,1,0,0,0,395,404,3,148,74,0,396,397,5,1,0,0,397,399,3,44,22,
  	0,398,400,5,8,0,0,399,398,1,0,0,0,399,400,1,0,0,0,400,401,1,0,0,0,401,
  	402,5,2,0,0,402,404,1,0,0,0,403,395,1,0,0,0,403,396,1,0,0,0,404,43,1,
  	0,0,0,405,407,3,46,23,0,406,405,1,0,0,0,406,407,1,0,0,0,407,408,1,0,0,
  	0,408,416,3,42,21,0,409,411,5,8,0,0,410,412,3,46,23,0,411,410,1,0,0,0,
  	411,412,1,0,0,0,412,413,1,0,0,0,413,415,3,42,21,0,414,409,1,0,0,0,415,
  	418,1,0,0,0,416,414,1,0,0,0,416,417,1,0,0,0,417,45,1,0,0,0,418,416,1,
  	0,0,0,419,420,3,48,24,0,420,421,5,4,0,0,421,47,1,0,0,0,422,424,3,50,25,
  	0,423,422,1,0,0,0,424,425,1,0,0,0,425,423,1,0,0,0,425,426,1,0,0,0,426,
  	49,1,0,0,0,427,428,5,9,0,0,428,429,3,54,27,0,429,430,5,10,0,0,430,434,
  	1,0,0,0,431,432,5,11,0,0,432,434,5,52,0,0,433,427,1,0,0,0,433,431,1,0,
  	0,0,434,51,1,0,0,0,435,438,3,162,81,0,436,438,3,166,83,0,437,435,1,0,
  	0,0,437,436,1,0,0,0,437,438,1,0,0,0,438,439,1,0,0,0,439,440,5,52,0,0,
  	440,53,1,0,0,0,441,442,3,134,67,0,442,55,1,0,0,0,443,447,3,98,49,0,444,
  	447,3,158,79,0,445,447,3,152,76,0,446,443,1,0,0,0,446,444,1,0,0,0,446,
  	445,1,0,0,0,447,57,1,0,0,0,448,450,3,36,18,0,449,451,3,38,19,0,450,449,
  	1,0,0,0,450,451,1,0,0,0,451,59,1,0,0,0,452,457,3,148,74,0,453,454,5,8,
  	0,0,454,456,3,148,74,0,455,453,1,0,0,0,456,459,1,0,0,0,457,455,1,0,0,
  	0,457,458,1,0,0,0,458,61,1,0,0,0,459,457,1,0,0,0,460,461,5,76,0,0,461,
  	462,5,5,0,0,462,463,3,34,17,0,463,464,5,6,0,0,464,465,5,1,0,0,465,466,
  	3,2,1,0,466,467,5,2,0,0,467,63,1,0,0,0,468,469,7,2,0,0,469,65,1,0,0,0,
  	470,472,3,64,32,0,471,473,3,98,49,0,472,471,1,0,0,0,472,473,1,0,0,0,473,
  	474,1,0,0,0,474,475,3,170,85,0,475,476,5,52,0,0,476,477,5,5,0,0,477,478,
  	3,88,44,0,478,482,5,6,0,0,479,481,3,82,41,0,480,479,1,0,0,0,481,484,1,
  	0,0,0,482,480,1,0,0,0,482,483,1,0,0,0,483,485,1,0,0,0,484,482,1,0,0,0,
  	485,486,5,3,0,0,486,67,1,0,0,0,487,489,3,66,33,0,488,487,1,0,0,0,489,
  	492,1,0,0,0,490,488,1,0,0,0,490,491,1,0,0,0,491,69,1,0,0,0,492,490,1,
  	0,0,0,493,494,5,55,0,0,494,495,5,52,0,0,495,496,5,1,0,0,496,497,3,68,
  	34,0,497,499,5,2,0,0,498,500,5,3,0,0,499,498,1,0,0,0,499,500,1,0,0,0,
  	500,71,1,0,0,0,501,502,5,56,0,0,502,73,1,0,0,0,503,508,5,52,0,0,504,505,
  	5,8,0,0,505,507,5,52,0,0,506,504,1,0,0,0,507,510,1,0,0,0,508,506,1,0,
  	0,0,508,509,1,0,0,0,509,75,1,0,0,0,510,508,1,0,0,0,511,513,5,57,0,0,512,
  	514,3,72,36,0,513,512,1,0,0,0,513,514,1,0,0,0,514,515,1,0,0,0,515,516,
  	5,52,0,0,516,517,5,1,0,0,517,518,3,74,37,0,518,520,5,2,0,0,519,521,5,
  	3,0,0,520,519,1,0,0,0,520,521,1,0,0,0,521,77,1,0,0,0,522,533,5,58,0,0,
  	523,524,5,52,0,0,524,534,5,3,0,0,525,526,5,52,0,0,526,527,5,4,0,0,527,
  	528,3,170,85,0,528,529,5,3,0,0,529,534,1,0,0,0,530,531,5,59,0,0,531,532,
  	5,52,0,0,532,534,5,3,0,0,533,523,1,0,0,0,533,525,1,0,0,0,533,530,1,0,
  	0,0,534,79,1,0,0,0,535,536,5,59,0,0,536,537,5,52,0,0,537,538,5,1,0,0,
  	538,539,3,2,1,0,539,540,5,2,0,0,540,545,1,0,0,0,541,542,5,59,0,0,542,
  	543,5,52,0,0,543,545,5,3,0,0,544,535,1,0,0,0,544,541,1,0,0,0,545,81,1,
  	0,0,0,546,547,7,3,0,0,547,83,1,0,0,0,548,550,3,98,49,0,549,548,1,0,0,
  	0,549,550,1,0,0,0,550,551,1,0,0,0,551,552,3,170,85,0,552,553,5,52,0,0,
  	553,554,5,5,0,0,554,555,3,88,44,0,555,559,5,6,0,0,556,558,3,82,41,0,557,
  	556,1,0,0,0,558,561,1,0,0,0,559,557,1,0,0,0,559,560,1,0,0,0,560,562,1,
  	0,0,0,561,559,1,0,0,0,562,563,5,1,0,0,563,564,3,2,1,0,564,565,5,2,0,0,
  	565,583,1,0,0,0,566,568,3,98,49,0,567,566,1,0,0,0,567,568,1,0,0,0,568,
  	569,1,0,0,0,569,570,3,170,85,0,570,571,5,52,0,0,571,572,5,5,0,0,572,573,
  	3,88,44,0,573,577,5,6,0,0,574,576,3,82,41,0,575,574,1,0,0,0,576,579,1,
  	0,0,0,577,575,1,0,0,0,577,578,1,0,0,0,578,580,1,0,0,0,579,577,1,0,0,0,
  	580,581,5,3,0,0,581,583,1,0,0,0,582,549,1,0,0,0,582,567,1,0,0,0,583,85,
  	1,0,0,0,584,586,3,152,76,0,585,587,5,52,0,0,586,585,1,0,0,0,586,587,1,
  	0,0,0,587,87,1,0,0,0,588,593,3,86,43,0,589,590,5,8,0,0,590,592,3,86,43,
  	0,591,589,1,0,0,0,592,595,1,0,0,0,593,591,1,0,0,0,593,594,1,0,0,0,594,
  	89,1,0,0,0,595,593,1,0,0,0,596,601,3,148,74,0,597,598,5,8,0,0,598,600,
  	3,148,74,0,599,597,1,0,0,0,600,603,1,0,0,0,601,599,1,0,0,0,601,602,1,
  	0,0,0,602,91,1,0,0,0,603,601,1,0,0,0,604,605,5,62,0,0,605,606,5,52,0,
  	0,606,607,5,3,0,0,607,93,1,0,0,0,608,612,5,52,0,0,609,610,5,12,0,0,610,
  	612,5,52,0,0,611,608,1,0,0,0,611,609,1,0,0,0,612,95,1,0,0,0,613,614,5,
  	63,0,0,614,615,5,13,0,0,615,616,3,94,47,0,616,617,5,14,0,0,617,618,5,
  	1,0,0,618,619,3,2,1,0,619,620,5,2,0,0,620,97,1,0,0,0,621,622,7,4,0,0,
  	622,99,1,0,0,0,623,624,7,5,0,0,624,101,1,0,0,0,625,626,5,1,0,0,626,627,
  	3,2,1,0,627,628,5,2,0,0,628,103,1,0,0,0,629,630,5,15,0,0,630,634,5,52,
  	0,0,631,634,5,52,0,0,632,634,5,16,0,0,633,629,1,0,0,0,633,631,1,0,0,0,
  	633,632,1,0,0,0,634,105,1,0,0,0,635,636,5,9,0,0,636,641,3,104,52,0,637,
  	638,5,8,0,0,638,640,3,104,52,0,639,637,1,0,0,0,640,643,1,0,0,0,641,639,
  	1,0,0,0,641,642,1,0,0,0,642,644,1,0,0,0,643,641,1,0,0,0,644,645,5,10,
  	0,0,645,107,1,0,0,0,646,647,5,17,0,0,647,648,3,106,53,0,648,649,5,5,0,
  	0,649,650,3,88,44,0,650,651,5,6,0,0,651,652,3,102,51,0,652,109,1,0,0,
  	0,653,654,7,6,0,0,654,111,1,0,0,0,655,668,5,52,0,0,656,668,3,110,55,0,
  	657,668,3,108,54,0,658,660,3,136,68,0,659,658,1,0,0,0,660,661,1,0,0,0,
  	661,659,1,0,0,0,661,662,1,0,0,0,662,668,1,0,0,0,663,664,5,5,0,0,664,665,
  	3,150,75,0,665,666,5,6,0,0,666,668,1,0,0,0,667,655,1,0,0,0,667,656,1,
  	0,0,0,667,657,1,0,0,0,667,659,1,0,0,0,667,663,1,0,0,0,668,113,1,0,0,0,
  	669,674,3,144,72,0,670,671,7,7,0,0,671,673,3,144,72,0,672,670,1,0,0,0,
  	673,676,1,0,0,0,674,672,1,0,0,0,674,675,1,0,0,0,675,115,1,0,0,0,676,674,
  	1,0,0,0,677,682,3,114,57,0,678,679,7,8,0,0,679,681,3,114,57,0,680,678,
  	1,0,0,0,681,684,1,0,0,0,682,680,1,0,0,0,682,683,1,0,0,0,683,117,1,0,0,
  	0,684,682,1,0,0,0,685,690,3,116,58,0,686,687,7,9,0,0,687,689,3,116,58,
  	0,688,686,1,0,0,0,689,692,1,0,0,0,690,688,1,0,0,0,690,691,1,0,0,0,691,
  	119,1,0,0,0,692,690,1,0,0,0,693,698,3,118,59,0,694,695,7,10,0,0,695,697,
  	3,118,59,0,696,694,1,0,0,0,697,700,1,0,0,0,698,696,1,0,0,0,698,699,1,
  	0,0,0,699,121,1,0,0,0,700,698,1,0,0,0,701,706,3,120,60,0,702,703,7,11,
  	0,0,703,705,3,120,60,0,704,702,1,0,0,0,705,708,1,0,0,0,706,704,1,0,0,
  	0,706,707,1,0,0,0,707,123,1,0,0,0,708,706,1,0,0,0,709,714,3,122,61,0,
  	710,711,5,15,0,0,711,713,3,122,61,0,712,710,1,0,0,0,713,716,1,0,0,0,714,
  	712,1,0,0,0,714,715,1,0,0,0,715,125,1,0,0,0,716,714,1,0,0,0,717,722,3,
  	124,62,0,718,719,5,29,0,0,719,721,3,124,62,0,720,718,1,0,0,0,721,724,
  	1,0,0,0,722,720,1,0,0,0,722,723,1,0,0,0,723,127,1,0,0,0,724,722,1,0,0,
  	0,725,730,3,126,63,0,726,727,5,30,0,0,727,729,3,126,63,0,728,726,1,0,
  	0,0,729,732,1,0,0,0,730,728,1,0,0,0,730,731,1,0,0,0,731,129,1,0,0,0,732,
  	730,1,0,0,0,733,738,3,128,64,0,734,735,5,31,0,0,735,737,3,128,64,0,736,
  	734,1,0,0,0,737,740,1,0,0,0,738,736,1,0,0,0,738,739,1,0,0,0,739,131,1,
  	0,0,0,740,738,1,0,0,0,741,746,3,130,65,0,742,743,5,32,0,0,743,745,3,130,
  	65,0,744,742,1,0,0,0,745,748,1,0,0,0,746,744,1,0,0,0,746,747,1,0,0,0,
  	747,133,1,0,0,0,748,746,1,0,0,0,749,755,3,132,66,0,750,751,5,33,0,0,751,
  	752,3,150,75,0,752,753,5,7,0,0,753,754,3,134,67,0,754,756,1,0,0,0,755,
  	750,1,0,0,0,755,756,1,0,0,0,756,135,1,0,0,0,757,759,5,101,0,0,758,757,
  	1,0,0,0,758,759,1,0,0,0,759,760,1,0,0,0,760,762,5,34,0,0,761,763,5,102,
  	0,0,762,761,1,0,0,0,762,763,1,0,0,0,763,764,1,0,0,0,764,765,5,34,0,0,
  	765,137,1,0,0,0,766,767,7,12,0,0,767,139,1,0,0,0,768,779,3,112,56,0,769,
  	770,5,5,0,0,770,771,3,90,45,0,771,772,5,6,0,0,772,778,1,0,0,0,773,774,
  	7,13,0,0,774,778,5,52,0,0,775,778,5,46,0,0,776,778,5,47,0,0,777,769,1,
  	0,0,0,777,773,1,0,0,0,777,775,1,0,0,0,777,776,1,0,0,0,778,781,1,0,0,0,
  	779,777,1,0,0,0,779,780,1,0,0,0,780,141,1,0,0,0,781,779,1,0,0,0,782,783,
  	7,14,0,0,783,143,1,0,0,0,784,785,5,5,0,0,785,786,3,170,85,0,786,787,5,
  	6,0,0,787,788,3,144,72,0,788,800,1,0,0,0,789,790,5,68,0,0,790,791,5,13,
  	0,0,791,792,3,170,85,0,792,793,5,14,0,0,793,794,5,5,0,0,794,795,3,144,
  	72,0,795,796,5,6,0,0,796,800,1,0,0,0,797,800,3,146,73,0,798,800,5,51,
  	0,0,799,784,1,0,0,0,799,789,1,0,0,0,799,797,1,0,0,0,799,798,1,0,0,0,800,
  	145,1,0,0,0,801,803,7,15,0,0,802,801,1,0,0,0,803,806,1,0,0,0,804,802,
  	1,0,0,0,804,805,1,0,0,0,805,813,1,0,0,0,806,804,1,0,0,0,807,814,3,140,
  	70,0,808,809,3,142,71,0,809,810,3,144,72,0,810,814,1,0,0,0,811,812,5,
  	49,0,0,812,814,3,170,85,0,813,807,1,0,0,0,813,808,1,0,0,0,813,811,1,0,
  	0,0,814,147,1,0,0,0,815,822,3,134,67,0,816,817,3,146,73,0,817,818,3,138,
  	69,0,818,819,3,148,74,0,819,822,1,0,0,0,820,822,5,51,0,0,821,815,1,0,
  	0,0,821,816,1,0,0,0,821,820,1,0,0,0,822,149,1,0,0,0,823,828,3,148,74,
  	0,824,825,5,8,0,0,825,827,3,148,74,0,826,824,1,0,0,0,827,830,1,0,0,0,
  	828,826,1,0,0,0,828,829,1,0,0,0,829,151,1,0,0,0,830,828,1,0,0,0,831,832,
  	7,16,0,0,832,153,1,0,0,0,833,837,5,18,0,0,834,836,5,18,0,0,835,834,1,
  	0,0,0,836,839,1,0,0,0,837,835,1,0,0,0,837,838,1,0,0,0,838,155,1,0,0,0,
  	839,837,1,0,0,0,840,841,5,82,0,0,841,157,1,0,0,0,842,843,7,17,0,0,843,
  	159,1,0,0,0,844,846,3,158,79,0,845,844,1,0,0,0,846,847,1,0,0,0,847,845,
  	1,0,0,0,847,848,1,0,0,0,848,161,1,0,0,0,849,851,5,18,0,0,850,852,3,160,
  	80,0,851,850,1,0,0,0,851,852,1,0,0,0,852,854,1,0,0,0,853,849,1,0,0,0,
  	854,855,1,0,0,0,855,853,1,0,0,0,855,856,1,0,0,0,856,163,1,0,0,0,857,861,
  	3,156,78,0,858,861,3,152,76,0,859,861,3,158,79,0,860,857,1,0,0,0,860,
  	858,1,0,0,0,860,859,1,0,0,0,861,863,1,0,0,0,862,864,3,164,82,0,863,862,
  	1,0,0,0,863,864,1,0,0,0,864,165,1,0,0,0,865,866,7,18,0,0,866,167,1,0,
  	0,0,867,870,3,162,81,0,868,870,3,166,83,0,869,867,1,0,0,0,869,868,1,0,
  	0,0,870,169,1,0,0,0,871,873,3,164,82,0,872,874,3,168,84,0,873,872,1,0,
  	0,0,873,874,1,0,0,0,874,171,1,0,0,0,875,877,3,98,49,0,876,875,1,0,0,0,
  	876,877,1,0,0,0,877,879,1,0,0,0,878,880,3,100,50,0,879,878,1,0,0,0,879,
  	880,1,0,0,0,880,881,1,0,0,0,881,882,3,174,87,0,882,173,1,0,0,0,883,884,
  	3,170,85,0,884,887,5,52,0,0,885,886,5,4,0,0,886,888,3,148,74,0,887,885,
  	1,0,0,0,887,888,1,0,0,0,888,898,1,0,0,0,889,890,5,8,0,0,890,891,3,170,
  	85,0,891,894,5,52,0,0,892,893,5,4,0,0,893,895,3,148,74,0,894,892,1,0,
  	0,0,894,895,1,0,0,0,895,897,1,0,0,0,896,889,1,0,0,0,897,900,1,0,0,0,898,
  	896,1,0,0,0,898,899,1,0,0,0,899,901,1,0,0,0,900,898,1,0,0,0,901,902,5,
  	3,0,0,902,175,1,0,0,0,99,195,197,204,211,214,218,221,224,230,235,238,
  	241,251,261,263,274,280,283,288,292,296,303,309,314,320,343,365,367,371,
  	375,380,387,393,399,403,406,411,416,425,433,437,446,450,457,472,482,490,
  	499,508,513,520,533,544,549,559,567,577,582,586,593,601,611,633,641,661,
  	667,674,682,690,698,706,714,722,730,738,746,755,758,762,777,779,799,804,
  	813,821,828,837,847,851,855,860,863,869,873,876,879,887,894,898
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
    setState(176);
    statement();
    setState(177);
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

std::vector<ctcParser::Asm_defContext *> ctcParser::StatementContext::asm_def() {
  return getRuleContexts<ctcParser::Asm_defContext>();
}

ctcParser::Asm_defContext* ctcParser::StatementContext::asm_def(size_t i) {
  return getRuleContext<ctcParser::Asm_defContext>(i);
}

std::vector<ctcParser::Class_declContext *> ctcParser::StatementContext::class_decl() {
  return getRuleContexts<ctcParser::Class_declContext>();
}

ctcParser::Class_declContext* ctcParser::StatementContext::class_decl(size_t i) {
  return getRuleContext<ctcParser::Class_declContext>(i);
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
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 40819369114879) != 0)) {
      setState(195);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(179);
        asm_def();
        break;
      }

      case 2: {
        setState(180);
        class_decl();
        break;
      }

      case 3: {
        setState(181);
        control_flow_stmt();
        break;
      }

      case 4: {
        setState(182);
        switch_stmt();
        break;
      }

      case 5: {
        setState(183);
        if_stmt();
        break;
      }

      case 6: {
        setState(184);
        do_while_stmt();
        break;
      }

      case 7: {
        setState(185);
        while_stmt();
        break;
      }

      case 8: {
        setState(186);
        for_stmt();
        break;
      }

      case 9: {
        setState(187);
        interface_decl();
        break;
      }

      case 10: {
        setState(188);
        enum_decl();
        break;
      }

      case 11: {
        setState(189);
        using_decl();
        break;
      }

      case 12: {
        setState(190);
        namespace_decl();
        break;
      }

      case 13: {
        setState(191);
        cctp_decl();
        break;
      }

      case 14: {
        setState(192);
        var_decl();
        break;
      }

      case 15: {
        setState(193);
        fn_decl();
        break;
      }

      case 16: {
        setState(194);
        use_decl();
        break;
      }

      default:
        break;
      }
      setState(199);
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

//----------------- Asm_bodyContext ------------------------------------------------------------------

ctcParser::Asm_bodyContext::Asm_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ctcParser::Asm_bodyContext::getRuleIndex() const {
  return ctcParser::RuleAsm_body;
}


std::any ctcParser::Asm_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAsm_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Asm_bodyContext* ctcParser::asm_body() {
  Asm_bodyContext *_localctx = _tracker.createInstance<Asm_bodyContext>(_ctx, getState());
  enterRule(_localctx, 4, ctcParser::RuleAsm_body);
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
    match(ctcParser::T__0);
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -6) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 549755813887) != 0)) {
      setState(201);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == ctcParser::T__1)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(207);
    match(ctcParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Asm_defContext ------------------------------------------------------------------

ctcParser::Asm_defContext::Asm_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Asm_defContext::Asm() {
  return getToken(ctcParser::Asm, 0);
}

ctcParser::Asm_bodyContext* ctcParser::Asm_defContext::asm_body() {
  return getRuleContext<ctcParser::Asm_bodyContext>(0);
}

tree::TerminalNode* ctcParser::Asm_defContext::Volatile() {
  return getToken(ctcParser::Volatile, 0);
}

tree::TerminalNode* ctcParser::Asm_defContext::Att() {
  return getToken(ctcParser::Att, 0);
}

tree::TerminalNode* ctcParser::Asm_defContext::Intel() {
  return getToken(ctcParser::Intel, 0);
}


size_t ctcParser::Asm_defContext::getRuleIndex() const {
  return ctcParser::RuleAsm_def;
}


std::any ctcParser::Asm_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitAsm_def(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Asm_defContext* ctcParser::asm_def() {
  Asm_defContext *_localctx = _tracker.createInstance<Asm_defContext>(_ctx, getState());
  enterRule(_localctx, 6, ctcParser::RuleAsm_def);
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
    setState(209);
    match(ctcParser::Asm);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Att

    || _la == ctcParser::Intel) {
      setState(210);
      _la = _input->LA(1);
      if (!(_la == ctcParser::Att

      || _la == ctcParser::Intel)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Volatile) {
      setState(213);
      match(ctcParser::Volatile);
    }
    setState(216);
    asm_body();
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(217);
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

//----------------- Class_field_defContext ------------------------------------------------------------------

ctcParser::Class_field_defContext::Class_field_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Type_specifierContext* ctcParser::Class_field_defContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}

tree::TerminalNode* ctcParser::Class_field_defContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}

ctcParser::Access_modifierContext* ctcParser::Class_field_defContext::access_modifier() {
  return getRuleContext<ctcParser::Access_modifierContext>(0);
}

tree::TerminalNode* ctcParser::Class_field_defContext::Static() {
  return getToken(ctcParser::Static, 0);
}

ctcParser::Assignment_expressionContext* ctcParser::Class_field_defContext::assignment_expression() {
  return getRuleContext<ctcParser::Assignment_expressionContext>(0);
}


size_t ctcParser::Class_field_defContext::getRuleIndex() const {
  return ctcParser::RuleClass_field_def;
}


std::any ctcParser::Class_field_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_field_def(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_field_defContext* ctcParser::class_field_def() {
  Class_field_defContext *_localctx = _tracker.createInstance<Class_field_defContext>(_ctx, getState());
  enterRule(_localctx, 8, ctcParser::RuleClass_field_def);
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
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(220);
      access_modifier();
    }
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static) {
      setState(223);
      match(ctcParser::Static);
    }
    setState(226);
    type_specifier();
    setState(227);
    match(ctcParser::Identifier);
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__3) {
      setState(228);
      match(ctcParser::T__3);
      setState(229);
      assignment_expression();
    }
    setState(232);
    match(ctcParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_method_defContext ------------------------------------------------------------------

ctcParser::Class_method_defContext::Class_method_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ctcParser::Type_specifierContext* ctcParser::Class_method_defContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
}

tree::TerminalNode* ctcParser::Class_method_defContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}

ctcParser::Type_argument_listContext* ctcParser::Class_method_defContext::type_argument_list() {
  return getRuleContext<ctcParser::Type_argument_listContext>(0);
}

ctcParser::StatementContext* ctcParser::Class_method_defContext::statement() {
  return getRuleContext<ctcParser::StatementContext>(0);
}

ctcParser::Access_modifierContext* ctcParser::Class_method_defContext::access_modifier() {
  return getRuleContext<ctcParser::Access_modifierContext>(0);
}

tree::TerminalNode* ctcParser::Class_method_defContext::Static() {
  return getToken(ctcParser::Static, 0);
}

tree::TerminalNode* ctcParser::Class_method_defContext::Override() {
  return getToken(ctcParser::Override, 0);
}

std::vector<ctcParser::Fn_specifierContext *> ctcParser::Class_method_defContext::fn_specifier() {
  return getRuleContexts<ctcParser::Fn_specifierContext>();
}

ctcParser::Fn_specifierContext* ctcParser::Class_method_defContext::fn_specifier(size_t i) {
  return getRuleContext<ctcParser::Fn_specifierContext>(i);
}


size_t ctcParser::Class_method_defContext::getRuleIndex() const {
  return ctcParser::RuleClass_method_def;
}


std::any ctcParser::Class_method_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_method_def(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_method_defContext* ctcParser::class_method_def() {
  Class_method_defContext *_localctx = _tracker.createInstance<Class_method_defContext>(_ctx, getState());
  enterRule(_localctx, 10, ctcParser::RuleClass_method_def);
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
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(234);
      access_modifier();
    }
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static) {
      setState(237);
      match(ctcParser::Static);
    }
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Override) {
      setState(240);
      match(ctcParser::Override);
    }
    setState(243);
    type_specifier();
    setState(244);
    match(ctcParser::Identifier);
    setState(245);
    match(ctcParser::T__4);
    setState(246);
    type_argument_list();
    setState(247);
    match(ctcParser::T__5);
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Inline

    || _la == ctcParser::Noexcept) {
      setState(248);
      fn_specifier();
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(254);
    match(ctcParser::T__0);
    setState(255);
    statement();
    setState(256);
    match(ctcParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_bodyContext ------------------------------------------------------------------

ctcParser::Class_bodyContext::Class_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ctcParser::Class_field_defContext *> ctcParser::Class_bodyContext::class_field_def() {
  return getRuleContexts<ctcParser::Class_field_defContext>();
}

ctcParser::Class_field_defContext* ctcParser::Class_bodyContext::class_field_def(size_t i) {
  return getRuleContext<ctcParser::Class_field_defContext>(i);
}

std::vector<ctcParser::Class_method_defContext *> ctcParser::Class_bodyContext::class_method_def() {
  return getRuleContexts<ctcParser::Class_method_defContext>();
}

ctcParser::Class_method_defContext* ctcParser::Class_bodyContext::class_method_def(size_t i) {
  return getRuleContext<ctcParser::Class_method_defContext>(i);
}


size_t ctcParser::Class_bodyContext::getRuleIndex() const {
  return ctcParser::RuleClass_body;
}


std::any ctcParser::Class_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_body(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_bodyContext* ctcParser::class_body() {
  Class_bodyContext *_localctx = _tracker.createInstance<Class_bodyContext>(_ctx, getState());
  enterRule(_localctx, 12, ctcParser::RuleClass_body);
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
    setState(258);
    match(ctcParser::T__0);
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 2207583703047) != 0)) {
      setState(261);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(259);
        class_field_def();
        break;
      }

      case 2: {
        setState(260);
        class_method_def();
        break;
      }

      default:
        break;
      }
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(266);
    match(ctcParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_implementContext ------------------------------------------------------------------

ctcParser::Class_implementContext::Class_implementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ctcParser::Class_implementContext::Identifier() {
  return getTokens(ctcParser::Identifier);
}

tree::TerminalNode* ctcParser::Class_implementContext::Identifier(size_t i) {
  return getToken(ctcParser::Identifier, i);
}


size_t ctcParser::Class_implementContext::getRuleIndex() const {
  return ctcParser::RuleClass_implement;
}


std::any ctcParser::Class_implementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_implement(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_implementContext* ctcParser::class_implement() {
  Class_implementContext *_localctx = _tracker.createInstance<Class_implementContext>(_ctx, getState());
  enterRule(_localctx, 14, ctcParser::RuleClass_implement);
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
    setState(268);
    match(ctcParser::T__6);
    setState(269);
    match(ctcParser::Identifier);
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(270);
      match(ctcParser::T__7);
      setState(271);
      match(ctcParser::Identifier);
      setState(276);
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

//----------------- Class_qualifierContext ------------------------------------------------------------------

ctcParser::Class_qualifierContext::Class_qualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Class_qualifierContext::Sealed() {
  return getToken(ctcParser::Sealed, 0);
}


size_t ctcParser::Class_qualifierContext::getRuleIndex() const {
  return ctcParser::RuleClass_qualifier;
}


std::any ctcParser::Class_qualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_qualifier(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_qualifierContext* ctcParser::class_qualifier() {
  Class_qualifierContext *_localctx = _tracker.createInstance<Class_qualifierContext>(_ctx, getState());
  enterRule(_localctx, 16, ctcParser::RuleClass_qualifier);

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
    match(ctcParser::Sealed);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_declContext ------------------------------------------------------------------

ctcParser::Class_declContext::Class_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ctcParser::Class_declContext::Class() {
  return getToken(ctcParser::Class, 0);
}

tree::TerminalNode* ctcParser::Class_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}

ctcParser::Class_bodyContext* ctcParser::Class_declContext::class_body() {
  return getRuleContext<ctcParser::Class_bodyContext>(0);
}

ctcParser::Access_modifierContext* ctcParser::Class_declContext::access_modifier() {
  return getRuleContext<ctcParser::Access_modifierContext>(0);
}

ctcParser::Class_qualifierContext* ctcParser::Class_declContext::class_qualifier() {
  return getRuleContext<ctcParser::Class_qualifierContext>(0);
}

ctcParser::Class_implementContext* ctcParser::Class_declContext::class_implement() {
  return getRuleContext<ctcParser::Class_implementContext>(0);
}


size_t ctcParser::Class_declContext::getRuleIndex() const {
  return ctcParser::RuleClass_decl;
}


std::any ctcParser::Class_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ctcVisitor*>(visitor))
    return parserVisitor->visitClass_decl(this);
  else
    return visitor->visitChildren(this);
}

ctcParser::Class_declContext* ctcParser::class_decl() {
  Class_declContext *_localctx = _tracker.createInstance<Class_declContext>(_ctx, getState());
  enterRule(_localctx, 18, ctcParser::RuleClass_decl);
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
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(279);
      access_modifier();
    }
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Sealed) {
      setState(282);
      class_qualifier();
    }
    setState(285);
    match(ctcParser::Class);
    setState(286);
    match(ctcParser::Identifier);
    setState(288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__6) {
      setState(287);
      class_implement();
    }
    setState(290);
    class_body();
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(291);
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
  enterRule(_localctx, 20, ctcParser::RuleControl_flow_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Return: {
        enterOuterAlt(_localctx, 1);
        setState(294);
        match(ctcParser::Return);
        setState(296);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4503616807370784) != 0) || ((((_la - 98) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 98)) & 15) != 0)) {
          setState(295);
          primary_expression();
        }
        setState(298);
        match(ctcParser::T__2);
        break;
      }

      case ctcParser::Break: {
        enterOuterAlt(_localctx, 2);
        setState(299);
        match(ctcParser::Break);
        setState(300);
        match(ctcParser::T__2);
        break;
      }

      case ctcParser::Continue: {
        enterOuterAlt(_localctx, 3);
        setState(301);
        match(ctcParser::Continue);
        setState(302);
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
  enterRule(_localctx, 22, ctcParser::RuleSwitch_case);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Case: {
        enterOuterAlt(_localctx, 1);
        setState(305);
        match(ctcParser::Case);
        setState(306);
        primary_expression();
        setState(307);
        match(ctcParser::T__6);
        setState(309);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          setState(308);
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
        setState(311);
        match(ctcParser::Default);
        setState(312);
        match(ctcParser::T__6);
        setState(313);
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
  enterRule(_localctx, 24, ctcParser::RuleSwitch_body);
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
    setState(316);
    match(ctcParser::T__0);
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Default

    || _la == ctcParser::Case) {
      setState(317);
      switch_case();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(323);
    match(ctcParser::T__1);
   
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
  enterRule(_localctx, 26, ctcParser::RuleSwitch_stmt);

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
    match(ctcParser::Switch);
    setState(326);
    match(ctcParser::T__4);
    setState(327);
    expression();
    setState(328);
    match(ctcParser::T__5);
    setState(329);
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
  enterRule(_localctx, 28, ctcParser::RuleIf_stmt);
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
    match(ctcParser::If);
    setState(332);
    match(ctcParser::T__4);
    setState(333);
    expression();
    setState(334);
    match(ctcParser::T__5);
    setState(335);
    match(ctcParser::T__0);
    setState(336);
    statement();
    setState(337);
    match(ctcParser::T__1);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Else) {
      setState(338);
      match(ctcParser::Else);
      setState(339);
      match(ctcParser::T__0);
      setState(340);
      statement();
      setState(341);
      match(ctcParser::T__1);
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
  enterRule(_localctx, 30, ctcParser::RuleDo_while_stmt);

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
    match(ctcParser::Do);
    setState(346);
    match(ctcParser::T__0);
    setState(347);
    statement();
    setState(348);
    match(ctcParser::T__1);
    setState(349);
    match(ctcParser::While);
    setState(350);
    match(ctcParser::T__4);
    setState(351);
    expression();
    setState(352);
    match(ctcParser::T__5);
    setState(353);
    match(ctcParser::T__2);
   
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
  enterRule(_localctx, 32, ctcParser::RuleWhile_stmt);

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
    match(ctcParser::While);
    setState(356);
    match(ctcParser::T__4);
    setState(357);
    expression();
    setState(358);
    match(ctcParser::T__5);
    setState(359);
    match(ctcParser::T__0);
    setState(360);
    statement();
    setState(361);
    match(ctcParser::T__1);
   
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
  enterRule(_localctx, 34, ctcParser::RuleForCondition);
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
    setState(367);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(363);
      forDeclaration();
      break;
    }

    case 2: {
      setState(365);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & 16106127361) != 0)) {
        setState(364);
        expression();
      }
      break;
    }

    default:
      break;
    }
    setState(369);
    match(ctcParser::T__2);
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 16106127361) != 0)) {
      setState(370);
      forExpression();
    }
    setState(373);
    match(ctcParser::T__2);
    setState(375);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7810947790311456) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 16106127361) != 0)) {
      setState(374);
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
  enterRule(_localctx, 36, ctcParser::RuleDeclarationSpecifiers);

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
    setState(378); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(377);
              declarationSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(380); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
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
  enterRule(_localctx, 38, ctcParser::RuleInitDeclaratorList);
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
    setState(382);
    initDeclarator();
    setState(387);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(383);
      match(ctcParser::T__7);
      setState(384);
      initDeclarator();
      setState(389);
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
  enterRule(_localctx, 40, ctcParser::RuleInitDeclarator);
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
    setState(390);
    declarator();
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__3) {
      setState(391);
      match(ctcParser::T__3);
      setState(392);
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
  enterRule(_localctx, 42, ctcParser::RuleInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(403);
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
        setState(395);
        assignment_expression();
        break;
      }

      case ctcParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(396);
        match(ctcParser::T__0);
        setState(397);
        initializerList();
        setState(399);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ctcParser::T__7) {
          setState(398);
          match(ctcParser::T__7);
        }
        setState(401);
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
  enterRule(_localctx, 44, ctcParser::RuleInitializerList);
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
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__8

    || _la == ctcParser::T__10) {
      setState(405);
      designation();
    }
    setState(408);
    initializer();
    setState(416);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(409);
        match(ctcParser::T__7);
        setState(411);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ctcParser::T__8

        || _la == ctcParser::T__10) {
          setState(410);
          designation();
        }
        setState(413);
        initializer(); 
      }
      setState(418);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
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
  enterRule(_localctx, 46, ctcParser::RuleDesignation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    designatorList();
    setState(420);
    match(ctcParser::T__3);
   
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
  enterRule(_localctx, 48, ctcParser::RuleDesignatorList);
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
    setState(423); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(422);
      designator();
      setState(425); 
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
  enterRule(_localctx, 50, ctcParser::RuleDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(427);
        match(ctcParser::T__8);
        setState(428);
        constantExpression();
        setState(429);
        match(ctcParser::T__9);
        break;
      }

      case ctcParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(431);
        match(ctcParser::T__10);
        setState(432);
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
  enterRule(_localctx, 52, ctcParser::RuleDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__17: {
        setState(435);
        pointer();
        break;
      }

      case ctcParser::T__14:
      case ctcParser::T__30: {
        setState(436);
        refqualifier();
        break;
      }

      case ctcParser::Identifier: {
        break;
      }

    default:
      break;
    }
    setState(439);
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
  enterRule(_localctx, 54, ctcParser::RuleConstantExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
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
  enterRule(_localctx, 56, ctcParser::RuleDeclarationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(446);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Static:
      case ctcParser::Extern: {
        enterOuterAlt(_localctx, 1);
        setState(443);
        storage_specifier();
        break;
      }

      case ctcParser::Const:
      case ctcParser::Volatile: {
        enterOuterAlt(_localctx, 2);
        setState(444);
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
        setState(445);
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
  enterRule(_localctx, 58, ctcParser::RuleForDeclaration);
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
    setState(448);
    declarationSpecifiers();
    setState(450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4503601775149056) != 0)) {
      setState(449);
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
  enterRule(_localctx, 60, ctcParser::RuleForExpression);
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
    setState(452);
    assignment_expression();
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(453);
      match(ctcParser::T__7);
      setState(454);
      assignment_expression();
      setState(459);
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
  enterRule(_localctx, 62, ctcParser::RuleFor_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(ctcParser::For);
    setState(461);
    match(ctcParser::T__4);
    setState(462);
    forCondition();
    setState(463);
    match(ctcParser::T__5);
    setState(464);
    match(ctcParser::T__0);
    setState(465);
    statement();
    setState(466);
    match(ctcParser::T__1);
   
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
  enterRule(_localctx, 64, ctcParser::RuleAccess_modifier);
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
    setState(468);
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
  enterRule(_localctx, 66, ctcParser::RuleInterface_element);
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
    setState(470);
    access_modifier();
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(471);
      storage_specifier();
    }
    setState(474);
    type_specifier();
    setState(475);
    match(ctcParser::Identifier);
    setState(476);
    match(ctcParser::T__4);
    setState(477);
    type_argument_list();
    setState(478);
    match(ctcParser::T__5);
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Inline

    || _la == ctcParser::Noexcept) {
      setState(479);
      fn_specifier();
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(485);
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
  enterRule(_localctx, 68, ctcParser::RuleInterface_body);
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
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::Public

    || _la == ctcParser::Private) {
      setState(487);
      interface_element();
      setState(492);
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
  enterRule(_localctx, 70, ctcParser::RuleInterface_decl);
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
    setState(493);
    match(ctcParser::Interface);
    setState(494);
    match(ctcParser::Identifier);
    setState(495);
    match(ctcParser::T__0);
    setState(496);
    interface_body();
    setState(497);
    match(ctcParser::T__1);
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(498);
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
  enterRule(_localctx, 72, ctcParser::RuleEnum_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
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
  enterRule(_localctx, 74, ctcParser::RuleEnum_body);
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
    setState(503);
    match(ctcParser::Identifier);
    setState(508);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(504);
      match(ctcParser::T__7);
      setState(505);
      match(ctcParser::Identifier);
      setState(510);
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
  enterRule(_localctx, 76, ctcParser::RuleEnum_decl);
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
    setState(511);
    match(ctcParser::Enum);
    setState(513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Class) {
      setState(512);
      enum_modifier();
    }
    setState(515);
    match(ctcParser::Identifier);
    setState(516);
    match(ctcParser::T__0);
    setState(517);
    enum_body();
    setState(518);
    match(ctcParser::T__1);
    setState(520);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__2) {
      setState(519);
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

tree::TerminalNode* ctcParser::Using_declContext::Identifier() {
  return getToken(ctcParser::Identifier, 0);
}

ctcParser::Type_specifierContext* ctcParser::Using_declContext::type_specifier() {
  return getRuleContext<ctcParser::Type_specifierContext>(0);
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
  enterRule(_localctx, 78, ctcParser::RuleUsing_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(ctcParser::Using);
    setState(533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(523);
      match(ctcParser::Identifier);
      setState(524);
      match(ctcParser::T__2);
      break;
    }

    case 2: {
      setState(525);
      match(ctcParser::Identifier);
      setState(526);
      match(ctcParser::T__3);
      setState(527);
      type_specifier();
      setState(528);
      match(ctcParser::T__2);
      break;
    }

    case 3: {
      setState(530);
      match(ctcParser::Namespace);
      setState(531);
      match(ctcParser::Identifier);
      setState(532);
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
  enterRule(_localctx, 80, ctcParser::RuleNamespace_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(544);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(535);
      match(ctcParser::Namespace);
      setState(536);
      match(ctcParser::Identifier);
      setState(537);
      match(ctcParser::T__0);
      setState(538);
      statement();
      setState(539);
      match(ctcParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(541);
      match(ctcParser::Namespace);
      setState(542);
      match(ctcParser::Identifier);
      setState(543);
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
  enterRule(_localctx, 82, ctcParser::RuleFn_specifier);
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
    setState(546);
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
  enterRule(_localctx, 84, ctcParser::RuleFn_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(582);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(549);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(548);
        storage_specifier();
      }
      setState(551);
      type_specifier();
      setState(552);
      match(ctcParser::Identifier);
      setState(553);
      match(ctcParser::T__4);
      setState(554);
      type_argument_list();
      setState(555);
      match(ctcParser::T__5);
      setState(559);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(556);
        fn_specifier();
        setState(561);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(562);
      match(ctcParser::T__0);
      setState(563);
      statement();
      setState(564);
      match(ctcParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(567);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::Static

      || _la == ctcParser::Extern) {
        setState(566);
        storage_specifier();
      }
      setState(569);
      type_specifier();
      setState(570);
      match(ctcParser::Identifier);
      setState(571);
      match(ctcParser::T__4);
      setState(572);
      type_argument_list();
      setState(573);
      match(ctcParser::T__5);
      setState(577);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ctcParser::Inline

      || _la == ctcParser::Noexcept) {
        setState(574);
        fn_specifier();
        setState(579);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(580);
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
  enterRule(_localctx, 86, ctcParser::RuleType_argument);
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
    type();
    setState(586);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Identifier) {
      setState(585);
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
  enterRule(_localctx, 88, ctcParser::RuleType_argument_list);
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
    setState(588);
    type_argument();
    setState(593);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(589);
      match(ctcParser::T__7);
      setState(590);
      type_argument();
      setState(595);
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
  enterRule(_localctx, 90, ctcParser::RuleArgumentExpressionList);
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
    setState(596);
    assignment_expression();
    setState(601);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(597);
      match(ctcParser::T__7);
      setState(598);
      assignment_expression();
      setState(603);
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
  enterRule(_localctx, 92, ctcParser::RuleUse_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(ctcParser::Use);
    setState(605);
    match(ctcParser::Identifier);
    setState(606);
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
  enterRule(_localctx, 94, ctcParser::RuleCompile_if_predicate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(611);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(608);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(609);
        match(ctcParser::T__11);
        setState(610);
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
  enterRule(_localctx, 96, ctcParser::RuleCctp_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    match(ctcParser::Compile_if);
    setState(614);
    match(ctcParser::T__12);
    setState(615);
    compile_if_predicate();
    setState(616);
    match(ctcParser::T__13);
    setState(617);
    match(ctcParser::T__0);
    setState(618);
    statement();
    setState(619);
    match(ctcParser::T__1);
   
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
  enterRule(_localctx, 98, ctcParser::RuleStorage_specifier);
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
    setState(621);
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
  enterRule(_localctx, 100, ctcParser::RuleVar_decl_specifier);
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
    setState(623);
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
  enterRule(_localctx, 102, ctcParser::RuleLambda_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(ctcParser::T__0);
    setState(626);
    statement();
    setState(627);
    match(ctcParser::T__1);
   
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
  enterRule(_localctx, 104, ctcParser::RuleLambda_capture_modifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(629);
        match(ctcParser::T__14);
        setState(630);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(631);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(632);
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
  enterRule(_localctx, 106, ctcParser::RuleLambda_capture_by);
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
    setState(635);
    match(ctcParser::T__8);
    setState(636);
    lambda_capture_modifier();
    setState(641);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(637);
      match(ctcParser::T__7);
      setState(638);
      lambda_capture_modifier();
      setState(643);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(644);
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
  enterRule(_localctx, 108, ctcParser::RuleLambda_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(646);
    match(ctcParser::T__16);
    setState(647);
    lambda_capture_by();
    setState(648);
    match(ctcParser::T__4);
    setState(649);
    type_argument_list();
    setState(650);
    match(ctcParser::T__5);
    setState(651);
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
  enterRule(_localctx, 110, ctcParser::RuleConstant);
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
    setState(653);
    _la = _input->LA(1);
    if (!(((((_la - 98) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 98)) & 7) != 0))) {
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
  enterRule(_localctx, 112, ctcParser::RulePrimary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(667);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(655);
        match(ctcParser::Identifier);
        break;
      }

      case ctcParser::IntegerConstant:
      case ctcParser::FloatingConstant:
      case ctcParser::CharacterConstant: {
        enterOuterAlt(_localctx, 2);
        setState(656);
        constant();
        break;
      }

      case ctcParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(657);
        lambda_expression();
        break;
      }

      case ctcParser::T__33:
      case ctcParser::EncodingPrefix: {
        enterOuterAlt(_localctx, 4);
        setState(659); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(658);
          string_literal();
          setState(661); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ctcParser::T__33 || _la == ctcParser::EncodingPrefix);
        break;
      }

      case ctcParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(663);
        match(ctcParser::T__4);
        setState(664);
        expression();
        setState(665);
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
  enterRule(_localctx, 114, ctcParser::RuleMultiplicativeExpression);
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
    setState(669);
    cast_expression();
    setState(674);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1835008) != 0)) {
      setState(670);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1835008) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(671);
      cast_expression();
      setState(676);
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
  enterRule(_localctx, 116, ctcParser::RuleAdditiveExpression);
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
    setState(677);
    multiplicativeExpression();
    setState(682);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__20

    || _la == ctcParser::T__21) {
      setState(678);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__20

      || _la == ctcParser::T__21)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(679);
      multiplicativeExpression();
      setState(684);
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
  enterRule(_localctx, 118, ctcParser::RuleShiftExpression);
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
    setState(685);
    additiveExpression();
    setState(690);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__22

    || _la == ctcParser::T__23) {
      setState(686);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__22

      || _la == ctcParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(687);
      additiveExpression();
      setState(692);
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
  enterRule(_localctx, 120, ctcParser::RuleRelationalExpression);
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
    setState(693);
    shiftExpression();
    setState(698);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100687872) != 0)) {
      setState(694);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 100687872) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(695);
      shiftExpression();
      setState(700);
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
  enterRule(_localctx, 122, ctcParser::RuleEqualityExpression);
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
    setState(701);
    relationalExpression();
    setState(706);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__26

    || _la == ctcParser::T__27) {
      setState(702);
      _la = _input->LA(1);
      if (!(_la == ctcParser::T__26

      || _la == ctcParser::T__27)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(703);
      relationalExpression();
      setState(708);
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
  enterRule(_localctx, 124, ctcParser::RuleAndExpression);
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
    setState(709);
    equalityExpression();
    setState(714);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__14) {
      setState(710);
      match(ctcParser::T__14);
      setState(711);
      equalityExpression();
      setState(716);
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
  enterRule(_localctx, 126, ctcParser::RuleExclusiveOrExpression);
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
    setState(717);
    andExpression();
    setState(722);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__28) {
      setState(718);
      match(ctcParser::T__28);
      setState(719);
      andExpression();
      setState(724);
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
  enterRule(_localctx, 128, ctcParser::RuleInclusiveOrExpression);
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
    exclusiveOrExpression();
    setState(730);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__29) {
      setState(726);
      match(ctcParser::T__29);
      setState(727);
      exclusiveOrExpression();
      setState(732);
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
  enterRule(_localctx, 130, ctcParser::RuleLogicalAndExpression);
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
    setState(733);
    inclusiveOrExpression();
    setState(738);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__30) {
      setState(734);
      match(ctcParser::T__30);
      setState(735);
      inclusiveOrExpression();
      setState(740);
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
  enterRule(_localctx, 132, ctcParser::RuleLogicalOrExpression);
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
    setState(741);
    logicalAndExpression();
    setState(746);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__31) {
      setState(742);
      match(ctcParser::T__31);
      setState(743);
      logicalAndExpression();
      setState(748);
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
  enterRule(_localctx, 134, ctcParser::RuleConditional_expression);
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
    setState(749);
    logicalOrExpression();
    setState(755);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__32) {
      setState(750);
      match(ctcParser::T__32);
      setState(751);
      expression();
      setState(752);
      match(ctcParser::T__6);
      setState(753);
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
  enterRule(_localctx, 136, ctcParser::RuleString_literal);
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
    setState(758);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::EncodingPrefix) {
      setState(757);
      match(ctcParser::EncodingPrefix);
    }
    setState(760);
    match(ctcParser::T__33);
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::SCharSequence) {
      setState(761);
      match(ctcParser::SCharSequence);
    }
    setState(764);
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
  enterRule(_localctx, 138, ctcParser::RuleAssignment_operator);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35150012350480) != 0))) {
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
  enterRule(_localctx, 140, ctcParser::RulePostfix_expression);
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
    setState(768);
    primary_expression();
    setState(779);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 246290604623904) != 0)) {
      setState(777);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ctcParser::T__4: {
          setState(769);
          match(ctcParser::T__4);
          setState(770);
          argumentExpressionList();
          setState(771);
          match(ctcParser::T__5);
          break;
        }

        case ctcParser::T__10:
        case ctcParser::T__44: {
          setState(773);
          _la = _input->LA(1);
          if (!(_la == ctcParser::T__10

          || _la == ctcParser::T__44)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(774);
          match(ctcParser::Identifier);
          break;
        }

        case ctcParser::T__45: {
          setState(775);
          match(ctcParser::T__45);
          break;
        }

        case ctcParser::T__46: {
          setState(776);
          match(ctcParser::T__46);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(781);
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
  enterRule(_localctx, 142, ctcParser::RuleUnaryOperator);
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
    setState(782);
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
  enterRule(_localctx, 144, ctcParser::RuleCast_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(799);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(784);
      match(ctcParser::T__4);
      setState(785);
      type_specifier();
      setState(786);
      match(ctcParser::T__5);
      setState(787);
      cast_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(789);
      match(ctcParser::Dynamic_cast);
      setState(790);
      match(ctcParser::T__12);
      setState(791);
      type_specifier();
      setState(792);
      match(ctcParser::T__13);
      setState(793);
      match(ctcParser::T__4);
      setState(794);
      cast_expression();
      setState(795);
      match(ctcParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(797);
      unary_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(798);
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
  enterRule(_localctx, 146, ctcParser::RuleUnary_expression);
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
    setState(804);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(801);
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
      setState(806);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    }
    setState(813);
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
        setState(807);
        postfix_expression();
        break;
      }

      case ctcParser::T__11:
      case ctcParser::T__14:
      case ctcParser::T__17:
      case ctcParser::T__20:
      case ctcParser::T__21:
      case ctcParser::T__47: {
        setState(808);
        unaryOperator();
        setState(809);
        cast_expression();
        break;
      }

      case ctcParser::T__48: {
        setState(811);
        match(ctcParser::T__48);
        setState(812);
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
  enterRule(_localctx, 148, ctcParser::RuleAssignment_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(821);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(815);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(816);
      unary_expression();
      setState(817);
      assignment_operator();
      setState(818);
      assignment_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(820);
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
  enterRule(_localctx, 150, ctcParser::RuleExpression);
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
    setState(823);
    assignment_expression();
    setState(828);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(824);
      match(ctcParser::T__7);
      setState(825);
      assignment_expression();
      setState(830);
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
  enterRule(_localctx, 152, ctcParser::RuleType);
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
    setState(831);
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
  enterRule(_localctx, 154, ctcParser::RuleIdentifier_specifier);
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
    setState(833);
    match(ctcParser::T__17);
    setState(837);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__17) {
      setState(834);
      match(ctcParser::T__17);
      setState(839);
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
  enterRule(_localctx, 156, ctcParser::RuleUnsigned_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
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
  enterRule(_localctx, 158, ctcParser::RuleType_qualifier);
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
    setState(842);
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
  enterRule(_localctx, 160, ctcParser::RuleTypeQualifierList);
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
    setState(845); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(844);
      type_qualifier();
      setState(847); 
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
  enterRule(_localctx, 162, ctcParser::RulePointer);
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
    setState(853); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(849);
              match(ctcParser::T__17);
              setState(851);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == ctcParser::Const

              || _la == ctcParser::Volatile) {
                setState(850);
                typeQualifierList();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(855); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
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
  enterRule(_localctx, 164, ctcParser::RuleSpecifierQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(860);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::Unsigned: {
        setState(857);
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
        setState(858);
        type();
        break;
      }

      case ctcParser::Const:
      case ctcParser::Volatile: {
        setState(859);
        type_qualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(863);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      setState(862);
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
  enterRule(_localctx, 166, ctcParser::RuleRefqualifier);
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
    setState(865);
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
  enterRule(_localctx, 168, ctcParser::RuleAbstractDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(869);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ctcParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(867);
        pointer();
        break;
      }

      case ctcParser::T__14:
      case ctcParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(868);
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
  enterRule(_localctx, 170, ctcParser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(871);
    specifierQualifierList();
    setState(873);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      setState(872);
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
  enterRule(_localctx, 172, ctcParser::RuleVar_decl);
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
    setState(876);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Static

    || _la == ctcParser::Extern) {
      setState(875);
      storage_specifier();
    }
    setState(879);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::Constexpr

    || _la == ctcParser::Consteval) {
      setState(878);
      var_decl_specifier();
    }
    setState(881);
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

std::vector<ctcParser::Assignment_expressionContext *> ctcParser::VdeclaratorContext::assignment_expression() {
  return getRuleContexts<ctcParser::Assignment_expressionContext>();
}

ctcParser::Assignment_expressionContext* ctcParser::VdeclaratorContext::assignment_expression(size_t i) {
  return getRuleContext<ctcParser::Assignment_expressionContext>(i);
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
  enterRule(_localctx, 174, ctcParser::RuleVdeclarator);
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
    setState(883);
    type_specifier();
    setState(884);
    match(ctcParser::Identifier);
    setState(887);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ctcParser::T__3) {
      setState(885);
      match(ctcParser::T__3);
      setState(886);
      assignment_expression();
    }
    setState(898);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ctcParser::T__7) {
      setState(889);
      match(ctcParser::T__7);
      setState(890);
      type_specifier();
      setState(891);
      match(ctcParser::Identifier);
      setState(894);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ctcParser::T__3) {
        setState(892);
        match(ctcParser::T__3);
        setState(893);
        assignment_expression();
      }
      setState(900);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(901);
    match(ctcParser::T__2);
   
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
