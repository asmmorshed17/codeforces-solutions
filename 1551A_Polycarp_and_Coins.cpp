/* Bismillahir Rahmanir Rahim */
//https://codeforces.com/contest/1551/problem/A
//
//1551A_Polycarp_and_Coins.cpp

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    int a ;
    if(n==1)
        cout<<"1"<<" "<<"0"<<endl;
    
    else if(n==2)
        cout<<"0"<<" "<<"1"<<endl;
     
    else if(n%3==0){
         a = n/3 ;
        cout<<a<<" "<<a<<endl;
    }    
    else if(n%3==1){
        a = n/3;
        cout<<(a+1)<<" "<<a<<endl;
    }
    else if(n%3==2){
        a = n/3 ;
        cout<<a<<" "<<(a+1)<<endl;
    }

}


int main()
{
    optimize();
    
   // solve();
   testcase solve();

    return 0;
}
