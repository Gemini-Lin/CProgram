#include<stdio.h>



int main(void)

{

    int n,i,a;

    printf("Enter number of days in month: ");

    scanf("%d",&n);

    printf("Enter starting day of the week (1=Sun, 7=Sat): \n");

    scanf("%d",&a);

    for(i=1;i<a;i++)

    printf("   ");

    for(i=1;i<=n;i++)

    {
    if((i+a-1)%7!=0&&i<n)	
    printf("%2d ",i);

    if((i+a-1)%7==0||i==n)

    printf("%2d\n",i);}

    return 0;
}

