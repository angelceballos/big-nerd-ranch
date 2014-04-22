//
//  main.c
//  Conditiona-Operators-Challenge
//
//  Created by Angel Ceballos on 2/23/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 20;
    int j = 25;
    int k = ( i > j ) ? 10 : 5; // The answer is 5 like I guessed.
    int answer = 5 < j - k; // to check the answer. The expression is true on first attempt
    
    // ? is the same as writing the entire if/else below. ? is short hand for the stuff below.
    
    if ( 5 < j - k ) { // This is true. 5 is less than j(25) - k(5) = 20. 5 is less than 20. True.
        printf("The expression is true. k is %d.", answer);
    } else if ( j > i) { // Second expression
        printf("The second expression is true.");
    }
      else { // niether expression work
        printf("Neither expression is true.");
    }
}

