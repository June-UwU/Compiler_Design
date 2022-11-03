#pragma once
#include "defines.h"

typedef enum token_types
{
	TOKEN_KEYWORD = 0x0u,
	TOKEN_IDENTIFIER
	TOKEN_CONSTANT,
	TOKEN_STRING_LITERAL,
	TOKEN_PUNCTUATOR,
	PRETOKEN_HEADER_NAME,
	PRETOKEN_IDENTIFIER,
	PRETOKEN_PP_NUMBER,
	PRETOKEN_CHARACTER_CONSTANT,
	PRETOKEN_STRING_LITERAL,
	PRETOKEN_PUNCTUATOR
}token_types;

typedef enum token_keywords
{
	KEY_AUTO = 0x0u,
	KEY_BREAK,
	KEY_CASE,
	KEY_CHAR,
	KEY_CONST,
	KEY_CONTINUE,
	KEY_DEFAULT,
	KEY_DO,
	KEY_DOUBLE,
	KEY_ELSE,
	KEY_ENUM,
	KEY_EXTERN,
	KEY_FLOAT,
	KEY_FOR,
	KEY_GOTO,
	KEY_IF,
	KEY_INLINE,
	KEY_INT,
	KEY_LONG,
	KEY_REGISTER
	KEY_RESTRICT,
	KEY_RETURN,
	KEY_SHORT,
	KEY_SIGNED,
	KEY_SIZEOF,
	KEY_STATIC,
	KEY_STRUCT,
	KEY_SWITCH,
	KEY_TYPEDEF,
	KEY_UNION,
	KEY_UNSIGNED,
	KEY_VOID,
	KEY_VOLATILE,
	KEY_WHILE,
	KEY_BOOL,
	KEY_COMPLEX,
	KEY_IMAGINARY,
}token_keywords;

typedef enum token_const_type
{
	UINT_CONST = 0x0u,
	INT_CONST,
	FLOAT_CONST,
	UFLOAT_CONST,
	ENUM_CONST,
	CHAR_CONST
}token_const_type;


typedef struct tokens
{
	token_types types;
	union
	{
		token_keywords  key_words;
		
		token_const_type const_type
		
		u8 char_val;
		
		u64 uint_val; 
		
		s64 int_val;
		
		u8* str_val
	}
	
}tokens;


