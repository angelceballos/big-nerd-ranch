//
//  main.c
//  PBR
//
//  Created by Angel Ceballos on 3/2/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    // Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in integerPart
    printf("IntegerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    // This is known as pass-by-reference. That is, you supply an address (also known as a "reference", and the function puts the data there
    
    return 0;
}

