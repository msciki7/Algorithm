#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int a, b;
	int num = 1;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}

	return 0;
}
