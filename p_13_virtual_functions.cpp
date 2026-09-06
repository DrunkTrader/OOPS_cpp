/*
 - A virtual function allows C++ to choose the derived-class implementation at runtime.
 - It is what enables runtime polymorphism.
 - Usually used through a base-class pointer or reference.
 - The base function must be marked virtual.

*/
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
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

    a1->sound();  // Dog barks
    a2->sound();  // Cat meows
}

/*
 
What happens without virtual?

	Change:
		virtual void sound()
	to:
		void sound()
	Then:
		Animal* a1 = &dog;
		a1->sound();

	calls:
		Animal::sound()
	With virtual:
		Animal* a1
		     ↓
    		    Dog
   	             ↓
	       Dog::sound()

- C++ determines the function based on the actual object, not just the pointer type.

# Object vs pointer matters
	Dog dog;
	dog.sound();       // Dog::sound()

	Animal* ptr = &dog;
	ptr->sound();      // Dog::sound() because sound() is virtual

# virtual vs override
	class Animal {
	public:
    		virtual void sound();   // "This can be overridden"
	};

	class Dog : public Animal {
	public:
    		void sound() override;  // "I am overriding it"
	};

# Think:

	virtual  → enables runtime dispatch
	override → compiler checks your override
	One more important point

# Virtual functions are about runtime dispatch:

	Animal* ptr = &dog;

  The pointer type is:

	Animal*

  but the actual object is:

	Dog

With virtual, C++ follows the actual object and calls:

	Dog::sound()
*/
