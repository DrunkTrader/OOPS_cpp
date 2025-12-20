#include <iostream>
using namespace std;

struct student {
    int roll;       //public by default
    float marks;    //public by default

    void display(){
        cout << "Roll : " << roll << '\n';
        cout << "Marks : " << marks << '\n';
    }
};

int main(){
    student s1;

    s1.roll = 101;
    s1.marks = 89.5;

    s1.display();
}