//LCM of two numbers
#include <iostream>
#include <string>
using namespace std;
int main()
 {
 	int a,b,x;
 	cout<<"Enter num 1=";
 	cin>>a;
 	cout<<"Enter num 2=";
 	cin>>b;
 	x=a*b;
 	for(int i=1;i<=x;i++)
 	{
 	  if(x%i==0 && i%a==0 && i%b==0)
 	{
 	  cout<<"LCM of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is="<<i<<endl;
 	  break;
    }  
	}
 }

