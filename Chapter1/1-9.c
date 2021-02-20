#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c;
	int state = OUT;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			state = IN;
		}
		else if (state == IN) {
			state = OUT;
			putchar(c);
		}
		else continue;
	}
}
