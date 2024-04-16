#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){
    // recursive function
    int data;
    cout<<"Enter the data ";
    cin>>data;


    // base case
    if(data==-1){
        return NULL;
    }

    // step 1
    Node* newNode= new Node(data);

    // STEP2
    cout<<"Enter data for left node "<<endl;
    newNode->left=buildTree();

    // step3
    cout<<"enter data for right part "<<endl;
    newNode->right=buildTree();
    return newNode;


}

void levelOrderTraversal(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //a
        Node* temp= q.front();
        //b
        q.pop();

        //c
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
        cout<<temp->data<< " ";
        
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

int main(){

    Node* root=NULL;
    root= buildTree();
}