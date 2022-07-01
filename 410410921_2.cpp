//ID:410410921, name:董承恩, class:1B

#include <iostream>
using namespace std;

template<class T>
class Node {
    public:
        T v;
        Node<T> *next;
        Node():next(nullptr){};
        Node(T x):v(x),next(nullptr){};
};

template<class T> 
class queue {
    private:
        Node<T> *start;
        Node<T> *end;
    public:
        queue():start(nullptr),end(nullptr){};
        bool empty();
        void safe_push(T v);
        bool check(T v);
        T front();
        T back();
        void pop();
};

template<class T>
bool queue<T>::empty(){
    if(start == nullptr)
        return true;
    else
        return false;
    // return start == nullptr;
}

template<class T>
bool queue<T>::check(T v){
    Node<T> *current = start;
    while(current != nullptr){
        if(current->v == v)
            return false;
        current = current->next;
    }
    delete current;
    current = nullptr;

    return true;
}

template<class T> 
void queue<T>::safe_push(T v){
    if(!empty()){
        if(check(v)){
        Node<T> *newnode = new Node<T>(v);
        end->next = newnode;
        end = newnode;
        }
        else
            return;
    }
    else{
        start = new Node<T>(v);
    end = start;
    }
    
}

template<class T> 
T queue<T>::front(){
    return start->v;
}

template<class T>
T queue<T>::back(){
    return end->v;
}

template<class T> 
void queue<T>::pop(){
    if(!empty()){
        Node<T> *newnode = start;
        start = start->next;
        delete newnode;
        newnode = nullptr;
    }
    else
        cout << "List is empty~" << endl;
}

int main(){
    queue<string> q;
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4; 
    
    q.safe_push(s1);
    q.safe_push(s2);
    q.safe_push(s3);
    q.safe_push(s4);

    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    // for(int i = 0 ; i < 4 ; i ++){
    //     cout << q.front() << ' ';
    //     q.pop();
    // }
    return 0;
}