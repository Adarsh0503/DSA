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

bool detectLoop(Node* & head){
    Node* fast=head;
    Node* slow=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow){
            return true;
        }
    }
    return false;
}

Node* originofLoop(Node* & head){
    Node* slow=head;
    Node* fast=head;
   
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow){
            slow=head;
            break;
        }

    }
    
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;

    }
    
    return slow;



}

Node* removeLoop(Node* &head){
    Node* slow=head;
    Node* fast=head;
   
    while(fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow){
            slow=head;
            break;
        }

    }
    Node* prev= fast;
    while(fast!=slow){
        prev=fast;
        slow=slow->next;
        fast=fast->next;

    }
    prev->next=NULL;
    
    return slow;



}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node* fourth=new Node(60);
    Node* fifth=new Node(50);
    Node* sixth=new Node(80);
    Node* seventh=new Node(90);
    Node* eight=new Node(100);
    Node* ninth=new Node(120);


    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=ninth;
    ninth->next=fifth;


    bool ans=detectLoop(first);
    cout<<"Loop is "<<endl;
    print(first);

    if(ans==true){
        cout<<"LOOP PRESENT"<<endl;
    }else{
        cout<<"LOOP NOT PRESENT"<<endl;
    }
    cout<<"starting point of loop is "<<originofLoop(first)->data<<endl;

    cout<<"after removing the loop"<<endl;
    removeLoop(first);

    print(first);




}