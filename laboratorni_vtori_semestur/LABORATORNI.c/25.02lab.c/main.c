
#include <stdio.h>

int main(void) {
	double width, height;

	printf("Въведете ширина: ");
	if (scanf("%lf", &width) != 1) {
		fprintf(stderr, "Невалиден вход за ширина\n");
		return 1;
	}

	printf("Въведете височина: ");
	if (scanf("%lf", &height) != 1) {
		fprintf(stderr, "Невалиден вход за височина\n");
		return 1;
	}

	if (width < 0 || height < 0) {
		fprintf(stderr, "Стойностите не могат да са отрицателни\n");
		return 1;
	}

	double area = width * height;
	printf("Лице: %.2f\n", area);
	return 0;
}


