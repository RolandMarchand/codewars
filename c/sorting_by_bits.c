#include <stdlib.h>

int bit_count(int v) {
	int c = 0;
	do { c += v & 1; } while(v >>= 1 != 0);
	return c;
}

int cmp_fn(const void* a, const void *b) {
	int b1 = bit_count(*(int*)a), b2 = bit_count(*(int*)b);
	return (b1 == b2 && *(int*)a <= *(int*)b || b1 < b2) ? -1: 1;
}

void sort_by_bit(int *arr, int len) {
	qsort(arr, len, sizeof(int), cmp_fn);
}
