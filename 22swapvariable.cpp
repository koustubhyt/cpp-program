#include<iostream>
using namespace std;
int main ()
{
    //swap variable without using third variable.
    int a,b;
    cout<<"Enter the value of a for swap : ";
    cin>>a;
    cout<<"Enter the value of b for swap : ";
    cin>>b;
    cout<<"value of a = "<<a<<endl<<"value of b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swap variable are "<<endl;
    cout<<"value of a = "<<a<<endl<<"value of b = "<<b;
}