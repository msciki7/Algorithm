#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int temp, check, cnt = 1, i;
	int series;
	scanf("%d", &series);

	if (series == 1) {
		printf("666");
		return 0;
	}
	for (i = 667;; i++) {
		temp = i;
		check = 0;
		while (temp) {
			if (temp % 1000 == 666) {
				check = 1;
			}
			temp /= 10;
		}
		if (check) {
			cnt++;
			if (cnt == series) {
				break;
			}
		}
	}
	printf("%d\n", i);

		return 0;
}