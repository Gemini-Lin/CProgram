#include<stdio.h>

int main(void)
{
	int num1,num2,den1,den2,r1,r2;
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d",&num1,&den1,&num2,&den2);
	r1=num1*den2+num2*den1;
	r2=den1*den2;
	printf("The sum is %d/%d\n",r1,r2);
	return 0;
	
	
}  

