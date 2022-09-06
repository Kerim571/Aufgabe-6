#include<stdio.h>
#define SIZE 10

int main(void){

	int n[SIZE] = {1,2,3,4,5,12,7,8,9,10};
        size_t i;
        int j;

	printf( "%s%13s%17s\n", "Element", "Value", "Histogramm");

        for ( i=0; i<SIZE; ++i){
		printf("%7u%13d         ", i, n[i]);

		for( j=1; j=i; ++j){
			printf("%c", '*');
		}

	}
