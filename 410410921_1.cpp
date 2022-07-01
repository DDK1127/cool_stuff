//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

template <class T>
T sum(T *a , T *b){
    T sum = 0;
    
    while(a != (b+1)){
        sum += *a;
        a++;
    }
    return sum;
};

int main(){
    int i[3] = {1,2,3};
    double d[5] = {1.0,2.0,3.0,4.0,5.0};
    std::cout << sum<int>(&i[0],&i[2]) << endl;
    std::cout << sum<double>(&d[0],&d[4]) << endl;
    return 0;
}