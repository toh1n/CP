#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int A[m],B[n];
    int C[m+n];

    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }

    int k=0,i=0,j=0;

    while(i < m && j < n)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else{
            C[k] = B[j];
            j++;
            k++;
        }
    }

    for(;i<m;i++)
    {
        C[k]=A[i];
        k++;
    }
    for(;j<n;j++)
    {
        C[k] = B[j];
        k++;
    }

    for(int i=0;i<m+n;i++)
    {
        cout<<C[i]<<" ";
    }
}
