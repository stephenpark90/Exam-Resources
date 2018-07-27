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
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int practice_q2 (int **array, int arrayLen, int key)
{

  int sum;
  int count = 0;


  for (int i = 0; i < arrayLen; i++)
    {

      if (**(array + i) == key) //step 1
	{
	  sum = array[i][0] + array[i][1] + array[i][2]; //step2
	  return sum;
	}
     }

  return -1; //step 3
}

/*  Another way to build the function
int key_finder(int **list, size_t listLen, int key)
{
	//add code here
	for (uint i = 0; i < listLen; i++)
	{
		if (list[i][0] == key)
		{
		return list[i][1]
		}
	}
}
return -1;
*/


//do not mess with this portion of the code, more than likely this will be provided(this part)
int main()
{

  int array[][3] = { {20, 61, 82}, 
		     {65, 19, 25}, 
  		     {128, 325, 900},
		     {42, 165, 92},
		     {91, 78, 105},
		     {512, 22, 75}
  };

  int **array2 = (int **) malloc (sizeof (int *) * 6);
  for (int i = 0; i < 6; i++)
    *(array2 + i) = (int *) malloc (sizeof (int) * 3);

  for (int i = 0; i < 6; i++)
    for (int j = 0; j < 3; j++)
      array2[i][j] = array[i][j];

  int arrayLen = sizeof (array) / sizeof (array[0]);

  int key = 42; //step 1

  int expected = 42 + 165 + 92;

  if (practice_q2 (array2, arrayLen, key) != expected)
    {
      printf ("Question 2 is incorrect\n");
    }
  else
    {
      printf ("Question 2 is correct\n");
    }


  free (array2);
  
  return -1; //(return -1 if failure occured) STEP 3
}
