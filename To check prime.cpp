//To check whether num is prime or not
#include <iostream>
#include <string>
using namespace std;
int main()
 {
 	int num,count=1;
 	cout<<"Enter value of num=";
 	cin>>num;
 	
 	for(int i=2; i<=num/2; i++)
 	{
 	 if(num%i==0)

	 {
	 count=0;
	 
	 break;
     }
    }
     if(count==1)
	 {
	 cout<<num<<" "<<"is"<<" "<<"Prime";
	
     }
	 else
	 {
	 cout<<num<<" "<<"is"<<" "<<"Not Prime"; 
     }
   
	}
