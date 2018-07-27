#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>



int main()
{
	//parameters passed in:
	unsigned char arr[] = {19, 15, 18, 4, 199, 45, 63, 82, 85, 186, 244};  //char could be changed to anything like int or long 
	size_t arrLen = sizeof(arr)/sizeof(arr[0]); //for pointer value


	//your code
	unsigned char minimum = arr[0];//UINT8_MAX; //8 bits in depth, man page for stdin.h has different declarations if need to change (This value might be the only thing that might have to be changed on test)

	unsigned char maximum = arr[0];  // anything other than 0 will become that maximum


	for (int i = 0; i < arrLen; i++) //cast an array as a pointer for min max
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}

		if (arr[i] > maximum)
		{
			maximum = arr[i];
		}
  	}
        printf("Minimum %u\n", minimum); //u for unsigned char
	printf("Maximum %u\n", maximum);

return 0;

}
