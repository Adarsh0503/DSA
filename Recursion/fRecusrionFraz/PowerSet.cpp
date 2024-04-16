#include<iostream>
#include<vector>
using namespace std;

void powerSet(vector<string>set, vector<string>output, int i, vector<vector<string>>&ans){

    // include exclude wala pattren use

    // base case

    if(i>=set.size()){
        ans.push_back(output);
        return;
    }

    powerSet(set,output,i+1,ans);
    output.push_back(set[i]);
    powerSet(set,output,i+1,ans);




   


   






}
vector<vector<string>>solution(vector<string>set){
    vector<string>output;
    vector<vector<string>>ans;
    int index=0;
    powerSet(set,output,index,ans);
    return ans;
}


int main(){


    vector<string>set={"a","b","c"};


    vector<vector<string>>answer=solution(set);

    for (int i = 0; i < answer.size(); i++)
    {

       for (int j = 0; j < answer[i].size(); j++)
       {
        /* code */
        cout<<answer[i][j]<<" ";
       }
       cout<<endl;
       
    }
    
    

}