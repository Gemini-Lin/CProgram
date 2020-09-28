#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int digit_seen[10]={0};
	int digit;
	unsigned long long n;
	printf("Enter a number: ") ;
	scanf("%llu",&n);
	if(n==0)
	{
		digit=n;
		digit_seen[digit]=1; 
	}
	
	while(n>0){
		digit=n%10;
		digit_seen[digit] ++;
		n/=10;
		}
	   printf("Digit:		");
	   printf("%d",0);
	for(digit=1;digit<10;digit++)
	{
	   printf("  %d",digit);
	}
	  printf("\nOccurrences:	");
	  printf("%d",digit_seen[0]);
	  for(digit=1;digit<10;digit++)
	  {
  		printf("  %d",digit_seen[digit]);
  	  } 
  	  printf("\n");
	return 0;
}
 
 

