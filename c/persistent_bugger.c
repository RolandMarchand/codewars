int persistence(int n) {
	if (n < 10) return 0;
	int m = 1;
	while (n) {
		m *= n % 10;
		n /= 10;
	}
	return (m > 9) ? 1 + persistence(m) : 1;
}
