//1850B_Ten_Words_of_Wisdom.cpp
//https://codeforces.com/contest/1850/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }

        int pos=-1 ;
        int mx = -1;

        
        for(int i=0;i<n;i++){
           if(a[i]<=10 && mx<b[i]){
            mx = b[i];
            pos = i;
           } 
        }

    
        cout<<(pos+1)<<endl;

    }

    return 0;
}

