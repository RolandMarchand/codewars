#include <math.h>

int compute_sum(int n) {
	int result = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= floor(log10(i)); j++)
			result += (fmod(i, pow(10, j + 1)) - fmod(i, pow(10, j))) / pow(10, j);
	return result;
}
