#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter two integers: ");
	scanf(" %d %d", &a, &b);
	
	c=(a<b?a:b);
	

	while(a%c!=0||b%c!=0){
		c--;
	}
	
	printf("Greatest common divisor: %d\n", c);
	
	return 0;
	
}
