#include <stdio.h>

#define MAXLEN 10

int main() {
	int wordlen[11] = {0};
	int c, count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++wordlen[count];
			count = 0;
			continue;
		}
		else ++count;
	}
	printf("Word Length\tFrequency:\n");
	for (int i=1; i<=MAXLEN && wordlen[i]; ++i) {
		printf("%6d\t\t", i);
		for (int j=0; j<wordlen[i]; ++j)
			printf("X");
		printf("\n");
	}
}
