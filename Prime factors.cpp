//Prime factors of a number
#include <iostream>
#include <string>
using namespace std;
int main()

{ 
   int num,count;
   cout<<"Enter Number=";
   cin>>num;
    
   for(int i=2; i<=num; i++)
 {
   if(num%i==0)
   {
   	 count=1;
   	 for(int j=2; j<=i/2; j++)
   	 {
   	 	if(i%j==0)
   	 	{
   	 	  count=0;
		  break;	
		}
	 }
   
   	 if(count==1)
   	  {
	    cout<<"Prime factor of"<<" "<<num<<" "<<"is"<<" "<<i<<endl;   
      }
   }
 } 
   
    
} 


