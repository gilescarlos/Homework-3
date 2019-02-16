/*
 * ReverseArray.c
 *
 *  Created on: Feb 15, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

int *reverse(int[], int);
void print(int[], int);
int main() {
	int size = 10;
	int originalArray[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Original array\n");
	print(originalArray,size);

	int *reversedArray=reverse(originalArray, size);
	printf("Reversed array\n");
	print(reversedArray, size);

	return 0;
}

int *reverse(int a[],int n) {

	if(n <= 0){
	    return NULL;
	}

	int newArray[n];
	int *copy;
	for(int i = 0; i < n; i++) {
		newArray[i] = a[n - i - 1];
	}
	copy = newArray;

	return copy;
}

void print(int a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

}
