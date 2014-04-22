//
//  main.c
//  Degrees
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> // Standard Library. Needed for EXIT_SUCCESS constant

// Example how to declare a global variable
float lastTemperature; // global variable. A global varable can be accessed from any file in the project
static float currentTemperature = 26.0; // static varlable. This varable can only be accessed in this file ONLY. Not global.

float fahrenheitFromCelsius(float cel)
{
    lastTemperature = cel; // global varlable used inside a function. A global variable can be used in any function
    float fahr = cel * 1.8 + 32.0; // what fahrenheit converts to in Celsius
    printf("%f Celsius is %f fahrenheit.\n", cel, fahr); // Print what the conversion is from C to F
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC); // FreezeInC is 0, for the expect float return
    printf("water freezes at %f degrees fahrenheit.\n", freezeInF); // after conversion print results to user
    printf("The last temperature converted was %f.\n", lastTemperature); // priting that global varable call
    printf("The current temperature in New York City is %f.\n", currentTemperature); // use of static varable
    
    return EXIT_SUCCESS; // Constant can now be used when stdlib.h is added to header. This is the same as writing return 0;
    
    
    // 0 in return means false. 1 means true.1 means return error something went wrong, 0 is false, which means everything went ok, no error needed.
    
    // EXIT_SUCCESS (same as return 0;) and EXIT_FAILURE (same as return 1;). These are called constants.
    // These constants are defined in the header f  ile stdlib.h
}

