/*
 * For initializing before the constructor body runs.
 * Syntax: Class() : member(value) { 
 * 			class body
 * 			}
 * Preferred over assigining values inside the constructor body
 * Required for "const" members, references, and members without a default constructor
 */

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    const int id;

public:
    // initialize members
    Student(string n, int a, int i) : name(n), age(a), id(i)  {
        cout << "Student created\n";
    }

    void show() {
        cout << name << " " << age << " " << id << endl;
    }
};

int main() {
    Student s("Neeraj", 22, 101);
    s.show();
}
