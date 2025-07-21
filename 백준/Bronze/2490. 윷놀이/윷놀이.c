#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int n = 3;
	int arr[4];

	while (n > 0) {
		for (int i = 0; i < 4; i++) {
			scanf("%d", &arr[i]);
		}
		int a = 0;
		int b = 0;
		for (int i = 0; i < 4; i++) {
			if (arr[i] == 0) {
				a++;
			}
			else if (arr[i] == 1) {
				b++;
			}
		}

		if (a == 1 && b == 3) {
			printf("A\n");
		}
		else if (a == 2 && b == 2) {
			printf("B\n");
		}
		else if (a == 3 && b == 1) {
			printf("C\n");
		}
		else if (a == 4) {
			printf("D\n");
		}
		else if (b == 4) {
			printf("E\n");
		}
		n--;
	}


	return 0;

}