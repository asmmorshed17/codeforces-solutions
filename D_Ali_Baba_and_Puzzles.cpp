#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long a,b,c,d ;
    cin>>a>>b>>c>>d ;

    if((a+b-c==d) || (a-b+c==d) || (a+b*c==d) || (a*b+c==d) || (a-b*c==d) || (a*b-c==d)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

//A.S.M.MORSHED
//CF : Morshed17
//Software Engineering
//Noakhali Science and Technology University