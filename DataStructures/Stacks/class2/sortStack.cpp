#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;


void insertSorted(stack<int>&s, int target){

    if(s.empty()){
        s.push(target);
        return;

    }
    
    if(s.top()>=target){
            s.push(target);
            return;
        }
    int topElement=s.top();
    s.pop();
    insertSorted(s, target);

    //bt

    s.push(topElement);

    

}
void sortStack(stack<int>&s){
    // base case
    if(s.empty()){
        return ;
    }

    int topElement=s.top();
    s.pop();

    sortStack(s);

    // bt
    insertSorted(s,topElement);

}

int main(){

    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(9);
    s.push(3);
    s.push(7);
    s.push(6);

    sortStack(s);
    
  
    cout<<"Printing the stack "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
