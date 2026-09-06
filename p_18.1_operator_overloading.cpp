/*
 - C++ lets you define how operators behave for your own classes.
 - Example: make + work between two Complex objects.
 - Operator overloading is just a function with special syntax.
 - You cannot create a completely new operator; you can only overload existing ones.
 - At least one operand must be a user-defined type.
*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void show() const {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex a(2, 3);
    Complex b(4, 5);

    Complex c = a + b;

    c.show();  // 6 + 8i
}
