#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
}; 

class list{
	private:
	 	node *not_use;
	 	node *frist = NULL;
	public:
		void push(int x);
		void pop();
		void display();
};

void list::push(int x){
	node *newnode = new node;
	newnode->data = x;
	newnode->next = frist;
	frist = newnode;
} 

void list::pop(){
	not_use = frist;
	frist = frist->next;
	delete not_use;
}
void list::display(){
	node *current = frist;
	
	while(current != NULL){
		cout << current->data << endl;
		current = current->next;
	}
} 
int main(){
	list A1;
	A1.push(6);
	A1.push(99);
	A1.push(54);
	A1.push(1);
	A1.pop();
	A1.display();
	int a = 2;
	return 0;
}
