#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr[]={5,6,4,2,9,6,123,15,13,23,16,50,45,65,90,32};

    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    for(int i=0;i<16-1;i++)
    {
        for(int j=0;j<16-1-i;j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
            }
        }
    }

    for(int i=0;i<16;i++)
    {
        cout<<arr[i]<<" ";
    }
}
