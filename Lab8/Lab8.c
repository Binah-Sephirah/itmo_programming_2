#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
//Task 2.
	char str1[40] = "ABCDEFG";
	char str2[40] = "ADSKWPDAASQ";
	strncat(str1, str2, 5);
	printf("%s \n", str1);

//Task 5.
	strcpy(str1, str2);
	printf("%s \n", str1);

//Task 6.
	strncpy(str1, str2, 3);
	printf("%s \n", str1);

//Task 9.
	printf("%s \n", strrchr(str1, '7'));

//Task 12.
	printf("%s \n", strcspn(str1, str2));

	return 0;
}