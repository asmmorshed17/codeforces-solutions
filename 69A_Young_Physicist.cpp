//69A_Young_Physicist.cpp
//https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 /*
 3
3 -1 7
-5 2 -4
2 -1 -3

*/
void solve()
{
    int n ;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    vector<int>z(n);

    int X=0,Y=0,Z=0;
    for(int i=0;i<n;i++){
       cin>>x[i]>>y[i]>>z[i];
       X+=x[i];
       Y+=y[i];
       Z+=z[i];
    }

    if(X==0 && Y==0 && Z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    

}
 

int main()
{
    optimize();
    
   solve();
//    testcase solve();

}

//implementation,math,*1000
