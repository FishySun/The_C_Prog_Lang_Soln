#include <stdio.h>

int main() {
	printf("Farenheit	Celsius\n");
	for (int fahr=0; fahr<=300; fahr+=30)
		printf("%5d %16.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
