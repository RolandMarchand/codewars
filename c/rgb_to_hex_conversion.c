#include <stdio.h>

#define CLAMP(i) ((i < 0 ? 0 : i) > 0xFF ? 0xFF : (i < 0 ? 0 : i))

int rgb(int r, int g, int b, char *output)
{
	sprintf(output, "%06X", (CLAMP(r) << 16) | (CLAMP(g) << 8) | CLAMP(b));
	return 0;
}
