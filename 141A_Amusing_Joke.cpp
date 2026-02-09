
/* Bismillahir Rahmanir Rahim */
//141A_Amusing_Joke.cpp
//https://codeforces.com/contest/141/problem/A
//

#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  
string str1,str2,strFinal;
cin>>str1>>str2>>strFinal ;

str1+=str2 ;
map<char,int>cnt1 ;
for(int i=0;i<str1.size();i++){
    cnt1[str1[i]]++;
}
map<char,int>cnt2 ;
for(int i=0;i<strFinal.size();i++){
    cnt2[strFinal[i]]++;
}

//bool flag = (cnt1 == cnt2);  // C++ allows direct comparison of maps

bool flag = (cnt1 == cnt2);

if(flag)  cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}


int main()
{
    optimize();

   solve();
// testcase solve();
    return 0;
}

/*
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS

Output: YES
*/

/*
   string str1,str2,str3;
    cin>>str1>>str2>>str3;
    str1=str1+str2;

    sort(str1.begin(),str1.end());
    sort(str3.begin(),str3.end());

    if(str1==str3) cout<<"YES";
    else cout <<"NO";
*/

//implementation, sortings, strings, *800