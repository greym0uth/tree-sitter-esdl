#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 577
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_module = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_type = 5,
  anon_sym_scalar = 6,
  anon_sym_property = 7,
  anon_sym_link = 8,
  anon_sym_COLON = 9,
  anon_sym_COLON_EQ = 10,
  anon_sym_annotation = 11,
  anon_sym_constraint = 12,
  anon_sym_index = 13,
  anon_sym_alias = 14,
  anon_sym_using = 15,
  anon_sym_function = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_extension = 18,
  anon_sym_extending = 19,
  anon_sym_COMMA = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_on = 23,
  anon_sym_except = 24,
  anon_sym_abstract = 25,
  anon_sym_overloaded = 26,
  anon_sym_global = 27,
  anon_sym_required = 28,
  anon_sym_optional = 29,
  anon_sym_single = 30,
  anon_sym_multi = 31,
  anon_sym_inheritable = 32,
  anon_sym_setof = 33,
  anon_sym_DOT = 34,
  anon_sym_is = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_GT_GT = 40,
  anon_sym_LT_LT = 41,
  anon_sym_AMP = 42,
  anon_sym_CARET = 43,
  anon_sym_PIPE = 44,
  anon_sym_PLUS = 45,
  anon_sym_DASH = 46,
  anon_sym_STAR = 47,
  anon_sym_SLASH = 48,
  anon_sym_PERCENT = 49,
  anon_sym_LT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_GT = 55,
  anon_sym_SQUOTE = 56,
  anon_sym_DQUOTE = 57,
  sym_unescaped_single_string_fragment = 58,
  sym_escape_sequence = 59,
  anon_sym_str = 60,
  anon_sym_bool = 61,
  anon_sym_int16 = 62,
  anon_sym_int32 = 63,
  anon_sym_int64 = 64,
  anon_sym_float32 = 65,
  anon_sym_float64 = 66,
  anon_sym_bigint = 67,
  anon_sym_decimal = 68,
  anon_sym_json = 69,
  anon_sym_uuid = 70,
  anon_sym_bytes = 71,
  anon_sym_datetime = 72,
  anon_sym_duration = 73,
  anon_sym_cal_COLON_COLONlocal_datetime = 74,
  anon_sym_cal_COLON_COLONlocal_date = 75,
  anon_sym_cal_COLON_COLONlocal_time = 76,
  anon_sym_cal_COLON_COLONrelative_duration = 77,
  anon_sym_sequence = 78,
  anon_sym_anytype = 79,
  anon_sym_array = 80,
  anon_sym_tuple = 81,
  anon_sym_enum = 82,
  anon_sym_COLON_COLON = 83,
  sym_identifier = 84,
  sym_true = 85,
  sym_false = 86,
  sym_null = 87,
  sym_number = 88,
  sym_comment = 89,
  sym__whitespace = 90,
  sym__edgeql_chars = 91,
  sym_source_file = 92,
  sym_module = 93,
  sym_schema_declarations = 94,
  sym_object_type = 95,
  sym_declarations = 96,
  sym_scalar_type_def = 97,
  sym_property = 98,
  sym_annotation = 99,
  sym_constraint = 100,
  sym_index = 101,
  sym_alias = 102,
  sym_function = 103,
  sym_extension = 104,
  sym_extending = 105,
  sym_using = 106,
  sym_on = 107,
  sym_except = 108,
  sym_computed = 109,
  sym_modifier = 110,
  sym_argspec = 111,
  sym_returnspec = 112,
  sym_expression = 113,
  sym_accessor = 114,
  sym_fncall = 115,
  sym_binary_expression = 116,
  sym_string = 117,
  sym__scalar_type = 118,
  sym_array = 119,
  sym_tuple = 120,
  sym__tuple = 121,
  sym__named_tuple = 122,
  sym_enum = 123,
  sym_type = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_schema_declarations_repeat1 = 126,
  aux_sym_declarations_repeat1 = 127,
  aux_sym_scalar_type_def_repeat1 = 128,
  aux_sym_annotation_repeat1 = 129,
  aux_sym_constraint_repeat1 = 130,
  aux_sym_function_repeat1 = 131,
  aux_sym_extending_repeat1 = 132,
  aux_sym_argspec_repeat1 = 133,
  aux_sym_expression_repeat1 = 134,
  aux_sym_fncall_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
  aux_sym__tuple_repeat1 = 137,
  aux_sym__named_tuple_repeat1 = 138,
  aux_sym_enum_repeat1 = 139,
  aux_sym_type_repeat1 = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_scalar] = "scalar",
  [anon_sym_property] = "property",
  [anon_sym_link] = "link",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_annotation] = "annotation",
  [anon_sym_constraint] = "constraint",
  [anon_sym_index] = "index",
  [anon_sym_alias] = "alias",
  [anon_sym_using] = "using",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_extension] = "extension",
  [anon_sym_extending] = "extending",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_on] = "on",
  [anon_sym_except] = "except",
  [anon_sym_abstract] = "abstract",
  [anon_sym_overloaded] = "overloaded",
  [anon_sym_global] = "global",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
  [anon_sym_inheritable] = "inheritable",
  [anon_sym_setof] = "set of",
  [anon_sym_DOT] = ".",
  [anon_sym_is] = "is",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_str] = "str",
  [anon_sym_bool] = "bool",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_bigint] = "bigint",
  [anon_sym_decimal] = "decimal",
  [anon_sym_json] = "json",
  [anon_sym_uuid] = "uuid",
  [anon_sym_bytes] = "bytes",
  [anon_sym_datetime] = "datetime",
  [anon_sym_duration] = "duration",
  [anon_sym_cal_COLON_COLONlocal_datetime] = "cal::local_datetime",
  [anon_sym_cal_COLON_COLONlocal_date] = "cal::local_date",
  [anon_sym_cal_COLON_COLONlocal_time] = "cal::local_time",
  [anon_sym_cal_COLON_COLONrelative_duration] = "cal::relative_duration",
  [anon_sym_sequence] = "sequence",
  [anon_sym_anytype] = "anytype",
  [anon_sym_array] = "array",
  [anon_sym_tuple] = "tuple",
  [anon_sym_enum] = "enum",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__edgeql_chars] = "edgeql_fragment",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_schema_declarations] = "schema_declarations",
  [sym_object_type] = "object_type",
  [sym_declarations] = "declarations",
  [sym_scalar_type_def] = "scalar_type_def",
  [sym_property] = "property",
  [sym_annotation] = "annotation",
  [sym_constraint] = "constraint",
  [sym_index] = "index",
  [sym_alias] = "alias",
  [sym_function] = "function",
  [sym_extension] = "extension",
  [sym_extending] = "extending",
  [sym_using] = "using",
  [sym_on] = "on",
  [sym_except] = "except",
  [sym_computed] = "computed",
  [sym_modifier] = "modifier",
  [sym_argspec] = "argspec",
  [sym_returnspec] = "returnspec",
  [sym_expression] = "expression",
  [sym_accessor] = "accessor",
  [sym_fncall] = "fncall",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym__scalar_type] = "_scalar_type",
  [sym_array] = "array",
  [sym_tuple] = "tuple",
  [sym__tuple] = "_tuple",
  [sym__named_tuple] = "_named_tuple",
  [sym_enum] = "enum",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_scalar_type_def_repeat1] = "scalar_type_def_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_extending_repeat1] = "extending_repeat1",
  [aux_sym_argspec_repeat1] = "argspec_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_fncall_repeat1] = "fncall_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__tuple_repeat1] = "_tuple_repeat1",
  [aux_sym__named_tuple_repeat1] = "_named_tuple_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_scalar] = anon_sym_scalar,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_overloaded] = anon_sym_overloaded,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_inheritable] = anon_sym_inheritable,
  [anon_sym_setof] = anon_sym_setof,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_single_string_fragment] = sym_unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_bigint] = anon_sym_bigint,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_cal_COLON_COLONlocal_datetime] = anon_sym_cal_COLON_COLONlocal_datetime,
  [anon_sym_cal_COLON_COLONlocal_date] = anon_sym_cal_COLON_COLONlocal_date,
  [anon_sym_cal_COLON_COLONlocal_time] = anon_sym_cal_COLON_COLONlocal_time,
  [anon_sym_cal_COLON_COLONrelative_duration] = anon_sym_cal_COLON_COLONrelative_duration,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_anytype] = anon_sym_anytype,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__edgeql_chars] = sym__edgeql_chars,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_schema_declarations] = sym_schema_declarations,
  [sym_object_type] = sym_object_type,
  [sym_declarations] = sym_declarations,
  [sym_scalar_type_def] = sym_scalar_type_def,
  [sym_property] = sym_property,
  [sym_annotation] = sym_annotation,
  [sym_constraint] = sym_constraint,
  [sym_index] = sym_index,
  [sym_alias] = sym_alias,
  [sym_function] = sym_function,
  [sym_extension] = sym_extension,
  [sym_extending] = sym_extending,
  [sym_using] = sym_using,
  [sym_on] = sym_on,
  [sym_except] = sym_except,
  [sym_computed] = sym_computed,
  [sym_modifier] = sym_modifier,
  [sym_argspec] = sym_argspec,
  [sym_returnspec] = sym_returnspec,
  [sym_expression] = sym_expression,
  [sym_accessor] = sym_accessor,
  [sym_fncall] = sym_fncall,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym__scalar_type] = sym__scalar_type,
  [sym_array] = sym_array,
  [sym_tuple] = sym_tuple,
  [sym__tuple] = sym__tuple,
  [sym__named_tuple] = sym__named_tuple,
  [sym_enum] = sym_enum,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_scalar_type_def_repeat1] = aux_sym_scalar_type_def_repeat1,
  [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_extending_repeat1] = aux_sym_extending_repeat1,
  [aux_sym_argspec_repeat1] = aux_sym_argspec_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_fncall_repeat1] = aux_sym_fncall_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__tuple_repeat1] = aux_sym__tuple_repeat1,
  [aux_sym__named_tuple_repeat1] = aux_sym__named_tuple_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overloaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inheritable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bigint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONrelative_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anytype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__edgeql_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_extending] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_except] = {
    .visible = true,
    .named = true,
  },
  [sym_computed] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_argspec] = {
    .visible = true,
    .named = true,
  },
  [sym_returnspec] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_fncall] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar_type] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple] = {
    .visible = false,
    .named = true,
  },
  [sym__named_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_type_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extending_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argspec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fncall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__named_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_language = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_supertype = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_supertype] = "supertype",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 2},
  [3] =
    {field_supertype, 1},
  [4] =
    {field_name, 3},
  [5] =
    {field_supertype, 1},
    {field_supertype, 2, .inherited = true},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_supertype, 0, .inherited = true},
    {field_supertype, 1, .inherited = true},
  [12] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym__edgeql_chars,
  },
  [11] = {
    [2] = sym__edgeql_chars,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 11,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 12,
  [23] = 21,
  [24] = 24,
  [25] = 20,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 33,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 2,
  [56] = 52,
  [57] = 47,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 50,
  [73] = 49,
  [74] = 74,
  [75] = 42,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 58,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 53,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 48,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 60,
  [103] = 68,
  [104] = 59,
  [105] = 105,
  [106] = 106,
  [107] = 90,
  [108] = 74,
  [109] = 109,
  [110] = 110,
  [111] = 79,
  [112] = 112,
  [113] = 113,
  [114] = 77,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 137,
  [144] = 136,
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 146,
  [152] = 152,
  [153] = 136,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 148,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 136,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 148,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 148,
  [186] = 147,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 193,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 197,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 190,
  [210] = 210,
  [211] = 191,
  [212] = 212,
  [213] = 213,
  [214] = 203,
  [215] = 206,
  [216] = 216,
  [217] = 199,
  [218] = 218,
  [219] = 219,
  [220] = 219,
  [221] = 200,
  [222] = 196,
  [223] = 192,
  [224] = 188,
  [225] = 201,
  [226] = 210,
  [227] = 216,
  [228] = 228,
  [229] = 213,
  [230] = 228,
  [231] = 202,
  [232] = 212,
  [233] = 218,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 236,
  [240] = 238,
  [241] = 241,
  [242] = 242,
  [243] = 237,
  [244] = 244,
  [245] = 245,
  [246] = 236,
  [247] = 247,
  [248] = 236,
  [249] = 247,
  [250] = 242,
  [251] = 251,
  [252] = 238,
  [253] = 253,
  [254] = 241,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 238,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 163,
  [269] = 176,
  [270] = 126,
  [271] = 152,
  [272] = 125,
  [273] = 120,
  [274] = 123,
  [275] = 275,
  [276] = 132,
  [277] = 149,
  [278] = 278,
  [279] = 187,
  [280] = 133,
  [281] = 169,
  [282] = 121,
  [283] = 168,
  [284] = 284,
  [285] = 181,
  [286] = 122,
  [287] = 174,
  [288] = 138,
  [289] = 289,
  [290] = 180,
  [291] = 134,
  [292] = 130,
  [293] = 156,
  [294] = 179,
  [295] = 295,
  [296] = 162,
  [297] = 154,
  [298] = 141,
  [299] = 178,
  [300] = 127,
  [301] = 166,
  [302] = 159,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 304,
  [310] = 307,
  [311] = 307,
  [312] = 304,
  [313] = 313,
  [314] = 304,
  [315] = 315,
  [316] = 307,
  [317] = 317,
  [318] = 318,
  [319] = 318,
  [320] = 320,
  [321] = 321,
  [322] = 321,
  [323] = 318,
  [324] = 318,
  [325] = 321,
  [326] = 326,
  [327] = 321,
  [328] = 315,
  [329] = 329,
  [330] = 330,
  [331] = 305,
  [332] = 305,
  [333] = 333,
  [334] = 181,
  [335] = 182,
  [336] = 121,
  [337] = 169,
  [338] = 133,
  [339] = 187,
  [340] = 305,
  [341] = 173,
  [342] = 342,
  [343] = 138,
  [344] = 181,
  [345] = 315,
  [346] = 121,
  [347] = 169,
  [348] = 348,
  [349] = 348,
  [350] = 133,
  [351] = 138,
  [352] = 187,
  [353] = 353,
  [354] = 353,
  [355] = 355,
  [356] = 355,
  [357] = 305,
  [358] = 358,
  [359] = 358,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 361,
  [364] = 364,
  [365] = 364,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 32,
  [370] = 30,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 372,
  [375] = 375,
  [376] = 367,
  [377] = 377,
  [378] = 373,
  [379] = 379,
  [380] = 379,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 382,
  [385] = 115,
  [386] = 33,
  [387] = 116,
  [388] = 383,
  [389] = 117,
  [390] = 390,
  [391] = 390,
  [392] = 392,
  [393] = 393,
  [394] = 53,
  [395] = 395,
  [396] = 54,
  [397] = 397,
  [398] = 58,
  [399] = 399,
  [400] = 42,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 50,
  [405] = 49,
  [406] = 406,
  [407] = 407,
  [408] = 403,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 129,
  [415] = 415,
  [416] = 416,
  [417] = 413,
  [418] = 395,
  [419] = 397,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 412,
  [424] = 399,
  [425] = 406,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 429,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 428,
  [444] = 440,
  [445] = 445,
  [446] = 434,
  [447] = 430,
  [448] = 426,
  [449] = 449,
  [450] = 433,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 452,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 461,
  [463] = 463,
  [464] = 464,
  [465] = 460,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 458,
  [471] = 471,
  [472] = 455,
  [473] = 473,
  [474] = 474,
  [475] = 464,
  [476] = 457,
  [477] = 477,
  [478] = 466,
  [479] = 479,
  [480] = 473,
  [481] = 481,
  [482] = 477,
  [483] = 483,
  [484] = 459,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 488,
  [501] = 492,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 487,
  [516] = 495,
  [517] = 486,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 497,
  [525] = 525,
  [526] = 519,
  [527] = 518,
  [528] = 528,
  [529] = 529,
  [530] = 510,
  [531] = 531,
  [532] = 494,
  [533] = 533,
  [534] = 534,
  [535] = 499,
  [536] = 489,
  [537] = 537,
  [538] = 538,
  [539] = 529,
  [540] = 533,
  [541] = 541,
  [542] = 498,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 485,
  [548] = 513,
  [549] = 512,
  [550] = 550,
  [551] = 551,
  [552] = 490,
  [553] = 513,
  [554] = 519,
  [555] = 555,
  [556] = 504,
  [557] = 513,
  [558] = 519,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 506,
  [563] = 505,
  [564] = 564,
  [565] = 534,
  [566] = 496,
  [567] = 533,
  [568] = 568,
  [569] = 569,
  [570] = 511,
  [571] = 571,
  [572] = 491,
  [573] = 573,
  [574] = 574,
  [575] = 493,
  [576] = 504,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < '`'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '\'' && c <= '@')))
      : (c <= '`' || (c < 160
        ? c == '~'
        : c <= 160)))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8203)
        : c <= 8239)
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '!' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 160
    ? (c < ']'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 160
    ? (c < ']'
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 160
    ? (c < ';'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '!') ADVANCE(325);
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '%') ADVANCE(501);
      if (lookahead == '&') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(501);
      if (lookahead == '*') ADVANCE(501);
      if (lookahead == '+') ADVANCE(501);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == '.') ADVANCE(497);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == ';') ADVANCE(501);
      if (lookahead == '<') ADVANCE(323);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '[') ADVANCE(501);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == ']') ADVANCE(501);
      if (lookahead == '^') ADVANCE(501);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 'j') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead == '{') ADVANCE(501);
      if (lookahead == '|') ADVANCE(490);
      if (lookahead == '}') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '%') ADVANCE(300);
      if (lookahead == '&') ADVANCE(293);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(301);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '>') ADVANCE(307);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(755);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(501);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '0') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(745);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(755);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(755);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == 'j') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(690);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(755);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(755);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == 'u') ADVANCE(715);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(755);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == 'j') ADVANCE(716);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead == 'j') ADVANCE(716);
      if (lookahead == 's') ADVANCE(609);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'f') ADVANCE(742);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(755);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(663);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'g') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == 'u') ADVANCE(715);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(755);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(512);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(516);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(514);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(518);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(510);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(526);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 166:
      if (lookahead == 'q') ADVANCE(199);
      END_STATE();
    case 167:
      if (lookahead == 'q') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(505);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(505);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 205:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 206:
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 209:
      if (lookahead == '{') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 210:
      if (lookahead == '{') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 211:
      if (lookahead == '{') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 212:
      if (lookahead == '}') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '}') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == '}') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 216:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(762);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(763);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(755);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 235:
      if (eof) ADVANCE(236);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '#') ADVANCE(769);
      if (lookahead == '%') ADVANCE(300);
      if (lookahead == '&') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(301);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead == '>') ADVANCE(307);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'j') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '}') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(770);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_scalar);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_extending);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_single);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_multi);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(289);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(290);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(292);
      if (lookahead == '=') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '&') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == '0') ADVANCE(331);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(500);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '_') ADVANCE(496);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '1') ADVANCE(319);
      if (lookahead == '3') ADVANCE(316);
      if (lookahead == '6') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '2') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '3') ADVANCE(316);
      if (lookahead == '6') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '4') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '6') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(501);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '<') ADVANCE(501);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(495);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(484);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead == 'y') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'v') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '|') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '_') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(502);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(553);
      if (lookahead == '3') ADVANCE(548);
      if (lookahead == '6') ADVANCE(551);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(549);
      if (lookahead == '6') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_8(lookahead)) ADVANCE(755);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(710);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(585);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(577);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(575);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(642);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(752);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(635);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(636);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(637);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(698);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(639);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(646);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(721);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(625);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(709);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(736);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(737);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'n') ADVANCE(666);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(713);
      if (lookahead == 'n') ADVANCE(666);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(561);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(647);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(658);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(718);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(617);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(597);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(735);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(274);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(270);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(527);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(741);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(605);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'h') ADVANCE(603);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(628);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(695);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(243);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(238);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(278);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(282);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 't') ADVANCE(699);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(543);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(541);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(531);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(539);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(756);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(757);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(707);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(748);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(581);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(703);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(711);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(582);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(701);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(667);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(670);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 't') ADVANCE(699);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(729);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(256);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(261);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(645);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(626);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(603);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(280);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(654);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(555);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == 'y') ADVANCE(730);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(653);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(657);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(583);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(658);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(705);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(671);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(673);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(665);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(668);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(680);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(728);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(683);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(684);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(687);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'k') ADVANCE(246);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(272);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(276);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(554);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(509);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(523);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(758);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(677);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(564);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(681);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(590);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(591);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(714);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(592);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(640);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(594);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(726);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(685);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(544);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(596);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(565);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(615);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(580);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(634);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(613);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(257);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(251);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(525);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(533);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(586);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(706);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(611);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(679);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(579);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(612);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(740);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(587);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(719);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(720);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(722);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(562);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(717);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'u') ADVANCE(650);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(574);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(675);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(727);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(674);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(556);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(638);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(659);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(660);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(567);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(661);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(662);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(693);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(724);
      if (lookahead == 'v') ADVANCE(600);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(724);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(589);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(595);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(606);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(649);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'q') ADVANCE(743);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'q') ADVANCE(746);
      if (lookahead == 't') ADVANCE(546);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'q') ADVANCE(746);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(244);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(507);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(688);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(723);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(557);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(630);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(568);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(602);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(560);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(643);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(747);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(571);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(254);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(529);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(286);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(725);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(599);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(627);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(686);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 's') ADVANCE(732);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(268);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(252);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(547);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(550);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(521);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(751);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(629);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(702);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(616);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(570);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(558);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(620);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(604);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(610);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(704);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(608);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(754);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(631);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(632);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 't') ADVANCE(633);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(650);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(694);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(652);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(644);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(656);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(624);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(622);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(648);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(607);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(598);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(253);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(733);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(691);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(245);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(542);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(734);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(692);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(201);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(755);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(768);
      if (lookahead == '0') ADVANCE(764);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(759);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(761);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(768);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == '_') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(769);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 235},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 235},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 235},
  [28] = {.lex_state = 235},
  [29] = {.lex_state = 235},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 235},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 235},
  [36] = {.lex_state = 235},
  [37] = {.lex_state = 235},
  [38] = {.lex_state = 235},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 235},
  [41] = {.lex_state = 235},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 235},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 235},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 235},
  [66] = {.lex_state = 235},
  [67] = {.lex_state = 235},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 235},
  [70] = {.lex_state = 235},
  [71] = {.lex_state = 235},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 235},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 235},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 235},
  [81] = {.lex_state = 235},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 235},
  [84] = {.lex_state = 235},
  [85] = {.lex_state = 235},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 235},
  [88] = {.lex_state = 235},
  [89] = {.lex_state = 235},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 235},
  [92] = {.lex_state = 235},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 235},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 235},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 235},
  [110] = {.lex_state = 235},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 235},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 235},
  [119] = {.lex_state = 235},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 235},
  [136] = {.lex_state = 235},
  [137] = {.lex_state = 235},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 235},
  [143] = {.lex_state = 235},
  [144] = {.lex_state = 235},
  [145] = {.lex_state = 235},
  [146] = {.lex_state = 235},
  [147] = {.lex_state = 235},
  [148] = {.lex_state = 235},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 235},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 235},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 235},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 235},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 235},
  [171] = {.lex_state = 235},
  [172] = {.lex_state = 235},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 235},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 235},
  [184] = {.lex_state = 235},
  [185] = {.lex_state = 235},
  [186] = {.lex_state = 235},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 17},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 3, .external_lex_state = 1},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 17},
  [198] = {.lex_state = 17},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 17},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 3, .external_lex_state = 1},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 3, .external_lex_state = 1},
  [235] = {.lex_state = 3, .external_lex_state = 1},
  [236] = {.lex_state = 3, .external_lex_state = 1},
  [237] = {.lex_state = 3, .external_lex_state = 1},
  [238] = {.lex_state = 3, .external_lex_state = 1},
  [239] = {.lex_state = 3, .external_lex_state = 1},
  [240] = {.lex_state = 3, .external_lex_state = 1},
  [241] = {.lex_state = 3, .external_lex_state = 1},
  [242] = {.lex_state = 3, .external_lex_state = 1},
  [243] = {.lex_state = 3, .external_lex_state = 1},
  [244] = {.lex_state = 3, .external_lex_state = 1},
  [245] = {.lex_state = 3, .external_lex_state = 1},
  [246] = {.lex_state = 3, .external_lex_state = 1},
  [247] = {.lex_state = 3, .external_lex_state = 1},
  [248] = {.lex_state = 3, .external_lex_state = 1},
  [249] = {.lex_state = 3, .external_lex_state = 1},
  [250] = {.lex_state = 3, .external_lex_state = 1},
  [251] = {.lex_state = 3, .external_lex_state = 1},
  [252] = {.lex_state = 3, .external_lex_state = 1},
  [253] = {.lex_state = 3, .external_lex_state = 1},
  [254] = {.lex_state = 3, .external_lex_state = 1},
  [255] = {.lex_state = 3, .external_lex_state = 1},
  [256] = {.lex_state = 3, .external_lex_state = 1},
  [257] = {.lex_state = 3, .external_lex_state = 1},
  [258] = {.lex_state = 3, .external_lex_state = 1},
  [259] = {.lex_state = 3, .external_lex_state = 1},
  [260] = {.lex_state = 3, .external_lex_state = 1},
  [261] = {.lex_state = 3, .external_lex_state = 1},
  [262] = {.lex_state = 3, .external_lex_state = 1},
  [263] = {.lex_state = 3, .external_lex_state = 1},
  [264] = {.lex_state = 3, .external_lex_state = 1},
  [265] = {.lex_state = 3, .external_lex_state = 1},
  [266] = {.lex_state = 3, .external_lex_state = 1},
  [267] = {.lex_state = 3, .external_lex_state = 1},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 12},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 12},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 12},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 12},
  [304] = {.lex_state = 235},
  [305] = {.lex_state = 13},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 235},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 235},
  [310] = {.lex_state = 235},
  [311] = {.lex_state = 235},
  [312] = {.lex_state = 235},
  [313] = {.lex_state = 235},
  [314] = {.lex_state = 235},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 235},
  [317] = {.lex_state = 235},
  [318] = {.lex_state = 235},
  [319] = {.lex_state = 235},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 235},
  [322] = {.lex_state = 235},
  [323] = {.lex_state = 235},
  [324] = {.lex_state = 235},
  [325] = {.lex_state = 235},
  [326] = {.lex_state = 235},
  [327] = {.lex_state = 235},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 235},
  [330] = {.lex_state = 235},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 14},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 17},
  [336] = {.lex_state = 17},
  [337] = {.lex_state = 17},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 17},
  [342] = {.lex_state = 17},
  [343] = {.lex_state = 17},
  [344] = {.lex_state = 235},
  [345] = {.lex_state = 235},
  [346] = {.lex_state = 235},
  [347] = {.lex_state = 235},
  [348] = {.lex_state = 235},
  [349] = {.lex_state = 235},
  [350] = {.lex_state = 235},
  [351] = {.lex_state = 235},
  [352] = {.lex_state = 235},
  [353] = {.lex_state = 235},
  [354] = {.lex_state = 235},
  [355] = {.lex_state = 235},
  [356] = {.lex_state = 235},
  [357] = {.lex_state = 235},
  [358] = {.lex_state = 235},
  [359] = {.lex_state = 235},
  [360] = {.lex_state = 235},
  [361] = {.lex_state = 235},
  [362] = {.lex_state = 235},
  [363] = {.lex_state = 235},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 5},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 235},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 5},
  [370] = {.lex_state = 5},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 235},
  [373] = {.lex_state = 235},
  [374] = {.lex_state = 235},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 235},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 235},
  [379] = {.lex_state = 235},
  [380] = {.lex_state = 235},
  [381] = {.lex_state = 2},
  [382] = {.lex_state = 235},
  [383] = {.lex_state = 235},
  [384] = {.lex_state = 235},
  [385] = {.lex_state = 235},
  [386] = {.lex_state = 5},
  [387] = {.lex_state = 235},
  [388] = {.lex_state = 235},
  [389] = {.lex_state = 235},
  [390] = {.lex_state = 235},
  [391] = {.lex_state = 235},
  [392] = {.lex_state = 235},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 5},
  [395] = {.lex_state = 235},
  [396] = {.lex_state = 5},
  [397] = {.lex_state = 235},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 235},
  [400] = {.lex_state = 5},
  [401] = {.lex_state = 235},
  [402] = {.lex_state = 235},
  [403] = {.lex_state = 235},
  [404] = {.lex_state = 5},
  [405] = {.lex_state = 5},
  [406] = {.lex_state = 235},
  [407] = {.lex_state = 235},
  [408] = {.lex_state = 235},
  [409] = {.lex_state = 235},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 2},
  [412] = {.lex_state = 4},
  [413] = {.lex_state = 235},
  [414] = {.lex_state = 235},
  [415] = {.lex_state = 2},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 235},
  [418] = {.lex_state = 235},
  [419] = {.lex_state = 235},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 2},
  [422] = {.lex_state = 2},
  [423] = {.lex_state = 4},
  [424] = {.lex_state = 235},
  [425] = {.lex_state = 235},
  [426] = {.lex_state = 5},
  [427] = {.lex_state = 235},
  [428] = {.lex_state = 5},
  [429] = {.lex_state = 235},
  [430] = {.lex_state = 5},
  [431] = {.lex_state = 235},
  [432] = {.lex_state = 5},
  [433] = {.lex_state = 235},
  [434] = {.lex_state = 235},
  [435] = {.lex_state = 235},
  [436] = {.lex_state = 5},
  [437] = {.lex_state = 5},
  [438] = {.lex_state = 235},
  [439] = {.lex_state = 235},
  [440] = {.lex_state = 5},
  [441] = {.lex_state = 5},
  [442] = {.lex_state = 235},
  [443] = {.lex_state = 5},
  [444] = {.lex_state = 5},
  [445] = {.lex_state = 235},
  [446] = {.lex_state = 235},
  [447] = {.lex_state = 5},
  [448] = {.lex_state = 5},
  [449] = {.lex_state = 5},
  [450] = {.lex_state = 235},
  [451] = {.lex_state = 235},
  [452] = {.lex_state = 235},
  [453] = {.lex_state = 235},
  [454] = {.lex_state = 235},
  [455] = {.lex_state = 235},
  [456] = {.lex_state = 235},
  [457] = {.lex_state = 235, .external_lex_state = 1},
  [458] = {.lex_state = 235},
  [459] = {.lex_state = 235},
  [460] = {.lex_state = 235},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 4},
  [463] = {.lex_state = 5},
  [464] = {.lex_state = 235},
  [465] = {.lex_state = 235},
  [466] = {.lex_state = 235},
  [467] = {.lex_state = 5},
  [468] = {.lex_state = 235},
  [469] = {.lex_state = 235},
  [470] = {.lex_state = 235},
  [471] = {.lex_state = 235},
  [472] = {.lex_state = 235},
  [473] = {.lex_state = 235},
  [474] = {.lex_state = 235},
  [475] = {.lex_state = 235},
  [476] = {.lex_state = 235, .external_lex_state = 1},
  [477] = {.lex_state = 235},
  [478] = {.lex_state = 235},
  [479] = {.lex_state = 5},
  [480] = {.lex_state = 235},
  [481] = {.lex_state = 235},
  [482] = {.lex_state = 235},
  [483] = {.lex_state = 235},
  [484] = {.lex_state = 235},
  [485] = {.lex_state = 4},
  [486] = {.lex_state = 4},
  [487] = {.lex_state = 235},
  [488] = {.lex_state = 235},
  [489] = {.lex_state = 235},
  [490] = {.lex_state = 235},
  [491] = {.lex_state = 235},
  [492] = {.lex_state = 235},
  [493] = {.lex_state = 235},
  [494] = {.lex_state = 235},
  [495] = {.lex_state = 235},
  [496] = {.lex_state = 235},
  [497] = {.lex_state = 235},
  [498] = {.lex_state = 235},
  [499] = {.lex_state = 235},
  [500] = {.lex_state = 235},
  [501] = {.lex_state = 235},
  [502] = {.lex_state = 4},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 4},
  [505] = {.lex_state = 235},
  [506] = {.lex_state = 235},
  [507] = {.lex_state = 235},
  [508] = {.lex_state = 5},
  [509] = {.lex_state = 235},
  [510] = {.lex_state = 5},
  [511] = {.lex_state = 4},
  [512] = {.lex_state = 4},
  [513] = {.lex_state = 4},
  [514] = {.lex_state = 4},
  [515] = {.lex_state = 235},
  [516] = {.lex_state = 235},
  [517] = {.lex_state = 4},
  [518] = {.lex_state = 4},
  [519] = {.lex_state = 4},
  [520] = {.lex_state = 235},
  [521] = {.lex_state = 235},
  [522] = {.lex_state = 235},
  [523] = {.lex_state = 235},
  [524] = {.lex_state = 235},
  [525] = {.lex_state = 235},
  [526] = {.lex_state = 4},
  [527] = {.lex_state = 4},
  [528] = {.lex_state = 235},
  [529] = {.lex_state = 235},
  [530] = {.lex_state = 5},
  [531] = {.lex_state = 4},
  [532] = {.lex_state = 235},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 235},
  [535] = {.lex_state = 235},
  [536] = {.lex_state = 235},
  [537] = {.lex_state = 4},
  [538] = {.lex_state = 4},
  [539] = {.lex_state = 235},
  [540] = {.lex_state = 4},
  [541] = {.lex_state = 235},
  [542] = {.lex_state = 235},
  [543] = {.lex_state = 4},
  [544] = {.lex_state = 235},
  [545] = {.lex_state = 4},
  [546] = {.lex_state = 4},
  [547] = {.lex_state = 4},
  [548] = {.lex_state = 4},
  [549] = {.lex_state = 4},
  [550] = {.lex_state = 235},
  [551] = {.lex_state = 4},
  [552] = {.lex_state = 235},
  [553] = {.lex_state = 4},
  [554] = {.lex_state = 4},
  [555] = {.lex_state = 235},
  [556] = {.lex_state = 4},
  [557] = {.lex_state = 4},
  [558] = {.lex_state = 4},
  [559] = {.lex_state = 235},
  [560] = {.lex_state = 235},
  [561] = {.lex_state = 4},
  [562] = {.lex_state = 235},
  [563] = {.lex_state = 235},
  [564] = {.lex_state = 235},
  [565] = {.lex_state = 235},
  [566] = {.lex_state = 235},
  [567] = {.lex_state = 4},
  [568] = {.lex_state = 235},
  [569] = {.lex_state = 235},
  [570] = {.lex_state = 4},
  [571] = {.lex_state = 235},
  [572] = {.lex_state = 235},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 4},
  [575] = {.lex_state = 235},
  [576] = {.lex_state = 4},
};

