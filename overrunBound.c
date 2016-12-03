#include <stdlib.h>
int main(){
	int *array = (int *) malloc(10);

    // Attempt to access 11th element of size 10 array
	array[10] = 0;

    return 0;
}

