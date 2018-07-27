#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
  srand((unsigned)time(NULL)); // seed the random number generate with the current time
  int n[100];

  // Initialize each element of n with a random number between 0 and 8192
  int index;
  for(index = 0; index < 100; index++)
    n[index] = rand() % 8192;

  /* Student implementation */
	int min = n[0], max = n[0];

	for(int x = 0; x < 100; x++)
	{
		if (n[x] < min)
			min = n[x]; 
		else if(n[x] > max)
			max = n[x];
	
	}

printf("%d,%d\n",min,max);

  return 0;
}

// c85ef6393ddcdce292573f19ba7d54620fa46460

