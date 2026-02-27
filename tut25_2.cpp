//tut25.2 = Passing Objects as Function Arguments in cpp

#include <iostream>

class complex{
    int a, b;

    public:
        void setData(int val_1, int val_2);
        void setDataBySum(complex output_1, complex output_2);
        void printNumber(void);
};

//declaring the function outside the class
void complex::setData(int val_1, int val_2){
    a = val_1;
    b = val_2;
}

void complex::setDataBySum(complex output_1, complex output_2){
    a = output_1.a + output_2.a;
    b = output_1.b + output_2.b;
}

void complex::printNumber(void){
    std::cout << "Your complex number is " << a << " + " << b << "i" << '\n';
}


int main(){
    complex c1, c2, c3;
    
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}