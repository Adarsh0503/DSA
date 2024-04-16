#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();

    cout<<"size of stack is "<<st.size()<<endl;
    cout<<"top of stack is "<<st.top()<<endl;
    cout<<"Printing the stack "<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}