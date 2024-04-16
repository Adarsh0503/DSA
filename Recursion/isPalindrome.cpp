#include<iostream>
using namespace std;

bool isPalindromic(string word, int start, int end){
    if(start>end){
        return true;
    }
    if(word[start]!=word[end]){
        return false;

    }
    else{
        return isPalindromic(word,start+1,end-1);
    }
    

    

}

int main(){
    string word="apple";
    int start=0;
    int end=word.size()-1;

    if(isPalindromic(word,start,end)){
        cout<<"Given word is palindromic";
    }else{
        cout<<"given word is not palindromic";
    }

    return 0;
}