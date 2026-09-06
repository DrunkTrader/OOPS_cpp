/*
 class A {
    friend class B;
};

means:
	B → can access A's private members
It does not mean:
	A → can access B's private members

If you want that, B must explicitly declare A as a friend too.
*/

#include <iostream>
using namespace std;

class Engine {
private:
    int power = 500;

    friend class Car;  // Car can access Engine's private members
};

class Car {
public:
    void showEnginePower(const Engine& engine) {
        cout << engine.power << " HP\n";  // OK
    }
};

int main() {
    Engine engine;
    Car car;

    car.showEnginePower(engine);
}
