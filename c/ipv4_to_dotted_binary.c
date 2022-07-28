#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>

void ipv4_to_binary(const char *addr, char *bin) {
	int a = htonl(inet_addr(addr));
	for (int i = 34; i >= 0; i--) {
		if ((i + 1) % 9 == 0) {
			bin[i] = '.';
			continue;
		}
		bin[i] = (a & 1) + '0';
		a >>= 1;
	}
}
