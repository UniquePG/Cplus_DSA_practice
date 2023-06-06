#include<iostream>
using namespace std;


int sum(int a , int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a , int b , int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
} 

//calculate the volume of a cylinder
float volume(double r, int h){
    return(3.14 * r * r * h);
}

//calculate the volume of a cube
int valume(int a){
    return (a * a * a);

}

//calculate the volume of rectangle
int volume(int l , int b, int h){
    return(l * b * h);

}
int main(){
    
    cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl;

    cout<<"The sum of 3, 2 and 5 is "<<sum(3,2,5)<<endl;

    cout<<"The volume of cylinder of 4 and 5 is "<<volume(4, 5)<<endl;
    cout<<"The volume of cube of 4 , 3 and 5 is "<<volume(4, 3, 5)<<endl;
    cout<<"The volume of cylinder of 4 ,6 and 5 is "<<volume(4, 6, 5)<<endl;

    return 0;
}