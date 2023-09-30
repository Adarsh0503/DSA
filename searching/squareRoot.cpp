#include<iostream>
using namespace std;

int squareRoot(int n){
    int s=1;
    int e=n;
    int target=n;
    int mid=s+(e-s)/2;
    int ans=0;
    // float val=0.1;
while(s<=e){
    if(target==(mid*mid)){
        return mid;
    }else if((mid*mid)>target){
        e=mid-1;
    }else{
        ans=mid;
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;

}
int main(){
    int n=10;
    int precision;
    cin>>precision;
    int ans=squareRoot(n);
    cout<<ans<<endl;
    double finalans=ans;

    double step=0.1;
    for(int i=0;i<precision;i++){


        for(double j=finalans;j*j<=n;j+=step){
            finalans=j;
        }
        step=step/10;
    }

    

    
    cout<<finalans;
}