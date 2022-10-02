#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++)
    {
        int z = a+b;
        a = b;
        b = z;
        cout<<z<<" ";
        
    }
    cout<<endl;
}