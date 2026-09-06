/*
 - Polymorphism : one interface, different behaviour
 - In c++ , the important OOP  form here is runtime polymorphism
 - It is achieved using:
 	* inheritence
	* 'virtual'  functions
	* base-class pointer/reference
	* derived-class overriding
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }

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
    Dog dog;
    Cat cat;

    Animal* a1 = &dog;
    Animal* a2 = &cat;

    a1->sound();  // Dog barks {Dog::sound()}
    a2->sound();  // Cat meows {Cat::sound()}
}
