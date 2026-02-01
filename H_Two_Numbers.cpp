#include<bits/stdc++.h>
using namespace std ;
int main(){
    int A , B ;
    cin>> A>>B ;
    
    double result = (double)A / B ;
    cout <<"floor "<<A <<" / " <<B  <<" = "<<(int)floor(result)<<endl;
    cout <<"ceil "<<A <<" / " <<B  <<" = "<<(int)ceil(result)<<endl;
    cout <<"round "<<A <<" / " <<B  <<" = "<<(int)round(result)<<endl;
    
 
    return 0 ;
}
/*
floor A / B → largest integer ≤ (A ÷ B)
 
ceil A / B → smallest integer ≥ (A ÷ B)
 
round A / B → nearest integer to (A ÷ B)
*/