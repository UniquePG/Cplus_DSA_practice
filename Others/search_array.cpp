#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
        return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
cout<<"This is your array: ";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
cout<<"\n"; 

    int key;
    cout<<"Enter your key you want to find: ";
    cin>>key;

    cout<<linearsearch(arr, n, key)<<endl;

    return 0;
}