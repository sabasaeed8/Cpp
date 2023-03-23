#include <iostream>
#include <string>
using namespace std;
int main()
{
	int basicsalary,grosssalary;
	cout<<"Enter Basic salary=";
	cin>>basicsalary;
	float ma,hr;
	ma=basicsalary*(15/100);
	hr=basicsalary*(25/100);
	grosssalary=basicsalary+ma+hr;
	cout<<"Gross salary="<<grosssalary<<endl;
}
