#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//SWAP PARAMETERS

void orderParms(short *p1, short *p2)
{
	if (*p1 < *p2) //ascending order declaration here (if descending, flip operator to '>')
	{
		printf("Already in order\n");
	}
	else
	{
		//swap the values if not in ascending order
		short temp = *p1;
			*p1 = *p2;
			*p2 = temp;
			printf("Swapped the values\n");
	}
}


//code below already given on test
int main()
{
	short p1 = 10; //values in order
	short p2 = 20;
	
	//original
	orderParms(&p1, &p2);
	printf("First is %d second is %d\n", p1, p2);

	p1 = 99; //these two values are not in order
	p2 = 50;

	//swap
	orderParms(&p1, &p2);
	printf("First is %d second is %d\n", p1, p2);
}
