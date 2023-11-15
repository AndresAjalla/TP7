#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz [10][3], fila=0,col=0;
	float c,prom;
	
	for (fila=0;fila<10;fila++) {
		for (col=0;col<3;col++){
			printf ("\n Alumno N°#%d, ingrese nota de Trimestre N°#%d: ",fila+1,col+1);
			scanf ("%d",&matriz [fila][col]);
			
		}
	}
	printf ("\nN° de legajos		1°TRIMESTRE		2°TRIMESTRE		3°TRIMESTRE		PROMEDIO");
	for (fila=0;fila<10;fila++){
		printf ("%d	",fila);
		for (col=0;col<3;col++){
			printf("		%d	 ",matriz[fila][col]);
			c=matriz[fila][col];
			prom=(prom+c)/3;
		}
		
		printf("		%d	",prom); 
		printf("\n");
	}
	return 0;
}
