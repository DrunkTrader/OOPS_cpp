/**
 * Tutorial 27: Friend Functions and Friend Classes in C++
 * 
 * This program demonstrates:
 * 1. Friend functions - allowing external functions to access private members
 * 2. Friend classes - allowing an entire class to access private members of another class
 * 3. Forward declaration - declaring a class before its full definition
 * 
 * Use case: Calculator class needs to access private members of Complex class
 * to perform operations on complex numbers.
 */

#include <iostream>
using namespace std;

// Forward declaration of Complex class (needed because Calculator references it before definition)
class Complex;

/**
 * Calculator class - Demonstrates friend class concept
 * This entire class is declared as a friend of Complex class,
 * allowing all its methods to access Complex's private members.
 */
class Calculator {
    public:
        /**
         * Adds two integers
         * @param a First integer
         * @param b Second integer
         * @return Sum of a and b
         */
        int add(int a, int b){
            return (a + b);
        }

        /**
         * Calculates sum of real parts of two complex numbers
         * @param o1 First complex number
         * @param o2 Second complex number
         * @return Sum of real parts
         */
        int sumRealComplex(Complex, Complex);
        
        /**
         * Calculates sum of imaginary parts of two complex numbers
         * @param o1 First complex number
         * @param o2 Second complex number
         * @return Sum of imaginary parts
         */
        int sumImaginaryComplex(Complex, Complex);
        
};

/**
 * Complex class - Represents a complex number (a + bi)
 * Contains private data members that can be accessed by friend class Calculator
 */
class Complex {
    int a, b;  // a = real part, b = imaginary part
    
    // METHOD 1: Individually declaring functions as Friends
    // friend int Calculator :: sumRealComplex(Complex, Complex);
    // friend int Calculator :: sumImaginaryComplex(Complex, Complex);
    
    // METHOD 2: Declare the entire Calculator class as friend (used here)
    // This allows ALL methods of Calculator to access private members of Complex
    friend class Calculator;

    public:
        /**
         * Sets the real and imaginary parts of the complex number
         * @param n1 Real part
         * @param n2 Imaginary part
         */
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        
        /**
         * Displays the complex number in the format: a + bi
         */
        void printNumber(){
            cout << "Your complex number is " << a << " + " << b << "i" << '\n';
        }
    };

// Implementation of Calculator's sumRealComplex method
// Can access private members (a) because Calculator is a friend class
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

// Implementation of Calculator's sumImaginaryComplex method    
// Can access private members (b) because Calculator is a friend class
int Calculator :: sumImaginaryComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

/**
 * Main function - Demonstrates usage of friend class concept
 * Creates complex numbers and uses Calculator to perform operations on them
 */
int main(){
    // Create two complex number objects
    Complex c1, c2;
    c1.setNumber(1, 4);  // c1 = 1 + 4i
    c2.setNumber(5, 7);  // c2 = 5 + 7i

    // Display the complex numbers
    c1.printNumber();
    c2.printNumber();

    // Create Calculator object and perform operations
    Calculator calc;
    cout << "The sum of real part of c1 and c2 is " << calc.sumRealComplex(c1, c2) << '\n';
    cout << "The sum of Imaginary part of c1 and c2 is " << calc.sumImaginaryComplex(c1, c2) << '\n';
    
    return 0;
}