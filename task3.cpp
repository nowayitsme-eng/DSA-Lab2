#include <iostream>
using namespace std;
void analyze_pointer(int*ptr){
    cout<<"Memory address stored in ptr: "<<ptr<<endl;
    cout<<"Value at the address stored in ptr: "<<*ptr<<endl;
}
int main() {
    int value = 5;
    int* ptr = &value;
    analyze_pointer(ptr);   
    return 0;
}