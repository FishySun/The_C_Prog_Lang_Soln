#include <stdio.h>

int main() {
	// We can redirect a single char to this program and it will print 1
	printf("%d", (getchar() != EOF));
}
