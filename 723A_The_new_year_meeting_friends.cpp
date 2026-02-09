/* Bismillahir Rahmanir Rahim */
//https://codeforces.com/contest/723/problem/A
//723A_The_new_year_meeting_friends.cpp
//implementation, math, sortings, *800

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
    vector<int>v(3);
    for(int i=0;i<v.size();i++)cin>>v[i];

    sort(v.begin(),v.end());

    cout<<v[v.size()-1] - v[0]<<endl;

}


int main()
{
    optimize();
    
   solve();
// testcase solve();

    return 0;
}
