#include <iostream>
using namespace std;
void analyze_pointer(int*ptr){
    cout<<"Memory address stored in ptr: "<<ptr<<endl;
    cout<<"Value at the address stored in ptr: "<<*ptr<<endl;
}
int main() {
    int* value = new int;
    *value=42;
    analyze_pointer(value);   
    return 0;
}