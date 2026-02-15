//1791A_Codeforces_Checking.cpp
/* Bismillahir Rahmanir Rahim */
//1791A_Codeforces_Checking.cpp
//https://codeforces.com/problemset/problem/1791/A
#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
char ch ;
cin>>ch ;
string str = "codeforces";
bool flag = false ;
for(auto u:str){
    if(u==ch){
    flag = true ;
    }
}

if(flag)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}


int main()
{
    optimize();
     testcase{
     solve();
     }

   // solve();
    return 0;
}
//implementation, strings, *800