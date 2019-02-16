/*
 * Population.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */

#include <stdio.h>


float getPopulation(float BR, float DR, float IP) { //Birth Rate, Death Rate, Initial Population, Years
	float population;
	population = IP + (BR * IP) - (DR * IP);
	return population;
}

int main() {
	float birthRate, deathRate, initialPopulation, years, newPopulation;
	fflush(stdout);

	printf("Initial Population:\n");
	scanf("%f", &initialPopulation);
	while (initialPopulation < 2) {
		printf("Invalid population, re-enter:\n");
		scanf("%f", &initialPopulation);
	}

	printf("Annual Birth Rate:\n");
	scanf("%f", &birthRate);
	while (birthRate < 0) {
			printf("Invalid Annual Birth Rate, re-enter:\n");
			scanf("%f", &birthRate);
		}

	printf("Annual Death Rate:\n");
	scanf("%f", &deathRate);
	while (deathRate < 0) {
				printf("Invalid Annual Death Rate, re-enter:\n");
				scanf("%f", &deathRate);
			}

	printf("Number of years to display:\n");
	scanf("%f", &years);
	while (years < 1) {
				printf("Invalid number of years to display, re-enter:\n");
				scanf("%f", &years);
			}

	for (int year = 1; year <= years; year++) {
		newPopulation = getPopulation(birthRate, deathRate, initialPopulation);
		printf("New Population Year %d = %.f\n", year, newPopulation);
		initialPopulation = newPopulation;
	}

	return 0;
}

