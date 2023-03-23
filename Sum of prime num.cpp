//Sum of prime numbers
#include <iostream>
#include <string>
using namespace std;
int main()

{
	int num1=1,num2,i,j,count=1,sum=0;
	cout<<"num1="<<num1<<endl;
	cout<<"Enter num2=";
	cin>>num2;
	
    cout<<"Sum of Prime numbers form"<<" "<<num1<<" "<<"to"<<" "<<num2<<" "<<"is=";
    
	 for(i=2;i<=num2;i++)
	{
	 count=1;	
	 for(j=2; j<=i/2; j++)
	{
	   if(i%j==0)
	  {
		count=0;
		break; 
	  } 	
	} 
	   if(count==1)
	   {
	   	sum=sum+i;
	   }
      
	}
    
     cout<<sum;
       
}
