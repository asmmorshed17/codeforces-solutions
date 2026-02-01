#include<bits/stdc++.h>
using namespace std;
int main(){
   int days ;
   cin>>days ;
 
   int yr ;
   int temp = days ;
   yr = days/365 ;
   temp%= 365 ;
   int month;
   month = temp/30 ;
   temp%=30 ;
   int day = temp ;
 
   cout<<yr<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl ;
 
    return 0 ;
}