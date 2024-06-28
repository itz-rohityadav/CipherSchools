/*
In this lecture, SIR discussed how elements are stored in computer memory.
They are stored in bits and bytes.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'a' and a long long integer variable 'b'
    int a;
    long long int b;
    
    // Output the size of the integer variable 'a' in bytes
    cout << "Size of int is: " << sizeof(a) << " bytes" << endl;
    
    // Output the size of the long long integer variable 'b' in bytes
    cout << "Size of long long int is: " << sizeof(b) << " bytes" << endl;
    
    return 0;
}
