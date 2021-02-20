#include <stdio.h>

int main() {
	int c, tabs, nl, blanks;
	tabs = nl = blanks = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') ++nl;
		else if (c == '\t') ++tabs;
		else if (c == ' ') ++blanks;
		else continue;
	}
	printf("# Newline = %d\n", nl);
	printf("# Tabs = %d\n", tabs);
	printf("# Blanks = %d\n", blanks);
	return 0;
}
