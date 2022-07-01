//ID:410410921, name:董承恩, class:1B
#include<iostream>

using namespace std;
class rectangle {
    private:
        int width,height;
    public:
        rectangle() = default;
        rectangle(int w , int h):width(w),height(h){};
        rectangle operator+(const rectangle& r){
            rectangle temp;
            if(width == r.width){
                temp.width = width;
                if(height != r.height)
                    temp.height = height+r.height;
            }
            else if (height == r.height){
                temp.height = height;
                if(width != r.width)
                    temp.width = width+r.width;
            }
            else{
                temp.height = height;
                temp.width = width;
            }
            return temp;
        };

        rectangle operator=(const rectangle& r){
            this->height = r.height;
            this->width = r.width;
            return *this;
        };
        friend ostream& operator<<(ostream& os, const rectangle& r);
};



ostream& operator<<(ostream& os, const rectangle& r) {
    for(int i = 0 ; i < r.height ; i++){
        for(int j = 0 ; j < r.width ; j++)
            os << "*" <<"\t";
        cout << endl;
    }
    return os;
};

int main()
{
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    rectangle r1(w1,h1), r2(w2,h2), r , cool;
    r = r1+r2;
    cout << r;
    return 0;
}