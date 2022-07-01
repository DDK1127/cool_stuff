//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

class Tool {
    /* 請實作之 */
    private:
        int strength ;
        char type;
    public:   
        void setstrength(int);
};

void Tool::setstrength(int x){
    strength = x;
}

    /* 請實作類別 Scissors */
class Scissors : public Tool{
    public:
        Scissors(int x):strength(int x){}
} ;

    /* 請實作類別 Paper */
class Paper : public Tool{
    public:

};

    /* 請實作類別 Rock */
class Rock : public Tool{

};

int main() {
//請勿修改主函式
    int a, b, c;
    cin >> a >> b >> c;
    Scissors s1(a);
    Paper p1(b);
    Rock r1(c);
    cout << s1.fight(p1) << p1.fight(s1) << endl; 
    cout << p1.fight(r1) << r1.fight(p1) << endl; 
    cout << r1.fight(s1) << s1.fight(r1) << endl;
}