/* Bismillahir Rahmanir Rahim */
//https://codeforces.com/contest/758/problem/A
//758A_Holiday_of_Equality.cpp
//

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

    int mx = *max_element(v.begin(),v.end());

    int ans = 0;
    for(auto u:v){
        ans+=(mx-u);
    }
    cout<<ans<<endl;

}


int main()
{
    optimize();
    
   solve();
//    testcase solve();

    return 0;
}
//Solved()
//math, implementation, *800