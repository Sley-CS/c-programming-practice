// string reversal using the concepts of pointer arithmetic, array and character.

#include<stdio.h>
#include<stdlib.h>

# define LENGTH 100

int main(void){

    char message[LENGTH], *P = message;

    // read message
    while ((*P = getchar()) != '\n' && P < message + LENGTH)
    P++;

    if (P == message + LENGTH)
        P--;
    if (*P == '\n')
        P--;
    do {
        printf("%c", *P--);
    }while (P >= message);

    return 0;
}
