#include <string>

class Member{
    std::string full_name;
    int no, rank;
public:
    Member(std::string name, int number, int grade);    //declaration of structure function
    int get_rank(){return rank;}                        //getter
    void set_rank(int grade){rank=grade;}               //setter
    void print();
};