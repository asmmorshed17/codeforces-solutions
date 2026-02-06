
//------------------------------------------------------------------
//  In the name of Allah , the Most Gracious, the Most Merciful
//------------------------------------------------------------------
// CF : Morshed17
//Author : A. S. M. MORSHED 
//Software Engineering, IIT
//Noakhali Science and Technology University
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define testcase int t;cin>>t; for(int i=1;i<=t;i++)


void solve (){

   int n,k;
   cin>>n>>k;

   int c = sqrt(9625-(40*k));
   int m = (-5+c)/10;

   if(m<n)cout<<m<<endl;
   else cout<<n<<endl;
   
}

int main(){
  
   optimize();

//    testcase{ 
   solve();
//    }

   return 0;
}

//https://codeforces.com/contest/750/problem/A

//A_New_Year_and_Hurry.cpp
