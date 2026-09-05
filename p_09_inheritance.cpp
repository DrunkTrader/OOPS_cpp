/*
 - Inheritance allows one class to acquire properties and behavior of another class
 - Existing class -> base/parent class
 - new class -> derived/child class
 - promotes code reuse and represents an "is-a" relationship
*/

#include <iostream>
using namespace std;

class Animal {
private:
    void eyes(){
	cout << "Animal can see\n";
    }

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

int main() {
    Dog d;

    d.eat();   // Inherited from Animal
    d.bark();  // Dog's own function
    // d.eyes();  // Error : parent's function -> method is private
}
