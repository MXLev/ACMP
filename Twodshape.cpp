#include <iostream>
#include <cstring>

using namespace std;

class Twodshape {
    double width;
    double height;
    char name[20];
public:
    double get_width() {return width;};
    double get_height() {return height;};
    void set_width(double w){width = w;};
    void set_height(double h){height = h;};
    void showdim() {
        cout << "width and height are " << width << height << '\n';
    }

    Twodshape(){
        width = height = 0.0;
        strcpy(name, "unknown");
    }

    Twodshape(double x, char *n) {
        width = height = x;
        strcpy(name, n);
    }

    Twodshape(double w, double h, char *n) {
        width = w;
        height = h;
        strcpy(name, n);
    }

//    virtual double area(){
//        cout << "error: area should exchange";
//    }
};

class Triangle : public Twodshape {
    char style[20];
public:
    double area() {
        return get_width() * get_height() / 2;
    }

    void showstyle() {
        cout << "Triangle " << style << "\n";
    }

    Triangle() {
        strcpy(style, "unknown");
    }

    Triangle(double x): Twodshape(x, "triangle"){
        strcpy(style, "rectangular");
    }

    Triangle(char *str, double w, double h) : Twodshape(w, h, "triangle"){
        strcpy(style, str);

    }
};

class ColorTriangle : public Triangle {
    char color[20];
public:
    ColorTriangle(char  *clr, char *style, double w, double h) : Triangle(style, w, h){
        strcpy(color, clr);
    }
    void showColor() {
        cout << "color " <<color<< "\n";
    }
};

int main() {
    Twodshape *shapes[5];
    shapes[0] = Triangle("rectangular", 8.0, 12.0);
    shapes[1];
//    ColorTriangle t1("blue", "rectangular", 8.0, 12.0);
//    ColorTriangle t2("red", "isosceles", 2.0, 2.0);
//
//    t1 = t2;
//
//    cout << "data on t1: \n";
//    t1.showstyle();
//    t1.showdim();
//    t1.showColor();
//    cout << "area is " << t1.area() << '\n';
//
//    cout << '\n';
//    cout << "data on t2: ";
//    t2.showstyle();
//    t2.showdim();
//    t2.showColor();
//    cout << "area is " << t2.area() << '\n';
}