#include<bits\stdc++.h>
#define MAX_SIZE 12
using namespace std;
class stackArray{
public:
    int top;
    int capacity;
    int* arr;

    stackArray(){
    top = -1;
    capacity = MAX_SIZE;
    arr = new int[capacity];
    }
    bool isEmpty();
    void push();
    void pop();
    bool isFull();
    void display();
    void topElement();



};
bool stackArray::isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}
bool stackArray::isFull(){
    if(top == capacity-1){
            cout<<capacity<<endl;
    return true;
    }
    else{
        return false;
    }
}
void stackArray::push(){
int item;
if(isFull()){
    cout<<"Stack is Full No Push Operation can be Performed!!"<<endl;
    return;
}
top = top+1;
cout<<"Enter Item:";
cin>>item;
arr[top] = item;
}
void stackArray::pop(){
if(isEmpty()){
     cout<<"Stack is Empty No Pop Operation Can be Performed!!"<<endl;
     return;
}
top=top-1;

}
void stackArray::display(){
for(int i=0;i<=top;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void stackArray::topElement(){
    cout<<top<<endl;
}


int main(){
stackArray stk;
cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Insert an element"<<"\n"<<"2.Delete a Element."<<"\n"<<"3.Display the Items"<<"\n"<<"4.Top"<<"\n"<<"5.Exit"<<endl;
int i;

 while(true){
 cout<<"Enter your choice:"<<endl;
 cin>>i;
 switch(i)
 {
     case 1:stk.push();
            break;
     case 2:stk.pop();
            break;
     case 3:stk.display();
            break;
     case 4:stk.topElement();
            break;
     case 5:exit(0);
            break;
     default:cout<<"Enter a valid option!!";

}
 }
 }
