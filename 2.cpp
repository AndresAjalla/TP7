#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [2][3], fila=0,col=0;
	
	for (fila=0;fila<2;fila++) {
		for (col=0;col<3;col++){
			printf ("\n De la fila #%d, ingrese valor #%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
		}
		
	}
	printf ("\n\n");
	matriz[0][0]=matriz[0][0]*4;
	matriz[0][1]=matriz[0][1]*4;
	matriz[0][2]=matriz[0][2]*4*3;
	matriz[1][2]=matriz[1][2]*3;
	for (fila=0;fila<2;fila++){
		for (col=0;col<3;col++){
			printf("%d  ",matriz[fila][col]);
			v=v+matriz[fila][col];
		}
		printf ("\n");
	}
	
	
	printf("\n \n");
	printf("\n SUMA DEL CONTENIDO DE LA MATRIZ: %d",v);
	
	return 0;
}
