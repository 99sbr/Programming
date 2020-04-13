  #include <stdio.h>
  #include <string.h>
  #define SIZE 20

  char Stack[SIZE];
  int top=-1;
  void Print()
  { printf("Elements in stack are:\n");
    int p;
    p=top;
    while(p!=-1)
    {
      printf("%c\n",Stack[p]);
      p=p-1;
    }
  }
  void push(char c)
    {
      top=top+1;
      Stack[top]=c;
      printf("Element entered into stack is %c\n",Stack[top]);
      return;
    }
  void pop()
    { if(top!=-1)
      {
        top=top-1;
        return;
      }
    }
  int Top()
    {
      char x;

      x=Stack[top];

      int i;
      i=x-'0';

      return i;
    }
  char perform(char c, int op1, int op2)
    {
      if (c=='*') return op1*op2;

      else if (c=='+') return op1+op2;
      else if (c=='-') return op1-op2;
      else if (c=='/') return  op1/op2;
    }

  void EvaluatePosition(char Array[])
      {

        int length,i,operand1,operand2;
        char result;
        length=strlen(Array);
        for(i=0;i<length-1;i++)
          {
              if(Array[i]=='*' ||Array[i]=='+' || Array[i]=='-' || Array[i]=='/')
                {
                  operand2=Top();
                  pop();
                  operand1=Top();
                  pop();
                  printf("operands are %d %d\n",operand1,operand2 );
                  result=perform(Array[i],operand1,operand2);
                  printf("the result is %c\n",result+'0');
                  push(result+'0');
                }
              else
                {
                  push(Array[i]);
                }
            Print();
          }

    }


  int main()
  {
    char Array[SIZE];
    printf("Enter the postfix expression\n");
    fgets(Array,SIZE,stdin);
    EvaluatePosition(Array);
    char x;

    x=Stack[top];

    int i;
    i=x-'0';
    printf("Result is %d\n",i);

  }
