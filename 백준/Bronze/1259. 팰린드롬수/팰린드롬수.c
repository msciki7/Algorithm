#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n;

	while (1) {
		scanf("%d", &n);

		if (n == 0) {
			break;
		}

		int temp = n;
		int reverse = 0;
		while (temp > 0) {
			reverse = reverse* 10 + temp % 10;
			temp /= 10;
		}

		if (n == reverse) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}


	return 0;
}