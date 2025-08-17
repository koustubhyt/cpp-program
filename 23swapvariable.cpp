#include<iostream>
using namespace std;
int main ()
{
  // Write a program to swap any three numbers without using fourth variable.
  int a,b,c; 
  cout<<"Enter the value of a for swap : ";
    cin>>a;
    cout<<"Enter the value of b for swap : ";
    cin>>b;
    cout<<"Enter the value of c for swap : ";
    cin>>c;
    cout<<"value of a = "<<a<<endl<<"value of b = "<<b<<endl<<"value of c ="<<c<<endl;
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    cout<<"swap variable are "<<endl;
     cout<<"value of a = "<<a<<endl<<"value of b = "<<b<<endl<<"value of c ="<<c<<endl;
}