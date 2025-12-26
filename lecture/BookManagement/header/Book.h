#ifndef ___Class_Book
#define ___Class_Book

#include <iostream>

class Book {
private:
    std::string isbn;           // ISBN
    std::string title;
    std::string publisher;
    std::string author;
    int stock;                  // 库存量
    double price;

public:
    // Constructor
    Book();
    Book(std::string isbn, std::string title, std::string publisher, 
         std::string author, int stock, double price);

    bool isAvailable(int quantity) const;   // 检查是否足够销售
    
    // // Getter
    // std::string ISBN() const {return isbn;}
    // std::string Title() const {return title;}
    // std::string Publisher() const {return publisher;}
    // std::string Author() const {return author;}
    // int Stock() const {return stock;}
    // double Price() const {return price;}
    // // Setter
    // void setISBN(std::string isbn){ this->isbn = isbn; }
    // void setTitle(std::string title){this->title = title;}
    // void setPublisher(std::string publisher){this->publisher = publisher;}
    // void setAuthor(std::string author){this->author = author;}
    // void setStock(int stock){this->stock = stock;}
    // void setPrice(double price){this->price = price;}

    friend std::ostream& operator<<(std::ostream& s, const Book& x);
    friend std::istream& operator>>(std::istream& s, Book& x);
};

#endif