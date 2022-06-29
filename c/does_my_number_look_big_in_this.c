/* 
 * Your code must return true or false (not 'true' and 'false')
 * depending upon whether the given number is a Narcissistic number in
 * base 10. This may be True and False in your language, e.g. PHP.
 *
 * Error checking for text strings or other invalid inputs is not
 * required, only valid positive non-zero integers will be passed into
 * the function.
 */

/* 
 * Do not allocate memory for return string.
 * Assign the value to the pointer "result".
 */

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#define NUM_ASCII_OFFSET 48

bool narcissistic(int num)
{
	char str[10];
	sprintf(str, "%d", num);

	char len = 0;
	while (str[(int)len] != '\0') len++;

	int sum = 0;
  
	for (int i = 0; str[i] != '\0'; i++)
		sum += pow(str[i] - NUM_ASCII_OFFSET, len);

	return sum == num;
}
