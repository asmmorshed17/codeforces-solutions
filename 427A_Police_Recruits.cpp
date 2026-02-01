//A_Police_Recruits.cpp
//https://codeforces.com/problemset/problem/427/A
//implementation, *800

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    int unTreated = 0;
   int current_police=0;
    for(int i=0;i<n;i++){
        cin>>v[i];

        if(v[i]>0){
            current_police+=v[i];
        }
        else{
            if(current_police>=1){
                current_police--;
            }
            else{
                unTreated++;
            }
        }
    }
    cout<<unTreated<<endl;
}

int main(){
    
    solve();
}

//A.S.M.MORSHED
//CF : Morshed17
//Software Engineering
//Noakhali Science and Technology University