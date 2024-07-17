#include <iostream>
using namespace std;

// Function to determine which classes can be attended based on their start and end times
void attendclass(int start[], int end[], int class_id[]) {
    // Assume the first class can always be attended
    cout << "Class attended: " << class_id[0] << endl;
    int end_of_current = end[0]; // Track the end time of the currently attended class

    // Loop through the rest of the classes
    for (int i = 1; i < 9; i++) { // Assuming there are 9 classes based on array size
        // Check if the current class can be attended based on the end time of the last attended class
        if (start[i] >= end_of_current) {
            cout << "Class attended: " << class_id[i] << endl;
            end_of_current = end[i]; // Update the end time of the currently attended class
        }
    }
}

int main() {
    // Sample data for start times, end times, and class IDs
    int start[10] = {2, 2, 4, 1, 5, 8, 9, 11, 13};
    int end[10] = {3, 5, 7, 8, 9, 10, 11, 14, 16};
    int class_id[10] = {4, 2, 3, 1, 5, 6, 7, 8, 9};

    // Call the function to determine which classes can be attended
    attendclass(start, end, class_id);

    return 0;
}
