/* Bismillahir Rahmanir Rahim */
//https://codeforces.com/contest/1703/problem/B

//
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
    map<char,int>freq;
    string str;
    cin>>str;
    int ans = 0;

    for(char x:str){
        freq[x]++;
        if(freq[x]==1)ans+=2;
        else ans+=1;
    }

    cout<<ans<<endl;

}


int main()
{
    optimize();
    
   // solve();
   testcase solve();

    return 0;
}
//data structuresimplementation*800
