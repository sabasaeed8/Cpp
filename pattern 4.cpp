#include <iostream>
#include <string>
using namespace std;
int main()
{

	int i,j;//i=no of rows 
	for(i=1;i<=4;i++)
	{
	 for(j=1 ;j<=4;j++)
	{
     if(i==j)
	 cout<<"A";
	 else
	 cout<<"*";
	}
	 
	 cout<<"\n";
	}
    
}
