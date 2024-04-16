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


void printList(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* middleofLL(Node* &head){
    
    if(head==NULL){
        return head;
    }


    Node*fast=head->next;
    Node*slow=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;

         while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         }
         return prev;
}

bool checkPalindrome(Node* &head, Node* &middle){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }

    if(head->next==NULL){
        // only 1 node
        return true;
    }


    // middle node

    // reverse ll after middle
    Node* reverseLLkahead=reverse(middle->next);

    middle->next= reverseLLkahead;

    while(head!=NULL && middle->next!=NULL){
        if(head->data==middle->next->data){
            head=head->next;
            middle->next=middle->next->next;
        }else{
            return false;
        }
    }
    return true;



}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(30);
    Node* sixth=new Node(20);
    Node* seventh=new Node(100);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

    printList(first);
    cout<<endl;
    Node* answer=middleofLL(first);

    cout<<answer->data<<endl;


    Node* middle=middleofLL(first);
    bool isPalindeome=checkPalindrome(first, middle);

    if(isPalindeome){
        cout<<"LL is Palindromic"<<endl;
    }else{
        cout<<"LL is not palindromic"<<endl;
    }


}