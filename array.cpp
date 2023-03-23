#include <iostream>
#include <string>
using namespace std;
int main()

{
	int a[10];
	cout<<"Enter 10 values=:"<<endl;
	
    for(int i=0;i<10;i++)
    {
    	cin>>a[i];
    }
    cout<<"stored valus is array=\n";
    for(int j=0; j<10; j++)
	{
	
	 cout<<a[j]+5<<endl;
    }
    
    cout<<"**************\n";
    for (int k=0;k<10;k++)
    {
     cout<<a[k]<<endl;
	}
}
