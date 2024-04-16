#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){

    int pivotIndex=s;
    int pivotElement=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[pivotIndex]){
            count++;
        }
    }
    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex=s+count;


    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        // galat wale case ie left me bda and right me chota
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }


    return s+count;
}

void quickSort(int *arr, int s, int e){
    if(s>=e){
        return ;
    }

    int pivotIndex=partition(arr,s,e);

    // cout<<pivotIndex;

    quickSort(arr,s,pivotIndex-1);
    quickSort(arr,pivotIndex+1,e);
}

int main(){

    int arr[21]={8,3,4,1,20,20,50,50,50,50,30,2,1,1,2,3,4,4,50,65,4};

    int s=0;
    int e=20;

    quickSort(arr,s,e);

    for (int i = 0; i < 21; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}