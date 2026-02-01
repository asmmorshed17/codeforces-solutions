#include<bits/stdc++.h>
using namespace std ;
int main(){
    string expr ;
    cin>>expr ;
    
    char op ;
    int A=0,B=0 ;
    int i =0 ;
    while(i<expr.size() && isdigit(expr[i])){
        i++ ;
    }
    
    op = expr[i];
  A = stoi(expr.substr(0,i));
  B = stoi(expr.substr(i+1));
    
    if(op=='+') cout<<A+B <<endl ;
    else if(op=='-') cout<<A-B<<endl ;
    else if(op=='*') cout<<A*B<<endl;
    else if(op=='/') cout<<A/B <<endl;
    
    return 0;
}