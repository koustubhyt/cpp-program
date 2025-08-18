#include<iostream>
using namespace std;
int main ()
{
    float r,b,c,d, total, average;
cout<< ("ENTER STUDENT ROLL NO : ");
cin>>r;;
cout<<("ENTER FIRST SUBJECT MARKS :");
cin>>b;;
cout<<("ENTER SECOND SUBJECT MARKS :");
cin>>c;;
cout<<("ENTER THIRD SUBJECT MARKS :");
cin>>d;
total=b+c+d;
average=total/3;
cout<<" student marks "<<endl;
cout<<" STUDENT RollNo  : "<<r<<endl;
cout<<" FIRST SUBJECT MARKS : "<<b<<endl;
cout<<" SECOND SUBJECT MARKS : "<<c<<endl;
cout<<" THIRD SUBJECT MARKS : "<<d<<endl;
cout<<" AVERAGE MARK :"<<average<<endl;
}