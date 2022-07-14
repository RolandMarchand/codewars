#include <stdbool.h>

bool validParentheses(const char *str_in) {
	int stack = 0;

	do {
		if (*str_in == ')') stack--;
		if (stack < 0) return false;
		if (*str_in == '(') stack++;
	} while (*(str_in++) != '\0');

	return stack == 0;
}
