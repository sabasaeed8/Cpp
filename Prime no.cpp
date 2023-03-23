//Prime no
#include <iostream>
#include <string>
using namespace std;
int main()

{ int no,i,p;
  bool f=false;
  cout<<"Enter value of no:"<<endl;
  cin>>no;
 
  for(i=2;i<=no/2;i++)
{ p=no%i;
  if(p==0)
{ cout<<no<<" "<<"is not prime."<<endl;
  break;
  f=true;
}
  if(f==false)
  cout<<no<<" "<<"is prime"<<endl;
  
} 
}
