/* This question might be 
validate the input to example_2

1. esnure var1 is between 0 and 7, inclusive, else set bit 0x1 in the return
2. ensure format is a string of length > 5, else set bit 0x2 in the return
3. ensure print is a valid number either 0 or 1, else set bit 0x4 in the return
4. ensure the most significant bit is set in var4, else set bit 0x8 in the return   **4
*/

#include <stdio.h>
#include <stdlib.h>


unsigned int example_2(int var1, char *format, unsigned int print, unsigned int var4, char *strVar)

{
	unsigned int returnVar = 0;

	if(var1 < 0  || var1 > 7) // step 1
	{
		returnVar |= 0x1;
	}
	if(*format < 5)
	{
		returnVar |= 0x2; //step 2
	}
	if (var4 != 0 || var4 != 1) // step 3
	{
		returnVar |= 0x4;
	}
	if((var4 & 0x80000000) == 0) // step 4
	{
		returnVar |= 0x8;
	}



return returnVar;

}


int main(int argc, char **argv)
{

/*
	unsigned int returnCode = 0;
	if(argc > 5){
		returnCode | 2^6;
		printf("Return code is 0x%x\n ", returnCode);
	}
*/
	int a =9; char *b = "TEST"; unsigned int c = 4; unsigned int d = 2; char *e = "Hello";
	
	unsigned int name = example_2(a,b,c,d,e);
	printf("%x\n", name);	

	return 0;
}
