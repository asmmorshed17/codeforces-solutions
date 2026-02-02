//https://codeforces.com/problemset/problem/1703/A
//brute force, implementation, strings, *800
//1703_A_Yes_or_Yes.cpp

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve(){
    string str;
    cin>>str;
   
    // for(int i=0;i<str.size();i++){
    //     str[i] = toupper(str[i]);
    // }

    transform(str.begin(),str.end(),str.begin(),::toupper);
    // transform(str.begin(),str.end(),str.begin(),::tolower);
    // cout<<str<<endl;

    if(str=="YES")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    optimize();
    testcase{
        solve();
    }

    return 0;
}

/*

string s;
cin >> s;

//Convert String to Lowercase:
for (char &c : s) {
    c = toupper(c);
}

*/


/*
//Convert String to Lowercase:
for (char &c : s) {
    c = tolower(c);
}
*/
//toupper() and tolower() are in <cctype> (already included via bits/stdc++.h).


/*
s.begin()->start of the string
s.end() -> end of the string 
s.begin -> where the result is stored (Overwrite s (string))
::toupper() ->function that converts a character to uppercase.
*/