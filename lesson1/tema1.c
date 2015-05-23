#include <stdio.h>

int main()
{
	// aici sunt intregii
	
//eu facusem prima oara asa:

int intreg1;
int intreg2;
int intreg3;
intreg1=2;
intreg2=4;
intreg3=6;
printf("%i %i %i \n",intreg1,intreg2,intreg3);

//si mi-a printat - intreg12, intreg24, intreg36. hmmm.... ?
// nu inteleg intrebarea...dupa cum poti sa vezi..printeaza la fel 2 4 6

/*
int intreg1=2;
int intreg2=4;
int intreg3=6;
*/

printf("%i %i %i \n",intreg1,intreg2,intreg3);

//aici este string-ul

char *stringuLuPatricia="GICU ARE MERE"; //nu ma lasa sa pun spatiu in nume o_O
/**
 * E normal sa nu te lase sa pui spatii in numele de variabile.
 * */
printf("%s \n",stringuLuPatricia);

// aici este mix cu floating point - dar cum scap eu de cele 5 0?
/***
 * adaugand un nou identificator. 
 *  %.2lf ii spune ca dupa virgula sa aiba fix 2 zecimale.Prin numarul dinaintea lui lf specifici cate zecimale vor fi reprezentate dupa virgula.
 * 
 * */

char *stringuDeBaza="Scularie";
printf("%i %.2lf %s \n",intreg1,2.4,stringuDeBaza);
return 0;
}
