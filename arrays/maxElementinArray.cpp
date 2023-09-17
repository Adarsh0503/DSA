#include<iostream>
using namespace std;

int max(int arr[], int size){
    int max=INT16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10]={1,4,5,2,21,76,32,2,-181,10};
    int size=10;
    int maximumNumber = max(arr,size);
    cout<<maximumNumber<<endl;

}