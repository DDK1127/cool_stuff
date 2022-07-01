//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

class Polygon {   
    protected:     
        int width, height;   
    public:     
        void set_values (int a, int b) { width=a; height=b; } 
        virtual int area() = 0;
}; 

class Rectangle: public Polygon { 
    public:     
        int area() { return width * height; }
};

class Triangle: public Polygon {
    public:     
        int area() { return width * height/2; } 
}; 

int main () { // 請勿更改主函式  
    int a, b;   
    cin >> a >> b;   
    Rectangle rect;   
    Triangle trgl;   
    Polygon* ppoly1 = &rect;   
    Polygon* ppoly2 = &trgl;   
    ppoly1->set_values (a,b);   
    ppoly2->set_values (a,b);   
    cout << ppoly1->area() << endl;   
    cout << ppoly2->area() << endl;   
    return 0; 
}
