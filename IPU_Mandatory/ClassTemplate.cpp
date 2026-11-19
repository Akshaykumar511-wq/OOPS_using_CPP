#include<iostream>
using namespace std;

template<class T>
class Larger{
    T a,b;
    public:
    Larger(T x, T y):a(x),b(y){}
    void display(){
        if(a==b){
            cout<<"Both the values are equal!\n";
        }
        else{
        cout<<"The larger of the 2 values is:";
        (a>b)?cout<<a:cout<<b;
        cout<<endl;
        }
    }
    ~Larger(){}
};


int main(){
    Larger<int> obj1(8,4);
    obj1.display();
   
    Larger<float> obj2(9.7,6.8);
    obj2.display();
    
    return 0;
}