enum {
  ts_external_token__edgeql_chars = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__edgeql_chars] = sym__edgeql_chars,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__edgeql_chars] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_scalar] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_overloaded] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_inheritable] = ACTIONS(1),
    [anon_sym_setof] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unescaped_single_string_fragment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_bigint] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_datetime] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_date] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_time] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONrelative_duration] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_anytype] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__edgeql_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(559),
    [sym_module] = STATE(360),
    [sym_schema_declarations] = STATE(360),
    [sym_extension] = STATE(360),
    [aux_sym_source_file_repeat1] = STATE(360),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_using] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 22,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(17), 22,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_COLON,
  [53] = 13,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_setof,
    ACTIONS(27), 1,
      anon_sym_array,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(99), 1,
      sym_returnspec,
    STATE(105), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(102), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(25), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(111), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(23), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [115] = 11,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(101), 2,
      sym_enum,
      sym_type,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [172] = 11,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(93), 2,
      sym_enum,
      sym_type,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [229] = 15,
    ACTIONS(49), 1,
      anon_sym_module,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_scalar,
    ACTIONS(63), 1,
      anon_sym_annotation,
    ACTIONS(66), 1,
      anon_sym_constraint,
    ACTIONS(69), 1,
      anon_sym_alias,
    ACTIONS(72), 1,
      anon_sym_function,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(306), 1,
      sym_modifier,
    STATE(308), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(60), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(75), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(6), 9,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [292] = 10,
    ACTIONS(27), 1,
      anon_sym_array,
    ACTIONS(29), 1,
      anon_sym_tuple,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(112), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(102), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(25), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(111), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(23), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [345] = 15,
    ACTIONS(81), 1,
      anon_sym_module,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(87), 1,
      anon_sym_scalar,
    ACTIONS(91), 1,
      anon_sym_annotation,
    ACTIONS(93), 1,
      anon_sym_constraint,
    ACTIONS(95), 1,
      anon_sym_alias,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(306), 1,
      sym_modifier,
    STATE(308), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(99), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(10), 9,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [408] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(530), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [461] = 15,
    ACTIONS(81), 1,
      anon_sym_module,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(87), 1,
      anon_sym_scalar,
    ACTIONS(91), 1,
      anon_sym_annotation,
    ACTIONS(93), 1,
      anon_sym_constraint,
    ACTIONS(95), 1,
      anon_sym_alias,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_modifier,
    STATE(308), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(99), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(6), 9,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [524] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(447), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [577] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(435), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [630] = 15,
    ACTIONS(81), 1,
      anon_sym_module,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(87), 1,
      anon_sym_scalar,
    ACTIONS(91), 1,
      anon_sym_annotation,
    ACTIONS(93), 1,
      anon_sym_constraint,
    ACTIONS(95), 1,
      anon_sym_alias,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_modifier,
    STATE(308), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(99), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(19), 9,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [693] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(430), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [746] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(510), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [799] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(463), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [852] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(446), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [905] = 10,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_expression_repeat1,
    STATE(38), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [958] = 15,
    ACTIONS(81), 1,
      anon_sym_module,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(87), 1,
      anon_sym_scalar,
    ACTIONS(91), 1,
      anon_sym_annotation,
    ACTIONS(93), 1,
      anon_sym_constraint,
    ACTIONS(95), 1,
      anon_sym_alias,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_modifier,
    STATE(308), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(99), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(6), 9,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1021] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(433), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1074] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(426), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1127] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(429), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1180] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(448), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1233] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(479), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1286] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(450), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1339] = 10,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_tuple,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(434), 1,
      sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(37), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(79), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(35), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [1392] = 11,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_COLON,
    STATE(37), 1,
      aux_sym_expression_repeat1,
    STATE(38), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1445] = 11,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_COLON,
    STATE(37), 1,
      aux_sym_expression_repeat1,
    STATE(38), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1498] = 7,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_accessor,
    STATE(36), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1542] = 7,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(49), 1,
      sym_accessor,
    STATE(50), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(139), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1585] = 5,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1624] = 7,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      sym_accessor,
    STATE(58), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(149), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1667] = 5,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
    ACTIONS(153), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1705] = 7,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      sym_accessor,
    STATE(82), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1747] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(163), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1785] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(163), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1823] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1861] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1899] = 7,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(72), 1,
      aux_sym_type_repeat1,
    STATE(73), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(139), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1941] = 5,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [1979] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2017] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(53), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(172), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2054] = 8,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_extending,
    STATE(100), 1,
      sym_extending,
    STATE(158), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2097] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(188), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(186), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2130] = 13,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      anon_sym_annotation,
    ACTIONS(198), 1,
      anon_sym_constraint,
    ACTIONS(201), 1,
      anon_sym_index,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(333), 1,
      sym_modifier,
    STATE(507), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(45), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(207), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2183] = 5,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(153), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2220] = 13,
    ACTIONS(184), 1,
      anon_sym_extending,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_annotation,
    ACTIONS(219), 1,
      anon_sym_constraint,
    ACTIONS(221), 1,
      anon_sym_index,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(333), 1,
      sym_modifier,
    STATE(507), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(52), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(223), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2273] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(229), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
    ACTIONS(227), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2306] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(58), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(149), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2343] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(149), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2380] = 8,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_extending,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_extending,
    STATE(139), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(231), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2423] = 13,
    ACTIONS(184), 1,
      anon_sym_extending,
    ACTIONS(217), 1,
      anon_sym_annotation,
    ACTIONS(219), 1,
      anon_sym_constraint,
    ACTIONS(221), 1,
      anon_sym_index,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(333), 1,
      sym_modifier,
    STATE(507), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(45), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(223), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2476] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(241), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(239), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2513] = 5,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(153), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2550] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(17), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
    ACTIONS(15), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2583] = 13,
    ACTIONS(184), 1,
      anon_sym_extending,
    ACTIONS(217), 1,
      anon_sym_annotation,
    ACTIONS(219), 1,
      anon_sym_constraint,
    ACTIONS(221), 1,
      anon_sym_index,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(333), 1,
      sym_modifier,
    STATE(507), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(45), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(223), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2636] = 13,
    ACTIONS(184), 1,
      anon_sym_extending,
    ACTIONS(217), 1,
      anon_sym_annotation,
    ACTIONS(219), 1,
      anon_sym_constraint,
    ACTIONS(221), 1,
      anon_sym_index,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(333), 1,
      sym_modifier,
    STATE(507), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(56), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(223), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2689] = 5,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(172), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2726] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(252), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(250), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2758] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(256), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(254), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2790] = 5,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2826] = 5,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(263), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(261), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2862] = 5,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(269), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2898] = 5,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(275), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [2934] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [2966] = 8,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3008] = 6,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(269), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3046] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(292), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3078] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3110] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3142] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3174] = 5,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3210] = 5,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(82), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(149), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3246] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(304), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3278] = 5,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(86), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(172), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3314] = 12,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [3364] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(318), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3396] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(269), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3430] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(139), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3462] = 9,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [3506] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(322), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3538] = 5,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(172), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3574] = 11,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3622] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(163), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3654] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(326), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3686] = 5,
    ACTIONS(159), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(241), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(239), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3722] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(330), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3754] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3786] = 10,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [3832] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(334), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3864] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3896] = 11,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(267), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3944] = 5,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_extending_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(338), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3980] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(342), 19,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [4012] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4049] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(352), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4080] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(356), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4111] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(229), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(227), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4142] = 6,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_using,
    STATE(150), 1,
      sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4179] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4216] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(374), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4247] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(256), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(254), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4277] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4307] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(252), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(250), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4337] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(378), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4367] = 4,
    ACTIONS(384), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(438), 1,
      sym__scalar_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 19,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_sequence,
      anon_sym_anytype,
  [4399] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(334), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4429] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(304), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4459] = 15,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    STATE(445), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4513] = 15,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4567] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(139), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4597] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(396), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4627] = 4,
    ACTIONS(402), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(481), 1,
      sym__scalar_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 19,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_sequence,
      anon_sym_anytype,
  [4659] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(318), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4689] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(404), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4718] = 4,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4749] = 3,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(414), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4778] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4827] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4876] = 3,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4904] = 3,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4932] = 3,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4960] = 3,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4988] = 3,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5016] = 3,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5044] = 3,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5072] = 3,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5100] = 3,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(454), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5128] = 3,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(458), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5156] = 3,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(462), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5184] = 3,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(466), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5212] = 3,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(470), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5240] = 3,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5268] = 3,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5296] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5344] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5392] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5440] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5468] = 3,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5496] = 3,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5524] = 3,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(496), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5552] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5600] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5648] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5696] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5744] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5792] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5840] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5888] = 3,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5916] = 3,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(518), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5944] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5992] = 3,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6020] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6068] = 3,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(530), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6096] = 3,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(534), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6124] = 3,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(538), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6152] = 3,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(542), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6180] = 3,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6208] = 3,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6236] = 3,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(550), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6264] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6312] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6340] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6368] = 3,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(564), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6396] = 3,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(568), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6424] = 3,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6452] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6500] = 3,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6528] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6556] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6604] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6652] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6700] = 3,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6728] = 3,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(596), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6756] = 3,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(600), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6784] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6812] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6860] = 3,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(610), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6888] = 3,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(614), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6916] = 3,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6944] = 3,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6972] = 3,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7000] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7048] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7096] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7144] = 13,
    ACTIONS(308), 1,
      anon_sym_AMP_AMP,
    ACTIONS(310), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(286), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(273), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7192] = 3,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7220] = 8,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(210), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7257] = 8,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    ACTIONS(654), 1,
      anon_sym_annotation,
    ACTIONS(657), 1,
      anon_sym_using,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(660), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7294] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7331] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(203), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7368] = 8,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7405] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(217), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7442] = 14,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    STATE(110), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [7491] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(205), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7528] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(201), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7565] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(232), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7602] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(199), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7639] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7676] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7713] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7750] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(209), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7787] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7824] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(212), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7861] = 8,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_annotation,
    ACTIONS(713), 1,
      anon_sym_using,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(205), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(716), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7898] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(200), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7935] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(195), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7972] = 14,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8021] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8058] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8095] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(214), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8132] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8169] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(218), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8206] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8243] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(221), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8280] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(230), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8317] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8354] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8391] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(192), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8428] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(223), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8465] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8502] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(225), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8539] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8576] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(226), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8613] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8650] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8687] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(228), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8724] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8761] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(233), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8798] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8835] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(190), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8872] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8909] = 8,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(646), 1,
      anon_sym_using,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(348), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(189), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(648), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8946] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(135), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8992] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(80), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9038] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(167), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9084] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(151), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9130] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(161), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9176] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(153), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9222] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(148), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9268] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(147), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9314] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(145), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9360] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(146), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9406] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(756), 1,
      sym_identifier,
    STATE(118), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9452] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(170), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9498] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(144), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9544] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(137), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9590] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9636] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(143), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9682] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(142), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9728] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(177), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9774] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(185), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9820] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(184), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9866] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(186), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9912] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(183), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9958] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(172), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10004] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(92), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10050] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10096] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(171), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10142] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(63), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10188] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(66), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10234] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(67), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10280] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(76), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10326] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(71), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10372] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(78), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10418] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(83), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10464] = 13,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym_escape_sequence,
    ACTIONS(688), 1,
      sym_number,
    ACTIONS(690), 1,
      sym__edgeql_chars,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(89), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      anon_sym_global,
      anon_sym_is,
    ACTIONS(686), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(88), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10510] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(560), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10535] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10560] = 3,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10585] = 3,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10610] = 3,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10635] = 3,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10660] = 3,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10685] = 3,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10710] = 3,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(470), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10735] = 3,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10760] = 3,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(764), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10785] = 3,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10810] = 3,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10835] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10860] = 3,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10885] = 3,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10910] = 3,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(766), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10935] = 3,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10960] = 3,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [10985] = 3,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(596), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11010] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11035] = 3,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(770), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11060] = 3,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11085] = 3,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11110] = 3,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(462), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11135] = 3,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(538), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11160] = 3,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(614), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11185] = 3,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(774), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11210] = 3,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11235] = 3,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(530), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11260] = 3,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(496), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11285] = 3,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(610), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11310] = 3,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11335] = 3,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(572), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11360] = 3,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11385] = 3,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(778), 15,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11410] = 7,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(782), 1,
      anon_sym_COLON_EQ,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(319), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11442] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(788), 15,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11464] = 4,
    ACTIONS(790), 1,
      anon_sym_type,
    ACTIONS(794), 1,
      anon_sym_constraint,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 13,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11490] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(327), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11522] = 7,
    ACTIONS(800), 1,
      anon_sym_scalar,
    ACTIONS(804), 1,
      anon_sym_annotation,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(315), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(806), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11554] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(318), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11586] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(814), 1,
      anon_sym_SEMI,
    ACTIONS(816), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11618] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    ACTIONS(820), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(322), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11650] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(824), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(324), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11682] = 6,
    ACTIONS(828), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(826), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(831), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11712] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    ACTIONS(836), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(323), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11744] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(838), 5,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(840), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11770] = 7,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    ACTIONS(845), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(325), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11802] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11831] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11860] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11889] = 6,
    ACTIONS(855), 1,
      anon_sym_annotation,
    ACTIONS(859), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(853), 2,
      anon_sym_property,
      anon_sym_link,
    STATE(328), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(857), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11918] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11947] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [11976] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12005] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12034] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12063] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(317), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12092] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12121] = 4,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(328), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(838), 4,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(875), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12146] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(313), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12175] = 6,
    ACTIONS(784), 1,
      anon_sym_annotation,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(329), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(349), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12204] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(788), 13,
      anon_sym_scalar,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12224] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(788), 13,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12244] = 3,
    ACTIONS(880), 1,
      anon_sym_constraint,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 12,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12266] = 3,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12287] = 3,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12308] = 3,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12329] = 3,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12350] = 3,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12371] = 3,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12392] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(788), 12,
      anon_sym_property,
      anon_sym_link,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12411] = 3,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(592), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12432] = 3,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(884), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12453] = 3,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 11,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12474] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(624), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12492] = 4,
    ACTIONS(886), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(345), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(888), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12514] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(428), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12532] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12550] = 4,
    ACTIONS(891), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(345), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12572] = 4,
    ACTIONS(893), 1,
      anon_sym_annotation,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(345), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(786), 8,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12594] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12612] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12630] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12648] = 11,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    STATE(361), 1,
      sym_argspec,
    STATE(380), 1,
      sym_on,
    STATE(419), 1,
      sym_except,
    STATE(475), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12683] = 11,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    STATE(363), 1,
      sym_argspec,
    STATE(379), 1,
      sym_on,
    STATE(397), 1,
      sym_except,
    STATE(464), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12718] = 11,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_argspec,
    STATE(378), 1,
      sym_on,
    STATE(395), 1,
      sym_except,
    STATE(472), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12753] = 11,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
    STATE(359), 1,
      sym_argspec,
    STATE(373), 1,
      sym_on,
    STATE(418), 1,
      sym_except,
    STATE(455), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12788] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(919), 9,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_global,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12804] = 9,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    STATE(372), 1,
      sym_on,
    STATE(413), 1,
      sym_except,
    STATE(480), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12833] = 9,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      sym_on,
    STATE(417), 1,
      sym_except,
    STATE(473), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12862] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_using,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 4,
      sym_module,
      sym_schema_declarations,
      sym_extension,
      aux_sym_source_file_repeat1,
  [12885] = 9,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(367), 1,
      sym_on,
    STATE(408), 1,
      sym_except,
    STATE(458), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12914] = 6,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    ACTIONS(937), 1,
      anon_sym_module,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    ACTIONS(943), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 4,
      sym_module,
      sym_schema_declarations,
      sym_extension,
      aux_sym_source_file_repeat1,
  [12937] = 9,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(903), 1,
      anon_sym_on,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym_on,
    STATE(403), 1,
      sym_except,
    STATE(470), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [12966] = 7,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(950), 1,
      anon_sym_COLON,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(404), 1,
      aux_sym_type_repeat1,
    STATE(405), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12990] = 7,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    ACTIONS(954), 1,
      anon_sym_COLON,
    STATE(404), 1,
      aux_sym_type_repeat1,
    STATE(405), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13014] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(956), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [13027] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(958), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    STATE(425), 1,
      sym_except,
    STATE(482), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13050] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(962), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [13063] = 6,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(398), 1,
      aux_sym_type_repeat1,
    STATE(400), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13084] = 6,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(404), 1,
      aux_sym_type_repeat1,
    STATE(405), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13105] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(964), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [13118] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    STATE(424), 1,
      sym_except,
    STATE(452), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13141] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(417), 1,
      sym_except,
    STATE(473), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13164] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      sym_except,
    STATE(454), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13187] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(974), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [13200] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    STATE(406), 1,
      sym_except,
    STATE(477), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13223] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(980), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [13236] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    STATE(413), 1,
      sym_except,
    STATE(480), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13259] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym_except,
    STATE(470), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13282] = 7,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(408), 1,
      sym_except,
    STATE(458), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13305] = 5,
    ACTIONS(982), 1,
      anon_sym_SQUOTE,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(986), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13323] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    ACTIONS(991), 1,
      anon_sym_COLON,
    ACTIONS(993), 1,
      anon_sym_COLON_EQ,
    STATE(154), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13343] = 6,
    ACTIONS(995), 1,
      anon_sym_SEMI,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    ACTIONS(999), 1,
      anon_sym_COLON,
    ACTIONS(1001), 1,
      anon_sym_COLON_EQ,
    STATE(290), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13363] = 6,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
    ACTIONS(1005), 1,
      anon_sym_COLON,
    ACTIONS(1007), 1,
      anon_sym_COLON_EQ,
    STATE(297), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13383] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_using,
  [13395] = 4,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_accessor,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON_COLON,
  [13411] = 3,
    ACTIONS(1009), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(412), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [13425] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(1015), 1,
      anon_sym_COLON_EQ,
    STATE(180), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13445] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_using,
  [13457] = 6,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(1017), 1,
      anon_sym_SEMI,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(1021), 1,
      anon_sym_COLON_EQ,
    STATE(166), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13477] = 6,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(1027), 1,
      anon_sym_COLON_EQ,
    STATE(301), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13497] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1029), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [13508] = 4,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1033), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13523] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(396), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13538] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    STATE(480), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13555] = 4,
    ACTIONS(1035), 1,
      anon_sym_COLON_COLON,
    STATE(396), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13570] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    STATE(470), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13587] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(396), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13602] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(1040), 1,
      anon_sym_LBRACE,
    STATE(466), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13619] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(394), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13634] = 5,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_extending,
    STATE(157), 1,
      sym_declarations,
    STATE(456), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13651] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1042), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
      anon_sym_except,
  [13662] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13679] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(396), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13694] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON_COLON,
    STATE(398), 1,
      aux_sym_type_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13709] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    STATE(484), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13726] = 5,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      anon_sym_extending,
    STATE(160), 1,
      sym_declarations,
    STATE(474), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13743] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(958), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    STATE(482), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13760] = 5,
    ACTIONS(905), 1,
      anon_sym_except,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(1050), 1,
      anon_sym_LBRACE,
    STATE(483), 1,
      sym_except,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13777] = 4,
    ACTIONS(1052), 1,
      anon_sym_SQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1054), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13792] = 4,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1054), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13807] = 5,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(489), 1,
      sym_string,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13824] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    STATE(452), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13841] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(460), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_LBRACE,
      anon_sym_using,
  [13852] = 4,
    ACTIONS(1052), 1,
      anon_sym_SQUOTE,
    STATE(421), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1058), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13867] = 4,
    ACTIONS(1060), 1,
      anon_sym_SQUOTE,
    STATE(410), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1062), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13882] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    STATE(454), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13899] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    STATE(473), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13916] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13933] = 4,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1054), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13948] = 4,
    ACTIONS(1066), 1,
      anon_sym_SQUOTE,
    STATE(381), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1054), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13963] = 4,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(411), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1070), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13978] = 5,
    ACTIONS(678), 1,
      anon_sym_SQUOTE,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(1056), 1,
      sym_identifier,
    STATE(536), 1,
      sym_string,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [13995] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
    STATE(478), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14012] = 5,
    ACTIONS(899), 1,
      anon_sym_extending,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(1078), 1,
      anon_sym_LBRACE,
    STATE(459), 1,
      sym_extending,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14029] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_GT,
    STATE(428), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14043] = 4,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14057] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_GT,
    STATE(432), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14071] = 4,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14085] = 4,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1090), 1,
      anon_sym_GT,
    STATE(444), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14099] = 4,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14113] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      anon_sym_GT,
    STATE(432), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14127] = 4,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14141] = 4,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14155] = 4,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14169] = 4,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
    ACTIONS(1102), 1,
      anon_sym_GT,
    STATE(449), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14183] = 4,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      anon_sym_GT,
    STATE(437), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14197] = 4,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14211] = 4,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14225] = 4,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_GT,
    STATE(441), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14239] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1119), 1,
      anon_sym_GT,
    STATE(441), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14253] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1121), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
  [14263] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_GT,
    STATE(432), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14277] = 4,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_GT,
    STATE(441), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14291] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14305] = 4,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
    STATE(276), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14319] = 4,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      anon_sym_GT,
    STATE(440), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14333] = 4,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_GT,
    STATE(443), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14347] = 4,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_GT,
    STATE(437), 1,
      aux_sym_enum_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14361] = 4,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14375] = 4,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14389] = 3,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(1074), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14400] = 3,
    ACTIONS(903), 1,
      anon_sym_on,
    STATE(409), 1,
      sym_on,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14411] = 3,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(1040), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14422] = 3,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    ACTIONS(927), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14433] = 3,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14444] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1137), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [14453] = 3,
    ACTIONS(958), 1,
      anon_sym_SEMI,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14464] = 3,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14475] = 3,
    ACTIONS(1143), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_schema_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14486] = 3,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1147), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14497] = 3,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14508] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1119), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14517] = 3,
    ACTIONS(946), 1,
      anon_sym_SEMI,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14528] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(387), 1,
      sym_schema_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14539] = 3,
    ACTIONS(1153), 1,
      anon_sym_SEMI,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14550] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1107), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14559] = 3,
    ACTIONS(1157), 1,
      anon_sym_LBRACE,
    ACTIONS(1159), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14570] = 3,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14581] = 3,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14592] = 3,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    STATE(508), 1,
      sym_argspec,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14603] = 3,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14614] = 3,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14625] = 3,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_declarations,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14636] = 3,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14647] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1161), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [14656] = 3,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14667] = 3,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    ACTIONS(1165), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14678] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14687] = 3,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14698] = 2,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14707] = 3,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(1078), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14718] = 3,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    ACTIONS(1173), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14729] = 3,
    ACTIONS(1175), 1,
      anon_sym_SEMI,
    ACTIONS(1177), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14740] = 2,
    ACTIONS(1179), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14748] = 2,
    ACTIONS(1181), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14756] = 2,
    ACTIONS(966), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14764] = 2,
    ACTIONS(1183), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14772] = 2,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14780] = 2,
    ACTIONS(1175), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14788] = 2,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14796] = 2,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14804] = 2,
    ACTIONS(1189), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14812] = 2,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14820] = 2,
    ACTIONS(1076), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14828] = 2,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14836] = 2,
    ACTIONS(1193), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14844] = 2,
    ACTIONS(1195), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14852] = 2,
    ACTIONS(1197), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14860] = 2,
    ACTIONS(1199), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14868] = 2,
    ACTIONS(1201), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14876] = 2,
    ACTIONS(1203), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14884] = 2,
    ACTIONS(1205), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14892] = 2,
    ACTIONS(1207), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14900] = 2,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14908] = 2,
    ACTIONS(1211), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14916] = 2,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14924] = 2,
    ACTIONS(1215), 1,
      anon_sym_DASH_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14932] = 2,
    ACTIONS(1217), 1,
      anon_sym_using,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14940] = 2,
    ACTIONS(1219), 1,
      anon_sym_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14948] = 2,
    ACTIONS(1221), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14956] = 2,
    ACTIONS(1223), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14964] = 2,
    ACTIONS(1225), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14972] = 2,
    ACTIONS(1227), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14980] = 2,
    ACTIONS(970), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14988] = 2,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [14996] = 2,
    ACTIONS(1229), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15004] = 2,
    ACTIONS(1231), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15012] = 2,
    ACTIONS(1233), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15020] = 2,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15028] = 2,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15036] = 2,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15044] = 2,
    ACTIONS(1241), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15052] = 2,
    ACTIONS(1243), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15060] = 2,
    ACTIONS(1245), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15068] = 2,
    ACTIONS(1247), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15076] = 2,
    ACTIONS(1249), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15084] = 2,
    ACTIONS(1251), 1,
      anon_sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15092] = 2,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15100] = 2,
    ACTIONS(1255), 1,
      anon_sym_GT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15108] = 2,
    ACTIONS(1257), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15116] = 2,
    ACTIONS(1259), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15124] = 2,
    ACTIONS(1261), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15132] = 2,
    ACTIONS(976), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15140] = 2,
    ACTIONS(1263), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15148] = 2,
    ACTIONS(1265), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15156] = 2,
    ACTIONS(1267), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15164] = 2,
    ACTIONS(1269), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15172] = 2,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15180] = 2,
    ACTIONS(1273), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15188] = 2,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15196] = 2,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15204] = 2,
    ACTIONS(1279), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15212] = 2,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15220] = 2,
    ACTIONS(1283), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15228] = 2,
    ACTIONS(1285), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15236] = 2,
    ACTIONS(1287), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15244] = 2,
    ACTIONS(1289), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15252] = 2,
    ACTIONS(1291), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15260] = 2,
    ACTIONS(1293), 1,
      anon_sym_type,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15268] = 2,
    ACTIONS(1295), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15276] = 2,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15284] = 2,
    ACTIONS(1297), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15292] = 2,
    ACTIONS(1299), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15300] = 2,
    ACTIONS(1301), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15308] = 2,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15316] = 2,
    ACTIONS(1305), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15324] = 2,
    ACTIONS(1307), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15332] = 2,
    ACTIONS(1309), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15340] = 2,
    ACTIONS(1311), 1,
      anon_sym_extension,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15348] = 2,
    ACTIONS(1313), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15356] = 2,
    ACTIONS(1315), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15364] = 2,
    ACTIONS(1317), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15372] = 2,
    ACTIONS(1319), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15380] = 2,
    ACTIONS(958), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15388] = 2,
    ACTIONS(1153), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15396] = 2,
    ACTIONS(1321), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15404] = 2,
    ACTIONS(1323), 1,
      anon_sym_COLON_EQ,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15412] = 2,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15420] = 2,
    ACTIONS(1327), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15428] = 2,
    ACTIONS(1329), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15436] = 2,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15444] = 2,
    ACTIONS(1331), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15452] = 2,
    ACTIONS(1333), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15460] = 2,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
  [15468] = 2,
    ACTIONS(1337), 1,
      sym_identifier,
    ACTIONS(13), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 115,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 292,
  [SMALL_STATE(8)] = 345,
  [SMALL_STATE(9)] = 408,
  [SMALL_STATE(10)] = 461,
  [SMALL_STATE(11)] = 524,
  [SMALL_STATE(12)] = 577,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 693,
  [SMALL_STATE(15)] = 746,
  [SMALL_STATE(16)] = 799,
  [SMALL_STATE(17)] = 852,
  [SMALL_STATE(18)] = 905,
  [SMALL_STATE(19)] = 958,
  [SMALL_STATE(20)] = 1021,
  [SMALL_STATE(21)] = 1074,
  [SMALL_STATE(22)] = 1127,
  [SMALL_STATE(23)] = 1180,
  [SMALL_STATE(24)] = 1233,
  [SMALL_STATE(25)] = 1286,
  [SMALL_STATE(26)] = 1339,
  [SMALL_STATE(27)] = 1392,
  [SMALL_STATE(28)] = 1445,
  [SMALL_STATE(29)] = 1498,
  [SMALL_STATE(30)] = 1542,
  [SMALL_STATE(31)] = 1585,
  [SMALL_STATE(32)] = 1624,
  [SMALL_STATE(33)] = 1667,
  [SMALL_STATE(34)] = 1705,
  [SMALL_STATE(35)] = 1747,
  [SMALL_STATE(36)] = 1785,
  [SMALL_STATE(37)] = 1823,
  [SMALL_STATE(38)] = 1861,
  [SMALL_STATE(39)] = 1899,
  [SMALL_STATE(40)] = 1941,
  [SMALL_STATE(41)] = 1979,
  [SMALL_STATE(42)] = 2017,
  [SMALL_STATE(43)] = 2054,
  [SMALL_STATE(44)] = 2097,
  [SMALL_STATE(45)] = 2130,
  [SMALL_STATE(46)] = 2183,
  [SMALL_STATE(47)] = 2220,
  [SMALL_STATE(48)] = 2273,
  [SMALL_STATE(49)] = 2306,
  [SMALL_STATE(50)] = 2343,
  [SMALL_STATE(51)] = 2380,
  [SMALL_STATE(52)] = 2423,
  [SMALL_STATE(53)] = 2476,
  [SMALL_STATE(54)] = 2513,
  [SMALL_STATE(55)] = 2550,
  [SMALL_STATE(56)] = 2583,
  [SMALL_STATE(57)] = 2636,
  [SMALL_STATE(58)] = 2689,
  [SMALL_STATE(59)] = 2726,
  [SMALL_STATE(60)] = 2758,
  [SMALL_STATE(61)] = 2790,
  [SMALL_STATE(62)] = 2826,
  [SMALL_STATE(63)] = 2862,
  [SMALL_STATE(64)] = 2898,
  [SMALL_STATE(65)] = 2934,
  [SMALL_STATE(66)] = 2966,
  [SMALL_STATE(67)] = 3008,
  [SMALL_STATE(68)] = 3046,
  [SMALL_STATE(69)] = 3078,
  [SMALL_STATE(70)] = 3110,
  [SMALL_STATE(71)] = 3142,
  [SMALL_STATE(72)] = 3174,
  [SMALL_STATE(73)] = 3210,
  [SMALL_STATE(74)] = 3246,
  [SMALL_STATE(75)] = 3278,
  [SMALL_STATE(76)] = 3314,
  [SMALL_STATE(77)] = 3364,
  [SMALL_STATE(78)] = 3396,
  [SMALL_STATE(79)] = 3430,
  [SMALL_STATE(80)] = 3462,
  [SMALL_STATE(81)] = 3506,
  [SMALL_STATE(82)] = 3538,
  [SMALL_STATE(83)] = 3574,
  [SMALL_STATE(84)] = 3622,
  [SMALL_STATE(85)] = 3654,
  [SMALL_STATE(86)] = 3686,
  [SMALL_STATE(87)] = 3722,
  [SMALL_STATE(88)] = 3754,
  [SMALL_STATE(89)] = 3786,
  [SMALL_STATE(90)] = 3832,
  [SMALL_STATE(91)] = 3864,
  [SMALL_STATE(92)] = 3896,
  [SMALL_STATE(93)] = 3944,
  [SMALL_STATE(94)] = 3980,
  [SMALL_STATE(95)] = 4012,
  [SMALL_STATE(96)] = 4049,
  [SMALL_STATE(97)] = 4080,
  [SMALL_STATE(98)] = 4111,
  [SMALL_STATE(99)] = 4142,
  [SMALL_STATE(100)] = 4179,
  [SMALL_STATE(101)] = 4216,
  [SMALL_STATE(102)] = 4247,
  [SMALL_STATE(103)] = 4277,
  [SMALL_STATE(104)] = 4307,
  [SMALL_STATE(105)] = 4337,
  [SMALL_STATE(106)] = 4367,
  [SMALL_STATE(107)] = 4399,
  [SMALL_STATE(108)] = 4429,
  [SMALL_STATE(109)] = 4459,
  [SMALL_STATE(110)] = 4513,
  [SMALL_STATE(111)] = 4567,
  [SMALL_STATE(112)] = 4597,
  [SMALL_STATE(113)] = 4627,
  [SMALL_STATE(114)] = 4659,
  [SMALL_STATE(115)] = 4689,
  [SMALL_STATE(116)] = 4718,
  [SMALL_STATE(117)] = 4749,
  [SMALL_STATE(118)] = 4778,
  [SMALL_STATE(119)] = 4827,
  [SMALL_STATE(120)] = 4876,
  [SMALL_STATE(121)] = 4904,
  [SMALL_STATE(122)] = 4932,
  [SMALL_STATE(123)] = 4960,
  [SMALL_STATE(124)] = 4988,
  [SMALL_STATE(125)] = 5016,
  [SMALL_STATE(126)] = 5044,
  [SMALL_STATE(127)] = 5072,
  [SMALL_STATE(128)] = 5100,
  [SMALL_STATE(129)] = 5128,
  [SMALL_STATE(130)] = 5156,
  [SMALL_STATE(131)] = 5184,
  [SMALL_STATE(132)] = 5212,
  [SMALL_STATE(133)] = 5240,
  [SMALL_STATE(134)] = 5268,
  [SMALL_STATE(135)] = 5296,
  [SMALL_STATE(136)] = 5344,
  [SMALL_STATE(137)] = 5392,
  [SMALL_STATE(138)] = 5440,
  [SMALL_STATE(139)] = 5468,
  [SMALL_STATE(140)] = 5496,
  [SMALL_STATE(141)] = 5524,
  [SMALL_STATE(142)] = 5552,
  [SMALL_STATE(143)] = 5600,
  [SMALL_STATE(144)] = 5648,
  [SMALL_STATE(145)] = 5696,
  [SMALL_STATE(146)] = 5744,
  [SMALL_STATE(147)] = 5792,
  [SMALL_STATE(148)] = 5840,
  [SMALL_STATE(149)] = 5888,
  [SMALL_STATE(150)] = 5916,
  [SMALL_STATE(151)] = 5944,
  [SMALL_STATE(152)] = 5992,
  [SMALL_STATE(153)] = 6020,
  [SMALL_STATE(154)] = 6068,
  [SMALL_STATE(155)] = 6096,
  [SMALL_STATE(156)] = 6124,
  [SMALL_STATE(157)] = 6152,
  [SMALL_STATE(158)] = 6180,
  [SMALL_STATE(159)] = 6208,
  [SMALL_STATE(160)] = 6236,
  [SMALL_STATE(161)] = 6264,
  [SMALL_STATE(162)] = 6312,
  [SMALL_STATE(163)] = 6340,
  [SMALL_STATE(164)] = 6368,
  [SMALL_STATE(165)] = 6396,
  [SMALL_STATE(166)] = 6424,
  [SMALL_STATE(167)] = 6452,
  [SMALL_STATE(168)] = 6500,
  [SMALL_STATE(169)] = 6528,
  [SMALL_STATE(170)] = 6556,
  [SMALL_STATE(171)] = 6604,
  [SMALL_STATE(172)] = 6652,
  [SMALL_STATE(173)] = 6700,
  [SMALL_STATE(174)] = 6728,
  [SMALL_STATE(175)] = 6756,
  [SMALL_STATE(176)] = 6784,
  [SMALL_STATE(177)] = 6812,
  [SMALL_STATE(178)] = 6860,
  [SMALL_STATE(179)] = 6888,
  [SMALL_STATE(180)] = 6916,
  [SMALL_STATE(181)] = 6944,
  [SMALL_STATE(182)] = 6972,
  [SMALL_STATE(183)] = 7000,
  [SMALL_STATE(184)] = 7048,
  [SMALL_STATE(185)] = 7096,
  [SMALL_STATE(186)] = 7144,
  [SMALL_STATE(187)] = 7192,
  [SMALL_STATE(188)] = 7220,
  [SMALL_STATE(189)] = 7257,
  [SMALL_STATE(190)] = 7294,
  [SMALL_STATE(191)] = 7331,
  [SMALL_STATE(192)] = 7368,
  [SMALL_STATE(193)] = 7405,
  [SMALL_STATE(194)] = 7442,
  [SMALL_STATE(195)] = 7491,
  [SMALL_STATE(196)] = 7528,
  [SMALL_STATE(197)] = 7565,
  [SMALL_STATE(198)] = 7602,
  [SMALL_STATE(199)] = 7639,
  [SMALL_STATE(200)] = 7676,
  [SMALL_STATE(201)] = 7713,
  [SMALL_STATE(202)] = 7750,
  [SMALL_STATE(203)] = 7787,
  [SMALL_STATE(204)] = 7824,
  [SMALL_STATE(205)] = 7861,
  [SMALL_STATE(206)] = 7898,
  [SMALL_STATE(207)] = 7935,
  [SMALL_STATE(208)] = 7972,
  [SMALL_STATE(209)] = 8021,
  [SMALL_STATE(210)] = 8058,
  [SMALL_STATE(211)] = 8095,
  [SMALL_STATE(212)] = 8132,
  [SMALL_STATE(213)] = 8169,
  [SMALL_STATE(214)] = 8206,
  [SMALL_STATE(215)] = 8243,
  [SMALL_STATE(216)] = 8280,
  [SMALL_STATE(217)] = 8317,
  [SMALL_STATE(218)] = 8354,
  [SMALL_STATE(219)] = 8391,
  [SMALL_STATE(220)] = 8428,
  [SMALL_STATE(221)] = 8465,
  [SMALL_STATE(222)] = 8502,
  [SMALL_STATE(223)] = 8539,
  [SMALL_STATE(224)] = 8576,
  [SMALL_STATE(225)] = 8613,
  [SMALL_STATE(226)] = 8650,
  [SMALL_STATE(227)] = 8687,
  [SMALL_STATE(228)] = 8724,
  [SMALL_STATE(229)] = 8761,
  [SMALL_STATE(230)] = 8798,
  [SMALL_STATE(231)] = 8835,
  [SMALL_STATE(232)] = 8872,
  [SMALL_STATE(233)] = 8909,
  [SMALL_STATE(234)] = 8946,
  [SMALL_STATE(235)] = 8992,
  [SMALL_STATE(236)] = 9038,
  [SMALL_STATE(237)] = 9084,
  [SMALL_STATE(238)] = 9130,
  [SMALL_STATE(239)] = 9176,
  [SMALL_STATE(240)] = 9222,
  [SMALL_STATE(241)] = 9268,
  [SMALL_STATE(242)] = 9314,
  [SMALL_STATE(243)] = 9360,
  [SMALL_STATE(244)] = 9406,
  [SMALL_STATE(245)] = 9452,
  [SMALL_STATE(246)] = 9498,
  [SMALL_STATE(247)] = 9544,
  [SMALL_STATE(248)] = 9590,
  [SMALL_STATE(249)] = 9636,
  [SMALL_STATE(250)] = 9682,
  [SMALL_STATE(251)] = 9728,
  [SMALL_STATE(252)] = 9774,
  [SMALL_STATE(253)] = 9820,
  [SMALL_STATE(254)] = 9866,
  [SMALL_STATE(255)] = 9912,
  [SMALL_STATE(256)] = 9958,
  [SMALL_STATE(257)] = 10004,
  [SMALL_STATE(258)] = 10050,
  [SMALL_STATE(259)] = 10096,
  [SMALL_STATE(260)] = 10142,
  [SMALL_STATE(261)] = 10188,
  [SMALL_STATE(262)] = 10234,
  [SMALL_STATE(263)] = 10280,
  [SMALL_STATE(264)] = 10326,
  [SMALL_STATE(265)] = 10372,
  [SMALL_STATE(266)] = 10418,
  [SMALL_STATE(267)] = 10464,
  [SMALL_STATE(268)] = 10510,
  [SMALL_STATE(269)] = 10535,
  [SMALL_STATE(270)] = 10560,
  [SMALL_STATE(271)] = 10585,
  [SMALL_STATE(272)] = 10610,
  [SMALL_STATE(273)] = 10635,
  [SMALL_STATE(274)] = 10660,
  [SMALL_STATE(275)] = 10685,
  [SMALL_STATE(276)] = 10710,
  [SMALL_STATE(277)] = 10735,
  [SMALL_STATE(278)] = 10760,
  [SMALL_STATE(279)] = 10785,
  [SMALL_STATE(280)] = 10810,
  [SMALL_STATE(281)] = 10835,
  [SMALL_STATE(282)] = 10860,
  [SMALL_STATE(283)] = 10885,
  [SMALL_STATE(284)] = 10910,
  [SMALL_STATE(285)] = 10935,
  [SMALL_STATE(286)] = 10960,
  [SMALL_STATE(287)] = 10985,
  [SMALL_STATE(288)] = 11010,
  [SMALL_STATE(289)] = 11035,
  [SMALL_STATE(290)] = 11060,
  [SMALL_STATE(291)] = 11085,
  [SMALL_STATE(292)] = 11110,
  [SMALL_STATE(293)] = 11135,
  [SMALL_STATE(294)] = 11160,
  [SMALL_STATE(295)] = 11185,
  [SMALL_STATE(296)] = 11210,
  [SMALL_STATE(297)] = 11235,
  [SMALL_STATE(298)] = 11260,
  [SMALL_STATE(299)] = 11285,
  [SMALL_STATE(300)] = 11310,
  [SMALL_STATE(301)] = 11335,
  [SMALL_STATE(302)] = 11360,
  [SMALL_STATE(303)] = 11385,
  [SMALL_STATE(304)] = 11410,
  [SMALL_STATE(305)] = 11442,
  [SMALL_STATE(306)] = 11464,
  [SMALL_STATE(307)] = 11490,
  [SMALL_STATE(308)] = 11522,
  [SMALL_STATE(309)] = 11554,
  [SMALL_STATE(310)] = 11586,
  [SMALL_STATE(311)] = 11618,
  [SMALL_STATE(312)] = 11650,
  [SMALL_STATE(313)] = 11682,
  [SMALL_STATE(314)] = 11712,
  [SMALL_STATE(315)] = 11744,
  [SMALL_STATE(316)] = 11770,
  [SMALL_STATE(317)] = 11802,
  [SMALL_STATE(318)] = 11831,
  [SMALL_STATE(319)] = 11860,
  [SMALL_STATE(320)] = 11889,
  [SMALL_STATE(321)] = 11918,
  [SMALL_STATE(322)] = 11947,
  [SMALL_STATE(323)] = 11976,
  [SMALL_STATE(324)] = 12005,
  [SMALL_STATE(325)] = 12034,
  [SMALL_STATE(326)] = 12063,
  [SMALL_STATE(327)] = 12092,
  [SMALL_STATE(328)] = 12121,
  [SMALL_STATE(329)] = 12146,
  [SMALL_STATE(330)] = 12175,
  [SMALL_STATE(331)] = 12204,
  [SMALL_STATE(332)] = 12224,
  [SMALL_STATE(333)] = 12244,
  [SMALL_STATE(334)] = 12266,
  [SMALL_STATE(335)] = 12287,
  [SMALL_STATE(336)] = 12308,
  [SMALL_STATE(337)] = 12329,
  [SMALL_STATE(338)] = 12350,
  [SMALL_STATE(339)] = 12371,
  [SMALL_STATE(340)] = 12392,
  [SMALL_STATE(341)] = 12411,
  [SMALL_STATE(342)] = 12432,
  [SMALL_STATE(343)] = 12453,
  [SMALL_STATE(344)] = 12474,
  [SMALL_STATE(345)] = 12492,
  [SMALL_STATE(346)] = 12514,
  [SMALL_STATE(347)] = 12532,
  [SMALL_STATE(348)] = 12550,
  [SMALL_STATE(349)] = 12572,
  [SMALL_STATE(350)] = 12594,
  [SMALL_STATE(351)] = 12612,
  [SMALL_STATE(352)] = 12630,
  [SMALL_STATE(353)] = 12648,
  [SMALL_STATE(354)] = 12683,
  [SMALL_STATE(355)] = 12718,
  [SMALL_STATE(356)] = 12753,
  [SMALL_STATE(357)] = 12788,
  [SMALL_STATE(358)] = 12804,
  [SMALL_STATE(359)] = 12833,
  [SMALL_STATE(360)] = 12862,
  [SMALL_STATE(361)] = 12885,
  [SMALL_STATE(362)] = 12914,
  [SMALL_STATE(363)] = 12937,
  [SMALL_STATE(364)] = 12966,
  [SMALL_STATE(365)] = 12990,
  [SMALL_STATE(366)] = 13014,
  [SMALL_STATE(367)] = 13027,
  [SMALL_STATE(368)] = 13050,
  [SMALL_STATE(369)] = 13063,
  [SMALL_STATE(370)] = 13084,
  [SMALL_STATE(371)] = 13105,
  [SMALL_STATE(372)] = 13118,
  [SMALL_STATE(373)] = 13141,
  [SMALL_STATE(374)] = 13164,
  [SMALL_STATE(375)] = 13187,
  [SMALL_STATE(376)] = 13200,
  [SMALL_STATE(377)] = 13223,
  [SMALL_STATE(378)] = 13236,
  [SMALL_STATE(379)] = 13259,
  [SMALL_STATE(380)] = 13282,
  [SMALL_STATE(381)] = 13305,
  [SMALL_STATE(382)] = 13323,
  [SMALL_STATE(383)] = 13343,
  [SMALL_STATE(384)] = 13363,
  [SMALL_STATE(385)] = 13383,
  [SMALL_STATE(386)] = 13395,
  [SMALL_STATE(387)] = 13411,
  [SMALL_STATE(388)] = 13425,
  [SMALL_STATE(389)] = 13445,
  [SMALL_STATE(390)] = 13457,
  [SMALL_STATE(391)] = 13477,
  [SMALL_STATE(392)] = 13497,
  [SMALL_STATE(393)] = 13508,
  [SMALL_STATE(394)] = 13523,
  [SMALL_STATE(395)] = 13538,
  [SMALL_STATE(396)] = 13555,
  [SMALL_STATE(397)] = 13570,
  [SMALL_STATE(398)] = 13587,
  [SMALL_STATE(399)] = 13602,
  [SMALL_STATE(400)] = 13619,
  [SMALL_STATE(401)] = 13634,
  [SMALL_STATE(402)] = 13651,
  [SMALL_STATE(403)] = 13662,
  [SMALL_STATE(404)] = 13679,
  [SMALL_STATE(405)] = 13694,
  [SMALL_STATE(406)] = 13709,
  [SMALL_STATE(407)] = 13726,
  [SMALL_STATE(408)] = 13743,
  [SMALL_STATE(409)] = 13760,
  [SMALL_STATE(410)] = 13777,
  [SMALL_STATE(411)] = 13792,
  [SMALL_STATE(412)] = 13807,
  [SMALL_STATE(413)] = 13824,
  [SMALL_STATE(414)] = 13841,
  [SMALL_STATE(415)] = 13852,
  [SMALL_STATE(416)] = 13867,
  [SMALL_STATE(417)] = 13882,
  [SMALL_STATE(418)] = 13899,
  [SMALL_STATE(419)] = 13916,
  [SMALL_STATE(420)] = 13933,
  [SMALL_STATE(421)] = 13948,
  [SMALL_STATE(422)] = 13963,
  [SMALL_STATE(423)] = 13978,
  [SMALL_STATE(424)] = 13995,
  [SMALL_STATE(425)] = 14012,
  [SMALL_STATE(426)] = 14029,
  [SMALL_STATE(427)] = 14043,
  [SMALL_STATE(428)] = 14057,
  [SMALL_STATE(429)] = 14071,
  [SMALL_STATE(430)] = 14085,
  [SMALL_STATE(431)] = 14099,
  [SMALL_STATE(432)] = 14113,
  [SMALL_STATE(433)] = 14127,
  [SMALL_STATE(434)] = 14141,
  [SMALL_STATE(435)] = 14155,
  [SMALL_STATE(436)] = 14169,
  [SMALL_STATE(437)] = 14183,
  [SMALL_STATE(438)] = 14197,
  [SMALL_STATE(439)] = 14211,
  [SMALL_STATE(440)] = 14225,
  [SMALL_STATE(441)] = 14239,
  [SMALL_STATE(442)] = 14253,
  [SMALL_STATE(443)] = 14263,
  [SMALL_STATE(444)] = 14277,
  [SMALL_STATE(445)] = 14291,
  [SMALL_STATE(446)] = 14305,
  [SMALL_STATE(447)] = 14319,
  [SMALL_STATE(448)] = 14333,
  [SMALL_STATE(449)] = 14347,
  [SMALL_STATE(450)] = 14361,
  [SMALL_STATE(451)] = 14375,
  [SMALL_STATE(452)] = 14389,
  [SMALL_STATE(453)] = 14400,
  [SMALL_STATE(454)] = 14411,
  [SMALL_STATE(455)] = 14422,
  [SMALL_STATE(456)] = 14433,
  [SMALL_STATE(457)] = 14444,
  [SMALL_STATE(458)] = 14453,
  [SMALL_STATE(459)] = 14464,
  [SMALL_STATE(460)] = 14475,
  [SMALL_STATE(461)] = 14486,
  [SMALL_STATE(462)] = 14497,
  [SMALL_STATE(463)] = 14508,
  [SMALL_STATE(464)] = 14517,
  [SMALL_STATE(465)] = 14528,
  [SMALL_STATE(466)] = 14539,
  [SMALL_STATE(467)] = 14550,
  [SMALL_STATE(468)] = 14559,
  [SMALL_STATE(469)] = 14570,
  [SMALL_STATE(470)] = 14581,
  [SMALL_STATE(471)] = 14592,
  [SMALL_STATE(472)] = 14603,
  [SMALL_STATE(473)] = 14614,
  [SMALL_STATE(474)] = 14625,
  [SMALL_STATE(475)] = 14636,
  [SMALL_STATE(476)] = 14647,
  [SMALL_STATE(477)] = 14656,
  [SMALL_STATE(478)] = 14667,
  [SMALL_STATE(479)] = 14678,
  [SMALL_STATE(480)] = 14687,
  [SMALL_STATE(481)] = 14698,
  [SMALL_STATE(482)] = 14707,
  [SMALL_STATE(483)] = 14718,
  [SMALL_STATE(484)] = 14729,
  [SMALL_STATE(485)] = 14740,
  [SMALL_STATE(486)] = 14748,
  [SMALL_STATE(487)] = 14756,
  [SMALL_STATE(488)] = 14764,
  [SMALL_STATE(489)] = 14772,
  [SMALL_STATE(490)] = 14780,
  [SMALL_STATE(491)] = 14788,
  [SMALL_STATE(492)] = 14796,
  [SMALL_STATE(493)] = 14804,
  [SMALL_STATE(494)] = 14812,
  [SMALL_STATE(495)] = 14820,
  [SMALL_STATE(496)] = 14828,
  [SMALL_STATE(497)] = 14836,
  [SMALL_STATE(498)] = 14844,
  [SMALL_STATE(499)] = 14852,
  [SMALL_STATE(500)] = 14860,
  [SMALL_STATE(501)] = 14868,
  [SMALL_STATE(502)] = 14876,
  [SMALL_STATE(503)] = 14884,
  [SMALL_STATE(504)] = 14892,
  [SMALL_STATE(505)] = 14900,
  [SMALL_STATE(506)] = 14908,
  [SMALL_STATE(507)] = 14916,
  [SMALL_STATE(508)] = 14924,
  [SMALL_STATE(509)] = 14932,
  [SMALL_STATE(510)] = 14940,
  [SMALL_STATE(511)] = 14948,
  [SMALL_STATE(512)] = 14956,
  [SMALL_STATE(513)] = 14964,
  [SMALL_STATE(514)] = 14972,
  [SMALL_STATE(515)] = 14980,
  [SMALL_STATE(516)] = 14988,
  [SMALL_STATE(517)] = 14996,
  [SMALL_STATE(518)] = 15004,
  [SMALL_STATE(519)] = 15012,
  [SMALL_STATE(520)] = 15020,
  [SMALL_STATE(521)] = 15028,
  [SMALL_STATE(522)] = 15036,
  [SMALL_STATE(523)] = 15044,
  [SMALL_STATE(524)] = 15052,
  [SMALL_STATE(525)] = 15060,
  [SMALL_STATE(526)] = 15068,
  [SMALL_STATE(527)] = 15076,
  [SMALL_STATE(528)] = 15084,
  [SMALL_STATE(529)] = 15092,
  [SMALL_STATE(530)] = 15100,
  [SMALL_STATE(531)] = 15108,
  [SMALL_STATE(532)] = 15116,
  [SMALL_STATE(533)] = 15124,
  [SMALL_STATE(534)] = 15132,
  [SMALL_STATE(535)] = 15140,
  [SMALL_STATE(536)] = 15148,
  [SMALL_STATE(537)] = 15156,
  [SMALL_STATE(538)] = 15164,
  [SMALL_STATE(539)] = 15172,
  [SMALL_STATE(540)] = 15180,
  [SMALL_STATE(541)] = 15188,
  [SMALL_STATE(542)] = 15196,
  [SMALL_STATE(543)] = 15204,
  [SMALL_STATE(544)] = 15212,
  [SMALL_STATE(545)] = 15220,
  [SMALL_STATE(546)] = 15228,
  [SMALL_STATE(547)] = 15236,
  [SMALL_STATE(548)] = 15244,
  [SMALL_STATE(549)] = 15252,
  [SMALL_STATE(550)] = 15260,
  [SMALL_STATE(551)] = 15268,
  [SMALL_STATE(552)] = 15276,
  [SMALL_STATE(553)] = 15284,
  [SMALL_STATE(554)] = 15292,
  [SMALL_STATE(555)] = 15300,
  [SMALL_STATE(556)] = 15308,
  [SMALL_STATE(557)] = 15316,
  [SMALL_STATE(558)] = 15324,
  [SMALL_STATE(559)] = 15332,
  [SMALL_STATE(560)] = 15340,
  [SMALL_STATE(561)] = 15348,
  [SMALL_STATE(562)] = 15356,
  [SMALL_STATE(563)] = 15364,
  [SMALL_STATE(564)] = 15372,
  [SMALL_STATE(565)] = 15380,
  [SMALL_STATE(566)] = 15388,
  [SMALL_STATE(567)] = 15396,
  [SMALL_STATE(568)] = 15404,
  [SMALL_STATE(569)] = 15412,
  [SMALL_STATE(570)] = 15420,
  [SMALL_STATE(571)] = 15428,
  [SMALL_STATE(572)] = 15436,
  [SMALL_STATE(573)] = 15444,
  [SMALL_STATE(574)] = 15452,
  [SMALL_STATE(575)] = 15460,
  [SMALL_STATE(576)] = 15468,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(511),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(551),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(550),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(549),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(548),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(547),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(546),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(545),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(305),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(382),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(573),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(512),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(553),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(485),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(453),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(5),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(332),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(384),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(540),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(533),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 3, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 7),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 9), SHIFT_REPEAT(4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 2, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 9, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 6, .production_id = 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 6),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 8, .production_id = 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 7, .production_id = 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 5, .production_id = 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 10),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5, .production_id = 11),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, .production_id = 11),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(557),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(462),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(357),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(568),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(557),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(462),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(357),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(568),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 7),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(513),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(357),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(331),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [875] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(340),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(357),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(570),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(381),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4, .production_id = 3),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(567),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2), SHIFT_REPEAT(258),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(561),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(574),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(244),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(16),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_esdl_external_scanner_create(void);
void tree_sitter_esdl_external_scanner_destroy(void *);
bool tree_sitter_esdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_esdl_external_scanner_serialize(void *, char *);
void tree_sitter_esdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_esdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_esdl_external_scanner_create,
      tree_sitter_esdl_external_scanner_destroy,
      tree_sitter_esdl_external_scanner_scan,
      tree_sitter_esdl_external_scanner_serialize,
      tree_sitter_esdl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
