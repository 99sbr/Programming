
// Stack implementation through Arrays

// simple push pop operations
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int top;
int Stack[SIZE];

int Push(int x)
    { if(top==-1)
          {
            top=top+1;
            Stack[top]=x;
          }
      else
        {
          top=top+1;
          Stack[top]=x;
        }
      return;
  }

int Pop()
{
  top=top-1;
  return;
}

void Print()
{
  while(top!=-1)
  {
    printf("%d\n", Stack[top]);
    top=top-1;
  }
}

void Top()
{
  printf("%d\n",Stack[top]);
}

void IsEmpty()
{
  if(top==-1)
  printf("True\n");
  else
  printf("False\n");
}
int main()
  {
    top=-1;
    Push(3);
    Push(4);
    Push(5);
    Push(6);
    Pop();
    Pop();
    Pop();
    Pop();
    Top();
    IsEmpty();

  }
