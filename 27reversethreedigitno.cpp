#include<iostream>
using namespace std;
int main ()
{
    int num,rev=0,a,b,c;
    cout<<"Enter the no for reverse : ";
    cin>>num;
    a=num%10;
    num=num/10;
    b=num%10;
    c=num/10;
    rev=(a*100)+(b*10)+c;
    cout<<"reverse no = "<<rev;
} 
