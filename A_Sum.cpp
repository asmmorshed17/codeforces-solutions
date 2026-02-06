//A_Sum.cpp
//implementation, *800
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
 
 int a,b,c ;
 cin>>a>>b>>c ;
 
 if(a+b==c || b+c== a || a+c ==b ){
    cout<<"YES"<<endl;
 }
 else{
        cout<<"NO"<<endl;

 }
}
}
/*
342 = 3+4+2 = 9
 
*/

/*
7
1 4 3
YES
2 5 8
NO
9 11 20
YES
0 0 0
YES
20 20 20
NO
4 12 3
NO
15 7 8
YES
*/