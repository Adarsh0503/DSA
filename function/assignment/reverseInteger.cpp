#include<iostream>
#include<limits>
using namespace std;
int reverse(int x){
    int ans=0;
    while(x>0){
    
        int rem=x%10;

        ans= ans*10+rem;
        x=x/10;

    }
    return ans;

}
int main(){
    int x;
    cin>>x;

    int output= reverse(x);
    cout<<output;


}