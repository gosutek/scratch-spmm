#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "spmm.h"
#include "tokenizer.h"

void normalizer(char* str)
{
	printf("%s\n", str);
	u8* b_str = (u8*)str;
	while (*b_str != '\0') {
		if (*b_str == ' ') {
			*b_str = '_';
		}
		++b_str;
	}

	printf("%s\n", str);
}

void do_stuff()
{
	char* text = (char*)malloc(strlen("Hello, World!") + 1);

	strcpy(text, "Hello, World!");
	normalizer(text);
	free(text);
}
