#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

pthread_mutex_t mutex_a = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_b = PTHREAD_MUTEX_INITIALIZER;

void *my_thread(void *arg){
	// Lock mutex B
	int ret = pthread_mutex_lock(&mutex_b);
	// Error check
    	if (ret != 0){
        	printf("Error");
    	}	

	// Lock mutex A
    	ret = pthread_mutex_lock(&mutex_a);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}

	// Unlock mutex A
    	ret = pthread_mutex_unlock(&mutex_a);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}

    	// Unlock mutex B
	ret = pthread_mutex_unlock(&mutex_b);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}
}

int main() {
	pthread_t p;
	
	//Create thread
	int ret = pthread_create(&p, NULL, my_thread, NULL);
	//Error check
	if (ret != 0){
		printf("Error");
	}

	// Lock mutex A
	ret = pthread_mutex_lock(&mutex_a);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}
	
	// Lock mutex B
    	ret = pthread_mutex_lock(&mutex_b);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}

    	// Unlock mutex B
	ret = pthread_mutex_unlock(&mutex_b);
    	// Error check
    	if (ret != 0){
     	   printf("Error");
    	}
	
	// Unlock mutex A
    	ret = pthread_mutex_unlock(&mutex_a);
    	// Error check
    	if (ret != 0){
        	printf("Error");
    	}	

	pthread_join(p, NULL);
	return 0;
}
