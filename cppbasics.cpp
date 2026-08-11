#include <iostream>
#include <string>
using namespace std;

class Stringsclass{
    string example;
public:
    int lengthofstring(string s){
      return s.length();
    }
};

int main(){
    Stringsclass str;
    string s;
    cout<<"Enter a line: ";
    getline(cin,s);
    int length;
    length=str.lengthofstring(s);
    cout << "Length = " << length;
    return 0;
}