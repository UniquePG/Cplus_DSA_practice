 #include<iostream>
 using namespace std;
 
 int main(){
    char arr[50] = "rahul";
    char arr1[50];

    // charactor array input & output
    cout<<"Enter your name ";
    cin>>arr1;
    cout<<arr1<<endl;


    cout<<arr<<endl;
    cout<<arr[2];      // To print 3rd letter of word....(isme n ke jagh n+1 chlta h)
     return 0;
 }