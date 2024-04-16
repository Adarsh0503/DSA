#include<iostream>
using namespace std;


void printDigit(int n){
    if(n==0){
        return;
    }

    // 1 case

    
    


    // rest case recusrsion
    printDigit(n/10);

    int digit=n%10;
    cout<<digit<<" ";

}

int main(){

    int n=0002;
    printDigit(n);

    
}