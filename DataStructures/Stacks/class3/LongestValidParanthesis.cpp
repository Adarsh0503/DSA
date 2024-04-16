#include<iostream>
#include<stack>
using namespace std;

int longestValid(string &s){
    stack<int>st;
    int maxi=0;
    int length=0;
    st.top()=-1;

    for(int i=0;i<s.size();i++){
        char ch=s[i];


        if(ch=='('){
            st.push(i);
        }else{
            st.pop();
            if(!st.empty()){
                if(ch==')' )
               length = i-st.top();
                maxi=max(length,maxi);

            }else{
                st.push(i);
            }
        }
    }
    return maxi;
}

int main(){

    string s="(())()()";

    int ans=longestValid(s);

    cout<<ans<<endl;


    cout<<ans;
}


