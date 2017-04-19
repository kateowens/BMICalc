//
//  main.c
//  BMICalc
//
//  Created by Katherine Owens on 4/19/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>
#include <time.h>

typedef struct {
    float heightInMeters;
    float weightInKilos;
} Person;

float bodyMassIndex(Person p) {
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}



int main(int argc, const char * argv[]) {
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    float bmi;
    bmi = bodyMassIndex(mikey);
    printf("mikey has a BMI of %.2f\n", bmi);
    
    bmi = bodyMassIndex(aaron);
    printf("aaron has a BMI of %.2f\n", bmi);
    
    
    // what the date will be in 4 million seconds
    
    //double month, double day, double year...get current time and date and add 4 million seconds and return date
    
    long secondsSince = time(NULL) + 4000000;
    
    
    struct tm now;
    localtime_r(&secondsSince, &now);
    printf("The date in 4000000 seconds will be %d-%d-%d\n", now.tm_mon + 1, now.tm_mday, now.tm_year);
    
    
    
    
    return 0;
}
