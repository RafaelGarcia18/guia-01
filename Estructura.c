#include <stdio.h>

int main()
{
	printf("Item 1 guia");
	int tamanoM,i,opcion,tempVector;
	printf("Ingrese el tamano de la matriz\nRecuerde la matriz sera simetrica\n");
	scanf("%d", &tamanoM);
	printf("Llenado de matrices\n");
	int matriz1[tamanoM][tamanoM];
	int matriz2[tamanoM][tamanoM];
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("Ingrese un valor para la matriz A en la posicion %d,%d:\n",i+1,o+1);
				scanf("%d", &matriz1[i][o]);
		}
	}
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("Ingrese un valor para la matriz B en la posicion %d,%d:\n",i+1,o+1);
				scanf("%d", &matriz2[i][o]);
		}
	}
	printf("Multiplicacion de matrices\n");
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("%d\t", (matriz1[i][o]*matriz2[i][o]));
		}
		printf("\n");
	}
	
	printf("Item 2 guia");
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("Ingrese un valor para la matriz en la posicion %d,%d:\n",i+1,o+1);
				scanf("%d", &matriz1[i][o]);
		}
	}
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				matriz2[o][i]=matriz1[i][o];
		}
	}
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("%d\t", matriz1[i][o]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				printf("%d\t", matriz2[i][o]);
		}
		printf("\n");
	}
	int tamanoV;
	do{
		printf("\nIngrese un valor para el tamano del vector");
		scanf("%d\n",&tamanoV);
	}while(tamanoV<=0);
	int vector[(tamanoV+1)];
	for (i=0;i<tamanoV;i++){
		printf("Ingrese un valor a la posicion %d:\n", (i+1));
		scanf("%d\n", &vector[i]);
	}
	int valor;
	do{
		printf("Opciones\n1.Agregar dato en posicion especifica\n2.Buscar valor y obtener su posicion\n3.Editar una posicion\4.Eliminar una posicion\n");
		scanf("%d\n", &opcion);
		switch(opcion){
		case 1:
			do{
				printf("Ingrese la posicion en la cual desea agregar su valor\n");
				scanf("%d\n", &tempVector);
			}while(tempVector <= 0 || tempVector>(tamanoV+1));
			int valor;
			scanf("Ingrese nuevo valor para el vector \n%d\n", &valor);
			vector[tempVector] = valor;
			printf("Posicion cambiada con exito");
		break;
		case 2:	
		printf("Ingrese el valor a buscar en el vector\n");
		scanf("%d\n",&valor);
		for (i=0;i<tamanoV;i++){
			if(vector[i]==valor){
			printf("Coincidencia encontrada en posicion %d\n",(i+1));
			}
		}
		break;
		case 3:
		do{
			printf("Ingrese la posicion en la cual desea editar su valor\n");
			scanf("%d\n", &tempVector);
		}while(tempVector <= 0 || tempVector>(tamanoV+1));
		scanf("Ingrese nuevo valor para el vector \n%d\n", &valor);
			vector[tempVector] = valor;
			printf("Posicion cambiada con exito");
		break;
		case 4:
		do{
			printf("Ingrese la posicion en la cual desea eliminar su valor\n");
			scanf("%d\n", &tempVector);
		}while(tempVector <= 0 || tempVector>(tamanoV+1));
			vector[tempVector] = 0;
			printf("Posicion eliminada con exito\n");
		break;
		printf("Menu terminado\n");
		}
	}while(opcion>=1 && opcion<=4);
	int suma;
	printf("Item 4 guia\n");
	for(i=0;i<tamanoM;i++){
		suma =0;
		for(int o=0;o<tamanoM;o++){
				suma = suma + matriz1[i][o];
		}
		printf("La suma de la fila %d es %d",(i+1),suma);
	}
	for(i=0;i<tamanoM;i++){
		suma =0;
		for(int o=0;o<tamanoM;o++){
				suma = suma + matriz1[i][o];
		}
		printf("La suma de la fila %d es %d",(i+1),suma);
	}
	for(i=0;i<tamanoM;i++){
		suma =0;
		for(int o=0;o<tamanoM;o++){
				suma = suma + matriz1[o][i];
		}
		printf("La suma de la columna %d es %d",(i+1),suma);
	}
	suma =0;
	int contador = (tamanoM -1);
	for(i=0;i<tamanoM;i++){
		for(int o=0;o<tamanoM;o++){
				if(o==contador){
					suma = suma + matriz1[i][o];
					contador--;
				}
		}
		printf("La suma de la diagonal es %d",suma);
	}
	return 0;
}

