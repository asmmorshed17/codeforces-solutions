#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t ;
   int num ;
   while(t--){
    
    cin>>num ;
    long long sum = 0;
    while(num!=0){
     int rem = num % 10 ;
     sum+= rem ;
     num/= 10;
    }
    cout<<sum <<endl;
   }
   return 0;
}