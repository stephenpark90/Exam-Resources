//argument ./a.out -t argument -- -1 2
//this is run after you compile (have to run this if its negative)

//file access run
//argument ./a.out -t argument -f mysuperpdf.pdf -- -1 2

#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

//GETOPT EXAMPLE

int main(int argc, char **argv)
{
		int flags, opt;
		int nsecs, tfnd;
			char *filename = NULL;

		nsecs = 0; //need to initialize these flags to 0, otherwise you will get garbage
		tfnd = 0;
		flags = 0;
		while ((opt = getopt(argc, argv, "nt:f:")) != -1) //while opt does not return error, execute code
		{
			switch (opt) {
			case 'n':
				flags = 1;
				break;
			case 't':
				nsecs = atoi(optarg);//optarg is the input that follows after -t flag, and is converted to integers andassigned to nsecs
				tfnd = 1; //tfnd flag is changed to 1
				break;
			case 'f':
				filename = optarg;//since we are expecting string of characters, no need to convert atoi
				break;
			default: /* '?' */
				fprintf(stderr, "Usage: %s [-t nsecs] [-n] name\n",
					argv[0]);
				exit(EXIT_FAILURE);
		}
	 }
		printf("flags=%d; tfnd=%d; nsecs=%d; optind=%d\n", flags, tfnd, nsecs, optind);


			//file access (F:)

			if (filename == NULL)
			{
				printf("Filename must be provided with the -f option\n");
					exit(EXIT_FAILURE);		
			}



		if (optind >= argc) //if only concerned with printing out a certain amount of lines (in IF statement it should look like (optind+1 >= argc)) 
		{ //optind is the index of the next element of argv[]. the arguments entered in command line should not exceed argumentcouneter(argc)
		fprintf(stderr, "expected arguement after options\n");
		exit(EXIT_FAILURE);
		}

				//printing out file access success (not actually reading the file)
				printf("Processs the file %s\n", filename);

		printf("First positional parameter is %d\n", atoi(argv[optind]));  //if only concerned with printing out a certain amount of lines
		printf("Second positional parameter is %d\n", atoi(argv[optind+1]); 


		for (int i = optind; i < argc; i++) //this will print all arguments that follow(as many as provided(all arguments)
		{
		printf("name argument = %s\n", argv[i]);
		}

exit(EXIT_SUCCESS);
}
}
