#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;




int firstOccurence(vector<int>&arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;

        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }

    return ans;

}

int lastOccurence(vector<int>&arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;

        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }

    return ans;

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
    int answer1=firstOccurence(arr,target);
    cout<<endl;
    int answer2=lastOccurence(arr,target);
    int answer3=answer2-answer1+1;

    cout<<"first occurence of "<< target<< " is : "<< answer1<<endl;
    cout<<"last occurence of "<<target<<" is: "<<answer2<<endl;
    cout<<"total Occurence of "<<target<<" is : "<<answer3<<endl;

//    auto ans2=lower_bound (arr.begin(),arr.end(),target);
//    cout<<"Using lowerBound inbuild function: "<<ans2-arr.begin()<<endl;



    
}

