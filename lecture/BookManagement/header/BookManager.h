#ifndef ___BookManager_h
#define ___BookManager_h

#include "Book.h"
#include <vector>

class BookManager {
private:
    std::vector<Book> books;  // 图书数据存储
    const std::string FILE = "books.dat";

public:
    void addBook();              // 添加图书
    void queryBook();            // 查询图书（提供子菜单）
    void modifyBook();           // 修改图书
    void deleteBook();           // 删除图书
    
    // 辅助函数
    int findBookByISBN(std::string isbn);  // 查找ISBN（-1表示未找到）
    bool isISBNExists(std::string isbn);   // 检查ISBN唯一性
};

class BookSell :public BookManager{
public:
    void sellBook();             // 销售图书
};

class BookStatistic :public BookManager{
public:
    void statistics();           // 统计功能
};

class FileUtil :virtual public BookSell, virtual public BookStatistic{
public:
    void saveToFile();           // 保存数据
    void loadFromFile();         // 读取数据
};

#endif