#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>&xv, int n, int i){

    // base case
    if(i==n-1){
        return true ;
    }
     // 1 case solve
     if(v[i+1]<v[i])
     return false;



     // baki recusion
     return checkSorted(v,n,i+1);
    
}

int main(){

    vector<int> v{1,3,5,6,8,9,12,24,21};
    int n=v.size();
    int i=0;

   bool isSorted= checkSorted(v,n,i);

   if(isSorted){
    cout<<"Array is sorted";
   }else{
    cout<<"Array is not sorted";
   }
   }
