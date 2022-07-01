//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

class Base { // 請勿更動
    protected:     
        int x; 
    public:     
        virtual void fun() = 0;     
        Base(int i) {  x = i; } 
}; 

class Derived: public Base { // 請勿更動    
    int y; 
    public:     
        Derived(int i, int j): Base(i) { y = j; }    
        void fun() {          
            cout << "x = " << x << ", y = " << y  << endl;      
        } 
}; 

int main() {      
    int a, b;     
    cin >> a >> b;     
    Derived objD(a, b); // 請修改以下粗體這兩行
    Base  &objB = objD;
    objB.fun();     
    return 0;
}