#include<bits/stdc++.h>
using namespace std ;
int main(){
   long long a,b,c,d ;
   cin>>a>>b>>c>>d ;
   bool result = b*log(a)>d*log(c);

   if(result)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    
    return 0;
}