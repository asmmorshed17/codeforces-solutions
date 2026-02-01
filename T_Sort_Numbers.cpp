#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z ;
    cin>>x>>y>>z ;
 
    int arr[3] ={x,y,z};
 
    sort(arr,arr+3);
 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
cout<<endl<<x<<endl<<y<<endl<<z<<endl;
}