#include <stdio.h>
#include <string.h>
#define buffer 50

int top=-1;
char Stack[buffer];


int isOperand(char op)
	{
		if(op=='0' || op=='1' || op=='2' || op=='3' || op=='4' || op=='5' || op=='6' || op=='7' || op=='8' || op=='9')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

int isOperator(char op)
	{
		if(op=='*' || op=='+' || op=='-' || op=='/' )
			return 1;
		else
			return 0;
	}

int Has_high_Precidence(char StackTop,char operator)
	{	
		int op, stack_top;
		if (operator=='/') op=4;
		else if (operator=='*') op=3;
		else if (operator=='+') op=2;
		else if(operator=='-') op=1;

		if (StackTop=='/') stack_top=4;
		else if (StackTop=='*') stack_top=3;
		else if (StackTop=='+') stack_top=2;
		else if(StackTop=='-') stack_top=1;

		if(op<stack_top) return 1;
		else if(op>stack_top) return 0;
	}
char Top()
{
	char c;
	c=Stack[top];
	
	return c;

}
void pop()
{
	top=top-1;
	
	return;
}

void Push(char c)
{	
	top=top+1;
	Stack[top]=c;
	
	return;
}
void InfixtoPostfix(char Infix[])
	{
		char Postfix[buffer]=" ";
		int length,i,j=0;
		length=strlen(Infix);
		for (i=0;i<length-1;i++)
		{	
			if (isOperand(Infix[i])==1)
			{	
				Postfix[j]=Infix[i];
				j++;	
				
			}
			else if(isOperator(Infix[i]))
			{   
				while(top!=-1  && Has_high_Precidence(Top(),Infix[i])==1)
				{
					Postfix[j]=Top();
					j++;
					
					pop();
				}
				
				Push(Infix[i]);
				
			}
		}
		printf("i is %d\n",i);
		while(top!=-1)
		{
			Postfix[j]=Top();
			j++;
			
			pop();
		}
		printf("Fina; postfix expression is :\n");
		puts(Postfix);

		
	}

int main()
	{	
		char Infix[buffer];
		
		printf("Enter the infix expression\n");
		fgets(Infix,buffer,stdin);
		InfixtoPostfix(Infix);
		
			
	}