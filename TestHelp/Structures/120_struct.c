/*******************************************************************************
*  FILE NAME : 120_struct.c
*  AUTHOR : Jason Enochs 
*  CREATION DATE : 12-Feb-2018
*  LAST MODIFIED : 12-Feb-2018
*  DESCRIPTION : Example showing how to assign members of a struct
*
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//EXAM HELP
//Make and create a structure(multiple data types)

struct myStruct
{   
    char p1[19];
    unsigned int p2;
    float p3;
    int p4[6]; 
    unsigned int p5;
};

int main(void)
{
    int array[4] = {2,3,8,14};

	//dyanmically assign structure on heap is the line below
    struct myStruct* s1 = (struct myStruct*)malloc(sizeof(struct myStruct)); 

     //assign certain values to the members in regards to the question
    strcpy(s1->p1, "buggs_bunny");
    s1->p2 = 0xdeafdeaf;
    s1->p3 = 1910.0777;
    memcpy(s1->p4, array, sizeof(array));
    s1->p5 = 0xFFFFFFFF; 
    
    //printing out those values 
    printf("s1->p2.%x\n", s1->p2);
    printf("s1->p3.%f\n", s1->p3);
    printf("s1->p5.%x\n", s1->p5);

    return 0; 
}

