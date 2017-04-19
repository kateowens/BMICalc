//
//  main.c
//  BMICalc
//
//  Created by Katherine Owens on 4/19/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

typedef struct {
    float heightInMeters;
    float weightInKilos;
} Person;

int main(int argc, const char * argv[]) {
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    printf("mikey is %.2f meters tall\n", mikey.heightInMeters);
    printf("mikey weighs %d kilograms\n", mikey.weightInKilos);
    printf("aaron is %.2f meters tall\n", aaron.heightInMeters);
    printf("aaron weighs %d kilograms\n", aaron.weightInKilos);
    
    return 0;
}
