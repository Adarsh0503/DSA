#include<iostream>
using namespace std;

long long factorial(int n){
    long long answer;
    if(n==1){
        return 1;
    }else{
        answer= n*factorial(n-1);

    }
    return answer;
}
int main(){
    long long n;
    cin>>n;
    cout<<factorial(n);
}
