#include <stdio.h>
#include <stdlib.h>



int main()
{
	printf("Enter the number of rows for pascal's triangle: \n");
	int n;
	scanf("%d",&n);
	int line,i;
	
	 for (line = 1; line <= n; line++)
  {
    int C = 1;  // used to represent C(line, i)
    for (i = 1; i <= line; i++)  
    {
      printf("%d ", C);  // The first value in a line is always 1
      C = C * (line - i) / i;  
    }
    printf("\n");
  }
}