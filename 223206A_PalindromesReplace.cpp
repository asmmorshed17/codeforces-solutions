//223206A_PalindromesReplace.cpp
//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    string s ;
    cin>>s ;

    int n = s.size();

    for(int i=0;i<n/2;i++){
        int j = n-1-i ;

        if(s[i]=='?' && s[j]=='?'){
            s[i] = s[j] ='a';
        }
        else if(s[i]=='?'){
            s[i] = s[j];
        }
        else if(s[j]=='?'){
            s[j] = s[i];
        }
        else if(s[i]!=s[j]){
            cout<<"-1"<<endl;
            return ;
        }

      
    }

      // middle character
    if(n%2==1 && s[n/2]=='?')
        s[n/2]='a';

    cout<<s<<endl;

}
 

int main()
{
    optimize();
    
   solve();
//    testcase solve();

}


/*
a?z?
azza
----------------
?ad?m
madam
*/