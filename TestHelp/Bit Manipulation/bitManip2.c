#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//bitwise operation, bit manipulation


int main(int argc, char **argv)
{
	// WILL BE CALLED LIKE after compile ./test param1 param2 param3 param4


	unsigned int returnCode = 0; //this return code is important to put in

	if (argc > 5)
	{
		returnCode = returnCode | 2^6; //or 0b10000000 (2^6 is what they will ask to be changed to(the bit value)) on the test
	}
	

	if (argc > 1 && atoi(argv[1]) > 100) //will print out something different if called like ./test 101 adagg agag aggag agagag
	{
		returnCode = returnCode | 0b1; //least signifcant bit
	}


	/*checks the value of a specific bit. notice the typecast for unsigned int, in order to allow for ANDing. atoi changes from
	ASCII to integer. the logical '&' symbol will AND the argv[2] with 0x2 */
	if (argc > 2 && ((unsigned int)atoi(argv[2])) & 0x2) //the 0x2 here and 0x800 below are values that should be given on test
	{
		returnCode = returnCode | 0x800;
	}

	printf("Return Code is 0x%x\n", returnCode); //%x = hexadecimal

return 0;

}
