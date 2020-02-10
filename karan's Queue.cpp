#include<bits/stdc++.h>
using namespace std;

class Queue{
	public:
		int front,rear;
		int capacity;
		int *array;

		void display();
		void Doublequeue();
		void Enqueue();
		void Dequeue();
		bool is_queue_empty();
		bool is_queue_full();
		void front_change();
		void rear_change();

		Queue(){
			front = -1;
			rear = -1;
			capacity = 12;
			array = new int[capacity];
		}
};

bool Queue::is_queue_empty(){
	return (front == -1 && rear == -1);
}

bool Queue::is_queue_full(){
	return ( (rear+1) % capacity  ==  (front)%capacity);
}

void Queue::Doublequeue(){
	capacity = capacity*2;
	array = (int *)realloc(array,capacity*sizeof(int));
}

void Queue::Enqueue(){
	if(is_queue_full()){
		cout<<"queue is already full double stack is performed"<<endl;
//		Doublequeue();
	}
	else{
		int item;
		if(front == -1 && rear == -1){
			front = 0;
			rear = 0;
			cin>>item;
			array[rear] = item;
		}
		else{
			rear = (rear + 1) % capacity;
			cin>>item;
			array[rear] = item;
		}
	}




}

void Queue::Dequeue(){
	if((front>=0   && rear>=0) && (front == rear)){
		cout<<"Queue is empty";
		front = -1;
		rear=-1;
	}
	else if(!(is_queue_empty())){
		front = (front+1) % capacity;
//		cout<<"It is already empty";
	}
}

void Queue::display(){
	if(is_queue_empty()){
		cout<<"queue is totally empty: "<<endl;
	}
	else{
		int i=front,j=(rear) % capacity;
		if(front == 0 && rear == 0){
			cout<<" "<<array[front]<<" ";
			i = (front+1)%capacity;
		}
		else{
			while(i != j){
				cout<<" "<<array[i];
				i = (i+1) % capacity;
			}
			cout<<" "<<array[i]<<" ";
		}

	}

}



int main(){
	Queue q;
	char ch;
	int choice;
	do{
		cout<<"Press: 1 for Enqueue\nPress: 2 for display\nPress: 3 for check is empty\nPress: 4 for check is full\nPress: 5 for Dequeue\n";
		cin>>choice;
		switch(choice){
			case 1:{
				int n,i;
				cout<<"How many no.s u want to enter: ";
				cin>>n;
				for(i=0;i<n;i++){
					q.Enqueue();
				}
				break;
			}
			case 2:{
				q.display();
				break;
			}
			case 3:{
				if(q.is_queue_empty()){
					cout<<endl<<"Queue is empty: ??"<<endl;
				}
				else{
					cout<<endl<<"Queue is not empty: ??"<<endl;
				}
				break;
			}
			case 4:{
				if(q.is_queue_full()){
					cout<<endl<<"Queue is totally full: ??"<<endl;
				}
				else{
					cout<<endl<<"Queue is not full"<<endl;
				}
				break;
			}
			case 5:{
				int n,i;
				cout<<"How many no.s u want to enter: ";
				cin>>n;
				for(i=0;i<n;i++){
					q.Dequeue();
				}
				break;
			}
		}
		cout<<endl<<"wanna run program again: ";
		cin>>ch;
	}while(ch == 'y' || ch == 'Y');
	return 0;
}
