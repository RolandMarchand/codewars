#include <math.h>

float heron(int a, int b, int c) {
	float s = (a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
