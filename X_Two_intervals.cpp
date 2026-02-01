#include<bits/stdc++.h>
using namespace std ;
int main(){
    int l1,r1,l2,r2 ;
    cin>>l1>>r1>>l2>>r2 ;

    int left = max(l1,l2);
    int right = min(r1,r2);

    if(left<=right){
        cout<<left<<" "<<right <<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std ;
int main(){
    int l1,r1,l2,r2 ;
    cin>>l1>>r1;
    cin>>l2>>r2;
    
    if(r1<l2 || r2<l1)cout<<"-1"<<endl;
    else if(l1<=l2 && r1<=r2) 
    cout<<l2<<" "<<r1 <<endl;
    else if(l1<=l2 && r1>=r2)
    cout<<l2<<" "<<r2 <<endl;
    else if(l1>=l2 && r1>=r2)
    cout<<l1<<" "<<r2 <<endl;
    else if(l1>=l2 && r1<=r2)
    cout<<l1<<" "<<r1 <<endl;
    
    else 
    cout<<"-1"<<endl;

    
    return 0;
}


*/