#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Structures


struct BankAccount //create structure
{
	int accountNumber;
	float balance;
	int lastCheckNumber;
	char accountHolder[50];

};

void printAcct(struct BankAccount *a) //print struct(void though has to be called in main)
{
	printf("Account # %d held by %s has balance %0.2f and last used check# is %d\n", 
		a->accountNumber, 
		a->accountHolder, 
		a->balance, 
		a->lastCheckNumber);

}

int main()
{

	struct BankAccount myacct;
	myacct.accountNumber = 12345678; //assigning these individual values and other two below
	myacct.balance = 100.0;
	myacct.lastCheckNumber = 123;
	
	strcpy(myacct.accountHolder, "No named Person");

	struct BankAccount joesAccount = {98765, 99.12, 456, "Joe the Mechanic"}; //initialize the values and order them from the begining

	//allocating memory to the heap
	struct BankAccount *janesAccount = malloc(sizeof(struct BankAccount) * 1); //not creating an array or anything thats why * 1 is here

	janesAccount->accountNumber = 12345678;
	janesAccount->balance = 100.0;
	janesAccount->lastCheckNumber = 123;

	strcpy(janesAccount->accountHolder, "Jane Doe");


	//print out
	printAcct(&myacct); //& standard pointer if we have none way above
	printAcct(&joesAccount);
	printAcct(janesAccount);


	free(janesAccount);

	return 0;
}
