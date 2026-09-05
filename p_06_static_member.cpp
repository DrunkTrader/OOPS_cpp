/*
 - a 'static' data member belongs to the class, not to individual objects.
 - there is only one shared copy
 - access  it using 'ClassName::member'
 - a static member function can directly access only static members
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    static int count;  // Shared by all objects

public:
    Student(string n) {
        name = n;
        count++;
    }

    static void showCount() {
        cout << "Students: " << count << endl;
    }
};

// Static member must be defined outside the class
int Student::count = 0;

int main() {
    Student s1("Neeraj");
    Student s2("Rahul");
    Student s3("Aman");

    Student::showCount();  // Students: 3
}
