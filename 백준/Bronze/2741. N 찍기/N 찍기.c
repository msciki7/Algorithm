#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60


int main(void) {

	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}

	return 0;
}
