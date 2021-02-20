#include <stdio.h>

int main() {
	printf("Celsius	Farenheit\n");
	for (int cel=300; cel>=0; cel-=30)
		printf("%5d %8.1f\n", cel, (9.0/5.0) * cel + 32);
}
