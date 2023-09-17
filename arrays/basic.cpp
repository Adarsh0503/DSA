#include<iostream>
using namespace std;
int main(){
    //initialize of array
    // int arr[]={12,11,1,12,12};
    // int br[10]={1,2,2,3,4};
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(br)<<endl;
    // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;

    //Question1
    //take 5 elemenst input in array and print their doubles

    // int ans[5];
    // for(int i=0;i<5;i++){
    //     cin>>ans[i];
    // }
    // cout<<"input elements are "<<endl;
    //  for(int i=0;i<5;i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<5;i++){
    //     int doubl=2*ans[i];
    //     cout<<doubl<<" ";
    // }

///////////////////////////////////////////////////////////////

//QUESTION 2 CONVERT ALL VALUES OF ARRAY TO 1

int arr[]={1,3,4,5,7,9};
for(int i=0;i<6;i++){
    arr[i]=1;
}

for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}