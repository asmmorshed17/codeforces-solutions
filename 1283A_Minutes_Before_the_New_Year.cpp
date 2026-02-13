/* Bismillahir Rahmanir Rahim */
//
//https://codeforces.com/contest/1283/problem/A
//

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve()
{
    int hour,minute ;
    cin>>hour>>minute;

    //one day = 24H = 24*60 = 1440 minutes
    cout<<(1440-(hour*60)-minute)<<endl;
}


int main()
{
    optimize();
    
   // solve();
   testcase solve();

    return 0;
}
// 1283A_Minutes_Before_the_New_Year.cpp
//math, *800