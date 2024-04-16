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

Node* reverseLL(Node* &head){
    Node* prev= NULL;
    Node* curr=head;
    Node* next=curr->next;
    while(curr !=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }

    return prev;
}
Node* solve(Node* &head1, Node* &head2){
    // reverse both LL

    head1=reverseLL(head1);
    head2=reverseLL(head2);



    //Add both LL

    Node* anshead=NULL;
    Node* ansTail=NULL;
    int carry=0;


    while(head1!=NULL && head2!=NULL){
        int sum=carry+head1->data+head2->data;
// FIND DIGIT 
        int digit=sum%10;
        carry=sum/10;

        // create the newnode for digit
        Node* newNode=new Node(digit);

        // attach krna hai anser wali LL me
        // attach the newnode to ans wali LL

        if(anshead==NULL){
            // 1st node insert
            anshead=newNode;
            ansTail=newNode;

        }else{
            ansTail->next=newNode;
            ansTail=newNode;
        }

        head1=head1->next;
        head2=head2->next;
        
        
        }

      
    // jab head1 list ki length head2 list se jyada

    while(head1 !=NULL){
        int sum=carry+head1->data;
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head1=head1->next;
    }

    // jab head2 list ki length head1 list se jyada
     while(head2 !=NULL){
        int sum=carry+head2->data;
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head2=head2->next;
    }
    
    // handle carry alag se // Move the temp pointer to the node before the new head
    temp = head;
    for (int i = 1; i < lengthofll - k; i++) {
        temp = temp->next;
    }

    // Break the list and update the head
    ListNode* newHead = temp->next;
    temp->next = NULL;
    temp = newHead;

    // Connect the original tail to the original head
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head;

    return newHead;
}
        while(carry!=0){
            int sum=carry;
            int digit=sum%10;
            carry=sum/10;
            Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;

        }
    // REveRse the ans LL

    anshead=reverseLL(anshead);
    return anshead;
}

int main(){
    Node* head1=new Node(2);
    Node* second1=new Node(4);
    head1->next=second1;

    Node* head2=new Node(2);
    Node*second2=new Node(3);
    Node* third2=new Node(4);

    head2->next=second2;
    second2->next=third2;

    //  print(head1);

    //  cout<<endl;
    //  print(head2);


     // solve
     Node* ans=solve(head1,head2);
     cout<<endl;

     print(ans);


}