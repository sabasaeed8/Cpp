#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,j,s;//i=no of rows 
	for(i=1;i<=4;i++)
	{
	 for(j=1 ;j<=4;j++)
	{
	 if(j<=i)
	 cout<<"*";
	 else
	 cout<<" ";
	 	
	}
	 cout<<"\n";
    }
}
