#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	printf("%d\n", sum * sum);

	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i * i;
	}
	printf("%d", sum);

	return 0;
}