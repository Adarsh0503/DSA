#include<iostream>

using namespace std;

bool isPal(string&str, int i, int j){


    if(i>j){
        return true;
    }

    if(str[i]==str[j]){
        isPal(str,i+1,j-1);
        return true;

    }
    return false;
}

int main(){


    string str="ad";
    int i=0;
    int j=str.length()-1;
;
    bool ans=isPal(str,i,j);

    if(ans==1){
        cout<<"Given string is a palindrome"<<endl;
    }else{
        cout<<"Given string is not a palindrome";
    }

}
