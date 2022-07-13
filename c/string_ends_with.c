#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
	int len_str = strlen(string) - 1;
	int len_end = strlen(ending) - 1;
	return !memcmp(string + (len_str - len_end), ending, len_end + 2)
		&& len_str >= len_end;
}
