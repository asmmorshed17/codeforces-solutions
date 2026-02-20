//https://codeforces.com/problemset/problem/2009/A
//2009A_Minimize_!_.cpp

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    int a,b;
    cin>>a>>b ;
    int c = min(a,b);
    cout<<(a-c)+(b-c)<<endl;
}
 

int main()
{

    optimize();
    
//    solve();
   testcase solve();

}

//brute force,math,*800
