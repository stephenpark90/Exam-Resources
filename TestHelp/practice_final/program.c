#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/*
 * This is the practice test for C programming.
 * Enter your details below
 *
 * RANK: {Enter your Rank}
 * NAME: {Enter your Name}
 * DATE: {Enter the date}
 *
 * Add code to accomplish the task for each question.
 * Do not change the function prototypes given below.
 * You should include any header files needed by your answers. 
 * Follow instructions given by your instructor for submitting.
 * Do not move, remove, or modify the preprocessor statements (#ifdef/#endif)
 * You can perform a basic test of your code with "make checkit"
 * The basic tests will *NOT* check all possibilities to be checked by grading.
 */


#ifndef SUPPRESS_PRACTICE_QUESTION_1

/*
 * Correct the practice_q1 function so that properly computes the 
 * sum of all the parameters and returns it.
 * if (practice_q1(111, 222, 333, 444) != 1110)
 * {
 *   printf("Incorrect\n");
 * }
 */
//this also is the fix typo question
long practice_q1(int parm1, int parm2, int parm3, int parm4)
{
  return parm1 + parm2 + parm3 + parm4; //correct solution
}

#endif //SUPPRESS_PRACTICE_QUESTION_1


#ifndef SUPPRESS_PRACTICE_QUESTION_2
/*
 * For practice_q2, use the input to produce the desired output described below.
 * See the example call.
 * Parameters:
 * array is defined as an two dimensional integer array.
 *    The first dimension is allocated with arrayLen members.
 *    The second dimension is defined as 3 integers.
 * key is the first int in the second dimension that is sought.
 *
 * Steps to complete:
 * 1. Find the first member in the second dimension which matches the key parameter.
 * 2. Once the member is located, return the sum of all 3 integers in the second dimension.
 * 3. If the key is not found as the first integer in the second dimension, return -1.
 *
 * An illustrative example call:
 * int array[][3] = {{20,   61,  82},
 *                   {65,   19,  25},
 *                   {128, 325, 900},
 *                   {42, 165,   92},
 *                   {91, 78,   105},
 *                   {512, 22,   75}};
 * int arrayLen = sizeof(array)/sizeof(array[0]);
 * int key = 42;
 * int expected = 42 + 165 + 92;
 * if (practice_q2(array, arrayLen, key) != expected)
 * {
 *   printf("Incorrect\n");
 * }
 * NOTE: This code will not compile and run properly, it is only illustrative 
 * of the concept and what is expected.
 */

int practice_q2(int **array, int arrayLen, int key)
{
	int sum;
	int count = 0;

	for (int i = 0; i < arrayLen; i++)
	{
		if (**(array + i) == key) //step 1 here        //or (array[i][0] == key)
		{
			sum = array[i][0] + array[i][1] + array[i][2]; //step 2 here, this will calculate the sum(3 columns)
			return sum;
		}
	}	
return -1; //step 3 here 
}

#endif //SUPPRESS_PRACTICE_QUESTION_2


#ifndef SUPPRESS_PRACTICE_QUESTION_3
/*
 * For practice_q3, create a structure using the order and types specified.
 * The name of the structure members are NOT important, the ORDER and TYPE is.
 * Once the structure is created, create a pointer to this type on the heap 
 * and set the value of the members to those listed in the value column below.
 * 
 * Order  Type                             Value
 * -----  ----                             -----
 *  1     char array 31 bytes in length    "C programming for the LULZ"
 *  2     unsigned integer                 0xC0FFEE00
 *  3     float                            3.1415
 *  
 * Return the pointer you allocated without freeing it. 
 */

struct practice  //step 1
{
	char a[31];
	unsigned int b;
	float c;
};

void *practice_q3()
{
  
	struct practice *p = (struct practice*) malloc(sizeof(struct practice)); //step 2

	strcpy(p->a, "C programming for the LULZ"); //step 3
		p->b = 0xC0FFEE00;
		 p->c = 3.1415;

  return p; //step 4
}

#endif //SUPPRESS_PRACTICE_QUESTION_3

#ifndef SUPPRESS_PRACTICE_QUESTION_4
/*
 * For practice_q4, read a line from the standard input stream (up
 * to 100 bytes in length) and print it out to the standard output 
 * stream. 

   Read another line in (up to 100 bytes) and print it out
 * to the standard error stream. Ensure that only one new line is
 * present on the output. 

   Return 0 to the caller upon completion 
 * unless an error occurs. If an error occurs, return 1.
 *
 * NOTE: No more than 100 bytes, including the newline, for each
 * call will be provided to your function.
 *
 * Assume your function will be called like this:
 * int main()
 * {
 *   practice_q4();
 *   return 0;
 * }
 */
int practice_q4()
{	
    char buffer[101];                              	//creates buffer greater than required
    
    if(fgets(buffer,sizeof(buffer), stdin) == NULL) 
    {
	return 1; 					//if an error returns, return 1
    }  
    else 
    {
	fprintf(stdout, "%s", buffer); 			//print it out to the standard output stream
    }


    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
	fprintf(stderr, "%s", buffer);

	buffer[strcspn(buffer,"\n")] = '\0'; //might not need this line
	return 0;  //might not need
    }
	return 0;  ////Return 0 to the caller upon completion 
}   					
                                                


#endif //SUPPRESS_PRACTICE_QUESTION_4

#ifndef SUPPRESS_PRACTICE_QUESTION_5
/* 
 * For practice_q5, validate the input parameters and return a 
 * bit mask as specified:
 * if numericValue is positive, set return bit 0x1 to on(1).
 * if numericValue is zero, set return bit 0x2 to on(1).
 * if numericValue is negative, set return bit 0x4 to on(1).
 * if numericValue is even, set return bit 0x8 to on(1).
 *     Assume 0 is an even number for this exercise.
 * if numericValue is odd, set return bit 0x10 to on(1).
 * if message is NULL, set return bit 0x20 to on(1).
 * if message is not NULL and the length of message < 1, 
 *     set return bit 0x40 to on(1).
 * Return the composite number you created to the caller
 */
unsigned int practice_q5(int numericValue, char *message)
{
	unsigned int returnVar = 0;
//cleaner version
	if (numericValue > 0)
	{
		returnVar |= 0x1;
	}
	else if (numericValue == 0)
	{
		returnVar |= 0x2;
	}
	else 
	{
		returnVar |= 0x4;
	}


	if (numericValue % 2 == 0)
	{
		returnVar |= 0x8;
	}
	else 
	{
		returnVar |= 0x10;
	}


	if (message == NULL)
	{
		returnVar |= 0x20;
	}
	else if(strlen(message) < 1)
	{
		returnVar |= 0x40;
	}
	return returnVar;

/* bad way but still works

	if (numericValue > 0) //step 1    
	{
		returnVar |= 0x1;
	}

	if (numericValue == 0) //step 2
	{
		returnVar |= 0x2;
	}

	if (numericValue < 0) //step 3
	{
		returnVar |= 0x4;
	}

	if (numericValue % 2 == 0) //step 4
	{
		returnVar |= 0x8;
	}

	if (numericValue % 2 != 0) //step 5
	{	
		returnVar |= 0x10;
	}//printf("\n");

	if (message == NULL) //step 6 
	{
		returnVar |= 0x20;
	}

	if (message != NULL &&  strlen(message) < 1) //step 7
	{
		returnVar |= 0x40;
	}

	return returnVar;
*/


}

#endif //SUPPRESS_PRACTICE_QUESTION_5

