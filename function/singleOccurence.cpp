#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
int ans;
    for(int i=0;i<5;i++){
    ans =arr[i]^arr[i+1];

    }
    cout<<ans;
}