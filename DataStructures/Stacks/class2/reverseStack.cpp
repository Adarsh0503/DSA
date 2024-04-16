#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

void insertAtBottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return ;
    }


    int top=s.top();
    s.pop();

    insertAtBottom(s,target);

    s.push(top);


}

void reverseStack(stack<int> &s){
    
    if(s.empty()){

        return;
    }
    int target=s.top();
    s.pop();
    reverseStack(s);
    
    insertAtBottom(s,target);

    



}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    // int lengthofStack=s.size();
    reverseStack(s);
    
  
    cout<<"Printing the stack "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
