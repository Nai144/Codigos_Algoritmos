#include <stdio.h>
//#include <time.h>
#include<stdlib.h>

void imprimirArreglo(int array[][10])
{
	int i=0,j=0;
	
	for( i =0; i<100;i++)
	{
		for( j =0; j<10;j++)
		{
			printf("%d    ",array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}



int main()
{
srand(time(NULL));	
int inventario1[100][10]={0,0};
int i,j,temp=0,sum=0,countF=0, prom=0;
int random=0,end=0,op=0,hab=0,edad=0;

//el programa funcionara para las 100 posiciones pero siento que es muy feo de ver por lo que lo dejare en 20
//para que sea mas trabajable a la hora de quitar o aguegar cosas
printf("La primera habitacion es la 0 y la ultima es la 99\n");
printf("Para facilitar la vista de los elementos se mostrara las primeras 20 posiciones del arreglo\n");

//	
while(end !=1)
{
	printf("Si desea ingresar un paciente ingrese 1\n");
	printf("Si desea analizar a los pacientes ingrese 2\n");	
	printf("Si desea imprimir el arreglo escriba 3\n");
	printf("Si desea terminar el programa escriba 4\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("A que habitacion desea ingresar al paciente\n");
		scanf("%d",&hab);
		printf("Que edad tiene el paciente\n");
		scanf("%d",&edad);
		inventario1[hab][0]=edad;
		
		for(i=0;i<7;i++)
		{
			printf("Ingrese la temperatura del dia %d\n",i+1);
			scanf("%d",&temp);
			inventario1[hab][i+1]=temp;
			
		}
		
	}
	else if(op==2)
	{
		
		printf("Analizando pacientes\n");
		
		for(i=0;i<100;i++)
		{
			if(inventario1[i][0] !=0)
			{
				for(j=0;j<7;j++)
				{
					if(37 <inventario1[hab][j+2])
					{
						countF++;
						sum = inventario1[i][j+2] + sum;
					}
					else
					{
						countF=0;
					}
					if( 3 <= countF )
					{
						//printf("la cantidad de contadores fiebre es %d",countF);
						inventario1[i][8]=1;
					}
			
				}
				prom = sum/7;
				inventario1[i][9]=prom;

				
			}
		}


	}
	else if(op==3)
	{
		imprimirArreglo(inventario1);
	}
	if(op==4)
	{
		end=1;
	}		

}

  
return 0;
}
