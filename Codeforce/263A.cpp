#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5],x,y;
    for(int i = 0 ; i<5;i++)
    {
        for(int j = 0 ;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i<5;i++)
    {
        for(int j = 0 ;j<5;j++)
        {
            if(arr[i][j] == 1){
                x = i + 1;
                y = j + 1;
                break;
            }
        }
    }

    x = abs(x-3);
    y = abs(y-3);

    cout<<x+y<<endl;

    
    
}