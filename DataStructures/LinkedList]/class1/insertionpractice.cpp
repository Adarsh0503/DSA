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

void insertAtHead(Node* &head, Node* &tail,int data){

    if(head==NULL){
        Node * newNode=new Node(data);
        head=newNode;
        tail=newNode;

    return;
    }
    Node* newNode= new Node(data);
    newNode->next=head;
    head=newNode;

}

void print(Node* &head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";

        temp=temp->next;
    }

}
void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node * newNode=new Node(data);
        head=newNode;
        tail=newNode;

        return;
    }

    Node* newNode= new Node(data);
    tail->next=newNode;
    tail=newNode;

}

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    } 
    return len;
}
void insertAtPos(Node* &head, Node* &tail, int position, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }

    int len=findLength(head);

    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }

    // find the position

    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }

    Node* curr=prev->next;

    Node* newNode=new Node(data);
    newNode->next=curr;
    prev->next=newNode;
}
int main(){

    Node* head= NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,70);

    print(head);
    cout<<endl;
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    insertAtPos(head,tail,6,100);
    print(head);
    cout<<endl;
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    
    

    return 0;



}