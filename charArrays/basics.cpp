#include<iostream>

#include<string> // used for usimg getline function
using namespace std;


// int main(){

//     //char kuch bhi ho skta hai
//     //char takes 1 byte of space
//     // -128 to 127 range
//     // unsigned char array range is 0 to (2^8)-1
//     // char array not a datatype->as array also is not a datatype its data structure
//     // char is data type



//     //taking input in char array
//     char ch[100];
//     // //method1  -> entire character le liya

//     // cin>>ch;
//     // // entire output at once;
//     // cout<<ch;

//     //method2 
//     // ch[0]='a';
//     // ch[1]='b';
//     // cin>>ch[2];
//     // cout<<ch;

//     cin>>ch;
//     for(int i=0;i<10;i++){
//     cout<<ch[i]<<endl;

//     }
//     int ans=int(ch[6]);  // represents null charactyer

// cout<<ans;
// }


// Q1) CREATE CHARACTER ARRAY AND STORE FULL NAME;

int main(){

    char name[100];
    // cin>>name;
    // cout<<name;   // jaise space aaya (cin) reak krna band kr dega. 
    // cin k pass wo functionality nhi hai ki wo space tab enter ko read kr pae


    // getline function use kiya jata hai to solve this;

    // getline(cin,name);/
    cin.getline(name,60);
    cout<<name;




}