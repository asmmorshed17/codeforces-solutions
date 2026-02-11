
/* Bismillahir Rahmanir Rahim */
//1335_B_Construct_the_String.cpp

//Constructive Algorithm, *900
#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  int n,a,b;
  cin>>n>>a>>b;

  for(int i=0;i<n;i++){
    cout<<char('a'+i%b);
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
