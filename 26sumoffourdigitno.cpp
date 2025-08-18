#include<iostream>
using namespace std;
int main ()
{
  int num,sum=0,a,b,c,d;
    cout<<"Enter the three digit no : ";
    cin>>num;
    a=num/1000;
    b=(num%1000)/100;
    c=((num%1000)%100)/10;
    d=((num%1000)%100)%10;
    sum=a+b+c+d;
    cout<<"sum of digit : "<<sum;
}  
