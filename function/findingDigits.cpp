#include<iostream>
using namespace std;
void digits(int n){
  while(n!=0){
    int ans= n%10;
    cout<<ans;
    n=n/10;
  }

}
int number(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans*10+arr[i];
    }
    return ans;
}
int countSetbits(int n){
    int count=0;
    while(n>0){
        int ans=n%2;
        n=n/2;
        if(ans==1){
        count++;
    }
    }
    
    return count;
}

int countSetBits(int n){
    int ans=0;
    while(n>0){
        if(n & 1){
            ans++;
        }
        n=n>>1;
    }
    return ans;
}

int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // digits(n);
// int solution = number(arr,n);
// cout<<solution<<endl;

int number;
cin>>number;
int solution2=countSetbits(number);
cout<<solution2<<endl;
int optimisedSolution=countSetBits(number);
cout<<"Easy solution"<<endl;
cout<<optimisedSolution<<endl;
    return 0;

}