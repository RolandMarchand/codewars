#include <stdlib.h>
int bit_count(int value) {
	int count = 0;
	while(value) {
		count += value & 1;
		value >>= 1;
	}
	return count;
}

int cmp_fn(const void* a, const void *b) {
	int b1 = bit_count(*(int*)a), b2 = bit_count(*(int*)b);
	if (b1 == b2 && *(int*)a <= *(int*)b || b1 < b2) return -1;
	return 1;
}

void sort_by_bit(int *arr, int len) {
	qsort(arr, len, sizeof(int), cmp_fn);
}
