#include<stdio.h>

int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,t,p,q;
	printf("Enter the first (single) digit: ");
	scanf("%1d",&a);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&b,&c,&d,&e,&f);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&g,&h,&i,&j,&k);
	printf("Enter the last (single) digit: ");
	scanf("%d",&q);
	l=a+c+e+g+i+k;
	m=b+d+f+h+j;
	t=3*l+m;
	p=9-((t-1)%10);
	if(p==q)
	printf("VALID\n");
	else 
	printf("NOT VALID\n");	
	return 0;
	
} 
