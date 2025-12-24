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
    
    // Getter
    std::string getISBN() const {return isbn;}
    std::string getTitle() const {return title;}
    std::string getPublisher() const {return publisher;}
    std::string getAuthor() const {return author;}
    int getStock() const {return stock;}
    double getPrice() const {return price;}
    // Setter
    void setISBN(std::string isbn){ this->isbn = isbn; }
    void setTitle(std::string title){this->title = title;}
    void setPublisher(std::string publisher){this->publisher = publisher;}
    void setAuthor(std::string author){this->author = author;}
    void setStock(int stock){this->stock = stock;}
    void setPrice(double price){this->price = price;}
    
    void display() const;                   // display book imformation
    bool isAvailable(int quantity) const;   // check whether it's sufficient to sell
};

#endif