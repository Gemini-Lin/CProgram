#include<stdio.h>

int main(void)
{
	int i,m;
	printf("Enter a number: ");
	scanf("%d",&i);
	
	for(m=2;m*m<=i;m+=2)
	printf("%d\n",m*m);
	return 0;
}


