#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20
int top=-1;
char Stack[SIZE];
int pop()
{
  top=top-1;
}
void push(char c)
{
  top=top+1;
  Stack[top]=c;
  return;
}
int Top()
{
  char x;
  x=Stack[top];
  int i;
  i=x-'0';
  return i;
}
char Perform(char c,int op1,int op2)
{
    if (c=='+')       return op1+op2;
    else if (c=='-')  return op1-op2;
    else if (c=='*')  return op1*op2;
    else if (c=='/')  return op1/op2;
}
void EvaluatePreFix(char input[])
{
  int length,i,operand1,operand2;
  length=strlen(input);
  char result;
  for(i=length-1;i>=0;i--)
  {
    if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/')
    {
      operand1=Top();pop();
      operand2=Top();pop();
      result=Perform(input[i],operand1,operand2);
      push(result+'0');
    }
    else
    {
      push(input[i]);
    }
  }

}


int main()
{ char input[SIZE];
  printf("Enter the correct prefix expression\n");
  fgets(input,SIZE,stdin);
  EvaluatePreFix(input);
  printf("The result is %d\n",Stack[top]-'0' );
}
