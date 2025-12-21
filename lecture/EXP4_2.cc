#include <iostream>
#include <string>
using namespace std;

// ***decelaration***
class Teacher {
protected:
    string name, age, sex, address, phone;
    string title;
public:
    Teacher(string n, string a, string s, string t, string addr, string tel);
    void display() const;
};

class Cadre {
protected:
    string name, age, sex, address, phone;
    string post;
public:
    Cadre(string n, string a, string s, string p, string addr, string tel);
};

class Teacher_Cadre : public Teacher, public Cadre {
protected:
    double wages;
public:
    Teacher_Cadre(string n, string a, string s, string t, string p, string addr, string tel, double w);
    void show() const;
};

// ***defination***
// class Teacher
Teacher::Teacher(string n, string a, string s, string t, string addr, string tel)
    : name(std::move(n)), age(std::move(a)), sex(std::move(s)), title(std::move(t)), address(std::move(addr)), phone(std::move(tel)) {}

void Teacher::display() const {
    cout << name << ' ' << age << ' ' << sex << ' '
         << title << ' ' << address << ' ' << phone;
}
// class Cadre
Cadre::Cadre(string n, string a, string s, string p, string addr, string tel)
    : name(std::move(n)), age(std::move(a)), sex(std::move(s)), post(std::move(p)), address(std::move(addr)), phone(std::move(tel)) {}
// class Teacher_Cadre
Teacher_Cadre::Teacher_Cadre(string n, string a, string s, string t, string p, string addr, string tel, double w)
    : Teacher(n, a, s, t, addr, tel), Cadre(n, a, s, p, addr, tel), wages(w) {}

void Teacher_Cadre::show() const {
    Teacher::display();
    cout << ' ' << Cadre::post << ' ' << wages << endl;
}


int main() {
    string name, age, sex, title, addr, phone, post;
    double wages;
    cin >> name >> age >> sex >> title >> addr >> phone >> post >> wages;

    Teacher_Cadre ng(name, age, sex, title, post, addr, phone, wages);
    ng.show();
}