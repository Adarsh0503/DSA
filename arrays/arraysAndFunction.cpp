#include<iostream>
using namespace std;

bool isPresent(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return true;
        }
    }
         return false;
    
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=isPresent(arr,n,key);
    if(ans==1){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
return 0;
}