#include<bits/stdc++.h>
using namespace std;

int main(){
    double value ;
    cin>>value ;
    
    double integral,fractional ;
    
    fractional = modf(value,&integral);
    
   if(fractional==0) 
   cout<<"int "<<integral<<endl;
   else
   cout<<"float "<<integral<<" "<<fractional<<endl;
    
    return 0;
}
/*
Interger part of 28.937 is: 28
Fraction part of 28.937 is: 0.937
*/