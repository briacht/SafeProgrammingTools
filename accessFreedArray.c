#include <stdlib.h>

int main(){
	// Allocate heap block
	int* array = (int*) malloc(10 * sizeof(int));

	// Use array
	array[0] = 0;

	// Deallocate heap block
	free(array);

	// Use array that has already been freed
	array[0] = 1;

	return 0;
}
