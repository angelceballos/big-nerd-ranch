//
//  main.c
//  Coolness-Break
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 8 - Breaks in loops

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i;
    for (i = 0; i < 12; i++) {
        
        if (i % 3 == 0) { // skips all multiples of 3. so 3, 6, and 9 get skipped in the count.
            continue;
        }
        
        printf("checking i = %d\n", i);
        
        if (i + 90 == i * i) {
            break; // example how to create a break in a loop. This can be helpful if you find what you're searching for. This will end the loop and exit versus doing the whole thing.
        }
    }
    
    
    int a = 0;
    do { // going to run this until a = 0 aka returns false.
        printf("%d. Angel is Cool\n", a);
        a++;
    } // do this
    while (a < 12); // while keeping this true.
    
    return 0;
    
}

