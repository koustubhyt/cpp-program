#include<iostream>
using namespace std;
int main ()
{
    int p,r,t,simple_interest;
    cout<<"Enter the value of p : ";
    cin>>p;
    cout<<"Enter the value of r : ";
    cin>>r;
    cout<<"Enter the value of t : ";
    cin>>t;
    simple_interest=(p*r*t)/100;
    cout<<"simple interest = "<<simple_interest;

}