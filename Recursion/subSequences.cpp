#include<iostream>
#include<vector>
using namespace std;
// i/p- abc
// o/p- a,b,c,ab,ac,bc,abc,_   

// concept of Inclusion Exclusion use hota hai yeha 
// also answer in the form of 2 to the power (power set)

void subSequences(string str, string output, int i){

    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    subSequences(str,output,i+1);

    output.push_back(str[i]);
    subSequences(str,output,i+1);
}


int main(){

    string input="abc";

    string output="";
    int i=0;

    subSequences(input,output,i);

  
    

}