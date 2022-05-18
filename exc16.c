#include <stdio.h>

int main() {
	int a;
	int *b = &a;   
	int **c = &b;  
	int ***d = &c; 
	
	printf("\nEntre com o valor base: ");
	scanf("%d", &a);
	
	printf("\ndobro do valor eh: %d", (*b * 2));
	printf("\nTriplo do valor eh: %d", (**c * 3));
	printf("\nQuadruplo do valor eh: %d", (***D * 4)); 
	
	return 0;
}