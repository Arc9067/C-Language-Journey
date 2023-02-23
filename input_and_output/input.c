#include <stdio.h>

int main(void)
{
    char first,second,third;
    printf("Hi enter your name, must not be more than 3 alphabets : ");
    scanf("%c%c%c", &first,&second,&third);
    printf("Hi there %c%c%c how are you doing today?\n", first,second,third);
    return 0;

}