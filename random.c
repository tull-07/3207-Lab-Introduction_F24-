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

/*Function Prototype*/
char randchar();

/*This function will generate a random number between 0-25 because of the %26
then it will add it to the first letter. Gets called from the main(print_random.c)*/
char randchar(){
     return 'A' + (rand() % 26);
}