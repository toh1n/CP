#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    
    string input;
    cin>>input;

    for (int i = 0; i < n; i++)
    {
        input[i] = tolower(input[i]);
    }

    sort(input.begin(), input.end());

    for (int i = 0; i < n; i++)
    {
        if (input[i] != input[i + 1])
        {
            cnt++;
        }
    }

    if (cnt >= 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}