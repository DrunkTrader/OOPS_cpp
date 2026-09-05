/*
 - 'this' is a pointer to the current object
 - available inside non-static member functions
 - useful when a parameter has the same name as a data member
 - this->member means "this member belonging to the current object"
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void show() {
        cout << this->name << " " << this->age << endl;
    }
};

int main() {
    Student s1("Neeraj", 22);
    Student s2("Rahul", 21);

    s1.show();
    s2.show();
}
