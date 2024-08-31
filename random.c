#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


char randchar();


char randchar(){
     return 'A' + (rand() % 26);
}