#include<iostream>
using namespace std;

// here a ll is given  also value of k is given 
// you have to reverse thr ll in k pairs
// input-
// 10 20 30 40 50 60 
// k=3
// //output
// 30 20 10 60 50 40
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
int lengthofll(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;
}

Node* reverseLL(Node* &head,int k){
    // base case
    // if(){

    // }
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return NULL;
    }
    int length=lengthofll(head);
    if(k>length){
        return head;
    }

    

    Node* prev=NULL;
    Node*curr=head;
    Node* right=curr->next;
   
    int count=0;
    while(count<k){
    right=curr->next;
    curr->next=prev;
    
    prev=curr;
    curr=right;
    count++;
    }

    if(right!=NULL){
        // RECUSRION LAGENGE
        head->next=reverseLL(right,k);
    }

    return prev;


}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node* fourth=new Node(60);
    Node* fifth=new Node(70);
    Node* sixth=new Node(80);
    Node* seventh=new Node(90);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    int k=6;
    print(first);
    cout<<endl;
    Node* head= reverseLL(first,k);

    print(head);
}