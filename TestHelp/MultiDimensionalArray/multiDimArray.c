#include <stdio.h>

//Question might ask
//youre getting an 2D array with rows numbers of rows and 4 columns. 
//Find the maximum value in the 2D array


//given
void q(int **arr, int rows)


//your code
int main()
{
	int arr[][5] = {{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15},
			{16,17,18,19,20},
		       };



//how to push out the multi array
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("arr[%d][%d] is %d\n", i, j, arr[i][j]);
		}

	}
return 0;
}
