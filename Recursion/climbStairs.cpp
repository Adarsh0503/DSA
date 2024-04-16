#include<iostream>
using namespace std;

int climbStairs(int n){

    // base case

    if(n==0 || n==1){  // 0 pr pahuchne k 1 tareeka and 1st stair pahuchne k 1 tareeke 
        return 1;
    }

    int ans= climbStairs(n-1)+climbStairs(n-2);
}

int main(){

    int n;
    cin>>n;
    int ans=climbStairs(n);

    cout<<ans<<endl;
}