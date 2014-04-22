//
//  main.c
//  Chpater 2 Callenge
//
//  Created by Angel Ceballos on 2/23/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    // Challenge: Declare two variables of type float. Assign each with a decimal point 3.14 and 42.0
    float numberOne = 3.14;
    float numberTwo = 42.0;
    
    // Declare about variable of type double with the sum of the two floats
    double total = numberOne + numberTwo;
    
    // Peint the results to user
    printf("The total for this challenge is %f.\n\n", total); // \n makes a new line after result
    
    // If successful print this
    printf("Challenge is complete.\nMove to the next section Angel.\n\n"); // Double space
    
    // End
    return 0;
    
}

