/*
 - Combination of two or more types of inheritance.
 - A classic example combines hierarchical + multiple inheritance.
 - This creates:

          Animal
         /      \
       Dog      Cat
         \      /
          Hybrid

 - But there is a serious problem.

  Hybrid gets two copies of Animal:

              Animal
             /      \
            ↓        ↓
          Dog       Cat
            \        /
              Hybrid

- Why?

  Because the compiler doesn't know whether you mean:

	Hybrid → Dog → Animal

		or:

	Hybrid → Cat → Animal

This is called the "Diamond Problem".
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking\n";
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing\n";
    }
};

class Hybrid : public Dog, public Cat {
};

int main() {
    Hybrid h;

    // h.eat();  // ERROR: ambiguous
}
