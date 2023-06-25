#include <bits/stdc++.h>

using namespace std;


int main(){
    int a,x,y;
    cin >> a;
    while (a != 0)   
    {
        if(a%10 == 4 || a%10 == 7)
        {
            x++;
        }
        y++;
        a = a / 10;
    }

    if(x == y )
    {
        cout << "YES" << endl; 
    }
    else{
        cout << "NO" << endl;
    }
    
    
}