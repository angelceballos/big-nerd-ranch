//
//  main.c
//  float-memory-chap9challenge
//
//  Created by Angel Ceballos on 2/27/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("The size of this float is %zu bytes\n", sizeof(float)); // 32 bits
    printf("The point is %zu bytes\n\n", sizeof(float *)); // 64 bits
    return 0;
}

