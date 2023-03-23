//Multiplication table
#include <iostream>
#include <string>
using namespace std;
int main()
 {
 	int table;
 	int count=1;
 	int product=1;

 	cout<<"Table of";
 	cin>>table;
 	while(count<=10)
 	{product=count*table;
 	cout<<table<<"*"<<count<<"="<<product<<endl;
    
    count++;}
 }

