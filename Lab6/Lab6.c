#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int* arr = (int*)calloc(4, sizeof(int));
	arr[0] = -1;
	arr[1] = -12;
	arr[2] = -123;
	arr[3] = -1234;

	for (int i = 0; i < 4; i++) {
		printf("%d", *(arr + i));
	}
	free(arr);


	return 0;
}