#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){

    char a[100];
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a;

    if(strlen(a)>10){
        cout<<a[0]<<strlen(a)-2<<a[strlen(a)-1]<<endl;
    }
    else{
        cout<<a<<endl;
    }


}

}
