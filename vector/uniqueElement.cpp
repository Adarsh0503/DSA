#include<iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int>&arr, int n){
    int ans=0;
   for(int i=0;i<n;i++){
    ans=ans^arr[i];
   }
   return ans;
    
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
        
    // }
    int solution =uniqueElement(arr,n);
    cout<<solution<<endl;
    
}