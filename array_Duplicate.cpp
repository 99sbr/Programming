#include <iostream>
#include <map>
using namespace std;

void Duplicate(int a[], int size)
{
	
	int i;
	for(i=0;i<size;i++)
	{

	}
}


int main()
{	map <int,int> m;
	m[0]=0;
	cout << "Enter the size of Array\n" ;
	int size;
	cin>>size;
	int i,a[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
		if(m[a[i]]==1)
		{
			cout <<"Duplicate at" <<a[i] <<"\n";
		}
		m[a[i]]=1;

	}
}