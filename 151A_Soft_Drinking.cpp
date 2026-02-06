//151A_Soft_Drinking.cpp
//implementation, math, *800

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np ;

    int toast1 = (k*l)/nl;
    int toast2 = (c*d);
    int toast3  = (p*np);

    int ans= min(toast1,min(toast2,toast3))/n;
    cout<<ans<<endl;
}

/*
set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(e);
    cout<<*(s.begin())/n;
    */