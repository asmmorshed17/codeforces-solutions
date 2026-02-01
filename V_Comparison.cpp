#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a,b;
    char ch ;
    cin>>a>>ch>>b;
 
    if((a>b && ch=='>') || (a<b && ch=='<') || (a==b && ch=='='))
    {
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
 
    return 0;
}