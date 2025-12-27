#include "BookManager.h"
#include "Book.h"
using namespace std;

void BookManager::addBook(){
    cout<<"请输入图书信息以添加图书: ";
    Book a; cin>>a;
    if (findISBN(a.ISBN()) != -1){
        cout<<"添加失败[原因:ISBN重复]\n";
    }else{
        books.push_back(a);
    }
}

void BookManager::queryBook(){

}

void BookManager::modifyBook(){

}

void BookManager::deleteBook(){

}


int BookManager::findISBN(string isbn){
    
}