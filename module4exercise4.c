/************************************************
 * filename: module4exercise4.c
 * Exercise: Module 4, Exercise 4
 * Name: Maxime Grossman
 * Date Created: March 23, 2019
 *
 * Description: This program reads 2 "long" numbers and outputs how many are negative.
 *************************************************/

#include<stdio.h>
int negative_count(long int, long int);
int main(void)
{
	long int long_1, long_2;

	printf("Please enter 2 long numbers and press enter.\n");
	
	if (scanf_s("%ld %ld", &long_1, &long_2) == 2)    //must validate that 2 long numbers entered
		printf("Number of negative long numbers entered: %d\n", negative_count(long_1, long_2));  //if validated, call function's return value
	else
		printf("Please follow instructions: enter 2 long numbers!\n");  //if invalid input found, output this message
							
	//though it is possible to enter more than 2 long numbers, program will only read first 2 long numbers and ignore rest

	system("pause");

	return 0;
}


int negative_count(long int long_1, long int long_2)    //function definition
{
	int count = 0;         //initialize our count to 0; count is the number of negative numbers

	if (long_1 > 0 && long_2 > 0)   //if both values greater than 0, they are both positive, thus count = 0
		count = 0;
	else if (long_1 > 0 || long_2 > 0)  //if first if statement fails, than at least 1 value is not greater than 0; check if ONE is greater than 0
		count = 1;   //if ONE value greater than 0, count = 1
	else
		count = 2;   //if both prior if statements are not validated, than NEITHER are greater than 0, thus count = 2

	return count;
}