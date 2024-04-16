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
    ~Node(){
        // write a destructor

        cout<<"Node with value: "<<this->data<<" "<<"deleted"<<endl;
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

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    } 
    return len;
}
void deleteNode(Node* &head,Node* &tail,int pos){
    if(head==NULL){
        cout<<"LL is empty cant delete "<<endl;
        return ;
    }

    // delete from start
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    // delete from last;
    int len=findLength(head);

    if(pos==len){
        // find prev
        int i=1;
        Node* prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }


        // step2
        prev->next= NULL;
        // step3
        Node *temp=tail;
        tail=prev;
        /// step 5
        delete temp;
        return;
    }

    // delete in between

    // find prev and curr
    int i=1;
    Node*prev=head;
    while(i<pos-1){
        prev=prev->next;
        i++;
    }

    Node* curr=prev->next;

    // step2 
    prev->next=curr->next;

    // step3
    curr->next=NULL;
    //STEP4
    delete curr;



}

int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtHead(head,tail,100);

    print(head);
    cout<<endl;

    deleteNode(head,tail,3);
    cout<<endl;
    print(head);

}