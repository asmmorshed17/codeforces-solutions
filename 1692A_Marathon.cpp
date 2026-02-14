/* Bismillahir Rahmanir Rahim */
//
//https://codeforces.com/contest/1692/problem/A
//1692A_Marathon.cpp


#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve()
{
    vector<int>v(4);
    for(int i=0;i<v.size();i++) cin>>v[i];

    int ans = 0 ;
    for(int i=1;i<v.size();i++){
        if(v[0]<v[i])ans++;
    }

    cout<<ans<<endl;
}


int main()
{
    optimize();
    
   // solve();
   testcase solve();

    return 0;
}
//implementation, *800