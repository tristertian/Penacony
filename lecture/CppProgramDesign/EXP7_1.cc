#include <iostream>
#include <vector>
#include <cmath>

// 基类
class Shape2D {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape2D() = default;
};

class Shape3D {
public:
    virtual double surfaceArea() const = 0;
    virtual double volume() const = 0;
    virtual ~Shape3D() = default;
};

// 二维
class Rectangle : public Shape2D {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double area() const override { return w * h; }
    double perimeter() const override { return 2 * (w + h); }
};

class Circle : public Shape2D {
    double r;
public:
    explicit Circle(double radius) : r(radius) {}
    double area() const override { return M_PI * r * r; }
    double perimeter() const override { return 2 * M_PI * r; }
};

// 三维
class Sphere : public Shape3D {
    double r;
public:
    explicit Sphere(double radius) : r(radius) {}
    double surfaceArea() const override { return 4 * M_PI * r * r; }
    double volume()      const override { return 4.0 / 3 * M_PI * r * r * r; }
};

class Cylinder : public Shape3D {
    double r, h;
public:
    Cylinder(double radius, double height) : r(radius), h(height) {}
    double surfaceArea() const override {
        return 2 * M_PI * r * r + 2 * M_PI * r * h; // 上下底+侧
    }
    double volume() const override { return M_PI * r * r * h; }
};

class Cone : public Shape3D {
    double r, h;
public:
    Cone(double radius, double height) : r(radius), h(height) {}
    double surfaceArea() const override {
        double l = std::sqrt(r * r + h * h); // 母线
        return M_PI * r * r + M_PI * r * l;
    }
    double volume() const override { return M_PI * r * r * h / 3; }
};

// 输出工具
class GeometryUtils {
public:
    // 对二维数组
    static double totalArea(const std::vector<Shape2D*>& v) {
        double sum = 0;
        for (auto s : v) sum += s->area();
        return sum;
    }
    static double totalPerimeter(const std::vector<Shape2D*>& v) {
        double sum = 0;
        for (auto s : v) sum += s->perimeter();
        return sum;
    }

    // 对三维数组
    static double totalSurfaceArea(const std::vector<Shape3D*>& v) {
        double sum = 0;
        for (auto s : v) sum += s->surfaceArea();
        return sum;
    }
    static double totalVolume(const std::vector<Shape3D*>& v) {
        double sum = 0;
        for (auto s : v) sum += s->volume();
        return sum;
    }
};


int main() {
    std::vector<Shape2D*> shapes2D;
    shapes2D.push_back(new Rectangle(3, 4));
    shapes2D.push_back(new Circle(2));

    std::vector<Shape3D*> shapes3D;
    shapes3D.push_back(new Sphere(1));
    shapes3D.push_back(new Cylinder(2, 5));
    shapes3D.push_back(new Cone(3, 4));

    std::cout<<"Sum of Area: "<<GeometryUtils::totalArea(shapes2D)<<"\n"
            <<"Sum of Perimeter: "<<GeometryUtils::totalPerimeter(shapes2D)<< "\n"
            <<"Sum of Volume: "<<GeometryUtils::totalVolume(shapes3D)<<"\n";
    // 释放内存
    for (auto p : shapes2D) delete p;
    for (auto p : shapes3D) delete p;
}
