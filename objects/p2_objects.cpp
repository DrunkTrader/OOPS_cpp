// LECTURE 23 : Objects Memory Allocation & using Arrays in Classes

#include <iostream>
#include <format>
using namespace std;

class Shop{
    private:
        int item_id[100];
        int item_price[100];
        int counter;
    
    public:
        void initial_counter(void) {counter = 0;}
        void set_price(void);
        void display_price(void);
};

void Shop :: set_price(void){
    cout << format("Enter ID of your item number {} : ", counter+1);
    cin >> item_id[counter];
    
    cout << "Enter Price of your Item : \n";
    cin >> item_price[counter];
    counter++;
}

void Shop :: display_price(void){
    for(int i{}; i < counter; i++){
        cout << format("The price for item {} with ID {} is {} \n",i+1, item_id[i], item_price[i]);
    }
}
int main(){
    Shop dukaan;

    dukaan.initial_counter();
    
    int tc;cin >> tc;
    while(tc--){
        dukaan.set_price();
    }
    dukaan.display_price();
    return 0;
}