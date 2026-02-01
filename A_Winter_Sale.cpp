//A_Winter_Sale.cpp

#include<bits/stdc++.h>
using namespace std;
int main(){
    double discount_percentage,discountedPrice ;
    cin>>discount_percentage>>discountedPrice ;

    double originalPrice = (discountedPrice)/(1-(discount_percentage/100));

    cout<<fixed<<setprecision(2)<<originalPrice<<endl;

}

//ICPC Assiut Uni.(Contest 1: Data Type-Conditions)