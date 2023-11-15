#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [2][3], fila=1,col=1;
	
	for (fila=0;fila<2;fila++) {
		for (col=0;col<3;col++){
			printf ("\n De la fila #%d, ingrese valor #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
		
	}
	
	printf ("\n\n");
	
	for (fila=0;fila<2;fila++){
		for (col=0;col<3;col++){
			printf("%d  ",matriz[fila][col]);
		}
		printf ("\n");
	}
	
	return 0;
}
