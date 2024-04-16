#include<iostream>
#include<vector>
using namespace std;


// log(n) time complexity
// n->size of array

// inbuild binarysearch also
// #include<algorithm>
//  binarySearch(arr,arr+n,target);
//  binarySearch(v.begin(),v.end(),target);



int binarySearch(vector<int>&arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } 

    return -1;

}

int main(){
    
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int target;
    cin>>target;

    cout<<"Entered array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Entered target is: "<<target<<endl;
    int ans=binarySearch(arr,target);
    if(ans==-1){
        cout<<"Element not present"<<endl;
    }else{
        cout<<"Element present at: "<<ans<<endl;
    }

    
}

