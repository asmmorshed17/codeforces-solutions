#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int N = 2, M = 51;

    vector<int>v;

    while (N<M) 
    {
        bool flag = true;

        for(int i=2;i*i<=N;i++){
            if(N%i==0){
                flag = false;
                break;
            }
        }

        if(flag)v.push_back(N);
        N++;
    }

    // for(auto u:v)cout<<u<<" ";
    // 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 

    bool isNext = false;
    for(int i=0;i<v.size();i++){
        if(v[i]==n && v[i+1]==m)
         isNext = true ;
    }

    if(isNext)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main(){

    solve();
    return 0;

}

//A_Panoramix_s_Prediction.cpp
//brute force, *800