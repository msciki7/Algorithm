#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n, k;
	scanf("%d %d", &n, &k);

	int com = 1;
	for (int i = 0; i < k; i++) {
		com *= n;
		n--;
	}

	for (int i = k; i > 0; i--) {
		com /= i;
	}

	printf("%d", com);

	return 0;
}