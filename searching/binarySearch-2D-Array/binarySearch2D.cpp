#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<vector<int>> &arr, int n, int m, int target){
    int s=0;
    int e=m*n-1;
    int mid=s+(e-s)/2;
    

    while(s<=e){
        int row=mid/m;
        int col=mid%m;
        int element=arr[row][col];
        if(element==target){
            cout<<"Element found at "<<row<<" "<<col<<endl;
            return mid; 
        }else if(target>element){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}

int main(){

    int n,m;
    int target;
    cin>>n>>m;
    cout<<"eneter target"<<endl;
    
    cin>>target;

    // vector<vector<int>>arr;
    vector<vector <int> >arr(n, vector<int>(m));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int answer=BinarySearch(arr,n,m,target);
    cout<<answer<<endl;
 
}

