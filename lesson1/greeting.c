
#include <stdio.h>

int main()
{
	//vom invata sa folosim o noua functie.Care primeste de la tastatura input.
	//scanf(char * format,...)	;
	//se aseamana f mult cu printf.Foloseste aceeasi specificatori.Stocheaza valoarea primita de la tastatura intr-o variabila.
	//Ex:
	int a;
	printf("Introduceti un numar intreg =");
	scanf("%i", &a); //observa te rog ca se foloseste operatorul & care inseamna "adresa de  " sau locul unde va fi stocata valoarea citita
	printf("NUmarul introdus este =%i \n",a);
 	return 0;
}
