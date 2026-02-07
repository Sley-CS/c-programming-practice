/******************************************************************************************
* Name: capitalize_string_v1                                                              *
* Purpose:converts all characters of a string to uppercase.                               *
* Author: Wesley                                                                          *
* Context: practice program while studying the C programming language                     *
* Concepts used: Arrays, Pointers, Loops, Functions, ctype.h library                      *
******************************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 80

void capitalize (char *str, int n);

int main(void) {

    char text[80] = {'a','b','c','d','e','f','g','\0'};

        printf("CAPITALIZED: ");

        capitalize (text, N);

        puts(text);

        return 0;

}

void capitalize (char *str, int n){
    int i = 0;
        while (i < n && str[i] != '\0'){
        str[i] = toupper(str[i]);
        i++;
}
        return ;
}
