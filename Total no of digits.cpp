//Total no of digits
#include <iostream>
#include <string>
using namespace std;
int main()
{int x,y;
 cout<<"Enter value of x"<<endl;
 cin>>x;
 y=0;
 while (x%10!=0) //OR(x>0)
 { x=x/10;
   y++;
  }
  cout<<"Total no of digits="<<y<<endl;
}
