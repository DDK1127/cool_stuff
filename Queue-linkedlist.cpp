#include<iostream>
#include<time.h>
using namespace std;

template <class T> 
class Queue{
    public:
        struct Queuenode{
            T data;
            Queuenode *next;
            Queuenode():data(0), next(nullptr){}
            Queuenode(T x):data(x), next(nullptr){}
        };
        Queue():front(nullptr), back(nullptr), size(0){};

        void Push(T x);
        void Pop();
        bool IsEmpty();
        T getfront();
        T getback();
        int getsize();
        void displayall();
        void test(){
        }

    private:
        Queuenode *front;
        Queuenode *back;
        int size;
};

template<class T>
bool Queue<T>::IsEmpty(){
    if(front == nullptr && back == nullptr)
        return true;
    else    
        return false;
} 

template<class T>
void Queue<T>::Push(T x){
    if(IsEmpty()){
        front = new Queuenode(x);
        back = front;
        size++;
        return;
    }
    Queuenode *newnode = new Queuenode(x);
    back->next = newnode;
    back = newnode;
    size++;
}

template<class T>
void Queue<T>::Pop(){
    if(IsEmpty()){
        cout << "Queue is empty !~" << endl;
        return ;
    }
    Queuenode *deletenode = front;
    front = front->next;
    delete deletenode;
    deletenode = nullptr;
    size--;
}

template<class T> 
T Queue<T>::getfront(){
    if(IsEmpty()){
        cout << "Queue is empty." << endl;
        return 0;
    }
    return front->data;
}

template<class T>
T Queue<T>::getback(){
    if(IsEmpty()){
        cout << "Queue is empty." << endl;
        return 0;
    }
    return back->data;
}

template<class T> 
int Queue<T>::getsize(){
    return size;
}

template<class T>
void Queue<T>::displayall(){
    if(IsEmpty()){
        cout << "This Queue is empty !!!" << endl;
        return ;
    }
    Queuenode *current = front;
    while (current != nullptr)
    {
        cout << current->data << "\t";
        current = current->next;
    }
    delete [] current;
    current = nullptr;
    cout << endl;
}

int main(){
    double START ,END;
    START = clock();
    Queue<int> Q;
    Q.getback();
    
    Q.Push(66);
    // cout << Q.getback() << endl;
    Q.Push(77);
    Q.Pop();
    Q.Pop();
    // cout << Q.getback() << endl;
    cout << Q.getfront() << endl;
    // Q.Push(55);
    // cout << Q.getback() << endl;
    // Q.Pop();
    // cout << "size = " << Q.getsize() << endl;
    // cout << "==========================" <<endl;
    // Q.displayall();
    // END = clock();
    // cout << (float)clock()/CLOCKS_PER_SEC << "s" << endl;
    // cout << (END - START)/CLOCKS_PER_SEC << "s" << endl;
    
    return 0;
}