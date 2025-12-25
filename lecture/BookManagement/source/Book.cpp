#include "Book.h"

Book::Book(){}
Book::Book(std::string isbn, std::string title = "N/A", 
    std::string publisher = "N/A", std::string author = "N/A", 
    int stock = 0, double price = 0.00) 
    :isbn(isbn), title(title), publisher(publisher), author(author), stock(stock), price(price){}

void Book::display() const {
    std::cout<<isbn<<title<<publisher<<author<<stock<<price;
}
bool Book::isAvailable(int quantity) const {
    if (quantity > stock) {
        return false;
    }else {
        return true;
    }
}