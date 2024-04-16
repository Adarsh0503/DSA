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
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int length(Node* &head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

int middle(Node* &head){
    int size=length(head);
    int i=1;
    Node* temp=head;

    if(size%2==0){
        while(i<=size/2){
            if(i==size/2){
                // cout<<temp->data;
                return temp->data;
            }
            temp=temp->next;


            i++;
            
        }
    }else{
        while(i<=(size/2)+1){
            if(i==(size/2)+1){
                // cout<<temp->data;
                return temp->data;
            }
            temp=temp->next;
            i++;
        }
    }

}

Node* tortoiseAlgo(Node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return head;

    }
    if(head->next==NULL){
        return head;
    }

    // ll has more than 1 nodes
    Node* fast=head->next;
    Node* slow=head;


    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
       


    }
    return slow;
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


    print(first);   
    int ans=middle(first);
    cout<<endl<<"Middle node is: "<<endl;

    cout<<ans<<endl;;
    Node* answer=tortoiseAlgo(first);
    cout<<answer->data;


}