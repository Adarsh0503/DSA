#include<iostream>
#include<vector>
using namespace std;

void uniqueUnion(vector<int>&arr, vector<int>&brr){
    vector<int>ans;
    int i=0;
    int j=0;
    for(i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT16_MIN;
            }
           
        }
    }

        for(int j=0;j<brr.size();j++){
        if(brr[j]!=INT16_MIN){
        ans.push_back(brr[j]);
        }
    }
    
    



    //printing answer;
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

        
    }


int main(){
       int n;
    int m;
    cin>>n;
    cin>>m;

    vector<int>arr(n);
    vector<int>brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    uniqueUnion(arr,brr);

}
