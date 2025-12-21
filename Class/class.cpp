#include <iostream>
using namespace std;

class Employee
{
    private :
        int a, b, c;

    public :
        int d, e;

        void setData(int a1,int b1,int c1); // declare first, then implemented

        void getData(){
            cout << "The value of a is : " << a <<'\n';
            cout << "The value of b is : " << b <<'\n';
            cout << "The value of c is : " << c <<'\n';
            cout << "The value of d is : " << d <<'\n';
            cout << "The value of e is : " << e <<'\n';
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;

    harry.setData(1, 2, 4); // set a=1, b = 2, c= 4
    harry.getData();
    return 0;
}