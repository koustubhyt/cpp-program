#include<iostream>
using namespace std;
int main ()
{
    int num,rev=0,a,b,c,d;
    cout<<"Enter four digit number for reverse : ";
    cin>>num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    d=num/10;
    rev=(a*1000)+(b*100)+(c*10)+d;
    cout<<"reverse number is : "<<rev;
} 
