//Sum of first n positive integers
#include <iostream>
#include <string>
using namespace std;
int main()
 { int Num;
   int Check;
   Check=0;
   int Sum=0;
   
   do 
   {cout<<"Enter value of Num"<<endl;
   cin>>Num;
   while (Check<=Num);
   Sum =Sum+Check;
   Check++;
   cout<<"Sum is"<<Sum<<endl;}
   while(1);
 }

