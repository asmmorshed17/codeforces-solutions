
//2195A_Sieve_of_Erato67henes.cpp
//https://codeforces.com/contest/2195/problem/A

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    bool flag = false ;
    
    for(auto u:v){
        if(u==67){
            flag = true ;
            break;
        }
    }
    
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 

int main()
{
    optimize();
    
   // solve();
   testcase solve();
 
    return 0;
}

//