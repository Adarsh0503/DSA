#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr, int start, int end){

    int mid=start+(end-start)/2;

    // copy items;
    int len1=mid-start+1;
    int len2=end-mid;

    int* rightArray=new int[len2];
    int *leftArray=new int[len1];

    // now copy form actual array

    int k=start;
    for(int i=0;i<len1;i++){
        leftArray[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        rightArray[i]=arr[k];
        k++;
    }

    // now merge them

    int leftIndex=0;
    int rightIndex=0;
    int index=start;

    while(leftIndex<len1 && rightIndex<len2){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[index++]=leftArray[leftIndex++];
        }else{
            arr[index++]=rightArray[rightIndex++];
        }

    
    }
    //copy logic for leftarray
    while(leftIndex<len1){
        arr[index++]=leftArray[leftIndex++];
    }
    while(rightIndex<len2){
         arr[index++]=rightArray[rightIndex++];
    }



}

void mergeSort(int* arr,int start, int end){

    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;



//    divide and conqueror technique
    mergeSort(arr,start,mid);

    mergeSort(arr,mid+1,end);



///  merge karne k liye 
    merge(arr,start,end);
}


int main(){

    int arr[18]={7,3,2,16,1,24,4,11,0,9,45,23,100,12,5,78,6,4};
    int start=0;
    int end=17;
    cout<<"hello"<<endl;

    mergeSort(arr,start,end);

    for(int i=0;i<18;i++){
cout<<arr[i]<<" ";
    }



}