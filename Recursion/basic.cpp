#include<iostream>
using namespace std;

// reverse counting problem

void printArray(int n){
    if(n==0){
        return ;
    }else{

    cout<<n<<" ";

    printArray(n-1);
    }
}

// factorial example

int factorial(int n){
    int ans;

    if(n==1){
        // base case

        return 1;
    }
    ans = n*factorial(n-1);



    return ans;
}
int fibonacii(int n){
    int nas;

    if(n==1 || n==2){
        return n-1;
    }else{

        nas=fibonacii(n-1)+fibonacii(n-2);
    }

    return nas;
}

int main(){
    int n=10;

    printArray(10);cout<<endl;

    int ans= factorial(10);
    cout<<ans<<endl;;
    int nas= fibonacii(8);
    cout<<"fibonacii ans"<<endl;
    cout<<nas;
}
