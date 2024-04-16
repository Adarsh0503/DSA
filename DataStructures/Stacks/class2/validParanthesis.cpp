#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];


        if(ch=='(' || ch=='{' || ch=='['){
            //opening brackets
            st.push(ch);
            
        }
        else{
            // closing brackets
            if(!st.empty()){
                if(ch==')' && st.top()=='('){
                    st.pop();
                }
                else if(ch==']' && st.top()=='['){
                    st.pop();
                }
                else if(ch=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }

    
}

int main(){

    string s="{[]}()";

    bool ans= isValid(s);


    cout<<ans;
}