#include <stdio.h>
int bit_count(int value) {
	int count = 0;
	while(value) {
		count += value & 1;
		value >>= 1;
	}
	return count;
}

void sort_by_bit(int *arr, int len) {
	int arr2[len];
  
	for (int i = 0; i < len; i++)
		arr2[i] = bit_count(arr[i]);
  
	// insertion sort
	char sorting = 1;
sort:
	sorting = 0;
	for (int i = 0; i < len - 1; i++) {
		if (arr2[i] < arr2[i + 1]) continue;
		if (arr2[i] == arr2[i + 1] && arr[i] <= arr[i + 1]) continue;

		int tmp = arr[i + 1];
		arr[i + 1] = arr[i], arr[i] = tmp;

		tmp = arr2[i + 1];
		arr2[i + 1] = arr2[i], arr2[i] = tmp;

		sorting = 1;
	}
	if (sorting) goto sort;
}
