#include <stdio.h>
//#include <time.h>
#include<stdlib.h>

int main()
{
srand(time(NULL));	
int inventario1[100]={0};
int inventario2[100]={0};
int inventarioFinal[100]={0};
int i,cantObjeto1=0,objetos1=0;
int cantObjeto2=0,objetos2=0;
int random=0,sum=0;
/*
for(i=0;i<100;i++)
{
    //posgato[i]=i;
	printf("poscion inevntario [%d]= %d\n",i,inventario[i]);
}
*/
printf("Con cuantos objetos desea tabajar esta vez para el judador 1, el maximo es 100\n");
scanf("%d",&cantObjeto1);
printf ("La cantidad de objetos a trabajar para el judador 1 es %d\n",cantObjeto1);

for(i=0;i<cantObjeto1;i++)
{
    inventario1[i]=rand()%64;
	printf("poscion inevntario [%d]= %d\n",i,inventario1[i]);
}

printf("Con cuantos objetos desea tabajar esta vez para el judador 2, el maximo es 100\n");
scanf("%d",&cantObjeto2);
printf ("La cantidad de objetos a trabajar para el judador 2 es %d\n",cantObjeto2);

for(i=0;i<cantObjeto2;i++)
{
    inventario2[i]=rand()%64;
	printf("poscion inevntario [%d]= %d\n",i,inventario2[i]);
}
	
for(i=0;i<100;i++)
{
	sum = inventario1[i] + inventario2[i]; 
	inventarioFinal[i]= sum;
	if(inventario1[i] + inventario2[i] < 99 )
    {
    	sum = inventario1[i] + inventario2[i]; 
		inventarioFinal[i]= sum;
	}else
	{
		printf("La suma de los 2 inventarios supera el maximo de 99, la cantidad de elementos sera 99, los objetos sobrantes seran convertidos en monedas\n");
		inventarioFinal[i]= 99;
	}
	
    if(inventario1[i] !=0 || inventario2[i] !=0)
    {
    	printf("Inventario final posicion [%d] cantidad %d\n",i,inventarioFinal[i]);
	}
}

/*	
for(i=0;i<cantObjeto1;i++)
{
    //posgato[i]=i;
	printf("Para el objeto  %d existen %d elementos\n",i,inventario1[i]);
}
*/    
return 0;
}
