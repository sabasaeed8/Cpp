//Factorail of no
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x,y=1,fac=1;
	cout<<"Enter value of no;"<<endl;
	cin>>x;
	while(y<x)
	{fac=fac*y;
	 y++;
	}
	
	cout<<"Factorial of no is:"<<fac<<endl;
	
}
