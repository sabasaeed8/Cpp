#include <iostream>
#include <string>
using namespace std;
int main()
 {
 	float Math,Science,Arabic,Pakstudies,English;
 	float sum,average;
 	
 	cout<<"Math=";
 	cin>>Math;
 	cout<<"Science=";
 	cin>>Science;
 	cout<<"Arabic=";
 	cin>>Arabic;
 	cout<<"Pakstudies=";
 	cin>>Pakstudies;
 	cout<<"English=";
 	cin>>English;
 	
 	sum=Math+Science+Arabic+Pakstudies+English;
 	cout<<"Sum="<<sum<<endl;
 	
 	average=sum/5;
 	cout<<"Average="<<average<<endl;
 }
