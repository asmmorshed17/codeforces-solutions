#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long
 
void solve()
{
    ll n,count=3;
        cin>>n;
        if(n==0){
            cout<<1<<"\n";
        }
        else if(n==1){
            cout<<2<<"\n";
        }
        
        else if(n >= 2 && n <= 14){
            cout<<3<<"\n";
        }else if(n==15){
            cout<<4<<"\n";
        }
        else {
        
        count += (n / 15) * 3;
        
        if(n%15==0){
            cout<<(count-2)<<"\n";
        }
        else if(n%15==1){
            cout<<(count-1)<<"\n";
        }
        else cout<<count<<"\n";
    }

}
 

int main()
{
    optimize();
    
//    solve();
   testcase solve();

}

