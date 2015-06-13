#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	
	int var_dimensiune;
	printf("INtroduceti dimensiune \n");
	scanf("%i",&var_dimensiune);
	int vector[var_dimensiune];
	
	int index;
	srand(time(NULL) );
	
	//generare numar random intre 0 si 99
	int r = rand() % 100;
	for (r = 0; r < var_dimensiune; r++) //generare numere random de la 0 la ce valoare da userul ,in vector
	{
		int variabila_rand = rand() %10; //declarare variabila random din vector si atribuire de la 0 la 9
		vector[r] = variabila_rand; //umplere vector
		printf ("%i ", vector[r]); 
	}
	printf ( "\n");
	printf ("Numerele multiplu de 3 sunt: \n");
	for (r=0; r < var_dimensiune; r++)
	{
		
		if (vector[r]%3==0) // conditie multiplu de 3
		{
			
			printf("%i ", vector[r]);
		
		}
	
	}
	printf("\n");
	
	
/*	//declarare vector
	int nume_variabila_vector[5]={4,5,6,7};
	//atribuire vector
	nume_variabila_vector[4]=8;
	int variabila_xulescu;
	for (variabila_xulescu = 0; variabila_xulescu < 5; variabila_xulescu++)
	{
		printf("%i ", nume_variabila_vector[ variabila_xulescu ]);
	
	}
	printf("\n");
	int sum=0;
	for (variabila_xulescu = 0; variabila_xulescu<5; variabila_xulescu++)
	{
		
		sum = sum +  nume_variabila_vector[ variabila_xulescu ];
		
	}
	printf("%i \n", sum );
	
	sum=0;
	
	for(variabila_xulescu = 0; variabila_xulescu<5; variabila_xulescu++)
	{
		
		if (nume_variabila_vector[variabila_xulescu]%2==0)
		{
			
			sum=sum+nume_variabila_vector[variabila_xulescu]*2;
			
		}
	
		else 
		{
		
			sum=sum+nume_variabila_vector[variabila_xulescu];
		
		}
	
	}
	
	printf ("%i \n", sum );
	
	for(variabila_xulescu = 0; variabila_xulescu<5; variabila_xulescu++)
	{
		
		if (nume_variabila_vector[variabila_xulescu] % 2 !=0 )
		{
		
			nume_variabila_vector[variabila_xulescu] = -1;
		
		}
	printf ("%i ", nume_variabila_vector[variabila_xulescu]);
	}
	
	printf ("\n");
	
	*/
	
	return 0;
}
