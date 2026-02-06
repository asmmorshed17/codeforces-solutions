/* Bismillahir Rahmanir Rahim */
//
//
//

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  
int n;
cin>>n;
string str ;
cin>>str;

vector<char>v(n);
for(int i=0;i<str.size();i++){
    v[i] = str[i];
}
sort(v.rbegin(),v.rend());

cout<<(v[0]-'a')+1<<endl;

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
