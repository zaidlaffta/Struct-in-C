//  main.c
//  SwitchStatment pracitce
//  Created on 2/1/20.
//  Copyright © 2020 Zaid Laffta. All rights reserved.

#include <stdio.h>

struct student{
    char name[50];
    char major[54];
    int age;
    double gpa;
};

int main() {
    struct student object1;
    object1.age = 33;
    object1.gpa = 4.3;
    strcpy(object1.name, "Zaid");
    strcpy(object1.major, "Computer Engineering");
    printf("%f\n", object1.gpa);
    printf("%s\n", object1.name);
    

    return 0;
}
