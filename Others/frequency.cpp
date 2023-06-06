#include<iostream>
using namespace std;

int main(){
    int a, rem;
    int o =0, t=0, th=0, f=0, fi=0, s=0, se=0, e=0, n=0, z=0;
    cout<<"Enter your number"<<endl;
    cin>>a;

    while(a>0){
        rem = a%10;
        a = a/10;
        switch(rem){
            case 0:
                z++;
                break;
            case 1:
                o++;
                break;
            case 2:
                t++;
                break;
            case 3:
                th++;
                break;
            case 4:
                f++;
                break;
            case 5:
                fi++;
                break;
            case 6:
                s++;
                break;
            case 7:
                se++;
                break;
            case 8:
                e++;
                break;
            case 9:
                n++;
                break;
        default:
        cout<<"Envailed number"<<endl;

        }
    }
    cout<<"frequency of 1: "<<o<<endl;
    cout<<"frequency of 2: "<<t<<endl;
    cout<<"frequency of 3: "<<th<<endl;
    cout<<"frequency of 4: "<<f<<endl;
    cout<<"frequency of 5: "<<fi<<endl;
    cout<<"frequency of 6: "<<s<<endl;
    cout<<"frequency of 7: "<<se<<endl;
    cout<<"frequency of 8: "<<e<<endl;
    cout<<"frequency of 9: "<<n<<endl;
    cout<<"frequency of 0: "<<z<<endl;

    return 0;
}