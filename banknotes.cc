#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin>>n;

    int a = n;
    int z;
    z= (n-a)*1000;

    int rs100 = n/100;
    int rs50 = (a%100) / 50;
    int rs20 = ((a%100) % 50) / 20;
    int rs10 = (((a%100) % 50) % 20)/10;
    int rs5 = ((((a%100) % 50) % 20)%10)/5;
    int rs2 = (((((a%100) % 50) % 20)%10)%5)/2;

    int r1 = ((((((a%100) % 50) % 20)%10)%5)%2)/1;
    int r50 = z/500;
    int r25 = (z%500)/250;
    int r10 = ((z%500)%250)/100;
    int r05 = (((z%500)%250)%100)/50;
    int r01 = ((((z%500)%250)%100)%50)/10;

    
    cout<<"NOTAS:"<<endl;
    cout<<rs100<<" nota(s) de R$ 100.00"<<endl;
    cout<<rs50<<" nota(s) de R$ 50.00"<<endl;
    cout<<rs20<<" nota(s) de R$ 20.00"<<endl;
    cout<<rs10<<" nota(s) de R$ 10.00"<<endl;
    cout<<rs5<<" nota(s) de R$ 5.00"<<endl;
    cout<<rs2<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<r1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<r50<<" moeda(s) de R$ 0.50"<<endl;
    cout<<r25<<" moeda(s) de R$ 0.25"<<endl;
    cout<<r10<<" moeda(s) de R$ 0.10"<<endl;
    cout<<r05<<" moeda(s) de R$ 0.05"<<endl;
    cout<<r01<<" moeda(s) de R$ 0.01"<<endl;


}