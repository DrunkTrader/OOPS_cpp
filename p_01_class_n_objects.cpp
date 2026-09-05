#include <iostream>
using namespace std;

// class : blueprint
class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h\n";
    }
};

int main() {
    Car car1;              // Object : Living Instance of Class (blueprint)
    car1.brand = "BMW";
    car1.speed = 120;

    car1.drive();
}
