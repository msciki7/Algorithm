#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int factory = 1;
	for (int i = n; i > 0; i--) {
		factory *= i;
	}

	printf("%d", factory);

	return 0;
}