/* Bismillahir Rahmanir Rahim */
//1760C_Advantage.cpp
//https://codeforces.com/contest/1760/problem/C

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  
int n;
cin>>n;
vector<int>v(n),copy;
for(int i=0;i<n;i++){
    cin>>v[i];
    copy.push_back(v[i]);
}

// int mx = *max_element(v.begin(),v.end());
sort(copy.begin(),copy.end());
int mx = copy[copy.size()-1];
int mx2 = copy[copy.size()-2];


for(auto u:v){
    if(mx==u) cout<<u-mx2<<" ";
    else cout<<u-mx <<" ";
}
cout<<endl;

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

//data structures, implementation, sortings, *800
