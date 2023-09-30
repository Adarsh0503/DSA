#include<iostream>
#include<string.h>

using namespace std;

bool isPalindromic(char ch[]){
    int s=0;
    int e=strlen(ch)-1;
    while(s<=e){
        if(ch[s]==ch[e]){
        s++;
        e--;
    }else{
        return false;
    }
    }      
return true;
}


int main(){
    char ch[100];
    cin.getline(ch,20);

    bool ans=isPalindromic(ch);
    if(ans==false){
        cout<<"The string is not a Palindromic string"<<endl;
    }else if(ans==true){
        cout<<"The string is a palindrome"<<endl;
    }

    return 0;


}

// timecomplexity -> O(n)
// spacecomplexity -> O(1)