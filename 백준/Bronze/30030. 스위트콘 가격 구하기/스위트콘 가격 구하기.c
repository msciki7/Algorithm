#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int b;
	scanf("%d", &b);

	int a = b - (b * 10 / 110);

	printf("%d", a);

	return 0;
}