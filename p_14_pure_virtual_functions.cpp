/*
 - A pure virtual function has no implementation in the base class.
 - Syntax: virtual void function() = 0;
 - A class containing at least one pure virtual function becomes an abstract class.
 - You cannot create objects of an abstract class.
 - Derived classes must override the pure virtual function to become concrete.

# Flow 
	Animal
     (abstract)
          │
     sound() = 0
          │
      ┌───┴───┐
      ↓       ↓
     Dog     Cat
      │       │
    bark     meow

 - Pure virtual function → makes the class abstract.

 - Abstract class → provides a common interface that derived classes must implement.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    // Every animal must define its own sound
    virtual void sound() = 0;

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows\n";
    }
};

int main() {
    // Animal a;  // ERROR: Animal is abstract

    Dog d;
    Cat c;

    d.sound();
    c.sound();

    Animal* a1 = &d;
    Animal* a2 = &c;

    a1->sound();  // Dog barks
    a2->sound();  // Cat meows
    // a2::sound();	// can't do this
    // a1::sound();	// can't do this, cause a1 is a pointer
}
