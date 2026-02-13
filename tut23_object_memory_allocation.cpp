// LECTURE 23 : Objects Memory Allocation & using Arrays in Classes

#include <iostream>
#include <format>
using namespace std;

/*
@brief : 
In this tutorial, we will learn about how memory is allocated for objects and how to use arrays in classes. We will create a class called Shop that will have two arrays: one for item IDs and another for item prices. We will also have a counter to keep track of the number of items in the shop. The class will have member functions to set the price of items and display the prices of all items in the shop.
*/

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