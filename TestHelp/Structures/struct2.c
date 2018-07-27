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
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

//your code here
 struct Fuck 
{
     //typedef struct Fuck {
     char a[31];
     unsigned int b;
     float c;
};
 
void *practice_q3 ()
{
       struct Fuck *f = (struct Fuck*) malloc(sizeof(struct Fuck));
       //Fuck *f = (Fuck*) malloc(sizeof(Fuck));

       strcpy(f->a, "Anything heck yea");
       f->b = 0xC0FFEE00;
       f->c = 3.1415;
	//printf("%s\n", f->a);
       return f;
}

//code that is provided
int main()
{    
    int val = 0;    

    struct Fuck* temp = (struct Fuck*) practice_q3();
	//printf("%s\n", temp->a);

    if(strncmp(temp->a, "Anything heck yea", sizeof("Anything heck yea")) == 0 && temp->b == 0xC0FFEE00 && abs(temp->c - 3.1415) < 1)
        val = 1;

	   //printing out those values 
           printf("temp->a.%s\n", temp->a);
           printf("temp->b. %x\n", temp->b);
           printf("temp->c. %f\n", temp->c);


    free(temp);	
  
    if(val)
    {
      printf ("Question 3 is correct\n");
    }
    else
    {
      printf ("Question 3 is incorrect\n");
    }
}  
