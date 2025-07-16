#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	char s1[4], s2[4];

	scanf("%s %s", &s1, &s2);

	int a = 0;
	int b = 0;

	for (int i = 2; i >= 0; i--) {
		a = a * 10 + s1[i] - '0';
		b = b * 10 + s2[i] - '0';
	}

	if (a > b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}

	return 0;
}