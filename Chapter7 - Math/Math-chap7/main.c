//
//  main.c
//  Math-chap7
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 7 - Challenge

#include <stdio.h>
#include <math.h> // math library added to handle equation


int main (int argc, const char * argv[])
{
    float x = 1.0; // radian
    float result = sinf(x);
    printf("The Sine of 1 radian is %.3f \n", result);
    
    return 0;
}

