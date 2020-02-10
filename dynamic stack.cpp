#include<iostream>
using namespace std;
#define size  1
class dynamicStack{
	int top;
	public:
		dynamicStack(){
		top = -1;}
		int push(int x);
		int a[size];
		int pop();
		bool isEmpty();

};
int dynamicStack::push(int b){
	if(top == size-1){
		return false;
	}
	top = top+1;
	a[top] = b;
	cout<<b<<" is pushed\n";
	return true;
}
int dynamicStack::pop(){
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
}
bool dynamicStack::isEmpty(){
	if(top<0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	dynamicStack s;
	s.push(3);
	s.push(5);
	s.push(7);
}
