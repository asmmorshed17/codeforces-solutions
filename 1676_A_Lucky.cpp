/* Bismillahir Rahmanir Rahim */
//1676_A_Lucky.cpp
//https://codeforces.com/contest/1676/problem/A
//implementation, *800

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  string str;
  cin>>str;
  int sum1=0,sum2=0;
  for(int i=0;i<str.size();i++){
    if(i<=2)sum1+=(str[i]-'0');
    else sum2+=(str[i]-'0');
  }
  if(sum1==sum2)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
