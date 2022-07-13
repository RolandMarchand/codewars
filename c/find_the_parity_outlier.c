#include <stdlib.h>

int find_outlier(const int *values, size_t count)
{
	int sign = (values[0] & 1) + (values[1] & 1) + (values[2] & 1) > 1;

	while (count-- > 0) {
		if ((values[count] & 1) != sign) return values[count];
	}

	return 0;
}
