#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int i, j, k;
    i=low;
    j=mid+1;
    k=low;
    // int n = high-low+1;
    int B[100];             // maximum array of size 100

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++; k++;
        }
        else{
            B[k]=arr[j];
            j++; k++;
        }
    }

         while(i<=mid){
        B[k]=arr[i];
            i++; k++;
    }

         while(j<=high){
        B[k]=arr[j];
            j++; k++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=B[i];
    }


}
void mergesort(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}
int main(){

    int arr[]={4,3,6,12,35,5,8,9,23,20};
    mergesort(arr,0,9);

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}