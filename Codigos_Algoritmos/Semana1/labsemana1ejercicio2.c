#include<stdio.h>


int main()
{
	int num = 0;  
	
	printf("Escriba un numero \n\n");
	scanf("%d",&num);
	 
	printf("Le sumaremos 5\n"); 
	num = num + 5;
	printf("El numero es %d\n\n",num);
	
	printf("Le restaremos 100 \n"); 
	num = num - 100;
	printf("El numero es %d\n\n",num);
	
	printf("Lo multiplicaremos por 23\n"); 
	num = num * 23;
	printf("El numero es %d\n\n",num);
	
	printf("Le aplicaremos el modulo por 5 \n"); 
	num = num % 5;
	printf("El numero es %d\n\n",num);
	
	
return 0;
}
