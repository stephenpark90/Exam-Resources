#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


//Question might ask
//youre getting an 2D array with rows numbers of rows and 4 columns. 
//Find the maximum value in the 2D array


//your code
void q(int **arr, int rows, int cols)
{
	//Finding the max value of that array
	int max = 0; //INT_MIN works to

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			if(arr[i][j] > max)
				max = arr[i][j];
				
	printf("The Max is %d\n", max);
	
	//Finding the Min Value of that array
	/*
	int min = INT_MAX; 

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			if(arr[i][j] < min)
				min = arr[i][j];
				
	printf("The Min is %d\n", min);
	*/
}




//given
int main()
{
	int arr[][5] = {{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15},
			{16,17,18,19,20},
		       };


	int **a = malloc(sizeof(int*) * 4);

	for(int i = 0; i < 4; i++)
		*(a+i) = malloc(sizeof(int) * 5);

	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 5; j++)
			a[i][j] = arr[i][j];

	q(a, 4, 5);
	free(a);


//how to push out the multi array

	/*int max = arr[0][0], min = max;

	for (int i = 0; i < 4; i++)
	{


		for (int j = 0; j < 5; j++)
		{
			if(arr[i][j] == max && arr[i][j] == min)
				continue;
			else if(arr[i][j] > max)
				max = arr[i][j];
			else if(arr[i][j] < min)
				min = arr[i][j]	;;
			
			//printf("arr[%d][%d] is %d\n", i, j, arr[i][j]);
		}

	}
	//printf("MAX %d \n, MIN is \n", max, min);
	*/
	
return 0;
}
