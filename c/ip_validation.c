#define BETWEEN(ptr, min, max) ((*(ptr) >= min) && (*(ptr) <= max))

int is_valid_num(const char * addr, int length) {
	switch (length) {
	case 3: if (*addr == '2') goto max_num;
		if (*addr != '1') return 0;
		addr++;
	case 2: if (!BETWEEN(addr, '0', '9')) return 0;
		addr++;
	case 1: if (BETWEEN(addr, '0', '9')) return 1;
	default: return 0;
	}
max_num:
	addr++;
	if (*addr == '5') {
		return BETWEEN(addr + 1, '0', '5');
	} else if (BETWEEN(addr, '0', '4')) {
		return BETWEEN(addr + 1, '0', '9');
	}
	return 0;
}

int is_valid_ip(const char * addr) {

	const char * delem = addr;
	int offset = 0;
	int num_cnt = 0;

	do {
		if ((*addr == '.') || (*addr == '\0')) {
			if (!is_valid_num(delem, offset)) return 0;
			delem = addr + 1;
			offset = 0;
			num_cnt++;
			continue;
		}
		offset++;
	} while (*(addr++) != '\0');

	return num_cnt == 4;
}
