#include<iostream>
#include<queue>
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

int sum(Node* root){

    if(root==NULL){
        return 0;
    }

    
    int csum= root->data;

    int lsum= sum(root->left);
    int rsum= sum(root->right);

    return csum+lsum+rsum;

}

void convertToSumtree(Node* root){


    if(root==NULL){
        return;
    }


    int currSum= root->data;
    int leftSum= sum(root->left);
    int rightSum = sum(root->right);
    int newSum= currSum+leftSum+rightSum;

    root->data= newSum;

    // recursion
    convertToSumtree(root->left);


    convertToSumtree(root->right);



}

int main(){

    Node* root= NULL;
    root= buildTree();
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Printing after treesum calc : "<< endl;

    convertToSumtree(root);
    levelOrderTraversal(root);




}