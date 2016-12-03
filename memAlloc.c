#include <stdio.h>
#include <stdlib.h>

int main(){
	// Allocate space for array
	int *array = (int*) malloc(sizeof(int)*100);

	// Use array
	array[0] = 1;

	// Release back to memory
	free(array);

	return 0;
}



