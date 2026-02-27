// tut26 - friend functions in C++
// A friend function is a function that is not a member of a class but has access to the private and protected members of the class.

#include <iostream>
using namespace std;

class Complex {
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2); // friend function declaration

public:
    void setData(int x, int y);
    void printNumber();

};

//declaring functions outside the class
void Complex :: setData(int x, int y){
    a = x;
    b = y;
}

void Complex :: printNumber(){
    cout << "Your complex number is " << a << " + " << b << "i" << '\n';
}

//friend function definition
Complex sumComplex(Complex o1, Complex o2){
    Complex o3; // create an object of the class in the friend function

    o3.a = o1.a + o2.a; // access the private members of the class in the friend function
    o3.b = o1.b + o2.b;
    
    return o3;  //return an object of the class from the friend function
}

int main(){
    Complex c1, c2, sum;

    c1.setData(1, 2);
    c2.setData(3, 4);
    
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2); //call the friend function like this
    sum.printNumber();

    return 0;
}