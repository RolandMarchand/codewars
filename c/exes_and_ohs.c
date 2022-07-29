int xo (const char* str) {
	int x = 0;
	for (;*str;str++) {
		if (tolower(*str) == 'x') x++;
		if (tolower(*str) == 'o') x--;
	}
	return !x;
}
