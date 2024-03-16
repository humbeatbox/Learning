//
// Created by Gary Chang on 2024-03-14.
//
#include <stdio.h>
#ifndef ARRAYP_STRCUTURE_H
#define ARRAYP_STRCUTURE_H

struct student{
    char name[50];
    int high;
    double weight;
    char sayword[10];
};
struct student readStudentFile();
void prnStudentInformation(struct student);
//void saysomthing(struct Item man){
//    printf("%s\n",man.sayword);
//}

#endif //ARRAYP_STRCUTURE_H
