#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n, k;
	scanf("%d %d", &n, &k);

	int div[10000];
	for (int i = 0; i < 10000; i++) {
		div[i] = 0;
	}

	int len = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			div[len] = i;
			len++;
		}
	}

	printf("%d", div[k - 1]);

	return 0;
}