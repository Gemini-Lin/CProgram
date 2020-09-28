#include<stdio.h>

int main(void)
{ 
    int a;
    printf("Enter numerical grade: ");
    scanf("%d",&a);
    if(a<0||a>100)
    {
	printf("Error, grade must be between 0 and 100.\n");
    return 1; 
	}
    
	else 
		switch(a/10){
    	case 0:
    	case 1:
    	case 2:
    	case 3:
    	case 4:
    	case 5:printf("Letter Grade: F\n");break;
    	case 6:printf("Letter Grade: D\n");break;
    	case 7:printf("Letter Grade: C\n");break;
    	case 8:printf("Letter Grade: B\n");break;
    	case 9:
    	case 10:
		printf("Letter Grade: A\n");break;	
    }
	return 0;
} 
