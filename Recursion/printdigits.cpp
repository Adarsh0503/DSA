#include<iostream>

using namespace std;
#include<vector>

void printdigits(int n, vector<int> & answer){
    if(n==0){
        return;
    }

    int dig= n%10;
    answer.push_back(dig);
    printdigits(n/10,answer);
}

int main(){
    int n=65712;
    vector<int>answer;

    printdigits(n,answer);
    for(int i=answer.size()-1;i>=0;i--){
        cout<<answer[i]<<" ";
    }
}