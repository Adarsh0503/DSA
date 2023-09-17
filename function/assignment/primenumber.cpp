#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
        
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    // bool ans=
    if(isPrime(n)){
        cout<<"The number is a prime number"<<endl;
    }else{
        cout<<"The number is not prime number"<<endl;
    }
    return 0;
}