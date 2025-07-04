#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int a, b, c;

	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		int a1 = a * a;
		int b1 = b * b;
		int c1 = c * c;
		
		if (a1 == b1 + c1 || b1 == a1 + c1 || c1 == a1 + b1) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}
	

	return 0;
}