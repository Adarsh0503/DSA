#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverseLL(Node* &prev, Node* &curr){
    // base case 

    if(curr==NULL){
        return prev;
    }

    // 1 case
    Node* forward=curr->next;
    curr->next=prev;

    reverseLL(curr,forward);

    

}
int main(){



    Node* first=new Node(10);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node* fourth=new Node(60);

    first->next=second;
    second->next=third;
    third->next=fourth;

    print(first);
  
    Node* curr=first;
    Node* prev=NULL;
    first=reverseLL(prev,curr);
    cout<<endl;
    print(first);


}