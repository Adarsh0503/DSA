#include<iostream>
#include<vector>
using namespace std;


int main(){
    //vector dynamic array i.e size not fixed

    // vector<int>arr;
    // // vector<int>brr(1,10,-8);
    // vector <int>crr(10,-1);
    // int n;
    // cin>>n;
    // vector<int>drr(n);
    

    vector<int> arr;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    // int nas= (sizeof(arr)/sizeof(int));
    // cout<<nas;

    //insert;
//     arr.push_back(5);
//     arr.push_back(6);
//     arr.push_back(7);
//     arr.push_back(9);
//     arr.push_back(8);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }

//     //remove
// arr.pop_back();
// arr.pop_back();
// cout<<endl;
//   for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<endl;
//     }

int n;
cin>>n;
vector<int>brr(n,4);
for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
}
cout<<endl;
cout<<"size of brr"<<brr.size()<<endl;
cout<<"capacity of brr"<<brr.capacity()<<endl;

cout<<"printing crr"<<endl;





vector<int>crr{1,2,3,4,5,6};
for(int i=0;i<crr.size();i++){
    cout<<crr[i]<<" ";
}
}


