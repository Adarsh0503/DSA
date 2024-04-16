#include<iostream>
using namespace std;


int climbStairs(int n){

    // base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }

    int partialAns= climbStairs(n-1)+climbStairs(n-2);

    return partialAns;
}

int main(){
    int n;
    cin>>n;

    int ans = climbStairs(n);

    cout<<ans;
}