#include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\b' || c == '\t' || c == '\\') {
			putchar('\\');
			if (c == '\b') putchar('b');
			else if (c == '\t') putchar('t');
			else putchar('\\');
		}
		else putchar(c);
	}
}
