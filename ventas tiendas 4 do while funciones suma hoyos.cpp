#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>


struct producto{
	int codigo;
	char nombre_pro[50];
	float precio;
};

struct tienda{
	struct producto prod[4];
}datos[4];

void crear(struct tienda datos_nw[4])
{
	for(int k = 0; k < 4; k++)
	{
		printf("Tienda %d: \n", k + 1);
		for(int i = 0; i < 4; i++)
		{
			printf("Producto %d: \n", i + 1);
			printf("Ingrese el codigo del producto: ");
			scanf("%d", &datos_nw[k].prod[i].codigo);
			
			fflush(stdin);
			
			printf("Ingrese la descripcion del producto: ");
			gets(datos_nw[k].prod[i].nombre_pro);
			
			fflush(stdin);
			
			printf("Ingrese el precio del producto: ");
			scanf("%f", &datos_nw[k].prod[i].precio);
			
			fflush(stdin);
			
			printf("\n");
		}
		printf("\n");
		system("cls");
	}	
}


void imprimir(struct tienda p[4])
{
	for(int k = 0; k < 4; k++)
	{
		printf("Tienda %d: \n", k + 1);
		
		for(int i = 0; i < 4; i++)
		{
			printf("Producto %d: ", i + 1);
			printf("\nCodigo: %d\n", p[k].prod[i].codigo);  
			printf("Descripcion: %s\n", p[k].prod[i].nombre_pro);
			printf("Precio: %f\n", p[k].prod[i].precio);
			printf("\n");
		}
		printf("\n\n");
	}
}

void suma_productos(struct tienda sumatoria[4])
{
	
	int prod1=0,prod2=1,prod3=2,prod4=3,i=0;
	
	
	printf("\nSuma total de cada uno de los productos vendidos en las tiendas: \n");
	
	do{
	
	printf("\n");
	
	printf("Producto %d: ", i + 1);
	
	float operacion[4];
	operacion[i] = sumatoria[prod1].prod[i].precio + sumatoria[prod2].prod[i].precio + sumatoria[prod3].prod[i].precio + sumatoria[prod4].prod[i].precio;	
	printf("%.0f\n", operacion[i]);	
	i++;
	}while(i<4);
}


int main()
{
    printf("Bienvenido por favor ingrese los siguientes datos de los productos\n");
    printf("******************************************************************\n");
	crear(datos);
    printf("******************************************************************\n");	
	imprimir(datos);
    printf("******************************************************************\n");	
	suma_productos(datos);
	
}
