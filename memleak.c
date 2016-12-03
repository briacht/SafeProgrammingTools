#include<stdio.h>
#include<stdlib.h>

//Allocate and then don't free memory
int main() {
	int *array;

	array = (int *) malloc(sizeof(int) * 100);
	array[0] = 1;

	return 0;
}
