//https://codeforces.com/problemset/problem/102/B

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve(){
string str;
cin>>str;

int time = 0;
while (str.size()!=1)
{
  ll sum = 0 ;
  for(auto c:str){
    sum+= c -'0';
  }
  str = to_string(sum);
  time++;
       
}


cout<<time<<endl;

}

int main(){

    optimize();
    solve();
    return 0;
}