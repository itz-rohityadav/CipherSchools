/*
Memory management is very important in C++ and an address is where a variable is stored (located).
We use the "&" operator to get the address of a variable.
The output we get from that is a hexadecimal value, which ranges from 0-9 and a-f.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'a' and a float variable 'b'
    int a;
    float b;
    
    // Output the address of the integer variable 'a'
    cout << "Address of integer variable 'a' is: " << &a << endl;
    
    // Output the address of the float variable 'b'
    cout << "Address of float variable 'b' is: " << &b << endl;
    
    return 0;
}
