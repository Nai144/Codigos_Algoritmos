#include <stdio.h>
//#include <time.h>
#include<stdlib.h>

void imprimirArreglo(int array[])
{
	int i=0;
	for( i =0; i<20;i++)
	{
		printf("poscion inevntario [%d]= %d\n",i,array[i]);
	}
	printf("\n");
}

void imprimirArrNew(int array[])
{
	int i =0;
	for( i =0; i<20;i++)
	{
		if(array[i] !=0)
   		{
    		printf("Inventario con objetos posicion [%d] cantidad %d\n",i,array[i]);
		}
	}
	printf("\n");
}

int main()
{
srand(time(NULL));	
int inventario1[100]={0};
int i,cantObjeto1=0,objetos1=0;
int random=0,end=0,op=0,pos=0;

//el programa funcionara para las 100 posiciones pero siento que es muy feo de ver por lo que lo dejare en 20
//para que sea mas trabajable a la hora de quitar o aguegar cosas
printf("Para efectos practicos de este ejercicio, la creacion de elementos se fijo como maximo en 5\n");
printf("Para facilitar la vista de los elementos se mostrara las primeras 20 posiciones del arreglo\n");

for(i=0;i<20;i++)
{
    inventario1[i]=rand()%5;
}
imprimirArreglo(inventario1);
//	
while(end !=1)
{
	printf("Si desea agregar un elemento escriba 1\n");
	printf("Si desea quitar un elemento escriba 2\n");
	printf("Si desea imprimir el arreglo escriba 3\n");
	printf("Si desea terminar el programa escriba 4\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Indique el elemento al que quiere sumarle una unidad\n");
		scanf("%d",&pos);
		inventario1[pos]++;
	}
	else if(op==2)
	{
		printf("Indique el elemento al que quiere restarle una unidad\n");
		scanf("%d",&pos);
		if(inventario1[pos] !=0)
		{
			inventario1[pos]--;
		}
		else
		{
			printf("no se puede restar a esa posicion debido a que no existe\n");
		}
	}
	else if(op==3)
	{
		imprimirArrNew(inventario1);
	}
	if(op==4)
	{
		end=1;
	}		

}

  
return 0;
}
