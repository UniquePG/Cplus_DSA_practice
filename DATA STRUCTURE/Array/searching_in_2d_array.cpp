#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];

        }
    }
    
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    int key;
    cout<<"Enter your searching element: ";
    cin>>key;

    bool flag = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j<<"\n";
                flag= true;
            }
        }
    }
    if(flag){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }

    
    return 0;
}