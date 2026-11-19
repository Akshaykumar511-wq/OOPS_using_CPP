#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    char ch;
    if(!in){
        cout<<"Error opening input file!";
        return 1;
    }
    while(in.get(ch)){
        if(!isspace((unsigned char)ch)){
            out.put(ch);
        }
    }
    in.close();
    out.close();
    cout<<"Whitespace characters are removed successfully.\n";
    cout<<"Result written to output.txt";

    return 0;
}
