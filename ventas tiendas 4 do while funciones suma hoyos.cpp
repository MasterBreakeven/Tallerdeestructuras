#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

/*
Autor: Juan David Hoyos Ramirez
Fecha: 31/10/2018
Programa: Mostar la suma total de cada producto vendido en 4 tiendas diferentes
*/

//Estructura Anidada
struct producto{
	int codigo;
	char nombre_pro[50];
	float precio;
};

struct tienda{
	struct producto prod[4];
}datos[4];

//Funcion donde se almacena los datos de los productos
void crear(struct tienda datos_nw[4])
{
	//Ciclo for para ejecutar el proceso 4 veces que representara las 4 tiendas
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
		system("cls"); //limpiar pantalla
	}	
}

//Funcion para mostrar/imprimir los datos ingresados por el usuario 
void imprimir(struct tienda p[4])
{
	//Ciclo for para mostar los datos de los 4 productos ingresados de cada tienda 
	for(int k = 0; k < 4; k++)
	{
		printf("Tienda %d: \n", k + 1); //incremento de la tienda
		
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

//Funcion para hacer la suma/mostrar los precios de los productos ingresados por el usuario
void suma_productos(struct tienda sumatoria[4])
{
	//Declaracion de variables
	int prod1=0,prod2=1,prod3=2,prod4=3,i=0;
	
	
	printf("\nSuma total de cada uno de los productos vendidos en las tiendas: \n");
	
	//Ejecucion del Do para realizar la suma de los precios de los productos
	do{
	
	printf("\n");
	
	printf("Producto %d: ", i + 1); //incremento del producto
	
	float operacion[4];
	operacion[i] = sumatoria[prod1].prod[i].precio + sumatoria[prod2].prod[i].precio + sumatoria[prod3].prod[i].precio + sumatoria[prod4].prod[i].precio;	
	printf("%.0f\n", operacion[i]);	
	i++;
	
	}while(i<4);
}

//Funcion Principal
int main()
{
    printf("Bienvenido por favor ingrese los siguientes datos de los productos\n");
    printf("******************************************************************\n");
    
	crear(datos); //LLamado de la funcion para ingresar los datos de los productos 
    printf("******************************************************************\n");	
    
	imprimir(datos); //LLamado de la funcion para imprimir/mostrar los datos de los productos 
    printf("******************************************************************\n");	
    
	suma_productos(datos); //LLamado de la funcion para sumar/mostrar los datos de los productos 
	
}
