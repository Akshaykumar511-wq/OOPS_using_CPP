#include<iostream>
#include<stdexcept>
using namespace std;
class SafeArray{
int arr[10];
public:
SafeArray() {
for(int i = 0; i < 10; i++)
arr[i] = 0;
}
void set(int index, int value) {
if(index < 0 || index >= 10)
throw out_of_range("Array index is out of range.");
arr[index] = value;
}
int get(int index) const {
if(index < 0 || index >= 10)
throw out_of_range("Array index is out of range.");
return arr[index];
}
};
int main() {
SafeArray a;
try {
a.set(2, 100);
a.set(5, 200);
cout << "Value at index 2: " << a.get(2) << endl;
cout << "Value at index 5: " << a.get(5) << endl;
cout << "Value at index 10: " << a.get(10) << endl;
}
catch (const out_of_range& e) {
cout << "Exception caught: " << e.what() << endl;
}
return 0;
}
