/******************************************************************************************
* Name: reverse_string_v1                                                                 *
* Purpose:reverse all characters of a string.                                             *
* Author: Wesley                                                                          *
* Context: practice program while studying the C programming language.                    *
* Concepts used: Arrays, Pointers, Loops.                                                 *
******************************************************************************************/



#include<stdio.h>

#define L 100

int main (void)
{
    char mssg[L]={' '};
    int i;

    //read message
    printf("Type in a message: ");
    i=0;
    while((mssg[i]=getchar())!='\n' && i<L)
            i++ ;
    // write message
    printf("\nReversed message: ");
    if (i==L)
     i--;
    if(mssg[i]=='\n')
     i--;
    do
     {
       printf("%c",mssg[i--]);
   }while(i>=0);
   printf("\n");

    return 0;

}
