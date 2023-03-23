#include <iostream>
#include <string>
using namespace std;
int main()
//Average result Of a Student
{
int English,Physics,Math,Chemistry,Biology; //These are five subjects
English=100,Physics=100,Math=100,Chemistry=100,Biology=100;
cout<<"TOTAL MARKS:"<<endl; //Total marks of each subject
cout<<"English=100"<<endl;
cout<<"Math=100"<<endl;
cout<<"Physics=100"<<endl;
cout<<"Chemistry=100"<<endl;
cout<<"Biology=100"<<endl;

int SUM1; //Sum ofTotal Marks
SUM1=English+Math+Physics+Chemistry+Biology;
cout<<"TOTAL="<<SUM1<<endl;

cout<<"Obtained Marks:"<<endl; //Marks obtained in each subject
cout<<"English=";
cin>>English;
cout<<"Physis=";
cin>>Physics;
cout<<"Math=";
cin>>Math;
cout<<"Chemistry=";
cin>>Chemistry;
cout<<"Biology=";
cin>>Biology;

int SUM2; //Sum of obtained marks
SUM2=English+Physics+Math+Chemistry+Biology;
cout<<"Obtained Marks="<<SUM2<<endl;

float avg;
avg=SUM2/5;
cout<<"Average="<<avg<<endl;

cout<<"MAXIMUM VALUE:"<<endl;
if(English>Physics && English>Math && English>Chemistry && English>Biology)
 { cout<<"Max value:"<<"English="<<English<<endl;}
else if (Physics>English && Physics>Math && Physics>Chemistry && Physics>Biology)
 { cout<<"Max vzlue="<<"Physics="<<Physics<<endl;}
else if (Math>English && Math>Physics && Math>Chemistry && Math>Biology)
 { cout<<"Max value="<<"Math="<<Math<<endl;}
else if (Chemistry>English && Chemistry>Physics && Chemistry>Math && Chemistry>Biology)
 { cout<<"Max value="<<"Chemistry="<<Chemistry<<endl;}
else if (Biology>English && Biology>Physics && Biology>Math && Biology>Chemistry)
 { cout<<"Max value="<<"Biology="<<Biology<<endl;}
 
cout<<"MINIMUM VALUE:"<<endl;
if(English<Physics && English<Math && English<Chemistry && English<Biology)
 { cout<<"Min value="<<"English="<<English<<endl;}
else if (Physics<English && Physics<Math && Physics<Chemistry && Physics<Biology)
 { cout<<"Min vzlue="<<"Physics="<<Physics<<endl;}
else if (Math<English && Math<Physics && Math<Chemistry && Math<Biology)
 { cout<<"Min value="<<"Math="<<Math<<endl;}
else if (Chemistry<English && Chemistry<Physics && Chemistry<Math && Chemistry<Biology)
 { cout<<"Min value="<<"Chemistry="<<Chemistry<<endl;}
else if (Biology<English && Biology<Physics && Biology<Math && Biology<Chemistry)
 { cout<<"Min value="<<"Biology="<<Biology<<endl;}
  }
 

