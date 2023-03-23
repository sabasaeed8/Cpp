//Even no from 1 to certain no
#include <iostream>
#include <string>
using namespace std;
int main()
 
{
	int a;
	int b=2;
	cout<<"Enter no a=";
	cin>>a;
	while(b<=a)
{
		if(b%2<=0)
	cout<<"Even Numbers="<<b<<endl;
	
	b++;
}
}
