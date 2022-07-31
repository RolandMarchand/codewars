#include <stddef.h>

size_t countBits(unsigned value) {
	int result = 0;
	while(value) {
		result += value & 1;
		value >>= 1;
	}
	return result;
}
