#include<iostream>
using namespace std;
int main ()
{
    int days,years,weeks;
    cout<<"Enter the days : ";
    cin>>days;
     years = days/365; // Calculate years
    weeks = (days % 365)/7; // Calculate weeks
    days = days - ((years*365) + (weeks*7));
    cout<<"years ="<<years<<endl;
    cout<<"weeks ="<<weeks<<endl;
    cout<<"days ="<<days<<endl;
}