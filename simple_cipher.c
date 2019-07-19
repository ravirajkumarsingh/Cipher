#include<stdio.h>
void main()
{
    char s;
    printf("Enter the code you want to encode.\n");
    scanf("%c",&s);
    printf("The encoded code is %c\n",(~s));
}
