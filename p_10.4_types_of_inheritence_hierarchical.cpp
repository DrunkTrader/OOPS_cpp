/*
 - One base class → multiple derived classes.
 - The children do not inherit from each other.
 - Structure 
              Animal
            /   |   \
           ↓    ↓    ↓
         Dog   Cat  Horse

 - Therefore :
 	Dog   → eat() + bark()
	Cat   → eat() + meow()
	Horse → eat() + run()
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

class Horse : public Animal {
public:
    void run() {
        cout << "Running\n";
    }
};

int main() {
    Dog dog;
    Cat cat;
    Horse horse;

    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();

    horse.eat();
    horse.run();
}
