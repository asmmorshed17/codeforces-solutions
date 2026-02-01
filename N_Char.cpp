#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch ;
    cin>>ch ;
    
    if(islower(ch)){
        ch = toupper(ch);
    }
    else{
        ch = tolower(ch);
    }
    
    cout<<ch<<endl ;
    return 0 ;
 
}


/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch ;
    cin>>ch ;
    
    if(ch>='a' && ch<='z'){
        ch = ch - 32 ;
     
    }
    else{
        ch = ch +32 ;
    }
cout<<ch<<endl ;
return 0 ;
}

*/