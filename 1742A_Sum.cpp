#include<stdio.h>
 
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
 
 int a,b,c ;
 scanf("%d%d%d",&a,&b,&c);
 
 if(a+b==c || b+c== a || a+c ==b ){
    printf("YES\n");
 }
 else{
    printf("NO\n");
 }
}
}
/*
342 = 3+4+2 = 9
 
*/