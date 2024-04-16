#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

int heightofTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int left=heightofTree(root->left);
    int right= heightofTree(root->right);

    return max(left,right)+1;

}
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

int main(){
    Node* root=NULL;
    root= buildTree();
    cout<<"Height off tree is : "<<endl;

    int h= heightofTree(root);
    cout<<h<<endl;

}