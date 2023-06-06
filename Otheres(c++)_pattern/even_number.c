#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    scanf("%d", n);

    int even =0;
    int odd =0;
    int count = 1;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even += count;
        }
        else
            odd += count;
    }

    printf("%dThe number of even digits: ",even);
    
    printf("%dThe number of odd digits: ",odd);
    
   
}