//
//  main.c
//  Triangle-challenge-chapter5
//
//  Created by Angel Ceballos on 2/26/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float remainingAngleC (float oneSide, float secondSide) {
    // when angleA and angleB are noted below. They're inserted here
    
    float thirdSide = oneSide + secondSide; // to find the third side we need to add the other sides
    
    return thirdSide; // this now equals 90
}

// challenge code. It was orginally out of the book. I did not touch this code. The function above.

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngleC(angleA, angleB);
    
    printf("The third angle is %.2f\n\n", angleC); // I added double space, but that it. Everything is untouched
    
    return EXIT_SUCCESS; // same as return 0. Just wanted to use it.
    
}

