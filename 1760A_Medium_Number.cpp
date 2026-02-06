

/* Bismillahir Rahmanir Rahim */

//1760A_Medium_Number.cpp
//https://codeforces.com/contest/1760/problem/A


#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  
    int a,b,c ;
    cin>>a>>b>>c;

    vector<int>v={a,b,c};
    sort(v.begin(),v.end());
    cout<<v[1]<<endl;
}



int main()
{
    optimize();
    //  testcase{
    // solve();
    // }

   // solve();
   testcase solve();
    return 0;
}
