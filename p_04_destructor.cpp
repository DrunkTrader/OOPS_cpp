/*
 - A destructor runs automatically when an object is destroyed
 - Name = class name with ~ before it
 - Has no return type & takes no parameters
 - Used for cleanup, especially resources like dynamically allocated memory, files,  lock, etc.
 - A class can have only 1 destructor.
 */

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called\n";
    }

    ~Student() {
        cout << "Destructor called\n";  // Cleanup
    }
};

int main() {
    Student s;

    cout << "Inside main\n";
} // s is destroyed here → destructor runs
