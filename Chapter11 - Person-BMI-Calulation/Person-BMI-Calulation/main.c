//
//  main.c
//  Person-BMI-Calulation
//
//  Created by Angel Ceballos on 3/2/14.
//  Copyright (c) 2014 Angel Ceballos. All rights reserved.
//

#include <stdio.h>


// Here is the declaration of the type person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} person; // data type variable name

float bodyMassindex(person p){ // calculating body mass index (BMI)
    return p.weightInKilos / (p.heightInMeters * p.weightInKilos);
};


int main(int argc, const char * argv[])
{
    person angel;
    angel.heightInMeters = 1.7;
    angel.weightInKilos = 96;
    
    person luis;
    luis.heightInMeters = 1.97;
    luis.weightInKilos = 84;
    
    float bmi;
    bmi = bodyMassindex(angel);
    printf("Angel has a BMI of %.2f\n", bmi);
    
    bmi = bodyMassindex(luis);
    printf("Luis has a BMI of %.2f\n", bmi);
    
    return 0;
}

