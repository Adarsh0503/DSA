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


void sort012(Node* &head){

    // This is a basic approach


    Node* temp=head;
    // if(temp==NULL){
    //     return;
    // }
    // if(temp->next==NULL){
    //     return temp;
    // }

    int count0=0;
    int count1=0;
    int count2=0;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }else{
            count2++;
        }
        temp=temp->next;
    }
    // step2 fill 0 1 and 2 in original LL

    temp=head;

    while(temp!=NULL){
        // FILL 0

        while(count0 --){
            temp->data=0;
            temp=temp->next;
        }

        //FILL 1

    while(count1 --){
            temp->data=1;
            temp=temp->next;
        }

        //FILL 2
    while(count2 --){
            temp->data=2;
            temp=temp->next;
        }
    }

    
}
void  sortUsingpointersReaplacement(Node* &head){
    Node*temp=head;

    if(temp==NULL){
        cout<<"LL is empty"<<endl;
    }
    

    // creating dummy nodes
    Node* zerohead=new Node(-1);
    Node* zeroTail=zerohead;

    Node* onehead=new Node(-1);
    Node* oneTail=onehead;

    Node* twohead=new Node(-1);
    Node* twoTail=twohead;


    // traversing original LL

    Node* curr=head;

    while(curr!=NULL){
       if(curr->data==0){
        // us node ko utha k zerohead wali LL me daalna hai
        Node* temp=curr;  // temp ka naam de diya
        curr=curr->next;  // curr ko aage badha diya
        temp->next=NULL; // isolate kr dia

        ////////////////////////////////
        // append the zero node in zerohead LL
        zeroTail->next= temp;
        zeroTail=temp;
       }

       else if(curr->data==1){
         // us node ko utha k zerohead wali LL me daalna hai
        Node* temp=curr;  // temp ka naam de diya
        curr=curr->next;  // curr ko aage badha diya
        temp->next=NULL; // isolate kr dia

        ////////////////////////////////
        // append the zero node in zerohead LL
        oneTail->next= temp;
        oneTail=temp;

       }
       else if(curr->data==2){
         // us node ko utha k zerohead wali LL me daalna hai
        Node* temp=curr;  // temp ka naam de diya
        curr=curr->next;  // curr ko aage badha diya
        temp->next=NULL; // isolate kr dia

        ////////////////////////////////
        // append the zero node in zerohead LL
        twoTail->next= temp;
        twoTail=temp;
       }
    }

    // yeha tak 3 LL ready hai (0,1,2) wali

    // join them



    // modify 1 wali list

    Node* temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    


    // remove dummy nodes


    

}

int main(){
    Node* first=new Node(2);
    Node* second=new Node(1);
    Node* third=new Node(1);
    Node* fourth=new Node(0);
    Node* fifth=new Node(0);
    Node* sixth=new Node(2);
    Node* seventh=new Node(1);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

     print(first);
     cout<<endl;

     cout<<"after sorting"<<endl;
     sort012(first);
     print(first);
     cout<<endl;

     cout<<"Using differnt approach pointers replacement"<<endl;

     sortUsingpointersReaplacement(first);



}