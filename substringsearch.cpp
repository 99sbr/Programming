#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input,search;
	cout<<" Enter a  string"<<"\n";
	getline(cin,input);
	cout<<" Enter element to search"<<"\n";
	getline(cin,search);
	int l=search.length();
	
	int count=0;
	while(count+l <= input.length())
	{
		
		size_t pos=input.find(search,count);
		
        count=pos+l;
		cout<<"Pos: "<<pos+1<<"\n";
		cout<<"count: "<<count<<endl;
	}
	return 0;
}