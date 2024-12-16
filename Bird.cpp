#include "Bird.h"

Bird::Bird() {}

Bird::Bird(char* input_name, char* input_species, int input_age) {
	strcpy(name, input_name);
	strcpy(species, input_species);
	age = input_age;
}

char* Bird::bird_info() {
	char string[200];
	sprintf(string, "Name: %s, species: %s, age: %d\n", name, species, age);
	return string;
}

Bird Bird::operator+(Bird bird) {
	Bird new_bird;
	char new_bird_name[20];
	char new_bird_species[50];
	sprintf(new_bird_name, "%s%s", name, bird.name);
	sprintf(new_bird_species, "%s%s", species, bird.species);
	strcpy(new_bird.name, new_bird_name);
	strcpy(new_bird.species, new_bird_species);
	new_bird.age = age + bird.age;
	return new_bird;
}

bool Bird::operator<(Bird bird) {
	if (age < bird.age) {
		return true;
	}
	else {
		return false;
	}
}
