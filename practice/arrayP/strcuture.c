//
// Created by Gary Chang on 2024-03-14.
//
#include "strcuture.h"
#include "utils.h"

struct student readStudentFile(){
    struct student student;
    //get the line
    printf("Input the student name\n>");
    getLine(student.name);
    //get int
    printf("Input the student high\n>");
    student.high = getInt();
    //get double
    printf("Input the student weight\n>");
    student.weight = getDbl();

    return student;
}

void prnStudentInformation(struct student student){
    printf("Name is %s, High is %d, Weight is %.2lf\n",student.name,student.high,student.weight);
}