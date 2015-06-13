#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	printf ("Introduceti numele intreg: \n");
	char string [100];
	char *ret = gets (string);
	
	
	if (ret == NULL)
	{
		printf ("S-a inregistrat o eroare \n");
		return -1;
	}
	
	printf ("Numele este: \n %s \n", string);
	int c;

	for (c = 0; c < 100; c++)
	{
		if ( string[c] == '\0')
		{
			break;
		}
		else
		{
			printf ("%c ", string[c]);
		}
	}
	for (c = 0; c < 100; c++)
	{
		if ( string[c] == '\0')
		{ 
			break;
		}
		
	}
	int len=strlen(string);//lungimea sirului
	printf("my len=%i strlen=%i \n",c,strlen(string) );			
	int flag=3;
	for (c = 0; c < strlen(string); c++)
	{
		
		if ( string[c] == 'c')
		{
		//	
			flag=7;
			break;
		}
		
		
	}
	if (flag==7)
	{
		printf ("Am gasit caracterul, este pe pozitia %i \n",c);
	}
	else
	{
		printf("Nu exista, sorry \n");
	}
	
	printf("\n");
	
	return 0;
}
