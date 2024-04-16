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

void sortBruteForce(Node* & head){
    int countOne=0;
    int countZero=0;
    int countTwo=0;

    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==0){
            countZero++;

        }
        else if(temp->data==1){
            countOne++;
        }
        else if(temp->data=2){
            countTwo++;
        }
        temp=temp->next;
    }
    temp=head;
    while(countZero--){
        temp->data=0;
        temp=temp->next;

    }
    while(countOne--){
        temp->data=1;
                temp=temp->next;

        
    }
    while(countTwo--){
        temp->data=2;
                temp=temp->next;

        
    }
}

void optimisedSort(Node* &head){
    
}




int main(){

     Node* first=new Node(2);
    Node* second=new Node(1);
    Node* third=new Node(1);
    Node* fourth=new Node(0);
    Node* fifth=new Node(0);
    Node* sixth=new Node(2);
    Node* seventh=new Node(0);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

     print(first);
     cout<<endl;
     sortBruteForce(first);
     cout<<"After sorting using Brute Force approach"<<endl;
     print(first);
    //  cout<<endl;
}