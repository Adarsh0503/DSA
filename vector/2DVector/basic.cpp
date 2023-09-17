#include<iostream>
#include<vector>
using namespace std;


// vector<vector<int>>arr--> isse pt chala ki 2D vector create krna hai

// vector<vector<int>>arr(rows,vector<int>(col,0))  --> outer vector me kitni
//  rows and inner vector of size 5 and initialsed with 0






int main(){
    //vector of vector
    int row=3;
    int col=5;
    vector<vector <int> >arr(3, vector<int>(5,0));
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[0].size();j++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //create a 2D array with size 5 rows and 5 cols and initialize it with -8;
    vector<vector <int> >brr(5, vector<int>(5,-8));
    cout<<endl;
     for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[0].size();j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //input lo at 2nd row and 3rd col;
    cin>>brr[2][3];
    //value at 2nd row and 3rd column;
    cout<<brr[2][3];


// no of rows=arr.size();
// no of colums = arr[i].size if no of columns are diffrent 
// but if no of columns same for all then 
// no of cols=arr[0].size();

}


