//
//  main.c
//  Coolness
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 8 - first example

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 0;
    while (i < 12 ) { // If constuct runs if true, 'while' runs until its false. Does the opposite.
        printf("Angel is cool\n");
        i++;  // everytime i runs, add increase by one until it hits 12
    }
    
    for (int a = 0; a < 12; a++) { // this is the shorthand for 'while' loop
        printf("Angel is cool\n"); // this statement and loop is the same as above, but in shorthand version.
    }
    
    return 0;
}

