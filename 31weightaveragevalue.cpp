#include<iostream>
using namespace std;
int main() 
{
    double wi1, ci1, wi2, ci2, result;
    cout<<("Weight - Item1: ");
    cin>>wi1;
    cout<<("No. of item1: ");
    cin>>ci1;  
    cout<<("Weight - Item2: ");
    cin>>wi2;
    cout<<("No. of item2: ");
    cin>>ci2;
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
    cout<<"Average Value = "<<result;
}