#include<stdio.h>

int main(void)
{
	float loan,rate,payment,balance1,balance2,balance3;
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&rate);
	printf("Enter monthly payment:\n");
	scanf("%f",&payment);
	balance1=(loan*(1+rate))/1200-payment;
	balance2=balance1*(1+rate/1200)-payment;
	balance3=balance2*(1+rate/1200)-payment;
	printf("Balance remaining after first payment: $%.2f\n",balance1);
	printf("Balance remaining after second payment: $%.2f\n",balance2);
	printf("Balance remaining after third payment: $%.2f\n",balance3);
	return 0;
	getchar();
	
	
}

