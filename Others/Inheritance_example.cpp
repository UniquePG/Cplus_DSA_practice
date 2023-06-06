#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    protected:
        int a, int b;
    public:
        void getValue(){
            cout<<"Enter two numbers: "<<endl;
            cin>>a>>b;
        }
        void caculate(){
            int sum;
            float subtract;
            int multiply;
            float devision;
            sum = a+b;
            subtract = a-b;
            multiply = a*b;
            division = a/b;
        }

};
class scientificCalculator{
    protected:
        int square;
        int squareroot;
    public:
        void process2(){
            squareroot = sqrt(a);
            squareroot = sqrt(b);


        }

};
class HybridCalculator : public simpleCalculator, public scientificCalculator{
    public:
        void show(){
            
        }
    
};  
int main(){
    
    return 0;
}