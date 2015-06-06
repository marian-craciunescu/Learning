
#include <stdio.h>

int main()
{
 	int i=0;
 	int suma=0;
 /*	while(i < 10)
	{
	
		printf("Introduceti in numar intreg\n");
		int valoarea_primita;
		scanf("%i\n",&valoarea_primita);
		suma = suma +valoarea_primita; //suma += valoarea_primita;
		
		i++;
	} 
	*/
	
	for(i=0; i < 4; i++)
	{
		printf("Introduceti in numar intreg\n");
		int valoarea_primita;
		scanf("%i",&valoarea_primita);
		suma = suma +valoarea_primita; //suma += valoarea_primita;
	}
	printf("suma_numerelor=%i\n",suma);
	
	char  vector[10]="abcdefd";

	srand(time(null));
		//generare numar random;
		//v[i]=valoare_primita
		
		
		
		
	//Afiseaza rand pe rand caracterele din vwctorul de mai sus (cate un caracter pe rand) -->for 
	
	//declara un vector de 10 elemente de intregi.
	//umple vevtorul cu valori random -->for () { rand();
	//fa suma elementelor din vector si afiseaza-o
	
	
	
 	
 	return 0;
}
