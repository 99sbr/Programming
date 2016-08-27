#include <iostream>
using namespace std;



void spiral(int a[][3] ,int m, int n, int k)
{	
	if(m<=0 || n<=0) return;
	if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			cout <<a[k][i+k]<<" ";
		}
		return;
	}
	if(n==1)
	{
		for(int i=0;i<m;i++)
		{
			cout <<a[i+k][k]<<" ";
		}
	}

	// top left
	for(int j=0;j<n-1;j++)
	{
		cout <<a[k][k+j]<<" ";
	}
	for(int i=0;i<m-1;i++)
	{
		cout << a[k+i][k+n-1]<<" ";
	}
	for(int j=0;j<n-1;j++)
	{
		cout <<a[k+m-1][k+n-1-j]<<" ";
	}
	for(int i=0;i<m-1;i++)
	{
		cout << a[k+m-1-i][k]<<" ";
	}
	spiral(a,m-2,n-2,k+1);
}


int main()
{
	
	int a[3][3]= 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	spiral(a,3,3,0);

} 