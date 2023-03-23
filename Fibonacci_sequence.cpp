#include <iostream>
#include <string>
using namespace std;
int main()

{
	int a=0,b=1,sum=0 ,n;
	cout<<"Enter value of n=";
	cin>>n;

	for(int i=1; i<=n; i++ )
    {
	 
	
	  if(i==1)
	 {
	  cout<<a<<" ";
	  continue;
     }
	  if(i==2)
	 { 
	  cout<<b;	
      continue;
	 }
     
	 sum=a+b;
	 a=b;
	 b=sum;
	 
	 cout<<sum<<" " ;
	}

	

}
