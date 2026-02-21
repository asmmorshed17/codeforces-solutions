//275ALights_Out.cpp
//https://codeforces.com/contest/275/problem/A

#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for (int i= 1;i<=t;i++)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define ll long long

int light(int n){
    if(n==0) return 1;
    return 0;
}
 
void solve()
{
    int grid[3][3];
    int initallight[3][3];
    
    for (int i = 0; i <3; i++)    //input array in grid
    {
      for (int j = 0; j <3; j++)
      {
        cin>>grid[i][j];
        if (grid[i][j]%2==0) grid[i][j]=0;
        else  grid[i][j]=1;

        initallight[i][j]=1;
          
      }      
    }


    for (int i = 0; i<3; i++)
    {
      for (int j = 0; j<3; j++)
      {
          if(grid[i][j]==1){		//for odd input light status will change
            	initallight[i][j] =light(initallight[i][j]);			//changing light status
            	if(i>0){
                	initallight[i-1][j] =light(initallight[i-1][j]);		//changing light status
            	}
            	if(j>0){
                	initallight[i][j-1] =light(initallight[i][j-1]);		//changing light status
            	}
            	if(i<2){
                	initallight[i+1][j] = light(initallight[i+1][j]);		//changing light status
            	}
            	if(j<2){
                	initallight[i][j+1] = light(initallight[i][j+1]);	//changing light status
            	} 	 
        	}  
      }  
    }


     for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	cout<<initallight[i][j];		//output
    	}
    	cout<<endl;
    }
}
 

int main()
{
    optimize();
    
   solve();
//    testcase solve();

}

/*
1 0 1
8 8 8
2 0 3
----------------------
010
011
100
*/

/*
1 0 0
0 0 0
0 0 1
----------------
001
010
100
*/

//implementation, *900