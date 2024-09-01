/*
Alphin Shajan
Operating Systems 
Project 0: "Introduction to Git and GitHub"
9/1/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"



int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}