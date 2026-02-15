
/* Bismillahir Rahmanir Rahim */

//1335_C_Two_Teams_Composing.cpp

//Binary Search, Sorting,Greedy,Implementation, *1100
#include<bits/stdc++.h>
using namespace std;

#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'


void solve()
{
  long long n;
  cin>>n;

vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];

long long freq[200007] = {0};

if(n==1){
    cout<<"0"<<endl;
}
else{
    long long count_unique = 0;
    long long count_same = 0;

    for(int i=0;i<n;i++){
        if(freq[v[i]]==0){
            freq[v[i]]++;
            count_unique++;
            count_same = max(count_same,freq[v[i]]);
        }
        else{
            freq[v[i]]++;
            count_same = max(count_same,freq[v[i]]);
        }
    }

    if(count_same== count_unique-1)cout<<count_same<<endl;
    else {


    long long ans = max( min(count_same,count_unique-1),
                        min(count_same-1,count_unique)
                        );

                        cout<<ans<<endl;
                        }
}
}



int main()
{
    optimize();
    //  testcase{
    // solve();
    // }

   // solve();
   testcase solve();
    return 0;
}
