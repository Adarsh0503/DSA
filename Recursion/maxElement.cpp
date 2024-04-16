#include<iostream>
using namespace std;


void maxSum(int arr[], int n, int i, int& maxi){
   
    if(i>=n){
        return;
    }



    maxi=max(maxi,arr[i]);

    maxSum(arr,n,i+1,maxi);

    
}
int main(){

    int arr[8]={1,4,2,6,9,5,10,7};
    int n=8;
    int i=0;
    int maxi=INT16_MIN;


   maxSum(arr,n,i,maxi);
   cout<<maxi;
    // cout<<answer;
}