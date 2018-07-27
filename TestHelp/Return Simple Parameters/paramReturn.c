#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

//return the sum of all the parameters and return it

long practice_q1 (int parm1, int parm2, int parm3, int parm4)
{
  //insert code here to complete question 1
  return parm1 + parm2 + parm3 + parm4;
}



int main ()
{

  //question 1 checker
  if (practice_q1 (111, 222, 333, 444) != 1110)
    {
      printf ("Question 1 is incorrect\n");
    }
  else
    {
      printf ("Question 1 is correct\n");
    }
return 0;
}
