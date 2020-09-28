#include<stdio.h>

int main()
{
	char i;

    i=getchar();

    printf("Enter phone number: ");

    while(i!='\n'){

        switch(i){

            case 'A':case 'B':case 'C':

            printf("2");break; 

            case 'D':case 'E':case 'F':

            printf("3");break;

            case 'G':case 'H':case 'I':

            printf("4");break;

            case 'J':case 'K':case 'L':

            printf("5");break;

            case 'M':case 'N':case 'O':

            printf("6");break;

            case 'p':case 'Q':case 'R':case 'S':

            printf("7");break;

            case 'T':case 'U':case 'V':

            printf("8");break;

            case 'W':case 'X':case 'Y':case 'Z':

            printf("9");

            break;

            default:printf("%c",i);

        }i=getchar();
    }

     printf("\n");

    return 0;
} 