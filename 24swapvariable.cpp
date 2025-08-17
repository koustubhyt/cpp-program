#include<iostream>
using namespace std;
int main ()
{
    //Write a program to swap any three numbers using fourth variable
      int a,b,c,d;
    cout<<"Enter the value of a for swap : ";
    cin>>a;
    cout<<"Enter the value of b for swap : ";
    cin>>b;
    cout<<"Enter the value of c for swap : ";
    cin>>c;
    cout<<"value of a = "<<a<<endl<<"value of b = "<<b<<endl<<"value of c ="<<c<<endl;
    d=a;
    a=b;
    b=c;
    cout<<"swap variable are "<<endl;
     cout<<"value of a = "<<b<<endl<<"value of b = "<<d<<endl<<"value of c ="<<a<<endl;
}