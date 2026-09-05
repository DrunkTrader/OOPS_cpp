/*
 - a member function marked 'const' cannot modify the object's data members.
 - Syntax : return_type function() const 
 - use it for functions that only read/inspect an object.
 - a 'const' object can call only 'const' member functions.
 */

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}

    void show() const {
        cout << name << " " << age << endl;
    }

    void setAge(int a) {
        age = a;
    }
};

int main() {
    const Student s1("Neeraj", 22);

    s1.show();       // OK: show() is const
    // s1.setAge(23); // ERROR: setAge() is not const
}
