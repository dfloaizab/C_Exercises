#include <stdio.h>

#define FILAS 10
#define COLS 10

int tablas_mult[FILAS][COLS];

void main()
{	
   /* Inicializar (recorrer completamente): */
   	inicializar();
   	for(int t=1; t <= 10; t++)
   	{	 
    	imprimir_tabla_n(t);
    }
}

void inicializar()
{
   for(int i = 0; i < FILAS; i++)
   {
   	 for(int j = 0; j < COLS; j++)
   	 {   	 	
   	 	tablas_mult[i][j] = 0;
	 }
   }
}

void imprimir_todas_tablas()
{
	
}

void imprimir_tabla_n(int n)
{
   /* generar la tabla del número n y guardarla en la matriz tablas_mult */	
   printf("\nEsta es la tabla del %d", n);
   for(int i = 0; i < FILAS; i++)
   {   	
   	  tablas_mult[i][n-1] = (i+1)*(n);
   	  printf("\n%d x %d = %d", n, i+1, tablas_mult[i][n-1]);
   }
}




