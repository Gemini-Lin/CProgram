#include<stdio.h>



int main()

{

    char a[50]={0};

    int i=0,m=0;

    char ch;

    printf("Enter a message: Reversal is: ");

   for (i = 0; i < 50; i++)
{
a[i] = getchar();
if (a[i] == '\n')
break;
}
    for(m=i-1;m>=0;m--)

    {

        printf("%c",a[m]);

    }
    printf("\n");
    return 0; 
} 
