#include<stdio.h>
void main()
{
    int i,n,t;
    do{
    printf("number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        t=i*n;
        printf("%d*%d=%d\n",i,n,t);
        i++;}
    }while(n>0);
   }
 


   

