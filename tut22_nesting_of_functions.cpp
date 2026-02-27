#include <iostream>
#include <string>
using namespace std;

class binary{
    private:
        string s;   //even without writing private: , it was default private.
        void check_binary(void);        // USER will be able to use this in main() function. Only the member function can. 
    
    public :
        void read(void);
        void compliment_binary(void);
        void display_values(void);
};

void binary :: read(void){
    cout << "Enter a Binary Number : ";
    getline(cin, s);
}

void binary :: check_binary(void){
    string_view view{s};
    for( auto c : view){
        if(c != '0' && c != '1'){
            cout << "Not a Binary Number, I guess.\n";
            exit(0);
        }
    }
    cout << "Its a Binary Number . YEEEEAAAAHHHHH\n";
    return;
}

void binary :: display_values(void){
    cout << "Binary Number is : " << s << '\n';
}

void binary :: compliment_binary(void){
    check_binary();                         //Nested MEMBER FUNCTION, no need to use class name like : user_binary.check_binary();
    for( char &ch : s){
        if(ch == '0') ch = '1';
        else{
            ch = '0';
        }
    }
}


int main(){
    binary users_binary;
    users_binary.read();
    users_binary.display_values();
    // users_binary.check_binary();             //works the same if we remove the check_binary in the compliment_binary
    users_binary.compliment_binary();
    users_binary.display_values();

    return 0;
}