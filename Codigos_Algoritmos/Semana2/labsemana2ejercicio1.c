#include <stdio.h>
//#include <time.h>
//#include<stdlib.h>

int main()
{
//srand(time(NULL));	
int inventario[100]={0};
int i,cantObjeto=0,objetos=0;
/*
for(i=0;i<100;i++)
{
    //posgato[i]=i;
	printf("poscion inevntario [%d]= %d\n",i,inventario[i]);
}
*/
printf("Con cuantos objetos desea tabajar esta vez, el maximo es 100\n");
scanf("%d",&cantObjeto);
printf ("La cantidad de objetos a trabajar es %d\n",cantObjeto);
/*
for(i=0;i<cantObjeto;i++)
{
    //posgato[i]=i;
	printf("poscion inevntario [%d]= %d\n",i,inventario[i]);
}
*/	
for(i=0;i<cantObjeto;i++)
{
    //posgato[i]=i;
    printf("Ingrese la cantadidad para el objeto %d\n",i);
    scanf("%d",&objetos);
    inventario[i]= objetos;
}	
for(i=0;i<cantObjeto;i++)
{
    //posgato[i]=i;
	printf("Para el objeto  %d existen %d elementos\n",i,inventario[i]);
}
    
return 0;
}
