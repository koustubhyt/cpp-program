#include<iostream>
using namespace std;
int main() 
{
    int amt, total; 
    cout<<("Input the amount: ");
    cin>>amt;
    total = (int)amt/100;
    cout<<("There are:\n");
    cout<<(" Note(s) of 100.00\n", total);
    amt = amt-(total*100);
    total = (int)amt/50;
    cout<<(" Note(s) of 50.00\n", total);
    amt = amt-(total*50);
    total = (int)amt/20;
    cout<<(" Note(s) of 20.00\n", total);
    amt = amt-(total*20);
    total = (int)amt/10;
    cout<<(" Note(s) of 10.00\n", total);
    amt = amt-(total*10);
    total = (int)amt/5;
    cout<<(" Note(s) of 5.00\n", total);
    amt = amt-(total*5);
    total = (int)amt/2;
    cout<<(" Note(s) of 2.00\n", total);
    amt = amt-(total*2);
    total = (int)amt/1;
    cout<<(" Note(s) of 1.00\n", total);
}