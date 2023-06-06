#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter row and column: ";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter your matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"This is your matix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Spiral order of this matrix: "<<endl;
    // Spiral order print

    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int column_end = m-1;

    while(row_start<=row_end && column_start<=column_end){
        // For starting row
        for(int col = column_start; col<=column_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        // for ending column
        for(int row = row_start; row<= row_end; row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;

        // For ending row
        for(int col = column_end; col>=column_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        // For starting colum 
        for(int row = row_end; row>=row_start; row--){
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}