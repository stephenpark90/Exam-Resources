#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Strings, Arrays, and Pointers

int main(int arc, char ** argv)
{

	char name[] = "Name";
	char name2[] = "Another";
	char name3[] = "Third";
	char *greeting = "Hello to %s and %s and %s\n";
	char *output = malloc(sizeof(char) * 128); //allocate memory

	int primes[] = {1,2,3,5,7,11,13,17}

	if (output == NULL)
	{
		printf("Failed to allocate buffer\n");
		return 1;
	}




	sprintf(output, greeting, name, name2, name3); //output is targeted at a string, basically a printf but a string (that 128 bytes, that greeting, and name)
	printf(output); 


	for (int i = 0; i < sizeof(primes)/sizeof(primes[0]); i++)
	{
		printf("Prime %d\n", primes[i]);
	}

	free(output);

	return 0;
}
