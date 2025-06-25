#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int w, h;
	scanf("%d %d", &w, &h);

	double area = ((double)w * (double)h) / 2.0;

	printf("%.1lf", area);

	return 0;
}