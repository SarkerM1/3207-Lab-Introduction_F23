#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar(){
    int c = 65 + (rand() % 26);
    return c;
}