#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int arr[9][9];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int max = -1;
	int row;
	int col;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", row + 1, col + 1);

	return 0;
}