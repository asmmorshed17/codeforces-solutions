

/* Bismillahir Rahmanir Rahim */

//1335_C_Two_Teams_Composing(Alternative).cpp

//1335_C_Two_Teams_Composing(Alternative).cpp
#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  int n;
  cin>>n;

  vector<int>cnt(n+1);

  for(int i=0;i<n;i++){
    int x ;
    cin>>x ;
    ++cnt[x];
  }

  //Find maximum frequency (Team B limit)
  int mx = *max_element(cnt.begin(),cnt.end());
  //cout<<mx<<endl;

  //Count distinct skills (Team A limit)
  int diff = n+1- count(cnt.begin(),cnt.end(),0);
  cout<<max(min(mx-1,diff),min(mx,diff-1))<<endl;

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
