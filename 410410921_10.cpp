//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;

template<class T>
T horner(T poly[], int n, T x) { // 請修改之使其樣板化
   T result = poly[0];
   for (int i=1; i<n; i++)
       result = result*x + poly[i];
   return result;
}

int main() {
    int i, size;
    double x;
    cin >> size >> x;
    double* poly = new double[size];
    for (i=0; i<size; i++) { 
        cin >> poly[i]; 
    } 
    cout << "Value of polynomial is "<< horner<double>(poly, size, x); //請修改此行 
    delete poly;
    return 0; 
}