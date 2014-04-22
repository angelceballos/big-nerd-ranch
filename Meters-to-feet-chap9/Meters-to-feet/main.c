//
//  main.c
//  Meters-to-feet
//
//  Created by Angel Ceballos on 3/2/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/*void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr)
{
    // This function assumes meter is non-negative.
    
    // convert the number of meters into a floating-point number of feet
    double rawFeet = meters * 3.281; // i.e 2.4536
    
    // how many complete feet as an unsigned int?
    unsigned int feet = (unsigned int)floor(rawFeet);
    
    // Store the number of feet at supplied address
    
    if (ftPtr) {
        printf("Storing %u to the address %p\n", feet, ftPtr);
        *ftPtr = feet;
    }
    
    // Calculate inches
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
    // Store the number of inches at the supplied address
    if (inPtr) {
        printf("Storing %.2f to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }
}*/


int main(int argc, const char * argv[])
{
    
    double meters = 3.0;
    double feet = meters * 3.281;
    double inches = 39.3701;
    
    double metersTofeet, feetConvered, metersToInches, inchesConverted;
    
    
    // meterstoFeet & metersToInches hold the fractions while feetConverted & InchesConverted hold the whole numbers
    metersTofeet = modf(feet, &feetConvered);
    metersToInches = modf(inches, &inchesConverted);
    
    printf("1 meter equals %0.1f feet. In feet its %.f feet and in inches its %.f%f \n\n", meters, feetConvered, inchesConverted, metersToInches);
    
    // This is known as pass-by-reference. That is, you supply an address (also known as a "reference", and the function puts the data there
    
    // double fractionalFoot = rawFeet - feet;
    // double inches = fractionalFoot * 12.0;
    /*
    metersToFeet = modf(meters, &feet);
    // unsigned int metersToinches = modf(rawFeet, &inches);
    
    // metersToFeetAndInches(meters, &feet, &inches);
    printf("1 meter equals %u feet and %f inches", feet, metersToFeet); */
    
    return 0;
}

