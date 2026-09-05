/*
 - A class inherits from another derived class
 - parent(Animal) -> p(Mammal)  -> Dog
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating\n";
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Breathing\n";
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Barking\n";
    }
};

int main() {
    Dog d;

    d.eat();       // From Animal
    d.breathe();   // From Mammal
    d.bark();      // From Dog
}
