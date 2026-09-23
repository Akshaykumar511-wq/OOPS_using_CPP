#include<iostream>
using namespace std;
class Complex{
 private:
    float real;
    float imag;
    
  public:
    Complex(){
        real=1;
        imag=1;
    }
    Complex(float r,float i){
        real=r;
        imag=i;
    }
   
    Complex add(const Complex& other){
        Complex Result;
         Result.real=this->real+other.real;
         Result.imag=this->imag+other.imag;
        return Result;
    }
    void show(){
        cout<<"Addition of 2 complex numbers is: "<<real<<" + i"<<imag<<endl;
    }
};

    int main()
    {
        Complex c1;
        Complex c2(4.4,8.8);
        Complex c3=c2.add(c1);
        c3.show();
        return 0;
    }
