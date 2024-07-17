#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    // Method to print student's name and marks
    void calc() {
        cout << "Marks of " << name << " are " << marks << endl;
    }

    // Method to check if the student has failed
    void fail() {
        if (marks <= 50) {
            cout << name << " has failed" << endl;
        }
    }
};

int main() {
    Student a, b, c; // Instances of a class called objects

    // Setting details for students
    a.name = "Mohit";
    a.marks = 100;

    b.name = "Rohan";
    b.marks = 80;

    c.name = "Simran";
    c.marks = 50;

    // Displaying marks of students
    a.calc();
    b.calc();
    c.calc();

    // Checking if students have failed
    a.fail();
    b.fail();
    c.fail();

    return 0;
}
