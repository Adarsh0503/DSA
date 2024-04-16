#include<iostream>
#include<vector>
#include<queue>
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
// bool kthAncestor(Node* root, int k, Node* p){
//         // base case
//         if(root==NULL){
//             return false;
//         }

//         if(root->data==p->data){
//             return true;
//         }
//         bool lans= kthAncestor(root->left, k,p);
//         bool rans= kthAncestor(root->right,k,p);



//         // wapas aa rhe hoge tab check left me ya right ans mila ki nhi 
//         if(lans||rans){
//             k--;

//             if(k==0){
//             cout<<"Answer is : "<<root->data<<endl; 
//             }
//         }

//         return lans||rans;
// }


int kthAncestor(Node *root, int k, int node)

{
    vector<int>ans;
    int answer;

    // base case
    if(root==NULL){
        return 0;
    }
    
    int currdata=root->data;
    // check for current node
    ans.push_back(currdata);
    
    if(currdata==node){
        
        while(k--){
            ans.pop_back();
         
            if(k==0){
                  answer= ans.back();
    
            }
            k=-1;
        }
    }
    // leftcall
    int left= kthAncestor(root->left,k,node);
    ans.pop_back();
    
    // rightcall
    int right= kthAncestor(root->right,k,node);
    
    // backtrack
    
     
    return left||right;
        
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

    levelOrderTraversal(root);

    int k=2;
    int node=4;
    int ans= kthAncestor(root,k,node);

    cout<<"The kth anscestor is "<<endl;
    cout<<ans;


}