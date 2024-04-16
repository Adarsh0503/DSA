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

Node* reverseLL(Node* &head){
    if(head==NULL){
        return NULL;
    }

    if(head->next=NULL){
        return head;
    }

    Node* curr=head;
    Node* prev=NULL;
    Node* right=NULL;

    while(curr!=NULL){
        right=curr->next;
        curr->next=prev;
        prev=curr;
        curr=right;
        
    
    }

    return prev;
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
  
    Node* =reverseLL(first);
    cout<<endl;
    print(ans);


}