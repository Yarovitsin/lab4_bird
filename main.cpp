#include "Bird.h"

void main() {
	char bird1_name[20], bird2_name[20];
	char bird1_species[50], bird2_species[50];
	int bird1_age = 0;
	int bird2_age = 0;

	printf("Enter first bird's name, species and age:\n");
	scanf("%s%s%d", &bird1_name, &bird1_species, &bird1_age);
	printf("Enter second bird's name, species and age:\n");
	scanf("%s%s%d", &bird2_name, &bird2_species, &bird2_age);

	Bird bird1(bird1_name, bird1_species, bird1_age);
	Bird bird2(bird2_name, bird2_species, bird2_age);

	printf("%s", bird1.bird_info());
	printf("%s", bird2.bird_info());

	if (bird1 < bird2) {
		printf("The first bird is younger than the second bird\n");
	}
	else {
		printf("The first bird is of equal age or older than the second bird\n");
	}

	Bird bird3 = bird1 + bird2;
	printf("Combined bird's info: %s\n", bird3.bird_info());

	system("pause");
}
