#include<iostream>
using namespace std;

bool find(string str, int i, char key){
    
    // base case
    if(i>=str.length()){
        return false;
    }

    if(str[i]==key){
        return true;
    }

    bool ans= find(str,i+1,key);

    return ans;

  



}

int main(){
    string str="AdarshGaurav";
    int i=0;
    char key='x';

    bool ans=find(str,i,key);

    if(ans){
        cout<<"key present "<<endl;
    }else{
        cout<<"Key not present"<<endl;
    }
}