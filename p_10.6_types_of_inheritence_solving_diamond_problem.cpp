/*
 - C++ provides virtual inheritance.
 
 Now the structure effectively shares one Animal base:

             Animal
             /    \
            /      \
          Dog      Cat
            \      /
             Hybrid

 There is only one shared Animal subobject.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating\n";
    }
};

class Dog : virtual public Animal {
};

class Cat : virtual public Animal {
};

class Hybrid : public Dog, public Cat {
};

int main() {
    Hybrid h;

    h.eat();  // OK
}
