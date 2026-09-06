/*
 - Common Operators that can be overloaded
 
 +   -   *   /   %
 ==  !=  <   >   <=  >=
 ++  --
 =   +=  -=
 []  ()
 ->  <<
 >>

 - Some operators cannot be overloaded

  ::    .    .*    ?:    sizeof
*/
#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int id;

public:
    Student(int id) : id(id) {}

    bool operator==(const Student& other) const {
        return id == other.id;
    }
};

int main() {
    Student a(101);
    Student b(101);
    Student c(102);

    cout << (a == b) << endl;  // 1
    cout << (a == c) << endl;  // 0
}
