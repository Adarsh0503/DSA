#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

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

int getLengthofLL(Node* &head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }

    return length;
}
Node* KthNodefromend(Node* &head, int pos){
    Node* temp=head;

    int totalLength=getLengthofLL(head);
    int count=totalLength-pos-1;

    while(count--){
        temp=temp->next;
    }

    return temp;
}

int main(){

    Node* f=new Node(10);
    Node* s=new Node(20);
    Node* t=new Node(30);
    Node* fo=new Node(40);
    Node* fi=new Node(50);

    f->next=s;
    s->next=t;
    t->next=fo;
    fo->next=fi;
    fi->next=NULL;

    print(f);

    int ans= getLengthofLL(f);
    cout<<endl;
    cout<<"The size of ll is "<<ans<<endl;
    int pos=3;
    Node* answer=KthNodefromend(f,pos);
    cout<<"The "<<pos<<" position from end is "<<answer->data<<endl;

}