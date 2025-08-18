#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0,a,b,c;
    cout<<"Enter the three digit no : ";
    cin>>num;
    a=num/100;
    b=(num%100)/10;
    c=num%10;
    sum=a+b+c;
    cout<<"sum of digit : "<<sum;
}
