//GCD/HCF
#include <iostream>
#include <string>
using namespace std;
int main()

{
	int X,Y;
	int max=0,min=0;
	int hcf;

	
	cout<<"Enter value of X=";
	cin>>X;
	cout<<"Enter value of Y=";
	cin>>Y;
	
	 if(X>Y)
	 { max=X;
	   min=Y;
     }
	 else 
	 {
	   max=Y;
       min=X;
     }
	  
	 for(int i=1; i<max; i++)
	 {if(max%i==0 && min%i==0)
	      hcf=i;
     }     
	  
	  cout<<"HCF="<<hcf<<endl;
	 
	  
	
	
}

