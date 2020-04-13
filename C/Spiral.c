#include <stdio.h>


int  spiralPrint(int r, int c, int a[1][1])
{
	if(r==1 && c==1) 
		{printf("%d",a[0][0]); return 0;}
	int i=0,j=0,k;
	
	for(j=0;j<c;++j)
	{
		printf("%d ",a[i][j]);`w
	}
	i++;
	for(k=i;k<r;++k)
	{
		printf("%d ",a[k][c-1]);	
	}
	r--; c--,j--;
	//printf("%d ",j);
	if(c>=j)
	{
	for(k=j-1;k>=0;k--)
	{
		printf("%d ",a[r][k]);
	}
	}
	r--;
	//printf("%d ",c);
	//printf("%d ",j);
	//printf("%d ",i);
	if(c!=1 && j!=1)
	{
	for(k=j-c;k<c;k++)
	{
		printf("%d ",a[r][k]);
	}
	}
	r--;

}

int main()
{ 
	int a[1][1] = {1}
        
        ;
    
 
    spiralPrint (1, 1, a) ;
    return 0;
}