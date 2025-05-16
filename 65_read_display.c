//
// Created by Mainak on 5/15/25.
//
// Write a program in C to read a file character by character and display it simultaneously on the screen.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp= fopen( "file.txt", "r+");
    char ch;

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    return 0;
}