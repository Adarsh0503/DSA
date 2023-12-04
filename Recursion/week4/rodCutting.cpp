#include<iostream>
#include<vector>
#include<limits>

using namespace std;


int rodCut(int n, int x, int y, int z){
    // base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT16_MIN;

    }
    int ans;
    int ans1=rodCut(n-x,x,y,z)+1;
    int ans2=rodCut(n-y,x,y,z)+1;
    int ans3=rodCut(n-z,x,y,z)+1;

    
    ans= max(ans1,max(ans2,ans3));


    return ans;



}

int main(){

int n=7;
int x=2;
int y=2;
int z=2;

int answer=rodCut(n,x,y,x);
if(answer<0){
    cout<<"not possible"<<endl;
}else{


cout<<answer<<endl;
}
return 0;


}