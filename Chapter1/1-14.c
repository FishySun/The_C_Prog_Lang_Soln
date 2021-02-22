#include <stdio.h>

static inline void cel_to_fa() {
	float cel;
	printf("Enter the temperature in Celsius: ");
	scanf("%f", &cel);
	printf("Temperature in Farenheit: %f\n", (9.0/5.0)*cel + 32);
}

static inline void fa_to_cel() {
	float fa;
	printf("Enter the temperature in Farenheit: ");
	scanf("%f", &fa);
	printf("Temperature in Celsius: %f\n", (5.0/9.0) * (fa - 32));
}

int main() {
	int choice = -1;
	printf("Type 1 to convert Celsius to Farenheit or 2 to convert Farenheit to Celsius: ");
	scanf("%d", &choice);
	if (choice == 1) {
		cel_to_fa();
	}
	else if (choice == 2) {
		fa_to_cel();
	}
	else {
		perror("Wrong choice provided!\n");
	}
}
