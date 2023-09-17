#include<iostream>
#include<vector>
using namespace std;

void intersection(vector<int>&arr, vector<int>&brr){
    vector<int>common;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                common.push_back(arr[i]);
            }
                
            
        }
        
    }
    if(common.size()==0){
        cout<<"no unique elements"<<endl;
    }else{
    cout<<"Common elements are :"<<endl;
    for(int i=0;i<common.size();i++){
        cout<<common[i]<<" ";
    }
    }

}
int  main(){
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

    intersection(arr,brr);
    return 0;

    
}