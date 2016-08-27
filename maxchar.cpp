#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main()
{
    string input;
    //cin >> input;
    getline(std::cin,input);
    int len;
    len=input.length();
    
    std::map<char,int> m;
    int i;
    for(i=0;i<len;i++)
    {	
    	
    	m[input[i]]++;
    }
    int count[len];
    int max=0;
    char  c='\0';
    std::map<char,int> o;
    for (std::map<char,int>::iterator it=m.begin(); it!=m.end(); ++it)
    {
    	
		if(it->second >max)
		{
			c=it->first;
			max=it->second;
		}
		else if(it->second==max)
		{
			if ((int)c < it->first)
			{
				c=c;
				max=max;
			}
			else
			{
				c=it->second;
				max=it->first;
			}
		}
	}
	cout <<c<<" "<<max;
	
    return 0;
}
