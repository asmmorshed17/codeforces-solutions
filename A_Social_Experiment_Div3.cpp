/* Bismillahir Rahmanir Rahim */

//https://codeforces.com/contest/2184/problem/A

#include<bits/stdc++.h>
using namespace std;
        
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
    int n;
    cin>>n;

    if(n<=3) cout<<n<<endl;
    else if(n%2==0)cout<<0<<endl;
    else cout<<1<<endl; 
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
//math
//Codeforces Round 1072 (Div. 3)

