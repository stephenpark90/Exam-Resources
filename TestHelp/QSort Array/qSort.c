/*******************************************************************************
*  FILE NAME : qsort_ex.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 12-Feb-2018
*  LAST MODIFIED : 12-Feb-2018
*  DESCRIPTION : Example using qsort to sort an array
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


//EXAM HELP QSORT ARRAY FUNCTION

//copy and past this few lines in code and the exam might say wrong but flip < to > or swap -1 : 1 to 1 : -1
//change all ints to long pointers IF THE TEST has different TYPES

int compare_int( const void* a, const void* b ) //a and b are pointers to an array. we are comparing two constants
{ 
     if( *(int*)a == *(int*)b ) return 0; //deference memory of a and b after typecasting them as integer pointers
     return *(int*)a < *(int*)b ? -1 : 1;  // b < a = decending order,, a < b accending order --> if a < b, then -1; else return 1
}  


//code below provided on the exam?
int main(void)
{
    const size_t num_elem = 10;
    int elements[10] = { 3, 6, 1, 9, 8, 2, 0, 5, 7, 4 };

        qsort(elements, num_elem, sizeof(int), compare_int);

        int i = 0;
	while(i < 10)
	{
		printf("%d\n", elements[i]);
		j++;
	}  

return 0;
}



