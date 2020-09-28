#include<stdio.h>

int main(){
	int a,b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&a,&b);
	if(a>12&&a<24)
	printf("Equivalent 12-hour time: %d:%.2d PM\n",a-12,b);
	if (a<12&&a>0)
	printf("Equivalent 12-hour time: %d:%.2d AM\n",a,b);
	if(a==24)
	printf("Equivalent 12-hour time: %d:%.2d AM\n",12,b);
	if(a==12)
	printf("Equivalent 12-hour time: %d:%.2d PM\n",a,b);
	if(a==0)
	printf("Equivalent 12-hour time: %d:%.2d AM\n",12,b);
	
	return 0;
	
} 