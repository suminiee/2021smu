#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convCase(int ch) {
	//모든 문자의 대소문자간 차의 크기는 같다.
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else {
		return ch;
	}
}

int main(void) {
	int ch, ch2;
	printf("input> ");
	while(1){
		ch = getchar();
		ch2 = convCase(ch);
		if (ch == EOF)
			break;
		putchar(ch2);
	}
	

	return 0;
}