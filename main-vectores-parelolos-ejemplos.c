#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char estaciones[4][2];
	int contaminacion[4][3];
	char mes[3][10]= {"Octubre", "Noviembre", "Diciembre"};
	int i , j;
	float min= 9999, max= 0;
	float promedio, acum = 0 ;
	char estacionMayor[2], estacionMenor[2];
	
	for(i=0; i < 4; i++){
		printf("Ingrese nombre de la estacion  %d:\n ", i+1);
		printf("\nEstacion:\t");
		scanf("%s", estaciones[i]);
			for(j =0; j<3; j++){
		printf("\nIngrese el nivel contaminacion en el mes %s\n", mes[j]);
		scanf("%d", &contaminacion[i][j]);
	}	
}
	system("cls");

	printf("Datos de contaminacion trimestrales:\n");
	printf("\n");
	for(i=0; i<=3; i++){
		printf("\t %s  ", mes[i]);
	}
	printf("\n");
	for(i=0; i<4; i++){
		printf("%s", estaciones[i]);
		for(j=0; j<3; j++){
			printf("\t  %d \t", contaminacion[i][j]);
		}		
		printf("\n");
	}
	
	for(i=0; i <4; i++){
		for(j =0; j <3; j++){
		acum += contaminacion[i][j];
	}
	promedio = acum/4;
	printf("\nEl promedio del mes %s: %.1f\n", mes[i], promedio);	

}
acum=0;

	for (i=0;i<4; i++){
	for(j=0; j <3; j++){
	acum+=contaminacion [i][j];
	}
	if(acum < min){
		min = acum;
		strcpy(estacionMenor, estaciones[i]);
	}
	if(acum >= max){
		max= acum;
		strcpy(estacionMayor, estaciones[i]);
		}
	acum = 0;
}

	printf("La estacion con mayor Contaminacion fue %s  y es de:  %f\n ", estacionMayor,max);
	printf("La estacion con menor contaminacion fue de %s y es de: %f\n", estacionMenor,min);
			
	return 0;
}
