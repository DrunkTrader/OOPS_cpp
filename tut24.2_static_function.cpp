#include <iostream>
using namespace std;

// static is a keyword that is used to declare a static member variable. 
// A static member variable is shared by all objects of the class. 
// It is not associated with any particular object and can be accessed using the class name.

class Employee{
    int id;
    static int count;   //static member variable declaration

    public:
        void setData(void){
            cout << "Enter the id of the employee : ";
            cin >> id;
            count++;
        }

        void getData(void){
            
            cout << "The ID of this employee is : " << id << '\n';
            cout << "The count of employees is : " << count << '\n';
        }

        static void getCount(void){
            cout << "The count of employees is : " << count << '\n';
        }
};

int Employee :: count = 0; // Default value of count is 0

int main(){
    Employee Neeraj, Harry, Rohan;

    // Neeraj.id = 1; // This will throw an error because id is private
    // Neeraj.count = 1; // This will also throw an error because count is private

    Neeraj.setData();
    Neeraj.getData();
    Employee :: getCount();

    Harry.setData();
    Harry.getData();
    Employee :: getCount();
    
    Rohan.setData();
    Rohan.getData();
    Employee :: getCount();

    return 0;
}

/*
This program demonstrates the use of static member in a class.
In this program, we have a class called Employee that has a private member variable id and a static member variable count. 
The setData() function is used to set the id of the employee and increment the count of employees.
The getData() function is used to display the id of the employee and the count of employees.
*/