#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100

char contents[STACK_SIZE];
int top=0;
void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Parentheses/braces are NOT nested properly\n");
	exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top=0;
} 

bool is_empty(void)

{
    return top==0;
}

bool is_full(void)

{
    return top==STACK_SIZE;
}

void push(char ch)
{
    if(is_full()) 
     stack_overflow();
    else 
      contents[top++]=ch;
} 

int pop(void)
{
     if(is_empty())
      stack_underflow();
     else 
    return contents[--top];
}
int main()
{
	int j = 0;
	char x = 0;
	char a[STACK_SIZE];
	printf("Enter parentheses and/or braces: ");
	make_empty();
	for (;;)
	{
		scanf("%c", &a[j]);
		if (a[j] == '(' || a[j] == '{')
		{
		    push(a[j]);
		}
		if (a[j] == ')' || a[j] == '}')
		{
			x = pop();
			if ((x == '('&&a[j] != ')') || (x == '{'&&a[j] != '}'))
			{
				printf("Parentheses/braces are NOT nested properly\n");
				break;
			}
		}
		if (a[j] == '\n')
		{
			if (is_empty())
			{
				printf("Parentheses/braces are nested properly\n");
				break;
			}
			else
			{
				printf("Parentheses/braces are NOT nested properly\n");
				break;
			}
		}
	}
	return 0;
}