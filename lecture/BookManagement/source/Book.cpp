#include "Book.h"
using namespace std;

Book::Book(){}
Book::Book(string isbn, string title = "N/A", 
    string publisher = "N/A", string author = "N/A", 
    int stock = 0, double price = 0.00) 
    :isbn(isbn), title(title), publisher(publisher), author(author), stock(stock), price(price){}

void Book::display() const {
    cout<<isbn<<title<<publisher<<author<<stock<<price;
}
bool Book::isAvailable(int quantity) const {
    if (quantity > stock) {
        return false;
    }else {
        return true;
    }
}