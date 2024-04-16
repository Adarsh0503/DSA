#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    fun(n-1);
   
    return 0;
}

int findpow(int n, int k){

    if(k==0){
        return 1;
    }

    int ans= n*findpow(n,k-1);

    return ans;

}

int fibonacii(int n){
    // base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans= fibonacii(n-1)+fibonacii(n-2);
    return ans; 
}
int main(){
    fun(5);
    cout<<endl;

    int n=3;
    int k=4;
    int f;
    cout<<"The value of "<<n<<" to the power "<<k<<" is "<<endl;
    cout<<findpow(n,k);
    cout<<endl;
    cout<<"enter the term u want to see"<<endl;
    cin>>f;
    int ans=fibonacii(f);
    cout<<f<< "th term is "<<ans<<endl;
    return 0;
}