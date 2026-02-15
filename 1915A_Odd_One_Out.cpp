
/* Bismillahir Rahmanir Rahim */
//1915A_Odd_One_Out.cpp
//https://codeforces.com/contest/1915/problem/A

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
    map<int,int>m;
    int x;
    for(int i=0;i<3;i++){
        cin>>x;
        m[x]++;
    }

    for(auto it:m){
        if(it.second==1)cout<<it.first<<endl;
    }
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

//bitmasks, implementation, *800

/*
        if(a==b && a!=c)
        {
            cout<<c<<endl;
        }else if(a==c && a!=b)
        {
            cout<<b<<endl;
        }else
        {
            cout<<a<<endl;
        }
*/