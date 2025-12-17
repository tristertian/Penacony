#include <iostream>
#include <string>
using namespace std;

/* ==========  Teacher  ========== */
class Teacher {
protected:
    string name, age, sex, address, phone;
    string title;          // 职称
public:
    Teacher(string n, string a, string s, string t, string addr, string tel);
    void display() const;  // 输出 Teacher 信息
};

/* ==========  Cadre  ========== */
class Cadre {
protected:
    string name, age, sex, address, phone;
    string post;           // 职务
public:
    Cadre(string n, string a, string s, string p, string addr, string tel);
};

/* ==========  Teacher_Cadre  ========== */
class Teacher_Cadre : public Teacher, public Cadre {
    double wages;          // 工资
public:
    Teacher_Cadre(string n, string a, string s,
                  string t, string p, string addr, string tel, double w);
    void show() const;     // 按要求输出全部信息
};

/* ----------------------------------------------------------
 * 类外定义成员函数
 * ---------------------------------------------------------- */
Teacher::Teacher(string n, string a, string s,
                 string t, string addr, string tel)
    : name(std::move(n)), age(std::move(a)), sex(std::move(s)),
      title(std::move(t)), address(std::move(addr)), phone(std::move(tel)) {}

void Teacher::display() const {
    cout << name << ' ' << age << ' ' << sex << ' '
         << title << ' ' << address << ' ' << phone;
}

Cadre::Cadre(string n, string a, string s,
             string p, string addr, string tel)
    : name(std::move(n)), age(std::move(a)), sex(std::move(s)),
      post(std::move(p)), address(std::move(addr)), phone(std::move(tel)) {}

Teacher_Cadre::Teacher_Cadre(string n, string a, string s,
                             string t, string p, string addr, string tel, double w)
    : Teacher(n, a, s, t, addr, tel),
      Cadre(n, a, s, p, addr, tel),
      wages(w) {}

void Teacher_Cadre::show() const {
    Teacher::display();          // 调用 Teacher 的 display
    cout << ' ' << Cadre::post << ' ' << wages << endl;
}

/* ----------------------------------------------------------
 * main
 * ---------------------------------------------------------- */
int main() {
    string name, age, sex, title, addr, phone, post;
    double wages;
    cin >> name >> age >> sex >> title
        >> addr >> phone >> post >> wages;

    Teacher_Cadre tc(name, age, sex, title, post, addr, phone, wages);
    tc.show();
    return 0;
}