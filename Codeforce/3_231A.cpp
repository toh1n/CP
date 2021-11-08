#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,z,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>z;
        if(x+y+z >= 2){
            cnt++;
        }
    }
    cout<<cnt;
}
