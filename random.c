#include <stdio.h>
#include <stdlib.h>

char randchar(){
    int r = rand() % 26;//random number upto 25 
    return( 'A' + r );//change ascii to char
} 