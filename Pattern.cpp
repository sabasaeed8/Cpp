#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i=1,j,n;//i=no of rows //j=no of columns
	cout<<"Enter value of n=";
	cin>>n;
	while (i<=n)
	{j=1;
	 while(j<=i)
	{
	cout<<"*";
	j++;
	}
	 cout<<"\n";
	 i++;
    }
	
}
