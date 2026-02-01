#include<bits/stdc++.h>
using namespace std ;
int main(){
    int num ;
    cin>>num ;
   int last_digit = num%10 ;
   int temp = num/ 10 ;
   int first_digit = temp%100 ;
 
   if(last_digit % first_digit== 0  || first_digit%last_digit==0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 
    return 0;
}

//A.S.M.MORSHED
//CF : Morshed17
//Software Engineering
//Noakhali Science and Technology University