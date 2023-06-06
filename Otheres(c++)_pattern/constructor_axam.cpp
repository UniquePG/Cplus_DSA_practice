#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x1, y1;

    public:

    point(int a, int b){
        x1 = a;
        y1 = b;
    }

     void display()
    {
        cout << "The point is (" << x1 << ", " << y1 << ")" << endl;
    }

    void dist(point q, point p){
        double dis;

        dis = sqrt(pow(q.x1 - p.x1, 2) - pow(q.y1 - q.y1, 2));

        cout << dis;
    }
    


};
int main(){
    point p(6,8);
    p.display();

    point q(9, 5);
    q.display();

    point di(p, q);
    di.dist();
    
    return 0;
}