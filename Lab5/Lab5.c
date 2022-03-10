#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	//First.
	int array[] = { 123, 123, 123, 123, 456, 321, 1 };
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d", array[i]);
	}

	//Second.
	printf("\n");

	int matrix[2][2] = { {1, 2}, {3, 1} };
	int matrix2[2][2] = { {1, 1}, {0, 2} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int sum = 0;
			for (int k = 0; k < 2; k++) {
				sum += matrix[i][k] * matrix[k][j];
			}
			printf("%d", sum);
		}
		printf("\n");
	}


	return 0;
}