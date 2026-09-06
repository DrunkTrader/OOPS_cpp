/*
 - A friend can access the class's private and protected members.
 - A friend function is not a member of the class.
 - A friend class gives all its member functions access to the other class's private/protected data.
 - Friendship is explicitly granted by the class.
 - Friendship is not inherited and is not automatically mutual.
*/

#include <iostream>
using namespace std;

class Box {
private:
    int width = 10;

public:
    // This outside function gets access to private members
    friend void showWidth(const Box& box);
};

void showWidth(const Box& box) {
    cout << box.width << endl;  // OK: friend
}

int main() {
    Box b;

    showWidth(b);
}
