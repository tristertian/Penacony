#include <iostream>
#include <cmath>
const double PI = 3.1415926;

// 基类 //
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Shape2D :public Shape {
public:
    virtual double perimeter() const = 0;   // perimeter n.周长
    virtual ~Shape2D() = default;
};

class Shape3D :public Shape {
public:
    virtual double volume() const = 0;
    virtual ~Shape3D() = default;
};

// 二维 //
class Rectangle :public Shape2D {
    double w, h;
public:
    Rectangle(double width, double height) :w(width), h(height) {}
    double area()       const {return w * h;}
    double perimeter()  const {return 2 * (w + h);}
};

class Circle :public Shape2D {
    double r;
public:
    explicit Circle(double radius) :r(radius) {}        // radius n.半径
    double area()       const {return PI * r * r;}
    double perimeter()  const {return 2 * PI * r;}
};

class Ellipse :public Shape2D{
    double a, b;
public:
    explicit Ellipse(double semimajor, double semiminor) :a(semimajor), b(semiminor) {}
    double area()       const {return PI * a * b;}
    double perimeter()  const {return 2 * PI * b + 4 * (a - b);}
};

// 三维 //
class Sphere :public Shape3D {     // sphere n.球体
    double r;
public:
    explicit Sphere(double radius) : r(radius) {}
    double area()   const {return 4 * PI * r * r;}
    double volume() const {return 4.0 / 3 * PI * r * r * r;}
};

class Cylinder :public Shape3D {   // cylinder n.圆柱体
    double h, r;
public:
    Cylinder(double height, double radius) : h(height), r(radius) {}
    double area()   const {return 2 * PI * r * r + 2 * PI * r * h;}
    double volume() const {return PI * r * r * h;}
};

class Cone :public Shape3D {       // cone n.圆锥体
    double h, r;
public:
    Cone(double height, double radius) : h(height), r(radius) {}
    double area() const {
        double l = std::sqrt(r * r + h * h); // 母线
        return PI * r * r + PI * r * l;
    }
    double volume() const {return PI * r * r * h / 3;}
};

class SumOfShape {
    SumOfShape(){}
public:
    static double totalArea(Shape** v, int len) {
        double sum = 0.0;
        for (int i=0; i<len; i++) {
            sum += v[i]->area();
        }
        return sum;
    }
    static double totalPerimeter(Shape** v, int len) {
        double sum = 0.0;
        for (int i = 0; i < len; i++) {
            Shape2D* shape2d = dynamic_cast<Shape2D*>(v[i]);
            if (shape2d != nullptr) {
                sum += shape2d->perimeter();
            }
        }
        return sum;
    }
    
    static double totalVolume(Shape** v, int len) {
        double sum = 0.0;
        for (int i = 0; i < len; i++) {
            Shape3D* shape3d = dynamic_cast<Shape3D*>(v[i]);
            if (shape3d != nullptr) {
                sum += shape3d->volume();
            }
        }
        return sum;
    }
};


int main() {
    Rectangle rectangle(2, 3);
    Ellipse ellipse(8, 4);
    Circle circle(3);
    Sphere sphere(3);
    Cylinder cylinder(3, 5);
    Cone cone(3, 4);

    Shape* shape_array[] = {&rectangle, &ellipse, &circle, 
        &sphere, &cylinder, &cone,};
    std::cout<<"Sum of Area: "<<SumOfShape::totalArea(shape_array, 6)<<"\n";
    std::cout<<"Sum of Perimeter: "<<SumOfShape::totalPerimeter(shape_array, 6)<< "\n";
    std::cout<<"Sum of Volume: "<<SumOfShape::totalVolume(shape_array, 6)<<"\n";
}