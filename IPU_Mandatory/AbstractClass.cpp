#include<iostream>
using namespace std;

class List{
    protected:
    int A[10];
    int last;
    int count=0;
    public:
    virtual void store(int x)=0;
    virtual void retrieve()=0;
    List(){last=-1;}
};
class Stack:public List{
    public:
    void store(int x){
        if(last<10){
        last++;
        A[last]=x;}
    }
    void retrieve(){
        cout<<A[last]<<endl;
        last--;
    }
};
class Queue:public List{
    public:
    void store(int x){
        if(last<10){
        last++;
        A[last]=x;}
    }
    void retrieve(){
        cout<<A[count]<<endl;;
        count++;
    }
};

int main(){
    Stack s;
    cout<<"For stack:"<<endl;
    s.store(1);
    s.store(2);
    s.store(3);
    s.retrieve();
    s.retrieve();
    s.retrieve();
    cout<<endl;
    Queue q;
    cout<<"For queue:"<<endl;
    q.store(1);
    q.store(2);
    q.store(3);
    q.retrieve();
    q.retrieve();
    q.retrieve();
    return 0;
}
