#include <iostream>
using namespace std;

// Class is a user-defined data type
class Student {
    public:
        string name;
        int marks;

        // Method to set student details
        void setDetails(string studentName, int studentMarks) {
            name = studentName;
            marks = studentMarks;
        }

        // Method to display student details
        void displayDetails() {
            cout << "Name: " << name << ", Marks: " << marks << endl;
        }
};

int main() {
    Student a, b, c;
    // a, b, c are objects of the class Student

    // Setting details for students
    a.setDetails("Alice", 85);
    b.setDetails("Bob", 90);
    c.setDetails("Charlie", 75);

    // Displaying details of students
    a.displayDetails();
    b.displayDetails();
    c.displayDetails();

    return 0;
}
