#include<iostream>
using namespace std;

void permut(string&str, int i){

    // base case

    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }


    for(int j=i;j<str.size();j++){
        // yeha swap krr rhe 
        swap(str[i],str[j]);


// recusrsion 
        permut(str,i+1);

        // backtrack
        swap(str[i],str[j]);
    }
}

int main(){
    string str="abc";
    int i=0;

    permut(str,i);
}