#ifndef ___Class_BookManager
#define ___Class_BookManager

#include "Book.h"
#include <vector>

class BookManager {
private:
    std::vector<Book> books;  // 图书数据存储
    const std::string DATA_FILE = "books.dat";

public:
    // 核心功能接口
    void addBook();              // 添加图书
    void queryBook();            // 查询图书（提供子菜单）
    void modifyBook();           // 修改图书
    void deleteBook();           // 删除图书
    void sellBook();             // 销售图书
    void statistics();           // 统计功能
    
    // 数据持久化
    void saveToFile();           // 保存数据
    void loadFromFile();         // 读取数据
    
    // 辅助函数
    int findBookByISBN(std::string isbn);  // 查找图书索引（-1表示未找到）
    bool isISBNExists(std::string isbn);   // 检查ISBN唯一性
};

#endif