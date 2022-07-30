#include <stddef.h>
#include <ctype.h>

int ret(int *c) {
	return *c == -1 ? 0 : ((*c > 1) ? 1 : 0) + ret(c+1);
}

size_t duplicate_count(const char *t) {
	int cnt[44] = {0};
	cnt[43] = -1;
	do {
		cnt[toupper(*t) - '0']++;
	} while (*t++);
	return ret(cnt);
}
