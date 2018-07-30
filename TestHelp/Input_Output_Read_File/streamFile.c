#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//THIS EXAMPLE IS VERY GOOD FOR THE EXAM


//Program Start
int main(void)
{
	FILE* fp = fopen("sshd_config","r");
	if(fp == NULL)
	{
		fprintf(stderr,"error: cannot write file TRY AGAIN\n");
		exit(EXIT_FAILURE); //or you can return -1;
	}

char buffer[64];	
//fgets grabs a string from the file
	while(fgets(buffer,64,fp) != NULL)
	{
	//need to get the lines whose first non-whitespace character is a # sign OR empty lines are interpreted by characters
		if(buffer == '#' || buffer == '\n')
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
