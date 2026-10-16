#include<iostream>
#include<cmath>
using namespace std;

class Point{
    float x,y;
    public:
    Point():x(0),y(0){}
    Point(float a):x(a),y(a){}
    Point(float a,float b):x(a),y(b){}
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    float distanceFromOrigin(){
        return sqrt(x*x+y*y);
    }
    float distanceBetween(const Point& obj){
        return sqrt((x-obj.x)*(x-obj.x)+(y-obj.y)*(y-obj.y));
    }
};
int main(){
    Point p1;
    Point p2(3);
    Point p3(5,6);
    cout<<"Point 1: "<<endl;
    p1.show();
    cout<<"Point 2: "<<endl;
    p2.show(); 
    cout<<"Point 3: "<<endl;
    p3.show();
    cout<<endl;
    cout<<"Distance of Point 1 from origin:"<<p1.distanceFromOrigin()<<endl;
    cout<<"Distance of Point 2 from origin:"<<p2.distanceFromOrigin()<<endl;
    cout<<"Distance of Point 3 from origin:"<<p3.distanceFromOrigin()<<endl;
    cout<<"Distance between Points 2 and 3 is:"<<p2.distanceBetween(p3)<<endl;
    return 0;
}
