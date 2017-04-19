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
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p) {
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}



int main(int argc, const char * argv[]) {
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    mikey->heightInMeters = 1.7;
    mikey->weightInKilos = 96;
    
    float mikeyBMI = bodyMassIndex(mikey);
    printf("mikey has a BMI of %.2f\n", mikeyBMI);
    
    free(mikey);
    mikey = NULL;
    
    long secondsSince = time(NULL) + 4000000;
    
    
    struct tm now;
    localtime_r(&secondsSince, &now);
    printf("The date in 4000000 seconds will be %d-%d-%d\n", now.tm_mon + 1, now.tm_mday, now.tm_year);
    
    
    
    
    return 0;
}
