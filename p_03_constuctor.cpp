/*
 * Constructor : special function that runs automatically when an object is created.
 * Has no return type.
 * Used mainly to initialize projects
 * Can be overloaded (can have multiple constructor os same name but different parameters)
 */

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void show() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;              // Calls Student()
    Student s2("Neeraj", 22); // Calls Student(string, int)

    s1.show();
    s2.show();
}
