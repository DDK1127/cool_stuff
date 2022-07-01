#include <iostream>
using namespace std;

template<class T>
class Polygon { // 修改為樣板化 
    protected:
        T width, height;
    public:
        void set_values (T a, T b) { width=a; height=b; }
        virtual T area() = 0 ;
        T get_width() {return width;}
};

template<class T>
class Rectangle: public Polygon<T> { // 修改為樣板化 
    public:
        virtual T area() { return this->width * this->height; }
};

template<class T>
class Triangle: public Polygon<T> { // 修改為樣板化 
    public:
        virtual T area() { return this->width * this->height/2; }
};


int main () { // 不得修改
    double a, b;
    cin >> a >> b;
    Rectangle<double> rect; 
    Triangle<double> trgl; 
    Polygon<double>* ppoly1 = &rect; 
    Polygon<double>* ppoly2 = &trgl; 
    ppoly1->set_values (a,b); 
    ppoly2->set_values (a,b);
    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    return 0;
}