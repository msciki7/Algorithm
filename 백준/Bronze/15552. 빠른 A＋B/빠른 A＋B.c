#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int a, b;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}