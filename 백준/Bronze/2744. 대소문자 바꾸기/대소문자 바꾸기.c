#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	while (1) {
		char ch;
		scanf("%c", &ch);

		if (!(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <= 'z')) {
			break;
		}

		if (ch >= 'A' && ch <= 'Z') {
			ch = ch - 'A' + 'a';
		}
		else if (ch >= 'a' && ch <= 'z') {
			ch = ch - 'a' + 'A';
		}
		printf("%c", ch);

	}

	return 0;
}