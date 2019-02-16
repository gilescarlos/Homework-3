/*
 * GeometryCalculator.c
 *
 *  Created on: Feb 14, 2019
 *      Author: gilescarlos32
 */

#include <stdio.h>

int main() {
	int choice = 0;
	float area, radius, length, width, height , base;
	do {
		printf("Geometry Calculator\n");
		printf("1. Calculate the Area of a Circle\n");
		printf("2. Calculate the Area of a Rectangle\n");
		printf("3. Calculate the Area of a Triangle\n");
		printf("4. Quit\n");
		printf("\nEnter your choice (1-4):\n");
		fflush(stdout);
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Enter radius:\n");
				scanf("%f", &radius);
				while (radius <= 0) {
					printf("Invalid radius, re-enter:\n ");
					scanf("%f", &radius);
				}
				area = 3.14159 * radius * radius;
				printf("Area = %.2f\n\n", area);

				break;
			case 2:
				printf("Enter length:\n");
				scanf("%f", &length);
				printf("Enter width:\n");
				scanf("%f", &width);
				while (length <= 0 || width <= 0) {
					printf("Invalid length or width, re-enter length and width:\n");
					scanf("%f", &length);
					scanf("%f", &width);
				}
				area = length * width;
				printf("Area = %.2f\n\n", area);

				break;
			case 3:
				printf("Enter base:\n");
				scanf("%f", &base);
				printf("Enter height:\n");
				scanf("%f", &height);
				while (height <= 0 || base <= 0) {
					printf("Invalid base or height, re-enter base and height:\n");
					scanf("%f", &base);
					scanf("%f", &height);
				}
				area = base * height * .5;
				printf("Area = %.2f\n\n", area);

				break;
			case 4:
				printf("Goodbye");
				break;
			default:
				printf("Invalid choice\n\n" );
		}
	} while (choice != 4);

	return 0;
}

