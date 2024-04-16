#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
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