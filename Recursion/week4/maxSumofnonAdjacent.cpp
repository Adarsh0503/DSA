#include<iostream>
#include<vector>
#include<limits>

using namespace std;

void maxSum(vector<int>&arr, int i, int sum, int&maxi){

    // base case
    if(i>=arr.size()){
        maxi=max(maxi,sum);
        return;
    }


    // inclusion
    maxSum(arr,i+2,sum+arr[i],maxi);


    //exclusion
    maxSum(arr,i+1,sum,maxi);
}

int main(){

    vector<int>arr={1,2,3,1,3,5,8,1,9};
    int sum=0;
    int maxi=INT_FAST16_MIN;
    int i=0;    

    maxSum(arr,i,sum,maxi);

    cout<<maxi;
}