#include<iostream>
#include<vector>
using namespace std;

// YE POORA NHI HAI


void print(vector<int>&nums,int start, int end){
// base case

if(end==nums.size()){
    return;
}

for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
}
cout<<endl;



print(nums,start,end+1);
    

    

}

void printAll(vector<int>&nums,int start, int end){

    for(int i=0;i<nums.size();i++){
        print(nums,start+i,end);
    }
}
 


int main(){

    vector<int>nums={1,2,3,4,5};

    printAll(nums,0,0);

    return 0;

   



}
