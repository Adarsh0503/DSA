#include<iostream>
#include<vector>
using namespace std;
// maxuimum no of segments

int rodCut(int n, int x, int y, int z){
// base case 
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT16_MIN;
    }

    int ans1=rodCut(n-x,x,y,z)+1;
    int ans2=rodCut(n-y,x,y,z)+1;
    int ans3=rodCut(n-z,x,y,z)+1;

    int ans= max(ans1,max(ans2,ans3));
    return ans;

    

    



    
    
}

int main(){

    int n=7;
    int x=5;
    int y=2;
    int z=2;

    int answer=rodCut(n,x,y,z);
    if(answer<0){
        answer=0;
    }


    cout<<answer<<endl;


}