#include <iostream>
#include <fstream>
using namespace std;
class Student {
  char name[50];
  int age;
  char sex[10];
  float height, weight;
public:
  void readData() {
    cout << "Enter name: ";
    cin.getline(name, 50);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
    cout << "Enter height (in cm): ";
    cin >> height;
    cout << "Enter weight (in kg): ";
    cin >> weight;
    cin.ignore(1000, '\n');
  }
  void show() const {
    cout << "\nStudent Details\n";
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
    cout << "Sex  : " << sex << endl;
    cout << "Height : " << height << " cm" << endl;
    cout << "Weight : " << weight << " kg" << endl;
  }
};
int main() {
  Student s1, s2;
  cout << "Enter student details:\n";
  s1.readData();
  ofstream fout("student.dat", ios::binary);
  if (!fout) {
    cout << "Error opening file for writing." << endl;
    return 1;
  }
fout.write(reinterpret_cast<char*>(&s1), sizeof(s1));
fout.close();
ifstream fin("student.dat", ios::binary);
if (!fin) {
cout << "Error opening file for reading." << endl;
return 1;
}
fin.read(reinterpret_cast<char*>(&s2), sizeof(s2));
if (!fin) {
cout << "Error reading student data." << endl;
return 1;
}
fin.close();
cout << "\nData read from file:\n";
s2.show();
return 0;
}
