/************************************************
 * filename: module3exercise1.c
 * Exercise: Module 3, Exercise 1
 * Name: Maxime Grossman
 * Date Created: March 1, 2019
 *
 * Description: This program uses nested for statements to print a bunch of '&' characters in succession.
 *************************************************/


#include<stdio.h>
int main(void)
{
	char and = '&';
	int i;

	for (i = 1; i <= 1; printf("%c%c%c%c%c%c\n", and, and, and, and, and, and), i++) {  //this statement is true so it jumps to following bracket 
																						//and is executed last
		for (i = 1; i <= 1; printf("%c%c%c%c%c\n", and, and, and, and, and), i++) {    //this statement is also true so it jumps to next bracket 
																					  //and is executed second to last
			for (i = 1; i <= 1; printf("%c%c%c%c\n", and, and, and, and), i++) {      //and so on...

				for (i = 1; i <= 1; printf("%c%c%c\n", and, and, and), i++) {

					for (i = 1; i <= 1; printf("%c%c\n", and, and), i++) {

						for (i = 1; i <= 1; printf("%c\n", and), i++);    //this statement is executed first! once complete, it backs out and enters
																			//the bracketed for that gave birth to it (preceding for)
					}
				}
			}
		}
	}


	system("pause");
	return 0;

}