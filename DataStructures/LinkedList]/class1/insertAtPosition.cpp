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
    // edge case hanndle kro for starting pos
    // if(position==0){
    //     insertAtHead(head,tail,data);
    //     return;
    // }
    // // last me agar daalana ho to 
    // int len=findLength(head);

    // if(position>=len){
    //     insertAtTail(head,tail,data);
    //     return;
    // }

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

void print(Node* &head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";

        temp=temp->next;
    }

}

int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtPos(head,tail,1,20);
    insertAtPos(head,tail,2,30);

    insertAtPos(head,tail,3,40);
    

    print(head);
}