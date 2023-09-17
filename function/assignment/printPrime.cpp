#include <iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
        
    }
    return true;
    
}
void  printPrime(int n){
    vector<int>arr;
    for(int i=2;i<=n;i++){
        if(isPrime(i))
        arr.push_back(i);
        
        
    }  
    cout<<"The prime number between 1 to "<<n<<"are : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printPrime(n);
    return 0;
}