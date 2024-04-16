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

void print(Node* &head ){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertion(Node* &head, Node* &tail, int data){
    // chechk for empty link list
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    
    Node * newNode= new Node(data);
    newNode->next=head;
    head=newNode;

}


void insertAfterHead(Node* &head,Node* &tail, int data){

    // chechk for empty link list
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    
    Node * newNode= new Node(data);

    // current k tail se newnode ko attach krdo
    tail->next=newNode;
 
    tail=newNode;
    
    

}

int main(){

    Node* head= NULL;
    Node* tail= NULL;
    // Node* tail= new Node(5);

    // insertion(head,tail,1);
    // insertion(head,tail,2);

    // insertion(head,tail,3);

    insertAfterHead(head,tail,20);
    insertAfterHead(head,tail,30);
    insertAfterHead(head,tail,40);



    print(head);

    return 0;


}
