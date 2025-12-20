#include <iostream>
#include <stdexcept>
using namespace std;

class student {
    int roll;       // private by default
    float marks;    // private by default

public :
//member function to safily modify private data
    void setData(int roll_number, float marks_of_student){  
        roll = roll_number;
        marks = marks_of_student;
    }

    void display() {
        cout << "Roll : " << roll << '\n';
        cout << "Marks : " << marks << '\n';
    }
};

int main(){
    student s1;
    
/*  
-- THIS WON'T WORK --
    s1.roll = 101;
    s1.marks = 99;
    s1.display();

    direct access NOT ALLOWED (private by default)
*/
    s1.setData(1011, 86);
    s1.display();

    return 0;
}