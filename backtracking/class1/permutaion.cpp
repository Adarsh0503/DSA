#include<iostream>
#include<vector>
using namespace std;


void permut(string&str, int i){
    if(i>=str.length()-1){
        cout<< str<<" ";
        return;
    }

// swapping 

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);

        permut(str,i+1);

        // backtracking 
         swap(str[i],str[j]);


    }



}

int main(){
    string str="abc";

    int i=0;

    permut(str,i);
}