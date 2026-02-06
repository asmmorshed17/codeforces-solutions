//1154_A_Restoring_Three_Numbers.cpp
//https://codeforces.com/contest/1154/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(4);

    for(int i=0;i<4;i++)cin>>v[i];

    sort(v.rbegin(),v.rend());

    int c = v[0]-v[1];

    int b = v[2]-c;
    int a = v[3]-c ;
    cout<<a<<" "<<b<<" "<<c<<endl;

}