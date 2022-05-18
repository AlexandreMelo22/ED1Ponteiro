#include <stdio.h>


int main() {
    
	float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, x;
	
	printf("Endereço de cada posiçao da matriz:\n\n");
	for (i=0; i<3; i++) {
		for (x=0; x<3; x++){
			printf("%p\n", &matriz[i][x]);
	}	
	}
	
	return 0;
}