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
#define STATE_COUNT 554
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_module = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_type = 5,
  anon_sym_scalar = 6,
  anon_sym_link = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_COLON_EQ = 9,
  anon_sym_property = 10,
  anon_sym_COLON = 11,
  anon_sym_annotation = 12,
  anon_sym_constraint = 13,
  anon_sym_index = 14,
  anon_sym_alias = 15,
  anon_sym_using = 16,
  anon_sym_function = 17,
  anon_sym_extension = 18,
  anon_sym_extending = 19,
  anon_sym_COMMA = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_on = 23,
  anon_sym_except = 24,
  anon_sym_abstract = 25,
  anon_sym_overloaded = 26,
  anon_sym_required = 27,
  anon_sym_optional = 28,
  anon_sym_single = 29,
  anon_sym_multi = 30,
  anon_sym_inheritable = 31,
  anon_sym_setof = 32,
  anon_sym_global = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_GT_GT = 36,
  anon_sym_LT_LT = 37,
  anon_sym_AMP = 38,
  anon_sym_CARET = 39,
  anon_sym_PIPE = 40,
  anon_sym_PLUS = 41,
  anon_sym_DASH = 42,
  anon_sym_STAR = 43,
  anon_sym_SLASH = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT_EQ = 50,
  anon_sym_GT = 51,
  anon_sym_SQUOTE = 52,
  sym_unescaped_single_string_fragment = 53,
  sym_escape_sequence = 54,
  anon_sym_str = 55,
  anon_sym_bool = 56,
  anon_sym_int16 = 57,
  anon_sym_int32 = 58,
  anon_sym_int64 = 59,
  anon_sym_float32 = 60,
  anon_sym_float64 = 61,
  anon_sym_bigint = 62,
  anon_sym_decimal = 63,
  anon_sym_json = 64,
  anon_sym_uuid = 65,
  anon_sym_bytes = 66,
  anon_sym_datetime = 67,
  anon_sym_duration = 68,
  anon_sym_cal_COLON_COLONlocal_datetime = 69,
  anon_sym_cal_COLON_COLONlocal_date = 70,
  anon_sym_cal_COLON_COLONlocal_time = 71,
  anon_sym_cal_COLON_COLONrelative_duration = 72,
  anon_sym_sequence = 73,
  anon_sym_anytype = 74,
  anon_sym_array = 75,
  anon_sym_tuple = 76,
  anon_sym_enum = 77,
  sym_identifier = 78,
  sym_true = 79,
  sym_false = 80,
  sym_null = 81,
  sym_number = 82,
  sym_comment = 83,
  sym__whitespace = 84,
  sym__edgeql_chars = 85,
  sym_source_file = 86,
  sym_module = 87,
  sym_schema_declarations = 88,
  sym_object_type = 89,
  sym_declarations = 90,
  sym_scalar_type_def = 91,
  sym_link = 92,
  sym_property = 93,
  sym_annotation = 94,
  sym_constraint = 95,
  sym_index = 96,
  sym_alias = 97,
  sym_function = 98,
  sym_extending = 99,
  sym_using = 100,
  sym_on = 101,
  sym_except = 102,
  sym_computed = 103,
  sym_modifier = 104,
  sym_argspec = 105,
  sym_returnspec = 106,
  sym_expression = 107,
  sym_fncall = 108,
  sym_binary_expression = 109,
  sym_string = 110,
  sym__scalar_type = 111,
  sym_array = 112,
  sym_tuple = 113,
  sym__tuple = 114,
  sym__named_tuple = 115,
  sym_enum = 116,
  sym_type = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_schema_declarations_repeat1 = 119,
  aux_sym_declarations_repeat1 = 120,
  aux_sym_scalar_type_def_repeat1 = 121,
  aux_sym_annotation_repeat1 = 122,
  aux_sym_constraint_repeat1 = 123,
  aux_sym_function_repeat1 = 124,
  aux_sym_extending_repeat1 = 125,
  aux_sym_argspec_repeat1 = 126,
  aux_sym_fncall_repeat1 = 127,
  aux_sym_string_repeat1 = 128,
  aux_sym__tuple_repeat1 = 129,
  aux_sym__named_tuple_repeat1 = 130,
  aux_sym_enum_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_scalar] = "scalar",
  [anon_sym_link] = "link",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_property] = "property",
  [anon_sym_COLON] = ":",
  [anon_sym_annotation] = "annotation",
  [anon_sym_constraint] = "constraint",
  [anon_sym_index] = "index",
  [anon_sym_alias] = "alias",
  [anon_sym_using] = "using",
  [anon_sym_function] = "function",
  [anon_sym_extension] = "extension",
  [anon_sym_extending] = "extending",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_on] = "on",
  [anon_sym_except] = "except",
  [anon_sym_abstract] = "abstract",
  [anon_sym_overloaded] = "overloaded",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
  [anon_sym_inheritable] = "inheritable",
  [anon_sym_setof] = "set of",
  [anon_sym_global] = "global",
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
  [sym_link] = "link",
  [sym_property] = "property",
  [sym_annotation] = "annotation",
  [sym_constraint] = "constraint",
  [sym_index] = "index",
  [sym_alias] = "alias",
  [sym_function] = "function",
  [sym_extending] = "extending",
  [sym_using] = "using",
  [sym_on] = "on",
  [sym_except] = "except",
  [sym_computed] = "computed",
  [sym_modifier] = "modifier",
  [sym_argspec] = "argspec",
  [sym_returnspec] = "returnspec",
  [sym_expression] = "expression",
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
  [aux_sym_fncall_repeat1] = "fncall_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__tuple_repeat1] = "_tuple_repeat1",
  [aux_sym__named_tuple_repeat1] = "_named_tuple_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_scalar] = anon_sym_scalar,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_overloaded] = anon_sym_overloaded,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_inheritable] = anon_sym_inheritable,
  [anon_sym_setof] = anon_sym_setof,
  [anon_sym_global] = anon_sym_global,
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
  [sym_link] = sym_link,
  [sym_property] = sym_property,
  [sym_annotation] = sym_annotation,
  [sym_constraint] = sym_constraint,
  [sym_index] = sym_index,
  [sym_alias] = sym_alias,
  [sym_function] = sym_function,
  [sym_extending] = sym_extending,
  [sym_using] = sym_using,
  [sym_on] = sym_on,
  [sym_except] = sym_except,
  [sym_computed] = sym_computed,
  [sym_modifier] = sym_modifier,
  [sym_argspec] = sym_argspec,
  [sym_returnspec] = sym_returnspec,
  [sym_expression] = sym_expression,
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
  [aux_sym_fncall_repeat1] = aux_sym_fncall_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__tuple_repeat1] = aux_sym__tuple_repeat1,
  [aux_sym__named_tuple_repeat1] = aux_sym__named_tuple_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_global] = {
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
  [sym_link] = {
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
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
  [10] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 39,
  [51] = 46,
  [52] = 38,
  [53] = 42,
  [54] = 37,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 57,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 58,
  [94] = 59,
  [95] = 65,
  [96] = 96,
  [97] = 97,
  [98] = 69,
  [99] = 66,
  [100] = 100,
  [101] = 63,
  [102] = 102,
  [103] = 64,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 104,
  [124] = 113,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 120,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 113,
  [133] = 133,
  [134] = 120,
  [135] = 107,
  [136] = 120,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
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
  [184] = 182,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 181,
  [194] = 194,
  [195] = 186,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 192,
  [200] = 188,
  [201] = 189,
  [202] = 202,
  [203] = 190,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 205,
  [209] = 209,
  [210] = 206,
  [211] = 211,
  [212] = 212,
  [213] = 197,
  [214] = 187,
  [215] = 194,
  [216] = 185,
  [217] = 209,
  [218] = 218,
  [219] = 198,
  [220] = 212,
  [221] = 183,
  [222] = 211,
  [223] = 196,
  [224] = 207,
  [225] = 168,
  [226] = 129,
  [227] = 176,
  [228] = 178,
  [229] = 142,
  [230] = 155,
  [231] = 177,
  [232] = 165,
  [233] = 233,
  [234] = 172,
  [235] = 118,
  [236] = 163,
  [237] = 166,
  [238] = 173,
  [239] = 153,
  [240] = 156,
  [241] = 162,
  [242] = 152,
  [243] = 151,
  [244] = 174,
  [245] = 144,
  [246] = 139,
  [247] = 247,
  [248] = 169,
  [249] = 160,
  [250] = 141,
  [251] = 146,
  [252] = 252,
  [253] = 157,
  [254] = 254,
  [255] = 255,
  [256] = 143,
  [257] = 257,
  [258] = 158,
  [259] = 150,
  [260] = 159,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 263,
  [267] = 264,
  [268] = 268,
  [269] = 263,
  [270] = 264,
  [271] = 271,
  [272] = 264,
  [273] = 263,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 274,
  [278] = 278,
  [279] = 276,
  [280] = 280,
  [281] = 274,
  [282] = 268,
  [283] = 276,
  [284] = 284,
  [285] = 276,
  [286] = 286,
  [287] = 287,
  [288] = 274,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 293,
  [297] = 297,
  [298] = 295,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 293,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 295,
  [310] = 310,
  [311] = 311,
  [312] = 308,
  [313] = 313,
  [314] = 310,
  [315] = 295,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 304,
  [323] = 293,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 262,
  [331] = 331,
  [332] = 262,
  [333] = 153,
  [334] = 138,
  [335] = 165,
  [336] = 177,
  [337] = 146,
  [338] = 172,
  [339] = 339,
  [340] = 143,
  [341] = 262,
  [342] = 154,
  [343] = 343,
  [344] = 143,
  [345] = 345,
  [346] = 343,
  [347] = 146,
  [348] = 345,
  [349] = 177,
  [350] = 165,
  [351] = 351,
  [352] = 172,
  [353] = 153,
  [354] = 351,
  [355] = 268,
  [356] = 356,
  [357] = 357,
  [358] = 262,
  [359] = 356,
  [360] = 357,
  [361] = 62,
  [362] = 56,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 365,
  [369] = 369,
  [370] = 369,
  [371] = 366,
  [372] = 372,
  [373] = 373,
  [374] = 373,
  [375] = 375,
  [376] = 376,
  [377] = 376,
  [378] = 378,
  [379] = 379,
  [380] = 378,
  [381] = 379,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 383,
  [391] = 391,
  [392] = 392,
  [393] = 391,
  [394] = 384,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 382,
  [400] = 400,
  [401] = 385,
  [402] = 400,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 133,
  [408] = 106,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 116,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 404,
  [420] = 412,
  [421] = 405,
  [422] = 415,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 409,
  [427] = 425,
  [428] = 428,
  [429] = 418,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 431,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 436,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 438,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 179,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 440,
  [455] = 455,
  [456] = 456,
  [457] = 449,
  [458] = 458,
  [459] = 450,
  [460] = 445,
  [461] = 447,
  [462] = 441,
  [463] = 463,
  [464] = 437,
  [465] = 443,
  [466] = 466,
  [467] = 463,
  [468] = 452,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 478,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 475,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 484,
  [495] = 489,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 493,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 480,
  [505] = 505,
  [506] = 506,
  [507] = 497,
  [508] = 496,
  [509] = 509,
  [510] = 506,
  [511] = 509,
  [512] = 512,
  [513] = 513,
  [514] = 469,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 486,
  [522] = 522,
  [523] = 477,
  [524] = 524,
  [525] = 525,
  [526] = 473,
  [527] = 527,
  [528] = 503,
  [529] = 502,
  [530] = 501,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 487,
  [535] = 498,
  [536] = 536,
  [537] = 476,
  [538] = 481,
  [539] = 539,
  [540] = 502,
  [541] = 496,
  [542] = 542,
  [543] = 483,
  [544] = 502,
  [545] = 496,
  [546] = 546,
  [547] = 547,
  [548] = 482,
  [549] = 549,
  [550] = 492,
  [551] = 488,
  [552] = 531,
  [553] = 549,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '\'' && c <= '@')))
      : (c <= ']' || (c < '~'
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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

static inline bool sym_identifier_character_set_6(int32_t c) {
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
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '%') ADVANCE(474);
      if (lookahead == '&') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '*') ADVANCE(474);
      if (lookahead == '+') ADVANCE(474);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(474);
      if (lookahead == '0') ADVANCE(287);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == ';') ADVANCE(474);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '^') ADVANCE(474);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'j') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(435);
      if (lookahead == '{') ADVANCE(474);
      if (lookahead == '|') ADVANCE(463);
      if (lookahead == '}') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(725);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '0') ADVANCE(730);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'g') ADVANCE(615);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(731);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'b') ADVANCE(590);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'j') ADVANCE(685);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(725);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(725);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(686);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(725);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'b') ADVANCE(590);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'j') ADVANCE(685);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'b') ADVANCE(590);
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'j') ADVANCE(685);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(686);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(725);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(484);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(488);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(486);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(490);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(482);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(725);
      END_STATE();
    case 31:
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(725);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(262);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 156:
      if (lookahead == 'q') ADVANCE(189);
      END_STATE();
    case 157:
      if (lookahead == 'q') ADVANCE(190);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 194:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 197:
      if (lookahead == '{') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == '{') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 199:
      if (lookahead == '}') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      if (lookahead == '}') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 202:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(732);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(733);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(725);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '#') ADVANCE(739);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == ';') ADVANCE(221);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'j') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(740);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_scalar);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_property);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(229);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_extending);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_single);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_multi);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(264);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(266);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '&') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(473);
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(474);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '_') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '2') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '6') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '6') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(467);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(468);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(473);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead == 'h') ADVANCE(349);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'f') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'y') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'k') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == 'v') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 'x') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(458);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'v') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'x') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '|') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '_') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(475);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(476);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(524);
      if (lookahead == '3') ADVANCE(519);
      if (lookahead == '6') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(485);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(520);
      if (lookahead == '6') ADVANCE(523);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(487);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(483);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(725);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(545);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(681);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(556);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(612);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(548);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(722);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(606);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(607);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(669);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(609);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(617);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(691);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(611);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(596);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'u') ADVANCE(680);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(706);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(707);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(635);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(635);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(618);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(538);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(629);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(688);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(588);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(568);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(705);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(253);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(251);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(499);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(709);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(576);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(572);
      if (lookahead == 'h') ADVANCE(574);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(598);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(666);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(225);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(220);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(257);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(261);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == 't') ADVANCE(670);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(515);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(513);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(503);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(511);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(726);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(727);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(672);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(718);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(552);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(675);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(682);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(553);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(673);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(638);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(641);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 't') ADVANCE(670);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(699);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(242);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(239);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(616);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(597);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(574);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(259);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(625);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(527);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == 'y') ADVANCE(700);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(624);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(628);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(554);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(629);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(677);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(642);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(644);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(637);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(639);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(651);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(698);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(654);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(655);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(658);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(227);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(255);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(525);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(481);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(495);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(728);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(263);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(534);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(653);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(561);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(648);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(562);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(684);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(563);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(610);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(565);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(696);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(656);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(516);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(567);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(535);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(586);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(551);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(605);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(584);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(240);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(234);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(497);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(505);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(557);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(650);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(678);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(582);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(550);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(583);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(711);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(558);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(689);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(690);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(692);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(532);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(687);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 'u') ADVANCE(621);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(546);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(646);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(697);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(645);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(608);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(528);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(630);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(631);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(537);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(632);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(633);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(664);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(694);
      if (lookahead == 'v') ADVANCE(571);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(694);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(560);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(566);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(577);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(620);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'q') ADVANCE(713);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'q') ADVANCE(716);
      if (lookahead == 't') ADVANCE(517);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'q') ADVANCE(716);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(226);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(479);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(659);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(613);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(693);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(530);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(601);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(539);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(573);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(531);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(717);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(542);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(237);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(501);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(695);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(570);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(657);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(599);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 's') ADVANCE(702);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(249);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(235);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(518);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(521);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(493);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(721);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(600);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(674);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(587);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(541);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(526);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(591);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(575);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(581);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(676);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(579);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(724);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(602);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(603);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 't') ADVANCE(604);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(621);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(614);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(665);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(623);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(627);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(595);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(593);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(619);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(578);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(569);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(236);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(703);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(662);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(230);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(514);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(704);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(663);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(191);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(725);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(738);
      if (lookahead == '0') ADVANCE(734);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(212);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(729);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(738);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '_') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 217},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 217},
  [88] = {.lex_state = 217},
  [89] = {.lex_state = 217},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 217},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 217},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 217},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 217},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 217},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 217},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 217},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 217},
  [114] = {.lex_state = 217},
  [115] = {.lex_state = 217},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 217},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 217},
  [121] = {.lex_state = 217},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 217},
  [124] = {.lex_state = 217},
  [125] = {.lex_state = 217},
  [126] = {.lex_state = 217},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 217},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 217},
  [132] = {.lex_state = 217},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 217},
  [135] = {.lex_state = 217},
  [136] = {.lex_state = 217},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 17},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 17},
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
  [208] = {.lex_state = 17},
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
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 12},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 217},
  [264] = {.lex_state = 217},
  [265] = {.lex_state = 217},
  [266] = {.lex_state = 217},
  [267] = {.lex_state = 217},
  [268] = {.lex_state = 15},
  [269] = {.lex_state = 217},
  [270] = {.lex_state = 217},
  [271] = {.lex_state = 15},
  [272] = {.lex_state = 217},
  [273] = {.lex_state = 217},
  [274] = {.lex_state = 217},
  [275] = {.lex_state = 217},
  [276] = {.lex_state = 217},
  [277] = {.lex_state = 217},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 217},
  [280] = {.lex_state = 217},
  [281] = {.lex_state = 217},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 217},
  [284] = {.lex_state = 217},
  [285] = {.lex_state = 217},
  [286] = {.lex_state = 217},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 217},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 3},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 3},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 3},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 3},
  [311] = {.lex_state = 3},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 3},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 3},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 3},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 3},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 15},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 17},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 17},
  [336] = {.lex_state = 17},
  [337] = {.lex_state = 17},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 17},
  [343] = {.lex_state = 217},
  [344] = {.lex_state = 217},
  [345] = {.lex_state = 217},
  [346] = {.lex_state = 217},
  [347] = {.lex_state = 217},
  [348] = {.lex_state = 217},
  [349] = {.lex_state = 217},
  [350] = {.lex_state = 217},
  [351] = {.lex_state = 217},
  [352] = {.lex_state = 217},
  [353] = {.lex_state = 217},
  [354] = {.lex_state = 217},
  [355] = {.lex_state = 217},
  [356] = {.lex_state = 217},
  [357] = {.lex_state = 217},
  [358] = {.lex_state = 217},
  [359] = {.lex_state = 217},
  [360] = {.lex_state = 217},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 217},
  [366] = {.lex_state = 217},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 217},
  [369] = {.lex_state = 217},
  [370] = {.lex_state = 217},
  [371] = {.lex_state = 217},
  [372] = {.lex_state = 8},
  [373] = {.lex_state = 217},
  [374] = {.lex_state = 217},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 217},
  [377] = {.lex_state = 217},
  [378] = {.lex_state = 217},
  [379] = {.lex_state = 217},
  [380] = {.lex_state = 217},
  [381] = {.lex_state = 217},
  [382] = {.lex_state = 217},
  [383] = {.lex_state = 217},
  [384] = {.lex_state = 217},
  [385] = {.lex_state = 217},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 217},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 217},
  [391] = {.lex_state = 217},
  [392] = {.lex_state = 217},
  [393] = {.lex_state = 217},
  [394] = {.lex_state = 217},
  [395] = {.lex_state = 217},
  [396] = {.lex_state = 217},
  [397] = {.lex_state = 217},
  [398] = {.lex_state = 217},
  [399] = {.lex_state = 217},
  [400] = {.lex_state = 217},
  [401] = {.lex_state = 217},
  [402] = {.lex_state = 217},
  [403] = {.lex_state = 217},
  [404] = {.lex_state = 5},
  [405] = {.lex_state = 5},
  [406] = {.lex_state = 217},
  [407] = {.lex_state = 217},
  [408] = {.lex_state = 217},
  [409] = {.lex_state = 5},
  [410] = {.lex_state = 217},
  [411] = {.lex_state = 217},
  [412] = {.lex_state = 5},
  [413] = {.lex_state = 5},
  [414] = {.lex_state = 217},
  [415] = {.lex_state = 217},
  [416] = {.lex_state = 217},
  [417] = {.lex_state = 217},
  [418] = {.lex_state = 217},
  [419] = {.lex_state = 5},
  [420] = {.lex_state = 5},
  [421] = {.lex_state = 5},
  [422] = {.lex_state = 217},
  [423] = {.lex_state = 5},
  [424] = {.lex_state = 5},
  [425] = {.lex_state = 5},
  [426] = {.lex_state = 5},
  [427] = {.lex_state = 5},
  [428] = {.lex_state = 5},
  [429] = {.lex_state = 217},
  [430] = {.lex_state = 5},
  [431] = {.lex_state = 217},
  [432] = {.lex_state = 217},
  [433] = {.lex_state = 217},
  [434] = {.lex_state = 217},
  [435] = {.lex_state = 5},
  [436] = {.lex_state = 217, .external_lex_state = 1},
  [437] = {.lex_state = 217},
  [438] = {.lex_state = 217},
  [439] = {.lex_state = 217, .external_lex_state = 1},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 217},
  [442] = {.lex_state = 217},
  [443] = {.lex_state = 217},
  [444] = {.lex_state = 217},
  [445] = {.lex_state = 217},
  [446] = {.lex_state = 217},
  [447] = {.lex_state = 217},
  [448] = {.lex_state = 217},
  [449] = {.lex_state = 217},
  [450] = {.lex_state = 217},
  [451] = {.lex_state = 217},
  [452] = {.lex_state = 217},
  [453] = {.lex_state = 217},
  [454] = {.lex_state = 4},
  [455] = {.lex_state = 5},
  [456] = {.lex_state = 217},
  [457] = {.lex_state = 217},
  [458] = {.lex_state = 217},
  [459] = {.lex_state = 217},
  [460] = {.lex_state = 217},
  [461] = {.lex_state = 217},
  [462] = {.lex_state = 217},
  [463] = {.lex_state = 217},
  [464] = {.lex_state = 217},
  [465] = {.lex_state = 217},
  [466] = {.lex_state = 5},
  [467] = {.lex_state = 217},
  [468] = {.lex_state = 217},
  [469] = {.lex_state = 217},
  [470] = {.lex_state = 4},
  [471] = {.lex_state = 217},
  [472] = {.lex_state = 217},
  [473] = {.lex_state = 217},
  [474] = {.lex_state = 4},
  [475] = {.lex_state = 217},
  [476] = {.lex_state = 5},
  [477] = {.lex_state = 217},
  [478] = {.lex_state = 217},
  [479] = {.lex_state = 217},
  [480] = {.lex_state = 217},
  [481] = {.lex_state = 217},
  [482] = {.lex_state = 217},
  [483] = {.lex_state = 217},
  [484] = {.lex_state = 217},
  [485] = {.lex_state = 217},
  [486] = {.lex_state = 217},
  [487] = {.lex_state = 217},
  [488] = {.lex_state = 217},
  [489] = {.lex_state = 217},
  [490] = {.lex_state = 217},
  [491] = {.lex_state = 217},
  [492] = {.lex_state = 217},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 217},
  [495] = {.lex_state = 217},
  [496] = {.lex_state = 4},
  [497] = {.lex_state = 4},
  [498] = {.lex_state = 4},
  [499] = {.lex_state = 217},
  [500] = {.lex_state = 4},
  [501] = {.lex_state = 4},
  [502] = {.lex_state = 4},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 217},
  [505] = {.lex_state = 217},
  [506] = {.lex_state = 4},
  [507] = {.lex_state = 4},
  [508] = {.lex_state = 4},
  [509] = {.lex_state = 217},
  [510] = {.lex_state = 4},
  [511] = {.lex_state = 217},
  [512] = {.lex_state = 4},
  [513] = {.lex_state = 217},
  [514] = {.lex_state = 217},
  [515] = {.lex_state = 5},
  [516] = {.lex_state = 217},
  [517] = {.lex_state = 217},
  [518] = {.lex_state = 217},
  [519] = {.lex_state = 4},
  [520] = {.lex_state = 217},
  [521] = {.lex_state = 217},
  [522] = {.lex_state = 217},
  [523] = {.lex_state = 217},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 4},
  [526] = {.lex_state = 217},
  [527] = {.lex_state = 4},
  [528] = {.lex_state = 4},
  [529] = {.lex_state = 4},
  [530] = {.lex_state = 4},
  [531] = {.lex_state = 4},
  [532] = {.lex_state = 217},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 217},
  [535] = {.lex_state = 4},
  [536] = {.lex_state = 217},
  [537] = {.lex_state = 5},
  [538] = {.lex_state = 217},
  [539] = {.lex_state = 217},
  [540] = {.lex_state = 4},
  [541] = {.lex_state = 4},
  [542] = {.lex_state = 217},
  [543] = {.lex_state = 217},
  [544] = {.lex_state = 4},
  [545] = {.lex_state = 4},
  [546] = {.lex_state = 4},
  [547] = {.lex_state = 4},
  [548] = {.lex_state = 217},
  [549] = {.lex_state = 217},
  [550] = {.lex_state = 217},
  [551] = {.lex_state = 217},
  [552] = {.lex_state = 4},
  [553] = {.lex_state = 217},
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
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_overloaded] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_inheritable] = ACTIONS(1),
    [anon_sym_setof] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
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
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__edgeql_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(539),
    [sym_module] = STATE(397),
    [aux_sym_source_file_repeat1] = STATE(397),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(13), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(11), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [51] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(13), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(11), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [99] = 11,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(17), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_PIPE,
      sym_identifier,
  [163] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(17), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [211] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(39), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(37), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [259] = 6,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 11,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [313] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(43), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(41), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [361] = 12,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(17), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [427] = 8,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 9,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(17), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_identifier,
  [485] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(47), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [533] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(53), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(51), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [581] = 10,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(17), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_PIPE,
      sym_identifier,
  [643] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(17), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [711] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(57), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [759] = 5,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 13,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [811] = 9,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 7,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
    ACTIONS(17), 19,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_identifier,
  [871] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(19), 15,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(17), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [921] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(63), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(61), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [969] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
    ACTIONS(65), 21,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
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
  [1017] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1085] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1153] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(79), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1221] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1289] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(87), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1357] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1425] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(97), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1493] = 14,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(101), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [1561] = 11,
    ACTIONS(103), 1,
      anon_sym_optional,
    ACTIONS(105), 1,
      anon_sym_setof,
    ACTIONS(111), 1,
      anon_sym_array,
    ACTIONS(113), 1,
      anon_sym_tuple,
    STATE(86), 1,
      sym_returnspec,
    STATE(97), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(103), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(109), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(99), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(107), 18,
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
      sym_identifier,
  [1618] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_enum,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(60), 2,
      sym_enum,
      sym_type,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [1670] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_enum,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(73), 2,
      sym_enum,
      sym_type,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [1722] = 16,
    ACTIONS(125), 1,
      anon_sym_module,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(131), 1,
      anon_sym_scalar,
    ACTIONS(133), 1,
      anon_sym_link,
    ACTIONS(135), 1,
      anon_sym_property,
    ACTIONS(137), 1,
      anon_sym_annotation,
    ACTIONS(139), 1,
      anon_sym_constraint,
    ACTIONS(141), 1,
      anon_sym_alias,
    ACTIONS(143), 1,
      anon_sym_function,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(261), 1,
      sym_modifier,
    STATE(271), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(33), 10,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1787] = 16,
    ACTIONS(125), 1,
      anon_sym_module,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(131), 1,
      anon_sym_scalar,
    ACTIONS(133), 1,
      anon_sym_link,
    ACTIONS(135), 1,
      anon_sym_property,
    ACTIONS(137), 1,
      anon_sym_annotation,
    ACTIONS(139), 1,
      anon_sym_constraint,
    ACTIONS(141), 1,
      anon_sym_alias,
    ACTIONS(143), 1,
      anon_sym_function,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_modifier,
    STATE(271), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(35), 10,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1852] = 16,
    ACTIONS(125), 1,
      anon_sym_module,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(131), 1,
      anon_sym_scalar,
    ACTIONS(133), 1,
      anon_sym_link,
    ACTIONS(135), 1,
      anon_sym_property,
    ACTIONS(137), 1,
      anon_sym_annotation,
    ACTIONS(139), 1,
      anon_sym_constraint,
    ACTIONS(141), 1,
      anon_sym_alias,
    ACTIONS(143), 1,
      anon_sym_function,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_modifier,
    STATE(271), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(35), 10,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1917] = 16,
    ACTIONS(153), 1,
      anon_sym_module,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_type,
    ACTIONS(161), 1,
      anon_sym_scalar,
    ACTIONS(164), 1,
      anon_sym_link,
    ACTIONS(167), 1,
      anon_sym_property,
    ACTIONS(170), 1,
      anon_sym_annotation,
    ACTIONS(173), 1,
      anon_sym_constraint,
    ACTIONS(176), 1,
      anon_sym_alias,
    ACTIONS(179), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(261), 1,
      sym_modifier,
    STATE(271), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(182), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(35), 10,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1982] = 16,
    ACTIONS(125), 1,
      anon_sym_module,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(131), 1,
      anon_sym_scalar,
    ACTIONS(133), 1,
      anon_sym_link,
    ACTIONS(135), 1,
      anon_sym_property,
    ACTIONS(137), 1,
      anon_sym_annotation,
    ACTIONS(139), 1,
      anon_sym_constraint,
    ACTIONS(141), 1,
      anon_sym_alias,
    ACTIONS(143), 1,
      anon_sym_function,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_modifier,
    STATE(271), 1,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(34), 10,
      sym_module,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [2047] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(420), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2095] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(476), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2143] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(433), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2191] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(435), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2239] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(418), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2287] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(422), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2335] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(429), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2383] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(84), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2431] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(81), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2479] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(427), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 17,
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
  [2529] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(85), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2577] = 8,
    ACTIONS(111), 1,
      anon_sym_array,
    ACTIONS(113), 1,
      anon_sym_tuple,
    STATE(96), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(103), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(109), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(99), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(107), 18,
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
      sym_identifier,
  [2625] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(83), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2673] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(431), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2721] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(425), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 17,
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
  [2771] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(537), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2819] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(415), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2867] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(412), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2915] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(455), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(64), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(66), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
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
      sym_identifier,
  [2963] = 9,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      anon_sym_DASH_GT,
    ACTIONS(202), 1,
      anon_sym_COLON_EQ,
    ACTIONS(204), 1,
      anon_sym_extending,
    STATE(75), 1,
      sym_extending,
    STATE(127), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3008] = 14,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_link,
    ACTIONS(210), 1,
      anon_sym_property,
    ACTIONS(212), 1,
      anon_sym_annotation,
    ACTIONS(214), 1,
      anon_sym_constraint,
    ACTIONS(216), 1,
      anon_sym_index,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(289), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(317), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(522), 2,
      sym_link,
      sym_extending,
    STATE(61), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(218), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3063] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(222), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3096] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(226), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3129] = 5,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(232), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
    ACTIONS(230), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3166] = 14,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_link,
    ACTIONS(241), 1,
      anon_sym_property,
    ACTIONS(244), 1,
      anon_sym_annotation,
    ACTIONS(247), 1,
      anon_sym_constraint,
    ACTIONS(250), 1,
      anon_sym_index,
    ACTIONS(253), 1,
      anon_sym_extending,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(289), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(317), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(522), 2,
      sym_link,
      sym_extending,
    STATE(61), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(256), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3221] = 9,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      anon_sym_DASH_GT,
    ACTIONS(268), 1,
      anon_sym_COLON_EQ,
    STATE(77), 1,
      sym_extending,
    STATE(119), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3266] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(272), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(270), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3299] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(274), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3332] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(278), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3365] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(282), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3398] = 5,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
    ACTIONS(286), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3435] = 14,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(208), 1,
      anon_sym_link,
    ACTIONS(210), 1,
      anon_sym_property,
    ACTIONS(212), 1,
      anon_sym_annotation,
    ACTIONS(214), 1,
      anon_sym_constraint,
    ACTIONS(216), 1,
      anon_sym_index,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(317), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(522), 2,
      sym_link,
      sym_extending,
    STATE(71), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(218), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3490] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(292), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3523] = 5,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
    ACTIONS(296), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3560] = 14,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(208), 1,
      anon_sym_link,
    ACTIONS(210), 1,
      anon_sym_property,
    ACTIONS(212), 1,
      anon_sym_annotation,
    ACTIONS(214), 1,
      anon_sym_constraint,
    ACTIONS(216), 1,
      anon_sym_index,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(317), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(522), 2,
      sym_link,
      sym_extending,
    STATE(61), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(218), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3615] = 14,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(208), 1,
      anon_sym_link,
    ACTIONS(210), 1,
      anon_sym_property,
    ACTIONS(212), 1,
      anon_sym_annotation,
    ACTIONS(214), 1,
      anon_sym_constraint,
    ACTIONS(216), 1,
      anon_sym_index,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(317), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(522), 2,
      sym_link,
      sym_extending,
    STATE(57), 5,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(218), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3670] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(309), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(307), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3702] = 8,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_extending,
    STATE(140), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3744] = 7,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_DASH_GT,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
    STATE(110), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(317), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3784] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(325), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3816] = 7,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_DASH_GT,
    ACTIONS(335), 1,
      anon_sym_COLON_EQ,
    STATE(105), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(329), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3856] = 8,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_extending,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_extending,
    STATE(175), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(337), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3898] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
    ACTIONS(343), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [3930] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(11), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 16,
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
  [3965] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_COLON_EQ,
    STATE(122), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(101), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(99), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4002] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(11), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 16,
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
  [4037] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_COLON_EQ,
    STATE(108), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4074] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_COLON_EQ,
    STATE(130), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(91), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4111] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_COLON_EQ,
    STATE(112), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(87), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4148] = 6,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      anon_sym_using,
    STATE(161), 1,
      sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4184] = 15,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4238] = 15,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4292] = 4,
    ACTIONS(377), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(458), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 19,
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
  [4324] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4360] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4396] = 4,
    ACTIONS(393), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(432), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 19,
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
  [4428] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(222), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4457] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(226), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4486] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(278), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4515] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(397), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(395), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4544] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(401), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(399), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4573] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4602] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(282), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4631] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4680] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(272), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(270), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4709] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4758] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(276), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(274), 18,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4787] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4835] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(87), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4863] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(409), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4891] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4939] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(91), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [4967] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5015] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5043] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5091] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(101), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(99), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5119] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5167] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5215] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5263] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(425), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5291] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5339] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(431), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5367] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(329), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5395] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5443] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5491] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(75), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5519] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5567] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5615] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5663] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5711] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(317), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5739] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5787] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(449), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5815] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(69), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5843] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5891] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(455), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5939] = 4,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(457), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [5969] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6017] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6065] = 13,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6113] = 3,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(469), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6140] = 3,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(473), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6167] = 3,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(477), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6194] = 3,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6221] = 3,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(481), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6248] = 3,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(485), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6275] = 3,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(489), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6302] = 3,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(493), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6329] = 3,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(497), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6356] = 3,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(501), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6383] = 3,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(505), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6410] = 3,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(509), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6437] = 3,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(513), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6464] = 3,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(517), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6491] = 3,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(521), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6518] = 3,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(525), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6545] = 3,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(529), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6572] = 3,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(533), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6599] = 3,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(537), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6626] = 3,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(541), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6653] = 3,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(545), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6680] = 3,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(549), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6707] = 3,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(553), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6734] = 3,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(557), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6761] = 3,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(561), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6788] = 3,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(565), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6815] = 3,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(569), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6842] = 3,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(573), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6869] = 3,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(577), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6896] = 3,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(581), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6923] = 3,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(585), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6950] = 3,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [6977] = 3,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(593), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7004] = 3,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(597), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7031] = 3,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(601), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7058] = 3,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(605), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7085] = 3,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(609), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7112] = 3,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(613), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7139] = 3,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7166] = 3,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(617), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7193] = 3,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(621), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7220] = 3,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(625), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7247] = 3,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(629), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7274] = 3,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(633), 17,
      anon_sym_module,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [7301] = 8,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7337] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7373] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(186), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7409] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7445] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7481] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7517] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(184), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7553] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7589] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(213), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7625] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7661] = 8,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 1,
      anon_sym_annotation,
    ACTIONS(666), 1,
      anon_sym_using,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(669), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7697] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(216), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7733] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7769] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(210), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7805] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7841] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7877] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7913] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(196), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7949] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(185), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7985] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8021] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(197), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8057] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(218), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8093] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8129] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(202), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8165] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(200), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8201] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8237] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(203), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8273] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(188), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8309] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(222), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8345] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8381] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8417] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(193), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8453] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8489] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(182), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8525] = 8,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(206), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8561] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8597] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(211), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8633] = 8,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_annotation,
    ACTIONS(710), 1,
      anon_sym_using,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(218), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(713), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8669] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(223), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8705] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(181), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8741] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(195), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8777] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8813] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(191), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8849] = 8,
    ACTIONS(639), 1,
      anon_sym_annotation,
    ACTIONS(641), 1,
      anon_sym_using,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(346), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(190), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(643), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8885] = 3,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8909] = 3,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(449), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8933] = 3,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(617), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8957] = 3,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(625), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [8981] = 3,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(485), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9005] = 3,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(537), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9029] = 3,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(621), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9053] = 3,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(577), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9077] = 3,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(727), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9101] = 3,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(605), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9125] = 3,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9149] = 3,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(569), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9173] = 3,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(581), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9197] = 3,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(609), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9221] = 3,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(529), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9245] = 3,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(541), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9269] = 3,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(565), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9293] = 3,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(525), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9317] = 3,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(521), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9341] = 3,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(613), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9365] = 3,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(493), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9389] = 3,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(477), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9413] = 3,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(729), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9437] = 3,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(593), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9461] = 3,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(557), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9485] = 3,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(481), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9509] = 3,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(501), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9533] = 3,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(733), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9557] = 3,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(545), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9581] = 3,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(737), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9605] = 3,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(741), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9629] = 3,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(489), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9653] = 3,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(745), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9677] = 3,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(549), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9701] = 3,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(517), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9725] = 3,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(553), 14,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_extending,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9749] = 4,
    ACTIONS(747), 1,
      anon_sym_type,
    ACTIONS(751), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(749), 12,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9774] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 14,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9795] = 7,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    ACTIONS(757), 1,
      anon_sym_COLON_EQ,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(281), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9826] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(763), 1,
      anon_sym_SEMI,
    ACTIONS(765), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(283), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9857] = 6,
    ACTIONS(769), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(767), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(772), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9886] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(777), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(274), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9917] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(279), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9948] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(268), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(783), 5,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(785), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9973] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    ACTIONS(790), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(288), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10004] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    ACTIONS(794), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(285), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10035] = 8,
    ACTIONS(796), 1,
      anon_sym_scalar,
    ACTIONS(798), 1,
      anon_sym_link,
    ACTIONS(800), 1,
      anon_sym_property,
    ACTIONS(802), 1,
      anon_sym_annotation,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(268), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(804), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10068] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(276), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10099] = 7,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    ACTIONS(814), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10130] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(816), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10158] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10186] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(820), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10214] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10242] = 10,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(836), 1,
      sym_number,
    STATE(87), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10278] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10306] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(275), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10334] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(842), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10362] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(282), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(783), 4,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      sym_identifier,
    ACTIONS(844), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10386] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10414] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(286), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10442] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10470] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10498] = 10,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(88), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10534] = 6,
    ACTIONS(759), 1,
      anon_sym_annotation,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(265), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(343), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10562] = 7,
    ACTIONS(859), 1,
      anon_sym_link,
    ACTIONS(861), 1,
      anon_sym_property,
    ACTIONS(863), 1,
      anon_sym_annotation,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(282), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(865), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [10592] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10625] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10658] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(117), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10691] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(136), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10724] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10757] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10790] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(128), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10823] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10856] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(124), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10889] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10922] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10955] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [10988] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(17), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11021] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11054] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(107), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11087] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11120] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11153] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11186] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11219] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11252] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(115), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11285] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11318] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11351] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11384] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11417] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11450] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11483] = 3,
    ACTIONS(869), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(749), 11,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11504] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11537] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11570] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11603] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11636] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(135), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11669] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(134), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11702] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11735] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11768] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(126), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11801] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(871), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11834] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11867] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11900] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 12,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11919] = 9,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_global,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(836), 1,
      sym_number,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [11952] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 12,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11971] = 3,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(529), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [11991] = 3,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(473), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12011] = 3,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(577), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12031] = 3,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(621), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12051] = 3,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(501), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12071] = 3,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(605), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12091] = 3,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(875), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12111] = 3,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(489), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12131] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(753), 11,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12149] = 3,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(533), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [12169] = 4,
    ACTIONS(877), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(355), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12190] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(491), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12207] = 11,
    ACTIONS(879), 1,
      anon_sym_SEMI,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    STATE(360), 1,
      sym_argspec,
    STATE(370), 1,
      sym_on,
    STATE(391), 1,
      sym_except,
    STATE(461), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12242] = 4,
    ACTIONS(891), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(355), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(761), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12263] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(503), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12280] = 11,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_argspec,
    STATE(369), 1,
      sym_on,
    STATE(393), 1,
      sym_except,
    STATE(447), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12315] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(623), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12332] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(579), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12349] = 11,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    ACTIONS(899), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      sym_argspec,
    STATE(366), 1,
      sym_on,
    STATE(402), 1,
      sym_except,
    STATE(460), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12384] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(607), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12401] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(531), 10,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12418] = 11,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    STATE(359), 1,
      sym_argspec,
    STATE(371), 1,
      sym_on,
    STATE(400), 1,
      sym_except,
    STATE(445), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12453] = 4,
    ACTIONS(905), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(355), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(907), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12474] = 9,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_on,
    STATE(383), 1,
      sym_except,
    STATE(468), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12503] = 9,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    STATE(365), 1,
      sym_on,
    STATE(382), 1,
      sym_except,
    STATE(457), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12532] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(918), 8,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [12547] = 9,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      sym_on,
    STATE(390), 1,
      sym_except,
    STATE(452), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12576] = 9,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(887), 1,
      anon_sym_on,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
    STATE(368), 1,
      sym_on,
    STATE(399), 1,
      sym_except,
    STATE(449), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12605] = 8,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_DASH_GT,
    ACTIONS(268), 1,
      anon_sym_COLON_EQ,
    ACTIONS(883), 1,
      anon_sym_extending,
    STATE(77), 1,
      sym_extending,
    STATE(119), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12631] = 8,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_DASH_GT,
    ACTIONS(202), 1,
      anon_sym_COLON_EQ,
    ACTIONS(883), 1,
      anon_sym_extending,
    STATE(75), 1,
      sym_extending,
    STATE(127), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12657] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(928), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [12670] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(930), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [12683] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym_except,
    STATE(464), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12706] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
    STATE(383), 1,
      sym_except,
    STATE(468), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12729] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(936), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [12742] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      sym_except,
    STATE(437), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12765] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym_except,
    STATE(457), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12788] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
    STATE(399), 1,
      sym_except,
    STATE(449), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12811] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    STATE(390), 1,
      sym_except,
    STATE(452), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12834] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(942), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [12847] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    STATE(385), 1,
      sym_except,
    STATE(465), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12870] = 7,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(401), 1,
      sym_except,
    STATE(443), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12893] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(952), 6,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [12906] = 6,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      anon_sym_COLON_EQ,
    ACTIONS(960), 1,
      anon_sym_COLON,
    STATE(241), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12926] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_COLON_EQ,
    ACTIONS(966), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12946] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(968), 1,
      anon_sym_SEMI,
    ACTIONS(970), 1,
      anon_sym_COLON_EQ,
    ACTIONS(972), 1,
      anon_sym_COLON,
    STATE(139), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12966] = 6,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      anon_sym_SEMI,
    ACTIONS(976), 1,
      anon_sym_COLON_EQ,
    ACTIONS(978), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [12986] = 6,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    ACTIONS(982), 1,
      anon_sym_COLON_EQ,
    ACTIONS(984), 1,
      anon_sym_COLON,
    STATE(246), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13006] = 6,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(988), 1,
      anon_sym_COLON_EQ,
    ACTIONS(990), 1,
      anon_sym_COLON,
    STATE(242), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13026] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    STATE(464), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13043] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    STATE(465), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13060] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    STATE(441), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13077] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(463), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13094] = 4,
    ACTIONS(1000), 1,
      anon_sym_SQUOTE,
    STATE(389), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1002), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13109] = 4,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1006), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13124] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1009), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
      anon_sym_except,
  [13135] = 4,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1013), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [13150] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(443), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13167] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
    STATE(449), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13184] = 5,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(883), 1,
      anon_sym_extending,
    STATE(147), 1,
      sym_declarations,
    STATE(456), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13201] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    STATE(457), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13218] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    STATE(462), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13235] = 4,
    ACTIONS(1019), 1,
      ts_builtin_sym_end,
    ACTIONS(1021), 1,
      anon_sym_module,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(395), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [13250] = 5,
    ACTIONS(889), 1,
      anon_sym_except,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    STATE(442), 1,
      sym_except,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13267] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(1028), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(395), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [13282] = 5,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(883), 1,
      anon_sym_extending,
    STATE(149), 1,
      sym_declarations,
    STATE(446), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13299] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13316] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    STATE(452), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13333] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    STATE(467), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13350] = 5,
    ACTIONS(883), 1,
      anon_sym_extending,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
    STATE(468), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13367] = 4,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13381] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_GT,
    STATE(430), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13395] = 3,
    ACTIONS(1040), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13407] = 4,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13421] = 3,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [13433] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
  [13443] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_GT,
    STATE(413), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13457] = 4,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13471] = 4,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13485] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_GT,
    STATE(404), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13499] = 4,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1060), 1,
      anon_sym_GT,
    STATE(413), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13513] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_SEMI,
  [13523] = 4,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13537] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1062), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_extending,
  [13547] = 4,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13561] = 4,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13575] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_GT,
    STATE(430), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13589] = 4,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_GT,
    STATE(419), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13603] = 3,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13615] = 4,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13629] = 4,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_GT,
    STATE(428), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13643] = 4,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_GT,
    STATE(423), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13657] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1079), 1,
      anon_sym_GT,
    STATE(409), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13671] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_GT,
    STATE(413), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13685] = 4,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_GT,
    STATE(426), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13699] = 4,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_GT,
    STATE(428), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13713] = 4,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13727] = 4,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_GT,
    STATE(430), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13741] = 4,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13755] = 4,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13769] = 4,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13783] = 3,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
    STATE(515), 1,
      sym_argspec,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13794] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1097), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13803] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1099), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [13812] = 3,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13823] = 3,
    ACTIONS(1101), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_schema_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13834] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1103), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [13843] = 3,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13854] = 3,
    ACTIONS(1109), 1,
      anon_sym_SEMI,
    ACTIONS(1111), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13865] = 3,
    ACTIONS(1113), 1,
      anon_sym_SEMI,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13876] = 3,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13887] = 3,
    ACTIONS(1117), 1,
      anon_sym_LBRACE,
    STATE(407), 1,
      sym_schema_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13898] = 3,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13909] = 3,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13920] = 3,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13931] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [13940] = 3,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    ACTIONS(940), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13951] = 3,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(479), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13962] = 3,
    ACTIONS(887), 1,
      anon_sym_on,
    STATE(396), 1,
      sym_on,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13973] = 3,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13984] = 3,
    ACTIONS(1119), 1,
      anon_sym_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [13995] = 3,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
    ACTIONS(1125), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14006] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1060), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14015] = 3,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14026] = 3,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14037] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14046] = 3,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    STATE(478), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14057] = 3,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14068] = 3,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14079] = 3,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    ACTIONS(1131), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14090] = 3,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    ACTIONS(1135), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14101] = 3,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14112] = 3,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14123] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(1088), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [14132] = 3,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14143] = 3,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14154] = 2,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14162] = 2,
    ACTIONS(1141), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14170] = 2,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14178] = 2,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14186] = 2,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14194] = 2,
    ACTIONS(1149), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14202] = 2,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14210] = 2,
    ACTIONS(1153), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14218] = 2,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14226] = 2,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14234] = 2,
    ACTIONS(1157), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14242] = 2,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14250] = 2,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14258] = 2,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14266] = 2,
    ACTIONS(1161), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14274] = 2,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14282] = 2,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14290] = 2,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14298] = 2,
    ACTIONS(1167), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14306] = 2,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14314] = 2,
    ACTIONS(1171), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14322] = 2,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14330] = 2,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14338] = 2,
    ACTIONS(1177), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14346] = 2,
    ACTIONS(1179), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14354] = 2,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14362] = 2,
    ACTIONS(1181), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14370] = 2,
    ACTIONS(1183), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14378] = 2,
    ACTIONS(1185), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14386] = 2,
    ACTIONS(1187), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14394] = 2,
    ACTIONS(1189), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14402] = 2,
    ACTIONS(1191), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14410] = 2,
    ACTIONS(1193), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14418] = 2,
    ACTIONS(1195), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14426] = 2,
    ACTIONS(1197), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14434] = 2,
    ACTIONS(1109), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14442] = 2,
    ACTIONS(1199), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14450] = 2,
    ACTIONS(1201), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14458] = 2,
    ACTIONS(1203), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14466] = 2,
    ACTIONS(1205), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14474] = 2,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14482] = 2,
    ACTIONS(1207), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14490] = 2,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14498] = 2,
    ACTIONS(1209), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14506] = 2,
    ACTIONS(1211), 1,
      anon_sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14514] = 2,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14522] = 2,
    ACTIONS(1213), 1,
      anon_sym_DASH_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14530] = 2,
    ACTIONS(1215), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14538] = 2,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14546] = 2,
    ACTIONS(1219), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14554] = 2,
    ACTIONS(1221), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14562] = 2,
    ACTIONS(1223), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14570] = 2,
    ACTIONS(1225), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14578] = 2,
    ACTIONS(1227), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14586] = 2,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14594] = 2,
    ACTIONS(1229), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14602] = 2,
    ACTIONS(1231), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14610] = 2,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14618] = 2,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14626] = 2,
    ACTIONS(1237), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14634] = 2,
    ACTIONS(1239), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14642] = 2,
    ACTIONS(1241), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14650] = 2,
    ACTIONS(1243), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14658] = 2,
    ACTIONS(1245), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14666] = 2,
    ACTIONS(1247), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14674] = 2,
    ACTIONS(1249), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14682] = 2,
    ACTIONS(1251), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14690] = 2,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14698] = 2,
    ACTIONS(1255), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14706] = 2,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14714] = 2,
    ACTIONS(1257), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14722] = 2,
    ACTIONS(1259), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14730] = 2,
    ACTIONS(1261), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14738] = 2,
    ACTIONS(1263), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14746] = 2,
    ACTIONS(1265), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14754] = 2,
    ACTIONS(1267), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14762] = 2,
    ACTIONS(1269), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14770] = 2,
    ACTIONS(1271), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14778] = 2,
    ACTIONS(1273), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14786] = 2,
    ACTIONS(1275), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14794] = 2,
    ACTIONS(1277), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14802] = 2,
    ACTIONS(1279), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14810] = 2,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14818] = 2,
    ACTIONS(1283), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [14826] = 2,
    ACTIONS(1285), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 427,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 533,
  [SMALL_STATE(13)] = 581,
  [SMALL_STATE(14)] = 643,
  [SMALL_STATE(15)] = 711,
  [SMALL_STATE(16)] = 759,
  [SMALL_STATE(17)] = 811,
  [SMALL_STATE(18)] = 871,
  [SMALL_STATE(19)] = 921,
  [SMALL_STATE(20)] = 969,
  [SMALL_STATE(21)] = 1017,
  [SMALL_STATE(22)] = 1085,
  [SMALL_STATE(23)] = 1153,
  [SMALL_STATE(24)] = 1221,
  [SMALL_STATE(25)] = 1289,
  [SMALL_STATE(26)] = 1357,
  [SMALL_STATE(27)] = 1425,
  [SMALL_STATE(28)] = 1493,
  [SMALL_STATE(29)] = 1561,
  [SMALL_STATE(30)] = 1618,
  [SMALL_STATE(31)] = 1670,
  [SMALL_STATE(32)] = 1722,
  [SMALL_STATE(33)] = 1787,
  [SMALL_STATE(34)] = 1852,
  [SMALL_STATE(35)] = 1917,
  [SMALL_STATE(36)] = 1982,
  [SMALL_STATE(37)] = 2047,
  [SMALL_STATE(38)] = 2095,
  [SMALL_STATE(39)] = 2143,
  [SMALL_STATE(40)] = 2191,
  [SMALL_STATE(41)] = 2239,
  [SMALL_STATE(42)] = 2287,
  [SMALL_STATE(43)] = 2335,
  [SMALL_STATE(44)] = 2383,
  [SMALL_STATE(45)] = 2431,
  [SMALL_STATE(46)] = 2479,
  [SMALL_STATE(47)] = 2529,
  [SMALL_STATE(48)] = 2577,
  [SMALL_STATE(49)] = 2625,
  [SMALL_STATE(50)] = 2673,
  [SMALL_STATE(51)] = 2721,
  [SMALL_STATE(52)] = 2771,
  [SMALL_STATE(53)] = 2819,
  [SMALL_STATE(54)] = 2867,
  [SMALL_STATE(55)] = 2915,
  [SMALL_STATE(56)] = 2963,
  [SMALL_STATE(57)] = 3008,
  [SMALL_STATE(58)] = 3063,
  [SMALL_STATE(59)] = 3096,
  [SMALL_STATE(60)] = 3129,
  [SMALL_STATE(61)] = 3166,
  [SMALL_STATE(62)] = 3221,
  [SMALL_STATE(63)] = 3266,
  [SMALL_STATE(64)] = 3299,
  [SMALL_STATE(65)] = 3332,
  [SMALL_STATE(66)] = 3365,
  [SMALL_STATE(67)] = 3398,
  [SMALL_STATE(68)] = 3435,
  [SMALL_STATE(69)] = 3490,
  [SMALL_STATE(70)] = 3523,
  [SMALL_STATE(71)] = 3560,
  [SMALL_STATE(72)] = 3615,
  [SMALL_STATE(73)] = 3670,
  [SMALL_STATE(74)] = 3702,
  [SMALL_STATE(75)] = 3744,
  [SMALL_STATE(76)] = 3784,
  [SMALL_STATE(77)] = 3816,
  [SMALL_STATE(78)] = 3856,
  [SMALL_STATE(79)] = 3898,
  [SMALL_STATE(80)] = 3930,
  [SMALL_STATE(81)] = 3965,
  [SMALL_STATE(82)] = 4002,
  [SMALL_STATE(83)] = 4037,
  [SMALL_STATE(84)] = 4074,
  [SMALL_STATE(85)] = 4111,
  [SMALL_STATE(86)] = 4148,
  [SMALL_STATE(87)] = 4184,
  [SMALL_STATE(88)] = 4238,
  [SMALL_STATE(89)] = 4292,
  [SMALL_STATE(90)] = 4324,
  [SMALL_STATE(91)] = 4360,
  [SMALL_STATE(92)] = 4396,
  [SMALL_STATE(93)] = 4428,
  [SMALL_STATE(94)] = 4457,
  [SMALL_STATE(95)] = 4486,
  [SMALL_STATE(96)] = 4515,
  [SMALL_STATE(97)] = 4544,
  [SMALL_STATE(98)] = 4573,
  [SMALL_STATE(99)] = 4602,
  [SMALL_STATE(100)] = 4631,
  [SMALL_STATE(101)] = 4680,
  [SMALL_STATE(102)] = 4709,
  [SMALL_STATE(103)] = 4758,
  [SMALL_STATE(104)] = 4787,
  [SMALL_STATE(105)] = 4835,
  [SMALL_STATE(106)] = 4863,
  [SMALL_STATE(107)] = 4891,
  [SMALL_STATE(108)] = 4939,
  [SMALL_STATE(109)] = 4967,
  [SMALL_STATE(110)] = 5015,
  [SMALL_STATE(111)] = 5043,
  [SMALL_STATE(112)] = 5091,
  [SMALL_STATE(113)] = 5119,
  [SMALL_STATE(114)] = 5167,
  [SMALL_STATE(115)] = 5215,
  [SMALL_STATE(116)] = 5263,
  [SMALL_STATE(117)] = 5291,
  [SMALL_STATE(118)] = 5339,
  [SMALL_STATE(119)] = 5367,
  [SMALL_STATE(120)] = 5395,
  [SMALL_STATE(121)] = 5443,
  [SMALL_STATE(122)] = 5491,
  [SMALL_STATE(123)] = 5519,
  [SMALL_STATE(124)] = 5567,
  [SMALL_STATE(125)] = 5615,
  [SMALL_STATE(126)] = 5663,
  [SMALL_STATE(127)] = 5711,
  [SMALL_STATE(128)] = 5739,
  [SMALL_STATE(129)] = 5787,
  [SMALL_STATE(130)] = 5815,
  [SMALL_STATE(131)] = 5843,
  [SMALL_STATE(132)] = 5891,
  [SMALL_STATE(133)] = 5939,
  [SMALL_STATE(134)] = 5969,
  [SMALL_STATE(135)] = 6017,
  [SMALL_STATE(136)] = 6065,
  [SMALL_STATE(137)] = 6113,
  [SMALL_STATE(138)] = 6140,
  [SMALL_STATE(139)] = 6167,
  [SMALL_STATE(140)] = 6194,
  [SMALL_STATE(141)] = 6221,
  [SMALL_STATE(142)] = 6248,
  [SMALL_STATE(143)] = 6275,
  [SMALL_STATE(144)] = 6302,
  [SMALL_STATE(145)] = 6329,
  [SMALL_STATE(146)] = 6356,
  [SMALL_STATE(147)] = 6383,
  [SMALL_STATE(148)] = 6410,
  [SMALL_STATE(149)] = 6437,
  [SMALL_STATE(150)] = 6464,
  [SMALL_STATE(151)] = 6491,
  [SMALL_STATE(152)] = 6518,
  [SMALL_STATE(153)] = 6545,
  [SMALL_STATE(154)] = 6572,
  [SMALL_STATE(155)] = 6599,
  [SMALL_STATE(156)] = 6626,
  [SMALL_STATE(157)] = 6653,
  [SMALL_STATE(158)] = 6680,
  [SMALL_STATE(159)] = 6707,
  [SMALL_STATE(160)] = 6734,
  [SMALL_STATE(161)] = 6761,
  [SMALL_STATE(162)] = 6788,
  [SMALL_STATE(163)] = 6815,
  [SMALL_STATE(164)] = 6842,
  [SMALL_STATE(165)] = 6869,
  [SMALL_STATE(166)] = 6896,
  [SMALL_STATE(167)] = 6923,
  [SMALL_STATE(168)] = 6950,
  [SMALL_STATE(169)] = 6977,
  [SMALL_STATE(170)] = 7004,
  [SMALL_STATE(171)] = 7031,
  [SMALL_STATE(172)] = 7058,
  [SMALL_STATE(173)] = 7085,
  [SMALL_STATE(174)] = 7112,
  [SMALL_STATE(175)] = 7139,
  [SMALL_STATE(176)] = 7166,
  [SMALL_STATE(177)] = 7193,
  [SMALL_STATE(178)] = 7220,
  [SMALL_STATE(179)] = 7247,
  [SMALL_STATE(180)] = 7274,
  [SMALL_STATE(181)] = 7301,
  [SMALL_STATE(182)] = 7337,
  [SMALL_STATE(183)] = 7373,
  [SMALL_STATE(184)] = 7409,
  [SMALL_STATE(185)] = 7445,
  [SMALL_STATE(186)] = 7481,
  [SMALL_STATE(187)] = 7517,
  [SMALL_STATE(188)] = 7553,
  [SMALL_STATE(189)] = 7589,
  [SMALL_STATE(190)] = 7625,
  [SMALL_STATE(191)] = 7661,
  [SMALL_STATE(192)] = 7697,
  [SMALL_STATE(193)] = 7733,
  [SMALL_STATE(194)] = 7769,
  [SMALL_STATE(195)] = 7805,
  [SMALL_STATE(196)] = 7841,
  [SMALL_STATE(197)] = 7877,
  [SMALL_STATE(198)] = 7913,
  [SMALL_STATE(199)] = 7949,
  [SMALL_STATE(200)] = 7985,
  [SMALL_STATE(201)] = 8021,
  [SMALL_STATE(202)] = 8057,
  [SMALL_STATE(203)] = 8093,
  [SMALL_STATE(204)] = 8129,
  [SMALL_STATE(205)] = 8165,
  [SMALL_STATE(206)] = 8201,
  [SMALL_STATE(207)] = 8237,
  [SMALL_STATE(208)] = 8273,
  [SMALL_STATE(209)] = 8309,
  [SMALL_STATE(210)] = 8345,
  [SMALL_STATE(211)] = 8381,
  [SMALL_STATE(212)] = 8417,
  [SMALL_STATE(213)] = 8453,
  [SMALL_STATE(214)] = 8489,
  [SMALL_STATE(215)] = 8525,
  [SMALL_STATE(216)] = 8561,
  [SMALL_STATE(217)] = 8597,
  [SMALL_STATE(218)] = 8633,
  [SMALL_STATE(219)] = 8669,
  [SMALL_STATE(220)] = 8705,
  [SMALL_STATE(221)] = 8741,
  [SMALL_STATE(222)] = 8777,
  [SMALL_STATE(223)] = 8813,
  [SMALL_STATE(224)] = 8849,
  [SMALL_STATE(225)] = 8885,
  [SMALL_STATE(226)] = 8909,
  [SMALL_STATE(227)] = 8933,
  [SMALL_STATE(228)] = 8957,
  [SMALL_STATE(229)] = 8981,
  [SMALL_STATE(230)] = 9005,
  [SMALL_STATE(231)] = 9029,
  [SMALL_STATE(232)] = 9053,
  [SMALL_STATE(233)] = 9077,
  [SMALL_STATE(234)] = 9101,
  [SMALL_STATE(235)] = 9125,
  [SMALL_STATE(236)] = 9149,
  [SMALL_STATE(237)] = 9173,
  [SMALL_STATE(238)] = 9197,
  [SMALL_STATE(239)] = 9221,
  [SMALL_STATE(240)] = 9245,
  [SMALL_STATE(241)] = 9269,
  [SMALL_STATE(242)] = 9293,
  [SMALL_STATE(243)] = 9317,
  [SMALL_STATE(244)] = 9341,
  [SMALL_STATE(245)] = 9365,
  [SMALL_STATE(246)] = 9389,
  [SMALL_STATE(247)] = 9413,
  [SMALL_STATE(248)] = 9437,
  [SMALL_STATE(249)] = 9461,
  [SMALL_STATE(250)] = 9485,
  [SMALL_STATE(251)] = 9509,
  [SMALL_STATE(252)] = 9533,
  [SMALL_STATE(253)] = 9557,
  [SMALL_STATE(254)] = 9581,
  [SMALL_STATE(255)] = 9605,
  [SMALL_STATE(256)] = 9629,
  [SMALL_STATE(257)] = 9653,
  [SMALL_STATE(258)] = 9677,
  [SMALL_STATE(259)] = 9701,
  [SMALL_STATE(260)] = 9725,
  [SMALL_STATE(261)] = 9749,
  [SMALL_STATE(262)] = 9774,
  [SMALL_STATE(263)] = 9795,
  [SMALL_STATE(264)] = 9826,
  [SMALL_STATE(265)] = 9857,
  [SMALL_STATE(266)] = 9886,
  [SMALL_STATE(267)] = 9917,
  [SMALL_STATE(268)] = 9948,
  [SMALL_STATE(269)] = 9973,
  [SMALL_STATE(270)] = 10004,
  [SMALL_STATE(271)] = 10035,
  [SMALL_STATE(272)] = 10068,
  [SMALL_STATE(273)] = 10099,
  [SMALL_STATE(274)] = 10130,
  [SMALL_STATE(275)] = 10158,
  [SMALL_STATE(276)] = 10186,
  [SMALL_STATE(277)] = 10214,
  [SMALL_STATE(278)] = 10242,
  [SMALL_STATE(279)] = 10278,
  [SMALL_STATE(280)] = 10306,
  [SMALL_STATE(281)] = 10334,
  [SMALL_STATE(282)] = 10362,
  [SMALL_STATE(283)] = 10386,
  [SMALL_STATE(284)] = 10414,
  [SMALL_STATE(285)] = 10442,
  [SMALL_STATE(286)] = 10470,
  [SMALL_STATE(287)] = 10498,
  [SMALL_STATE(288)] = 10534,
  [SMALL_STATE(289)] = 10562,
  [SMALL_STATE(290)] = 10592,
  [SMALL_STATE(291)] = 10625,
  [SMALL_STATE(292)] = 10658,
  [SMALL_STATE(293)] = 10691,
  [SMALL_STATE(294)] = 10724,
  [SMALL_STATE(295)] = 10757,
  [SMALL_STATE(296)] = 10790,
  [SMALL_STATE(297)] = 10823,
  [SMALL_STATE(298)] = 10856,
  [SMALL_STATE(299)] = 10889,
  [SMALL_STATE(300)] = 10922,
  [SMALL_STATE(301)] = 10955,
  [SMALL_STATE(302)] = 10988,
  [SMALL_STATE(303)] = 11021,
  [SMALL_STATE(304)] = 11054,
  [SMALL_STATE(305)] = 11087,
  [SMALL_STATE(306)] = 11120,
  [SMALL_STATE(307)] = 11153,
  [SMALL_STATE(308)] = 11186,
  [SMALL_STATE(309)] = 11219,
  [SMALL_STATE(310)] = 11252,
  [SMALL_STATE(311)] = 11285,
  [SMALL_STATE(312)] = 11318,
  [SMALL_STATE(313)] = 11351,
  [SMALL_STATE(314)] = 11384,
  [SMALL_STATE(315)] = 11417,
  [SMALL_STATE(316)] = 11450,
  [SMALL_STATE(317)] = 11483,
  [SMALL_STATE(318)] = 11504,
  [SMALL_STATE(319)] = 11537,
  [SMALL_STATE(320)] = 11570,
  [SMALL_STATE(321)] = 11603,
  [SMALL_STATE(322)] = 11636,
  [SMALL_STATE(323)] = 11669,
  [SMALL_STATE(324)] = 11702,
  [SMALL_STATE(325)] = 11735,
  [SMALL_STATE(326)] = 11768,
  [SMALL_STATE(327)] = 11801,
  [SMALL_STATE(328)] = 11834,
  [SMALL_STATE(329)] = 11867,
  [SMALL_STATE(330)] = 11900,
  [SMALL_STATE(331)] = 11919,
  [SMALL_STATE(332)] = 11952,
  [SMALL_STATE(333)] = 11971,
  [SMALL_STATE(334)] = 11991,
  [SMALL_STATE(335)] = 12011,
  [SMALL_STATE(336)] = 12031,
  [SMALL_STATE(337)] = 12051,
  [SMALL_STATE(338)] = 12071,
  [SMALL_STATE(339)] = 12091,
  [SMALL_STATE(340)] = 12111,
  [SMALL_STATE(341)] = 12131,
  [SMALL_STATE(342)] = 12149,
  [SMALL_STATE(343)] = 12169,
  [SMALL_STATE(344)] = 12190,
  [SMALL_STATE(345)] = 12207,
  [SMALL_STATE(346)] = 12242,
  [SMALL_STATE(347)] = 12263,
  [SMALL_STATE(348)] = 12280,
  [SMALL_STATE(349)] = 12315,
  [SMALL_STATE(350)] = 12332,
  [SMALL_STATE(351)] = 12349,
  [SMALL_STATE(352)] = 12384,
  [SMALL_STATE(353)] = 12401,
  [SMALL_STATE(354)] = 12418,
  [SMALL_STATE(355)] = 12453,
  [SMALL_STATE(356)] = 12474,
  [SMALL_STATE(357)] = 12503,
  [SMALL_STATE(358)] = 12532,
  [SMALL_STATE(359)] = 12547,
  [SMALL_STATE(360)] = 12576,
  [SMALL_STATE(361)] = 12605,
  [SMALL_STATE(362)] = 12631,
  [SMALL_STATE(363)] = 12657,
  [SMALL_STATE(364)] = 12670,
  [SMALL_STATE(365)] = 12683,
  [SMALL_STATE(366)] = 12706,
  [SMALL_STATE(367)] = 12729,
  [SMALL_STATE(368)] = 12742,
  [SMALL_STATE(369)] = 12765,
  [SMALL_STATE(370)] = 12788,
  [SMALL_STATE(371)] = 12811,
  [SMALL_STATE(372)] = 12834,
  [SMALL_STATE(373)] = 12847,
  [SMALL_STATE(374)] = 12870,
  [SMALL_STATE(375)] = 12893,
  [SMALL_STATE(376)] = 12906,
  [SMALL_STATE(377)] = 12926,
  [SMALL_STATE(378)] = 12946,
  [SMALL_STATE(379)] = 12966,
  [SMALL_STATE(380)] = 12986,
  [SMALL_STATE(381)] = 13006,
  [SMALL_STATE(382)] = 13026,
  [SMALL_STATE(383)] = 13043,
  [SMALL_STATE(384)] = 13060,
  [SMALL_STATE(385)] = 13077,
  [SMALL_STATE(386)] = 13094,
  [SMALL_STATE(387)] = 13109,
  [SMALL_STATE(388)] = 13124,
  [SMALL_STATE(389)] = 13135,
  [SMALL_STATE(390)] = 13150,
  [SMALL_STATE(391)] = 13167,
  [SMALL_STATE(392)] = 13184,
  [SMALL_STATE(393)] = 13201,
  [SMALL_STATE(394)] = 13218,
  [SMALL_STATE(395)] = 13235,
  [SMALL_STATE(396)] = 13250,
  [SMALL_STATE(397)] = 13267,
  [SMALL_STATE(398)] = 13282,
  [SMALL_STATE(399)] = 13299,
  [SMALL_STATE(400)] = 13316,
  [SMALL_STATE(401)] = 13333,
  [SMALL_STATE(402)] = 13350,
  [SMALL_STATE(403)] = 13367,
  [SMALL_STATE(404)] = 13381,
  [SMALL_STATE(405)] = 13395,
  [SMALL_STATE(406)] = 13407,
  [SMALL_STATE(407)] = 13421,
  [SMALL_STATE(408)] = 13433,
  [SMALL_STATE(409)] = 13443,
  [SMALL_STATE(410)] = 13457,
  [SMALL_STATE(411)] = 13471,
  [SMALL_STATE(412)] = 13485,
  [SMALL_STATE(413)] = 13499,
  [SMALL_STATE(414)] = 13513,
  [SMALL_STATE(415)] = 13523,
  [SMALL_STATE(416)] = 13537,
  [SMALL_STATE(417)] = 13547,
  [SMALL_STATE(418)] = 13561,
  [SMALL_STATE(419)] = 13575,
  [SMALL_STATE(420)] = 13589,
  [SMALL_STATE(421)] = 13603,
  [SMALL_STATE(422)] = 13615,
  [SMALL_STATE(423)] = 13629,
  [SMALL_STATE(424)] = 13643,
  [SMALL_STATE(425)] = 13657,
  [SMALL_STATE(426)] = 13671,
  [SMALL_STATE(427)] = 13685,
  [SMALL_STATE(428)] = 13699,
  [SMALL_STATE(429)] = 13713,
  [SMALL_STATE(430)] = 13727,
  [SMALL_STATE(431)] = 13741,
  [SMALL_STATE(432)] = 13755,
  [SMALL_STATE(433)] = 13769,
  [SMALL_STATE(434)] = 13783,
  [SMALL_STATE(435)] = 13794,
  [SMALL_STATE(436)] = 13803,
  [SMALL_STATE(437)] = 13812,
  [SMALL_STATE(438)] = 13823,
  [SMALL_STATE(439)] = 13834,
  [SMALL_STATE(440)] = 13843,
  [SMALL_STATE(441)] = 13854,
  [SMALL_STATE(442)] = 13865,
  [SMALL_STATE(443)] = 13876,
  [SMALL_STATE(444)] = 13887,
  [SMALL_STATE(445)] = 13898,
  [SMALL_STATE(446)] = 13909,
  [SMALL_STATE(447)] = 13920,
  [SMALL_STATE(448)] = 13931,
  [SMALL_STATE(449)] = 13940,
  [SMALL_STATE(450)] = 13951,
  [SMALL_STATE(451)] = 13962,
  [SMALL_STATE(452)] = 13973,
  [SMALL_STATE(453)] = 13984,
  [SMALL_STATE(454)] = 13995,
  [SMALL_STATE(455)] = 14006,
  [SMALL_STATE(456)] = 14015,
  [SMALL_STATE(457)] = 14026,
  [SMALL_STATE(458)] = 14037,
  [SMALL_STATE(459)] = 14046,
  [SMALL_STATE(460)] = 14057,
  [SMALL_STATE(461)] = 14068,
  [SMALL_STATE(462)] = 14079,
  [SMALL_STATE(463)] = 14090,
  [SMALL_STATE(464)] = 14101,
  [SMALL_STATE(465)] = 14112,
  [SMALL_STATE(466)] = 14123,
  [SMALL_STATE(467)] = 14132,
  [SMALL_STATE(468)] = 14143,
  [SMALL_STATE(469)] = 14154,
  [SMALL_STATE(470)] = 14162,
  [SMALL_STATE(471)] = 14170,
  [SMALL_STATE(472)] = 14178,
  [SMALL_STATE(473)] = 14186,
  [SMALL_STATE(474)] = 14194,
  [SMALL_STATE(475)] = 14202,
  [SMALL_STATE(476)] = 14210,
  [SMALL_STATE(477)] = 14218,
  [SMALL_STATE(478)] = 14226,
  [SMALL_STATE(479)] = 14234,
  [SMALL_STATE(480)] = 14242,
  [SMALL_STATE(481)] = 14250,
  [SMALL_STATE(482)] = 14258,
  [SMALL_STATE(483)] = 14266,
  [SMALL_STATE(484)] = 14274,
  [SMALL_STATE(485)] = 14282,
  [SMALL_STATE(486)] = 14290,
  [SMALL_STATE(487)] = 14298,
  [SMALL_STATE(488)] = 14306,
  [SMALL_STATE(489)] = 14314,
  [SMALL_STATE(490)] = 14322,
  [SMALL_STATE(491)] = 14330,
  [SMALL_STATE(492)] = 14338,
  [SMALL_STATE(493)] = 14346,
  [SMALL_STATE(494)] = 14354,
  [SMALL_STATE(495)] = 14362,
  [SMALL_STATE(496)] = 14370,
  [SMALL_STATE(497)] = 14378,
  [SMALL_STATE(498)] = 14386,
  [SMALL_STATE(499)] = 14394,
  [SMALL_STATE(500)] = 14402,
  [SMALL_STATE(501)] = 14410,
  [SMALL_STATE(502)] = 14418,
  [SMALL_STATE(503)] = 14426,
  [SMALL_STATE(504)] = 14434,
  [SMALL_STATE(505)] = 14442,
  [SMALL_STATE(506)] = 14450,
  [SMALL_STATE(507)] = 14458,
  [SMALL_STATE(508)] = 14466,
  [SMALL_STATE(509)] = 14474,
  [SMALL_STATE(510)] = 14482,
  [SMALL_STATE(511)] = 14490,
  [SMALL_STATE(512)] = 14498,
  [SMALL_STATE(513)] = 14506,
  [SMALL_STATE(514)] = 14514,
  [SMALL_STATE(515)] = 14522,
  [SMALL_STATE(516)] = 14530,
  [SMALL_STATE(517)] = 14538,
  [SMALL_STATE(518)] = 14546,
  [SMALL_STATE(519)] = 14554,
  [SMALL_STATE(520)] = 14562,
  [SMALL_STATE(521)] = 14570,
  [SMALL_STATE(522)] = 14578,
  [SMALL_STATE(523)] = 14586,
  [SMALL_STATE(524)] = 14594,
  [SMALL_STATE(525)] = 14602,
  [SMALL_STATE(526)] = 14610,
  [SMALL_STATE(527)] = 14618,
  [SMALL_STATE(528)] = 14626,
  [SMALL_STATE(529)] = 14634,
  [SMALL_STATE(530)] = 14642,
  [SMALL_STATE(531)] = 14650,
  [SMALL_STATE(532)] = 14658,
  [SMALL_STATE(533)] = 14666,
  [SMALL_STATE(534)] = 14674,
  [SMALL_STATE(535)] = 14682,
  [SMALL_STATE(536)] = 14690,
  [SMALL_STATE(537)] = 14698,
  [SMALL_STATE(538)] = 14706,
  [SMALL_STATE(539)] = 14714,
  [SMALL_STATE(540)] = 14722,
  [SMALL_STATE(541)] = 14730,
  [SMALL_STATE(542)] = 14738,
  [SMALL_STATE(543)] = 14746,
  [SMALL_STATE(544)] = 14754,
  [SMALL_STATE(545)] = 14762,
  [SMALL_STATE(546)] = 14770,
  [SMALL_STATE(547)] = 14778,
  [SMALL_STATE(548)] = 14786,
  [SMALL_STATE(549)] = 14794,
  [SMALL_STATE(550)] = 14802,
  [SMALL_STATE(551)] = 14810,
  [SMALL_STATE(552)] = 14818,
  [SMALL_STATE(553)] = 14826,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 4, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 5, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 6, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 7, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 7, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 8, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 6, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(500),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(533),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(532),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(531),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(530),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(529),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(528),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(527),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(525),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(262),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(378),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 2, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(552),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(501),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(540),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(503),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(451),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(30),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(332),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(380),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 3, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_tuple, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extending, 3, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuple, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 8),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 8),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 8), SHIFT_REPEAT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, .production_id = 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnspec, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_declarations, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declarations, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5, .production_id = 10),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, .production_id = 10),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 9, .production_id = 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 8, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 5, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 7, .production_id = 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 6, .production_id = 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 5),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, .production_id = 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(544),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(454),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(358),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(516),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(544),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(454),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(358),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(516),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 6),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 7),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(502),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(358),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(330),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(341),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(358),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(387),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(493),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2), SHIFT_REPEAT(305),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(55),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(327),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(474),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(512),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
