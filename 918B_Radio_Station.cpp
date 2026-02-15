

//918B_Radio_Station.cpp
//https://codeforces.com/contest/918/problem/B

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    int n,m ;
    cin>>n>>m;

    map<string,string> ipName ;

    for(int i=0;i<n;i++){
        string name,ip ;
        cin>>name>>ip;

        ipName[ip] = name ;
    }

    while (m--)
    {
        string str,ip;
        cin>>str>>ip ;
        
        //for removing -> ;
        ip.pop_back();

        cout<<str<<" "<<ip<<"; #"<<ipName[ip]<<endl;
    }
    
 
}
 
 
int main()
{
    optimize();
    
   solve();
//    testcase solve();
 
    return 0;
}

//implementation, strings, *900
/*
 2 2
main 192.168.0.2
replica 192.168.0.1
block 192.168.0.1;
proxy 192.168.0.2;

------------------
block 192.168.0.1; #replica
proxy 192.168.0.2; #main

*/

/*
3 5
google 8.8.8.8
codeforces 212.193.33.27
server 138.197.64.57
redirect 138.197.64.57;
block 8.8.8.8;
cf 212.193.33.27;
unblock 8.8.8.8;
check 138.197.64.57;
--------------------------------
redirect 138.197.64.57; #server
block 8.8.8.8; #google
cf 212.193.33.27; #codeforces
unblock 8.8.8.8; #google
check 138.197.64.57; #server
*/