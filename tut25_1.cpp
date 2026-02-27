// tut25 - Array of Objects & Passing Objects as Function Arguments in cpp

#include <iostream>
using namespace std;

class Employee{
    int id;
    float salary;

    public:
        void setID(void){
            salary = 122;
            cout << "Enter the id of the Employee" << '\n';
            cin >> id;
        }

        void getID(void);
};

void Employee :: getID(void){
    cout << "The id of this employee is : " << id << '\n';
}

int main(){

    // Employee e1, e2, e3; 
    
    // e1.getID();
    // e1.setID();
    
    // This is an array of objects. We can also create an array of objects like this : Employee arr[100];

    Employee fb[4];

    cout << "size of fb is : " << sizeof(fb) << '\n'; // size of fb is 4 * size of Employee class
    for(int i{}; i < 4; i++){
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}