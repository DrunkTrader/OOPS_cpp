/*
 - Overriding : a derived(child) class provides its own implementation of a function  already defined in the base class.
 - The function in the child should have the same signature as the base function.
 - It is used to give a child class different behaviour.
 - 'override' is a useful keyword because the compiler verifies that you are actually overriding something.
*/

#include <iostream>
using namespace std;

class Animal {
public:
	//  normal func : can be hidden, but not runtime-overridden
    void sound() {
        cout << "Animal makes a sound\n";
    }
	// virtual func : can be overriden by derived classes
    virtual void legs() {
	cout << "It has certain legs\n";
    }
};

class Dog : public Animal {
public:
	// this hides Animal::sound()
    void sound() {
        cout << "Dog barks\n";  // Dog's version
    }
	// this actually overrides Animal::legs()
    void legs() override {
	cout << "It has 4 legs\n";
    }
};

int main() {
    Animal a;
    Dog d;

    // Direct objects
    a.sound();  // Animal makes a sound
    d.sound();  // Dog barks
    
    a.legs();	// Animal has certain legs
    d.legs();	// Dog  has 4 legs

    cout << "\n--- Through  Animal Pointer ---\n";

    Animal* animal_ptr = &d;
    
    animal_ptr->sound();
    animal_ptr->legs();
}
