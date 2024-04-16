#include<iostream>
using namespace std;

void lastOccurence(string&str, int i, int& ans, char& target){

    if(i>=str.length()){
        return ;
    }
    if(str[i]==target){
        ans=i;
       

    }
     lastOccurence(str,i+1,ans,target);
    

}


// right to left wala tareeka 

void last(string&str, int j, int &ans2, char& target){
    // base case 
    if(j<0){
        return;
    }

    // recusion 
    if(str[j] ==target){
      ans2=j;
      return;
    }
   

   last(str,j-1,ans2,target);
}


int main(){



    string str="dabcegd";
    int i=0;
    char target='d';
    int ans=-1;
    int ans2=-1;
    int j=str.length()-1;
    lastOccurence(str,i,ans,target);
    last(str,j,ans2,target);

    cout<<ans;

    cout<<endl;
    cout<<ans2<<endl;
}