//https://codeforces.com/contest/1850/problem/A
//1850A_To_My_Critics.cpp

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    vector<int>v(3);
    for(int i=0;i<3;i++) cin>>v[i];

    sort(v.begin(),v.end());

    if(v[v.size()-1]+v[v.size()-2]>=10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
 

int main()
{
    optimize();
    
//    solve();
   testcase solve();

}


/*
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
--------------------
YES
NO
YES
NO
YES
*/