#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
srand(time(NULL));	
int posgato[9];
int gamegato[9];
int i, pos=0;
int end = 0;
int Diffcounter =0;

for(i=0;i<9;i++)
{
    gamegato[i]=0;
}

for(i=0;i<9;i++)
{
    posgato[i]=i;
}

for(i=0;i<9;i++)
{
    printf("poscion gato [%d]= %d\n",i,posgato[i]);
}

while(end !=9)
{
	end=0;
	while(Diffcounter != 1)
	{
		printf("Jugador 1 \n");
		pos=rand()%10;
		
		if(posgato[pos] !=9 )
		{
			Diffcounter=1;
			posgato[pos] =9;
			gamegato[pos]=1;
		}
		printf(" %d  /    %d     /  %d\n\n",gamegato[0],gamegato[1],gamegato[2]);
		printf(" %d  /    %d     /  %d\n\n",gamegato[3],gamegato[4],gamegato[5]);	
		printf(" %d  /    %d     /  %d\n\n",gamegato[6],gamegato[7],gamegato[8]);			
		Sleep(100);
		system("cls");	       
    }
    
    Diffcounter=0;
    while(Diffcounter != 1)
	{
		printf("Jugador 2 \n");
		pos=rand()%10-1;
		
		if(posgato[pos] !=9 )
		{
			Diffcounter=1;
			posgato[pos] =9;
			gamegato[pos]=2;
		}
		printf(" %d  /    %d     /  %d\n\n",gamegato[0],gamegato[1],gamegato[2]);
		printf(" %d  /    %d     /  %d\n\n",gamegato[3],gamegato[4],gamegato[5]);	
		printf(" %d  /    %d     /  %d\n\n",gamegato[6],gamegato[7],gamegato[8]);			
		Sleep(100);
		system("cls");	       
    }
    Diffcounter=0;
    
    
    for(i=0;i<9;i++)
	{
    	if(posgato[i]==9)
    	{
    		end++;
		}
	}
		
}
		printf(" %d  /    %d     /  %d\n\n",gamegato[0],gamegato[1],gamegato[2]);
		printf(" %d  /    %d     /  %d\n\n",gamegato[3],gamegato[4],gamegato[5]);	
		printf(" %d  /    %d     /  %d\n\n",gamegato[6],gamegato[7],gamegato[8]);	
    
return 0;
}
