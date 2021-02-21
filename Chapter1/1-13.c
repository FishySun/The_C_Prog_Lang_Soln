#include <stdio.h>
#include <ctype.h>

int freq[26];

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (isalpha(c)) {
			c = toupper(c);
			++freq[c - 'A'];
		}
	}

	printf("Character\tFrequency:\n");
	for (int i=0; i<26; ++i) {
		printf("%3c\t\t", (char)(i + 'A'));
		for (int j=0; j<freq[i]; ++j) printf("X");
		printf("\n");
	}
}
