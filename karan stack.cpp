#include<bits/stdc++.h>



using namespace std;


class Stack{
	public:
		int capacity;
		int top;
		int *arr;

		Stack(){
			capacity = 10;
			top = -1;
			arr = new int[capacity];
		}


		void display();
		bool is_fullstack();
		bool is_emptystack();
		void push();
		void pop();


};

void   Stack::display(){
	int i;
	for(i=0;i<=top;i++){
		cout<<arr[i]<<" ";
	}
}


bool Stack::is_fullstack(){
	if(top == capacity-1){
		return true;
	}
	else{
		return false;
	}
}

bool Stack::is_emptystack(){
	if(top == -1){
		return true;
	}
	return false;
}


void Stack::push(){

	if(!(is_fullstack())){
		cout<<"enter info part: ";
		int n;
		cin>>n;
		top = top+1;
		arr[top] = n;
	}
	else{
		cout<<"Array is already full: "<<endl;
	}
}

void Stack::pop(){
	if(!(is_emptystack())){
    	delete arr[top];
		top = top-1;
	}
	else{
		cout<<endl<<"array is already empty: ?"<<endl;
	}
}



int main(){
	Stack s;
	cout<<"Enter no. of elements: ";
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		s.push();
	}
	s.display();
	cout<<endl<<s.is_emptystack()<<" "<<s.is_fullstack();
	cout<<endl<<s.top;
	return 0;
}
