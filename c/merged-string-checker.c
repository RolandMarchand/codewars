int is_merge(char *s, char *p1, char *p2) {
	return *s
		? (*p1 == *s && is_merge(s + 1, p1 + 1, p2))
			|| (*p2 == *s && is_merge(s + 1, p1, p2 + 1))
		: !(*p1 || *p2);
}
