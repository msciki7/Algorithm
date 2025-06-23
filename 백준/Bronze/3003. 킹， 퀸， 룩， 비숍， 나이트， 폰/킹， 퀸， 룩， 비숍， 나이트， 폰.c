#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int k, q, l, b, n, p;

	scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);

	if (k != 1) {
		printf("%d ", 1-k);
	}
	else {
		printf("0 ");
	}

	if (q != 1) {
		printf("%d ", 1 - q);
	}
	else {
		printf("0 ");
	}

	if (l != 2) {
		printf("%d ", 2- l);
	}
	else {
		printf("0 ");
	}

	if (b != 2) {
		printf("%d ", 2 - b);
	}
	else {
		printf("0 ");
	}

	if (n != 2) {
		printf("%d ", 2 - n);
	}
	else {
		printf("0 ");
	}

	if (p != 8) {
		printf("%d ", 8 - p);
	}
	else {
		printf("0 ");
	}

	return 0;
}