#ifndef ___class_Complex
#define ___class_Complex

#include <iostream>
class Complex{
    double re, im;
public:
    // constructor
    Complex(double re=0, double im=0) :re(re), im(im){}
    //getter
    double real() const {return re;}
    double imag() const {return im;}

    // overloading one-operand operator
    Complex operator+() const {return *this;}
    Complex operator-() const {return Complex(-re, -im);}
    // overloading compound assignment operator
    Complex& operator+=(const Complex& x){
        re += x.re, im += x.im;
        return *this;
    }
    Complex& operator-=(const Complex& x){
        re -= x.re, im -= x.im;
        return *this;
    }

    // FRIEND function: 
    // *operator function* that *left operand* may not be class type 
    // should be apponinted as friend function.

    // overloadiung equivalent operator
    friend bool operator==(const Complex& x, const Complex& y){
        return x.re==y.re && x.im==y.im;
    }
    friend bool operator!=(const Complex& x, const Complex& y){
        return !(x == y);
    }

    //binary oeprators
    friend Complex operator+(const Complex& x,  const Complex& y){
        return Complex(x.re+y.re, x.im+y.im);   // -->only a temporary value, CANNOT return 'Complex&' type
    }                       // Non-const lvalue reference to type 'Complex' cannot bind to a temporary of type 'Complex'
    friend Complex operator+(double x,          const Complex& y){
        return Complex(x+y.re, y.im);
    }
    friend Complex operator+(const Complex& x,  double y){
        return Complex(x.re+y, x.im+y);
    }
    // why operator+ need being overloaded for 3 times? 
    // A: avoiding call for constructor for many times, and fasten your program
};

// overloading inserter
inline std::ostream& operator<<(std::ostream& s, const Complex& x){
    return s << "("<<x.real()<<", "<<x.imag()<<")";
}

#endif