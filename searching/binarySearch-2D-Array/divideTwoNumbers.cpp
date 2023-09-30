#include<iostream>
using namespace std;

int division(int dividend, int divisor){
    int ans=0;
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor>dividend){
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
    int dividend=22;
    int divisor=7;

    int ans= division(dividend,divisor);

    cout<<ans<<endl;
    double completeAns=ans;

    int precision=7;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=completeAns ;j*divisor<dividend;j=j+step){
            completeAns=j;
        }
        step=step/10;

       
        
    }
    cout<<"hi"<<endl;
    cout<<completeAns;
}