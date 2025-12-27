#ifndef ___BookManager_h
#define ___BookManager_h

#include "Book.h"
#include <vector>

class BookManager :public Book{
private:
    std::vector<Book> books;  // 图书数据存储
    const std::string FILE = "books.dat";

public:
    void addBook();              // 添加
    void queryBook();            // 查询（提供子菜单）
    void modifyBook();           // 修改
    void deleteBook();           // 删除
    
    // 辅助函数
    int findISBN(std::string isbn);  // 查找ISBN(找不到返回-1)
};

class BookSell :public BookManager{
public:
    void sellBook();             // 销售
};

class BookStatistic :public BookManager{
public:
    void statistics();           // 统计
};

class FileUtil :virtual public BookSell, virtual public BookStatistic{
public:
    void saveToFile();           // 保存数据
    void loadFromFile();         // 读取数据
};

#endif