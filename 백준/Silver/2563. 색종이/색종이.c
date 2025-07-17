#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int paper[100][100] = { 0, };

	int n;
	scanf("%d", &n);

	int x, y;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);

		for (int k = x; k < x + 10; k++) {
			for (int j = y; j < y + 10; j++) {
				paper[k][j] = 1;
			}
		}
	}

	int count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1) {
				count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}