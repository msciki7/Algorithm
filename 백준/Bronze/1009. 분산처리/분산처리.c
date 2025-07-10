#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int t;
	scanf("%d", &t);
	
	while (t > 0) {
		int a, b;
		scanf("%d %d", &a, &b);

		int total = a;
		for (int i = 1; i < b; i++) {
			total = total * a % 10;
		}

		if (total % 10 == 0)
			printf("%d\n", 10);
		else
			printf("%d\n", total % 10);

		t--;
	}

	return 0;
}