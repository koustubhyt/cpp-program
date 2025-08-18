#include<iostream>
using namespace std;
int main ()
{
    int sec,h,m,s;
    cout<<"Enter the seconds : ";
    cin>>sec;
     h = (sec/3600); 
    m = (sec -(3600*h))/60;
    s = (sec -(3600*h)-(m*60));
    cout<<"hour = "<<h<<endl;
    cout<<"minute ="<<m<<endl;
    cout<<"second = "<<s<<endl;
}