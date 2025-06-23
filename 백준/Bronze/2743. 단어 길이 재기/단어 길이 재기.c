#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	

	int len = 0;
	while (1) {
		char ch;
		scanf("%c", &ch);

		if (!(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <= 'z')) {
			break;
		}

		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			len++;
		}

	}

	printf("%d", len);

	return 0;
}