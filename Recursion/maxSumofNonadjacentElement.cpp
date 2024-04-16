#include<iostream>
#include<vector>
using namespace std;

// House robber problem bhi similar hi hai


// yeha inclusion excluison ka use kr skte hai 

int maxSum(vector<int> arr, int i){
     int maxi=INT16_MIN;
    if(i>arr.size()-1){
        return maxi;
    }

   
    int sum=0;
    
        // include
        sum=arr[i]+maxSum(arr,i+2);

        //exclude
        sum=maxSum(arr,i+1);

        sum=max(sum,maxi);




    return sum;
    
    
    
    




}
int main(){
    vector<int>arr{2,1,4,9};
    int i=0;


    int ans=maxSum(arr,i);


    cout<<ans;



}