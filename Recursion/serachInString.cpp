#include<iostream>
#include<vector>
using namespace std;
void isPresent(string& str, char& key, int &length, int i, /*vector<int>& ans*/ int & count){

    
        if(i>=length){
            return;
        }

        if(str[i]==key){
            // ans.push_back(i);
            
            // agar count krna hai occurence ko to
            count++;

        }

        isPresent(str,key,length,i+1,count);

    
    }
int main(){
    


    string str="adarshgauravg";

    char key='g';
    int i=0;
    int length=str.length();

    vector<int>ans;
    int count=0;

    // isPresent(str,key,length,i,ans);
    
    // for(auto val:ans){
    //     cout<<val<<" ";
    // }

        isPresent(str,key,length,i,count);
        cout<<count;

    


   
}