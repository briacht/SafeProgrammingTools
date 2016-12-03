#include <pthread.h>

int x = 0;

void* child_fn(void* ard){
	x++;
	return NULL;
}

int main(void){
	pthread_t child;
	pthread_create(&child, NULL, child_fn, NULL);
	x++;
	pthread_join(child, NULL);
	return 0;
}
