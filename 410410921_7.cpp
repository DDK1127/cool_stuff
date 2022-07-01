//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

class Animal {
    public:
        Animal() = default;
        Animal(int pos): p(pos) {}
        virtual void move(int) = 0 ;//請修改為純虛擬函式使 Animal 為抽象類別
        virtual int get_position() = 0;
    private:
        int p;
        /* 請宣告 compare_position() 函式為友誼函式 */ 
        friend bool compare_position(Animal&, Animal&);
};

bool compare_position(Animal& a1, Animal& a2){
    if(a1.get_position() > a2.get_position())
        return true;
    else
        return false;
};


class Rabbit : public Animal {
    private:
        int position;
    public:
        int get_position() {return position;}
        Rabbit(int pos): position(pos) {}
        void move(int steps) { position += 10*steps; }
};

class Turtle : public Animal {
    //請修改必要部分 
    private:
        int position;
    public:
        int get_position() {return position;}
        Turtle(int pos): position(pos) {};
        void move(int steps) { position += steps; }
};
/* 請實作 bool compare_position()函式 */

int main() {//請勿修改
    int t_pos, r_pos, t_steps, r_steps;
    cin >> t_pos >> r_pos >> t_steps >> r_steps;
    Turtle t(t_pos);
    Rabbit r(r_pos);
    Animal &a1 = t, &a2 = r;
    a1.move(t_steps);
    a2.move(r_steps);
    if (compare_position(a1,a2))
        cout << "The turtle wins!" << endl;
    else
        cout << "The rabbit wins!" << endl;

    
    return 0;
}