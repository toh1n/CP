#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char n[100];    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != '+')
        {
            n[i] = s[i];
        }
    }
    for (int i = 0; i < sizeof(n); i++)
    {
        cout<<n[i];
    }
    
    
}