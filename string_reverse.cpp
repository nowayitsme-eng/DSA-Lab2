#include <iostream>
#include <string>
using namespace std;
int main() {
    string* str=new string;
    cout << "Enter a string: ";
    getline(cin, *str);

    string reversedStr = string(str->rbegin(), str->rend());

    cout << "Reversed string: " << reversedStr << endl;
    delete str;
    return 0;
}