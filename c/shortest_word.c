#include <sys/types.h>
#include <string.h>

ssize_t find_short(const char *s)
{
	unsigned int len = ~0, buf = 0;

	do {
		switch (*s) {
		case ' ':
		case '\0':
			if (buf < len) len = buf;
			buf = 0;
			break;
		default:
			buf++;      
		}
	} while (*(s++) != '\0');

	return len;
}
