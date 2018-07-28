#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* This is the way the question would probably be worded

open the file with the path in path
read the line give by line number (the first line is 1)
copy the line data into buffer (up to 64 bytes are allocated allowed

return the number of bytes copied in the buffer or -1 if a failure occured
	note: do not modify "buffer" unless a valid response is occuring/
	consider it to be a constant that would only be updated by a successful read from the file
*/


int line_finder(char* buffer, int lineNumber);

int main()
{
	char* buffer[128];  //question asks to keep buff at 64 so change number here and later down the next char to 64 if need be
	line_finder(*buffer, 5);  //5 is the line number that is found
}

int line_finder(char* buffer, int lineNumber)
{
	FILE *fp = fopen("test.txt", "r"); //path in path means no quotes (if need to reference a path not a file) for test.txt just write out path
	
	if (!fp)
	{
	fprintf(stderr, "failed to open file\n", "test.txt"); //a way for the program to know whether or not the file exists, if not it will exit
	return(EXIT_FAILURE);
	}

        int counter =1; //counter that counts the lines (this example 1 line)
	char line[128] = {0};

	while(fgets(line, sizeof(line), fp) != NULL)  //if question asks to not to modify buffer do not add buff where the first line is
        {
		if(counter == lineNumber)  //if need to find Name or string in file need to use strcmp or strstr (THIS IF line SHOULD BE THE ONLY ONE CHANGED IF NEEDING TO FIND A NAME not LINE)
		{
			memset(buffer, 0, 64); //can modify buffer here if need be instead of changing u top
			strncpy(buffer, line, 63); //use 63 instead of 64 to account for null terminator
			fclose(fp);
			printf("%s", line);  //just for testing purposes, just to make sure you are getting the right line number out
			return strlen(buffer);
		}
		counter++;
	}
	fclose(fp);
	return -1; //this two statements are in in case the program runs through and does not find any lines and terminates(return -1 if failure occured)
}


//new question, code below might be asked if you need to find the string/content "Jason" for example




/*
int line_finder(char* buffer, int lineNumber);

int main()
{
	char buffer[128];  //question asks to keep buff at 64 so change number here and later down the next char to 64 if need be
	line_finder(buffer, 6);  //6 is the line number that is found
}

int line_finder(char* buffer, int lineNumber)
{
	FILE *fp = fopen("test.txt", "r"); //path in path means no quotes for test.txt just write out path
	
	if (!fp)
	{
	fprintf(stderr, "failed to open file\n"/, "test.txt"); //a way for the program to know whether or not the file exists, if not it will exit
	return(EXIT_FAILURE);
	}

        int counter =1; //counter that counts the lines (this example 1 line)
	char line[128] = {0};

	while(fgets(line, sizeof(line), fp) != NULL)  //if question asks to not to modify buffer do not add buff where the first line is
        {
		if(strstr(line, "Jason") == line)  
		{
			memset(buffer, 0, 64); //can modify buffer here if need be instead of changing u top
			strncpy(buffer, line, 63);
			fclose(fp);
			printf("%s", buffer);  //just for testing purposes, just to make sure you are getting the right line number out
			printf("%lu\n", strlen(buffer));
			return strlen(buffer);
		}
		counter++;
	}
	fclose(fp);
	printf("does not find\n");
	return -1; //this two statements are in in case the program runs through and does not find any lines and terminates(return -1 if failure occured)
}
*/




