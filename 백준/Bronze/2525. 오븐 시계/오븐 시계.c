#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int h, m;
	scanf("%d %d", &h, &m);

	int c;
	scanf("%d", &c);

	if (c + m < 60) {
		printf("%d %d\n", h, m + c);
	}
	else {
		int hour = (m + c) / 60;
		int min = (m + c) % 60;
		if (h + hour < 24) {
			printf("%d %d", h + hour, min);
		}
		else {
			printf("%d %d", h + hour - 24, min);
		}
	}

	return 0;
}