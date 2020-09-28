#include<stdio.h>

int main(){
	char ch;
	float a,b=0;
	printf("Enter an expression: ");
	scanf("%f",&a);
	while (1)
		{
			ch = getchar();
			if (ch != ' ')break;
		}

	while(ch!='\n'){
		scanf("%f",&b);
			switch(ch){
			case '+':
			a=a+b;break;
			case '-':
			a=a-b;break;
			case '*':
			a=a*b;break;
			case '/':
			a=a/b;break;
		}ch=getchar();
		while(ch==' '){
			
		
			
			ch=getchar();}
		
		
	}
	
	printf("Value of expression: %g\n",a);
	return 0;
	 
	
} 

