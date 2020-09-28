#include<stdio.h>

int main(void){
	float i,a;
	for(;;)
	{
	printf("Enter value of trade: ");
	scanf("%f",&i);
	if(i==0)
	return 1;
	if (i<2500)
	a=30+0.017f*i;
	else if(i<6250)
	a=56+0.0066f*i;
	else if(i<20000)
	a=76+0.0034f*i;
	else if(i<50000)
	a=100+0.0022f*i;
	else if(i<=500000)
	a=155+0.0011f*i;
	else a=255+0.0009f*i;
	if(a>39)
	printf("Commission: $%0.2f\n\n",a);
	else 
	printf("Commission: $39.00\n\n");
	}
	return 0;
} 



