#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
srand(time(NULL));	
int posgato[6];
int i, pos=0;
int end = 0;
int Diffcounter =-1;
int pieza =0;

for(i=0;i<7;i++)
{
    posgato[i]=i;

}
/*
for(i=0;i<7;i++)
{
    printf("poscion gato [%d]= %d\n",i,posgato[i]);
}
*/
while(end !=100)
{
	pieza = rand()%7;
//	para comprobar la creacion de fichas descomentar la siguiente linea 
//	printf("la pieza es %d\n",pieza+1);
	
	if(pieza != Diffcounter)
	{		
		Diffcounter=pieza;
		printf("la pieza generada es %d\n\n",pieza+1);	
	       
    }
	end++;
}

    
return 0;
}
