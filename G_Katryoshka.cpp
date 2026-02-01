#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long  e,m,b ;
    cin>>e>>m>>b ;
 
    long long  ans = min({e,m,b}); //1E 1M 1B
    e-=ans ;
    b-=ans ;
 
    long long extra = min(e/2,b);
 
    cout<<ans+extra<<endl;
 
    return 0;
}