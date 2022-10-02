#include <bits/stdc++.h>

using namespace std;

int main()
{
    int base,exponent;
    cout<<"Enter base : ";
    cin>>base;
    cout<<"Enter Exponent : ";
    cin>>exponent;

    int reminder = exponent % 4;
    int x = pow(base,reminder);
    int last_digit = x % 10;

    cout<<"Last Digit of "<<base<<"^"<<exponent<<" is : "<<last_digit<<endl;

    cout<<endl;
}