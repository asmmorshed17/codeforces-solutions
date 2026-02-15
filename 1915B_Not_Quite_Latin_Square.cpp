#include<stdio.h>
#include<string.h>
int main(){
   int t ;
   scanf("%d",&t);

   while (t--){
      char str[3][4] ;
      for(int i=0;i<3;i++){
         scanf("%s",str[i]);
      }


     int freq[3];
     for(int i=0;i<3;i++){
      freq[i] = 0 ;
     }


     for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         int ind =  str[i][j] - 65 ; //char to int conversion 
         freq[ind] ++ ;
      }
     }


     for(int i=0;i<3;i++){
          if(freq[i]==2){
            char ch = i+65 ;  //int to char conversion
            printf("%c\n",ch);
          }
     }

   }
   return 0 ;
}

/*
3
ABC
C?B
BCA


BCA
CA?
ABC
?AB
BCA
ABC

A
B
C


*/

//bitmasks, brute force, implementation, *800
