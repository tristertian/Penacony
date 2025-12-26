#include "Book.h"

Book::Book(){}
Book::Book(std::string isbn, std::string title = "N/A", 
    std::string publisher = "N/A", std::string author = "N/A", 
    int stock = 0, double price = 0.00) 
    :isbn(isbn), title(title), publisher(publisher), author(author), stock(stock), price(price){}

bool Book::isAvailable(int quantity) const {
    return quantity>stock ? false : true;
}

std::ostream& operator<<(std::ostream& s, const Book& x){
    return s << x.isbn<<x.title<<x.publisher<<x.author<<x.stock<<x.price;
}
std::istream& operator>>(std::istream& s, Book& x){
    char ch;
    std::string isbn, title, publisher, author;
    int stock;
    double price;
    s >> isbn>>ch>>title>>publisher>>author;
    x = Book(isbn, title, publisher, author, stock, price);
    return s;
}