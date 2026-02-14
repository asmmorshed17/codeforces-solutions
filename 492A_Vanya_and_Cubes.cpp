/* Bismillahir Rahmanir Rahim */
//https://codeforces.com/contest/492/problem/A
//
// 492A_Vanya_and_Cubes.cpp
//

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve()
{

    int n;
    cin>>n;
    int h=0,i=1,ans = 0;

    while (ans<=n)
    {
        ans+=(i*(i+1))/2 ;
        if(ans>n){
            break;
        }
        else{
            h++;
        }
        i++;
    }
    cout<<h<<endl;
}


int main()
{
    optimize();
    
   solve();
//    testcase solve();

    return 0;
}


// A. S. M. MORSHED