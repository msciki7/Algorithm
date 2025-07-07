#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n;
	scanf("%d", &n);
	int size[6];

	for (int i = 0; i < 6; i++) {
		scanf("%d", &size[i]);
	}

	int t, p;
	scanf("%d %d", &t, &p);

	int bundle = 0;
	for (int i = 0; i < 6; i++) {
		bundle += (size[i] + t - 1) / t;
	}
	
	printf("%d\n", bundle);
	printf("%d %d", n / p, n % p);

	return 0;
}