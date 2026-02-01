//C_Next_Alphabet.cpp
#include<bits/stdc++.h>
using namespace std ;
int main(){
    char ch ;
    cin>>ch ;
 
    if(ch=='z'){
        cout<<"a"<<endl;
    }
    else{ 
    int ascii = (int)ch ;
    cout<<(char)(ascii+1)<<endl;
    }
    return 0;
}

//A.S.M.MORSHED
//CF : Morshed17
//Software Engineering
//Noakhali Science and Technology University