#include<iostream>
#include<vector>
#include<stack>
using namespace std;



int main(){
    vector<int> arr{2,1,4,3};

    vector<int>ans;

    stack<int>st;


    // from right side we can say that there must be no element smaller that last eleemnt to its right
    st.push(-1);
    // ulta traverse kr rhe kyunki we can say that last element say next smaller milega hi nhi so 
    // top of stack -1;
    for(int i=arr.size()-1;i>=0;i--){
        while(arr[i]<=st.top()){
            st.pop();
        }
        ans.push_back(st.top());
        st.push(arr[i]);
        

    }
    

    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}





