#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//THIS EXAMPLE IS VERY GOOD FOR THE EXAM


//Program Start
int main(void)
{
	FILE* fp = fopen("sshd_config","r");
	if(fopen == NULL)
	{
		fprintf(stderr,"error: cannot write file TRY AGAIN\n");
		exit(EXIT_FAILURE);
	}

char buffer[64];	

//Need if/else statements and a while loop
//fgets(it will grab a string from the file)
	while(fgets(buffer,64,fp) != NULL)
	{
		//need to get the lines whose first non-whitespace character is a # sign AND empty lines are interpreted by characters
		if(buffer == '#' && buffer == '\n')
		{
			continue;

		}
		else 
		{
			printf("%s\n", buffer);
		}
	
	}
fclose(fp);
return 0;
}
