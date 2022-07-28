#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

void uint32_to_ip (long long n, char *ip) {
	strcpy(ip, inet_ntoa((struct in_addr){.s_addr = htonl(n)}));
}
