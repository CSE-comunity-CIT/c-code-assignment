//
// Created by Mainak on 5/15/25.
//
// Write a program in C using structure to write display information about students (roll no, name, department).

#include <stdio.h>
#include <string.h>


int main() {
    struct Student {
        int roll;
        char name[30];
        char department[30];
    } student;
    student.roll = 1;
    strcpy(student.name, "Mainak");
    strcpy(student.department, "CSE");

    printf("Roll: %d Name: %s Dept: %s", student.roll, student.name, student.department);
    return 0;
}