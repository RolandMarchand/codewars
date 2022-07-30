#include <stdio.h>
#include <stdlib.h>
char *bonus_time(long salary, char bonus) {
	char *ret = malloc(sizeof(char) * 21);
	sprintf(ret, "$%lu", bonus ? salary * 10 : salary);
	return ret;
}
