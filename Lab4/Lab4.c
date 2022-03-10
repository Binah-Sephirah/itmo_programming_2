#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int b, a;
	scanf("%d", &b);
	a = (b > -50) & (b < 50) ? 1 : 0;

	printf("1st task: %d\n", a);
	printf("2nd task: %d", (b >> 18));
	
	return 0;

}