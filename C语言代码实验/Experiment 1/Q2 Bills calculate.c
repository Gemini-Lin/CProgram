#include<stdio.h>

int main(void)
{

	int dollar,twenty,ten,five,one;
	printf("Enter a dollar amount: \n");
	scanf("%d",&dollar);
	twenty=dollar/20;
	ten=(dollar-20*twenty)/10;
	five=(dollar-20*twenty-10*ten)/5;
	one=(dollar-20*twenty-10*ten-5*five)/1;
	printf("$20 bills: %d\n",twenty);
	printf("$10 bills: %d\n",ten);
	printf(" $5 bills: %d\n",five);
	printf(" $1 bills: %d\n",one);
	
	return 0;
}
