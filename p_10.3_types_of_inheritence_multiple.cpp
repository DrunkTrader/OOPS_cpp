/*
 - One derived class → multiple base classes.
 - Problem (ambiguity) : if parents have a function with the same name.
 - Solution : use scope resolution opertor '::', to tell specific parent.
 - Example : obj.A::show();
 	     obj.B::show();
*/

#include <iostream>
using namespace std;

class Camera {
public:
    void takePhoto() {
        cout << "Taking photo\n";
    }

    void display() {
	cout << "Has Camera display\n";
    }
};

class Phone {
public:
    void makeCall() {
        cout << "Making call\n";
    }

    void display()  {
	cout << "Has Phone display\n";
    }
};

class Smartphone : public Camera, public Phone {
public:
    void browseInternet() {
        cout << "Browsing internet\n";
    }
};

int main() {
    Smartphone s;

    s.takePhoto();       // From Camera
    s.makeCall();       // From Phone
    s.browseInternet();  // Smartphone's own
    s.Camera::display(); // from camera
    s.Phone::display();  // from phone
}
