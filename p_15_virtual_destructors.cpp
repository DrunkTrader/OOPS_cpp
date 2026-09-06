/*
 - If a class is meant to be used polymorphically, its destructor should generally be virtual.
 - This matters when deleting a derived object through a base-class pointer.
 - Without a virtual destructor, deleting through the base pointer can result in the derived destructor not being called.
 - With a virtual destructor, destruction happens in the correct order: Derived → Base.


*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {
        cout << "Animal destructor\n";
    }
};

class Dog : public Animal {
public:
    ~Dog() {
        cout << "Dog destructor\n";
    }
};

int main() {
    Animal* animal = new Dog();

    delete animal;

    // output : Dog destructor
    //          Animal destructor
}
