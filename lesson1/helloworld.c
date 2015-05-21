#include <stdio.h>


//int main ( int arg_number,char[] *arguments)
int main ()
{
	printf("hello world!\n");
	int intreg;//declarare
	intreg=16;//atribuire
	//print integer
	printf("intreg=%i \n",intreg);
	int intreg2=17;
	printf("%i %i \n",intreg,intreg2);
	//print only one character
	char caractero='P';
	printf("%c %i %c %i\n", 'F',24,caractero,5);
	//print floating point number
	printf("%lf\n",2.3);
	//print a string
	char *derp="le string";
	printf("%s\n",derp);
	return 0;
}
