#include <iostream>
using namespace std;

int main()
{
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // Transpose of matrix[(row,col)-->(col,row)]

    cout<<"This is your transpose of matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}