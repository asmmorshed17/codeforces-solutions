
#include<bits/stdc++.h>
using namespace std;
#define testcase int t;cin>>t;for(int i=1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'

void solve(){
string str ;
cin>>str;
vector<char> v;
for(int i=str.size()-1;i>=0;i--){
    if(str[i]=='p'){
        v.push_back('q');
    }
    else if(str[i]=='q'){
        v.push_back('p');
    }
    else{
        v.push_back(str[i]);
    }
}

for(auto u:v){
    cout<<u;
}
cout<<endl;
}

int main(){
optimize();
testcase {
    solve();
}

return 0;
}

//implementation, strings, *800

/*
5 
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq
--------------------------
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq
*/