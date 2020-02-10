#include<iostream>
using namespace std;
#define MAXSTK 8
class stack{
	int top;
	public:
		stack(){top = -1;}
		int push(int x);
		int a[MAXSTK];
		int pop();
		bool isEmpty();
};
int stack::push(int b){
	if(top == MAXSTK-1){
		cout<<"Stack Overflow";
		return 0;
	}
	else{
		top = top+1;
		a[top] = b;
		cout<<b<<" pushed into stack\n";
		return true;
	}
}
int stack::pop(){
	if(top == -1){
		cout<<"Stack Underflow";
		return 0;
	}
	else{
		int x = a[top];
		top =top-1;
		cout<<x<<" popped from stack\n";
		return(x);
		
	}
	return(top);
}
bool stack::isEmpty(){
	if(top<0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	stack s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(9);
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	while(!(s.isEmpty())){
		s.pop();                                                         
	}
	
	
}
