/*
 * private -> only the same class can access it
 * protected -> same class + derived class
 * public -> accessible from anywhere
 * */
#include <iostream>
using namespace std;

class Parent {
private:
    int privateData = 10;

protected:
    int protectedData = 20;

public:
    int publicData = 30;

    void showParent() {
        cout << privateData << endl;    // OK
        cout << protectedData << endl;  // OK
        cout << publicData << endl;     // OK
    }
};

class Child : public Parent {
public:
    void showChild() {
        // cout << privateData;         // ERROR: private
        cout << protectedData << endl;  // OK
        cout << publicData << endl;     // OK
    }
};

int main() {
    Parent p;

    // cout << p.privateData;    // ERROR
    // cout << p.protectedData;  // ERROR

    cout << p.publicData << endl; // OK

    Child c;
    c.showChild();
}
