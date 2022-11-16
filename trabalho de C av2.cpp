#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	
	int i;
	int num2[100];
	
	srand (time(NULL));
	
	printf ("Gerando valores aleatorios\n\n");
	for(i = 0; i < 100; i++)
		num2[i] = rand() % 1000;
		
	printf ("\n\n");
	for(i = 0; i < 100; i++)
		printf("%d ", num2[i]);
	printf ("\n\n");
		
	
	return 0;	
}
