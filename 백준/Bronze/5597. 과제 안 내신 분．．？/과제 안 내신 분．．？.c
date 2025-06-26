#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int stu[31] = { 0 };

	int submit;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &submit);
		stu[submit] = submit;
	}

	for (int i = 1; i < 31; i++) {
		if (stu[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}