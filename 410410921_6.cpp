//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

template<class T>
class threeDimVector { 
    private:    
        T x, y, z; 
    public:     
        threeDimVector() = default;     
        void assignValue(T a, T b, T c);  
        /* 請實作需要的成員函式以求內積 */ 
        T get_x(){return x;}
        T get_y(){return y;}
        T get_z(){return z;}
};

template<class T>
void threeDimVector<T>::assignValue(T a, T b, T c){
    x = a , y = b , z = c;
};

// 請將實作下列求內積之函式便並將它樣板化
template <class T>
T innerProduct(threeDimVector<T> v1, threeDimVector<T> v2){
    T ip;
    ip = ((v1.get_x() * v2.get_x()) + (v1.get_y() * v2.get_y()) + (v1.get_z() * v2.get_z()));
    return ip;
};

int main() { //請勿修改主函式    
    threeDimVector<double> v, w;     
    double x1, y1, z1, x2, y2, z2;     
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;     
    v.assignValue(x1, y1, z1); // 將 v 賦值 (x=x1, y=y1, z=z1)   
    w.assignValue(x2, y2, z2); // 將 w 賦值 (x=x2, y=y2, z=z2)
    cout << "inner product: " << innerProduct<double>(v, w)  << endl; 
    // innerProduct 計算公式為 v.x*w.x + v.y*w.y + v.z*w.z     
    return 0; }

