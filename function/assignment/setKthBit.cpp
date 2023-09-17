#include<iostream>
using namespace std;

int setKthBit(int x, int k){
    return x | (1<<k);



}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int answer=setKthBit(n,k);
    cout<<answer<<endl;






}