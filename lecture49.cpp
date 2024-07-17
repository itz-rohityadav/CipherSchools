#include <iostream>
using namespace std;

int fiboo(int input){
    if(input == 0 || input == 1){    // base case: Fibonacci sequence starts with 1, 1
        return 1;
    }
    int final_ans;
    final_ans = fiboo(input-1) + fiboo(input-2);  // recursive call
    return final_ans;
}

int main(){
    int input;
    cout << "Enter a number to compute Fibonacci: ";
    cin >> input;
    cout << "Fibonacci number at position " << input << " is: " << fiboo(input) << endl;
    return 0;
}
