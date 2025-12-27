#include "Book.h"
using namespace std;

Book::Book(){}
Book::Book(string isbn, string title, string publisher, 
        string author, int stock, double price) 
    :isbn(isbn), title(title), publisher(publisher), author(author), stock(stock), price(price){}

bool Book::isAvailable(int quantity) const {
    return quantity>stock ? false : true;
}

ostream& operator<<(ostream& s, const Book& x){
    return s << x.isbn<<x.title<<x.publisher<<x.author<<x.stock<<x.price;
}
istream& operator>>(istream& s, Book& x){
    char ch;
    string isbn, title, publisher, author;
    int stock;
    double price;

    s >> isbn>>ch>>title>>publisher>>author;
    x = Book(isbn, title, publisher, author, stock, price);
    return s;
}