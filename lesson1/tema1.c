#include <stdio.h>

int main()
{
	// aici sunt intregii
	
//eu facusem prima oara asa:

//int intreg1;
//int intreg2;
//int intreg3;
//intreg1=2;
//intreg2=4;
//intreg3=6;
//printf("%i %i %i \n",intreg1,intreg2,intreg3);

//si mi-a printat - intreg12, intreg24, intreg36. hmmm.... ?

int intreg1=2;
int intreg2=4;
int intreg3=6;

printf("%i %i %i \n",intreg1,intreg2,intreg3);

//aici este string-ul

char *stringuLuPatricia="GICU ARE MERE"; //nu ma lasa sa pun spatiu in nume o_O
printf("%s \n",stringuLuPatricia);

// aici este mix cu floating point - dar cum scap eu de cele 5 0?

char *stringuDeBaza="Scularie";
printf("%i %lf %s \n",intreg1,2.4,stringuDeBaza);
return 0;
}
