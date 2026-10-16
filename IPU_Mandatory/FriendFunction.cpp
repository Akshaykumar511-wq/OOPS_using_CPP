#include <iostream>
using namespace std;
class Mem;
class CPU{
    private:
    float cpu_utilization;
    public:
    CPU(float cpu){
        cpu_utilization=cpu;
    }
    friend void task(CPU,Mem);
};
class Mem{
    private:
    float mem_utilization;
    public:
    Mem(float mem){
        mem_utilization=mem;
    }
    friend void task(CPU,Mem);
};
void task(CPU c,Mem m){
   if(c.cpu_utilization!=m.mem_utilization) {(c.cpu_utilization>m.mem_utilization)?cout<< “CPU-intensive task is started.”:cout<< “Memory-intensive task is started.”;
}
    else
       cout<<"CPU and Memory intensive task are equivalent.";
}
int main() {
        float cpu,mem;
    cout<<"Enter CPU utilization:";
    cin>>cpu;
    cout<<"Enter Memory utilization:";
    cin>>mem;
    CPU c(cpu);
    Mem m(mem);
    task(c,m);
    return 0;
}
