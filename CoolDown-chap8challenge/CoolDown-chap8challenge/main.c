//
//  main.c
//  CoolDown-chap8challenge
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//
//  Chapter 8 - Challenge 1: Cooldown

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h> // Readline library added

int main(int argc, const char * argv[])
{
    printf("What number should I start counting? "); // ask the question to the user
    const char *startValue = readline(NULL); // ask user for starting point
    // Readline --> accept string user input from user. Pass argument NULL to store value in variable
    
    // atoi --> converts strings into integer
    for (int divisible = atoi(startValue); divisible > 0; ) {
        
        divisible-= 1; // reduce count by 1 for cooldown countdown
    
        if (divisible % 5) { // find divisible by 5
            printf("%d\n\n", divisible);
        } else {
            printf("%d Found One!\n\n", divisible); // bug can't remove number from results. But it works
        }
    }

    return EXIT_SUCCESS; // return 0
}

