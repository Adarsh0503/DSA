#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,3,4,5};
    vector<int>brr{6,7,8};
    vector<int>ans;
    int m=arr.size();
    int n=brr.size();
    for(int i=0;i<m;i++){
    ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
    ans.push_back(brr[i]);
    }

    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }


}