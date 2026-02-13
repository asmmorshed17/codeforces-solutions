
/* Bismillahir Rahmanir Rahim */
////1283B_Candies_Division.cpp
//https://codeforces.com/contest/1283/problem/B
//

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

void solve()
{
 int n,k;
 cin>>n>>k; 
 int div = n/k ;
 int ans = div*k ;
 ans+= min(n%k,(k/2));
 cout<<ans<<endl;
}


int main()
{
    optimize();
    
   // solve();
   testcase solve();

    return 0;
}



//math, *900

/*
Firstly, we can notice that we always can distribute n−n%k
 (where % is the modulo operation) candies between kids. In this case a=⌊n/k⌋
 and the answer is at least ak
. And then we can add the value min(n%k,⌊k/2⌋)
 to the answer. Why? Because there is only n%k
 candies remain and the maximum number of kids to whom we can give one more candy is ⌊k/2⌋
.*/