#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main(void) {
	int first;
	int second;

	scanf("%o", &first);
	scanf("%o", &second);

	printf("%x\n", first);

	printf("%o\n", first);

	printf("%o << 3 == %o\n", first, first << 3);

	printf("%o\n", first & second);
}