#include<iostream>
using namespace std;
int sum(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        count=count+i;
    }
    return count;
}
int evenSum(int n){
    int count=0;
    for(int i=2;i<=n;i+=2){
        count= count+i;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    int ans=sum(num);
    cout<<ans<<endl;
    
    int evenAns=evenSum(num);
    cout<<evenAns<<endl;
    return 0;
}