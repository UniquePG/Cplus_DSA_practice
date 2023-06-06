#include<iostream>
using namespace std;

int main()
{

    int n=7, i, j;
    for(i=1; i<=n; i++)
    {
        for ( j=1; j<=n; j++)
        {
            if(i==n/2+1 || j==n/2+1 ||
              (i==1 && j>=n/2+1) ||
              (i==n && j<=n/2)||
              (j==1 && i<=n/2) ||
              (j==n && i>=n/2+1))
                  cout<<"*";
            else
                cout<<" ";
            
        }cout<<endl;
        
    }
}