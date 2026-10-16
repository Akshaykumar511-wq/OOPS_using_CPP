#include<iostream>
using namespace std;

class Rect{
    int length, breadth;
    public:
    Rect(){
        length=1;
        breadth=1;
    }
    Rect(int l,int b): length(l), breadth(b){}
    void setLength(int l){
        length=l;
    }
     void setBreadth(int b){
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void show(){
        cout<<"Length="<<length<<endl;
        cout<<"Breadth="<<breadth<<endl;
        cout<<"Area="<<area()<<endl;
        cout<<"Perimeter="<<perimeter()<<endl<<endl;
    }
};
int main(){
    Rect r1;
    Rect r2(4,10);
    r1.setLength(5);
    r1.setBreadth(8);
    cout<<"Rectangle 1:"<<endl;
    r1.show();
    cout<<"Rectangle 2:"<<endl;
    r2.show();
    return 0;
}
