#ifndef ___class_Boolean
#define ___class_Boolean

#include <iostream>
class Boolean{
public:
    enum boolean{False, True};                      //False-->0, True-->1
private:
    boolean v;
public:
    //constructor
    Boolean() :v(False){}
    Boolean(int val) :v(val==0 ? False : True){}    //False/True is not string*

    //conversion function
    operator int(){return v;}
    operator std::string(){return v==0 ? "False" : "True";}
};

//oeprator overloading
/*** '=' '()' '[]' '->' must be overloaded as member function ***/
inline std::ostream& operator<<(std::ostream& s, Boolean& x){
    return s << static_cast<std::string>(x);
}

#endif