#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [20][6], fila=0,col=0,cant=0;
	float c,prom;
	
	for (fila=0;fila<20;fila++) {
		for (col=0;col<6;col++){
			printf ("\n Del piso #%d, ingrese habitantes del dep#%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
			cant=cant+matriz [fila][col];
		}
	}
	c=cant;
	prom=cant/120;
	
	
	printf ("\n\n CANTIDAD PROMEDIO DE HABITANTES POR CADA PISO: %f",prom);
	
	
	printf("\n\n CANTIDA DE HANBITANTES TOTAL: %d",cant);
	return 0;
}
