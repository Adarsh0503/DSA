#include<iostream>
using namespace std;

bool isAnagram(string & s, string& t){
    // basic approach use sorting 

    // approach 2 use counting 

    int hashMap[256]={0};

    for(int i=0;i<s.length();i++){
        hashMap[s[i]]++;
    }

    for(int i=0;i<t.length();i++){
        hashMap[t[i]]--;
    }

    for(int i=0;i<256;i++){
        if(hashMap[i]!=0){
            return false;
        }
    }
        return true;
    
}



int main(){

    string s;
    string t;
    getline(cin,s);
    getline(cin,t);

    bool ans= isAnagram(s,t);
    if(ans==1){
        cout<<"Valid anagram";
    }
    else{
        cout<<"Not a valid anagram";
    }




}
