#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int maxSum(vector<int>&arr, int i){
    
    int sum=0;
    int ans=INT16_MIN;


    if(i>arr.size()-1){

        return f;
    }


    for(int i=0;i<arr.size();i++){
        // include
        ans=maxSum(arr,i+2);
        sum=sum+arr[i];

        // exclude
        ans=maxSum(arr,i+1);
        
    }

    return ans;
    






}

int main(){

    vector<int>arr={2,1,4,9};
    int i=0;
    int answer= maxSum(arr,i);
    cout<<answer<<endl;
}