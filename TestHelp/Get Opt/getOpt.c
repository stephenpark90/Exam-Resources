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

int main(int argc, char *argv[])
{
		int flags, opt;
		int nsecs, tfnd;
			char *filename = NULL;

		nsecs = 0;
		tfnd = 0;
		flags = 0;
		while ((opt = getopt(argc, argv, "nt:f:")) != -1) //f is for the file option, get rid of it or add(f:) if need be(this is just for file cases)
		{
			switch (opt) {
			case 'n':
				flags = 1;
				break;
			case 't':
				nsecs = atoi(optarg);
				tfnd = 1;
				break;
			case 'f':
				filename = optarg;
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
		{

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
