#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int Front;
    int rare;
    int *arr;
    int capacity;
    Queue(){
        Front=-1;
        rare=-1;
        capacity=7;
    arr = new int[capacity];
    }
     void Enqueue();
     void Dequeue();
     bool IsEmpty();
     bool IsFull();
     void display();
};
bool Queue::IsEmpty(){
if(Front==-1 && rare==-1){
    return true;
}
else{
    return false;
}

}
bool Queue::IsFull(){
    if(rare==capacity-1){
        return true;
    }
    else{
        return false;
    }
}
void Queue::Enqueue(){
    int Item;
if((rare+1)%capacity==Front){
    cout<<"Queue is Full!!"<<endl;
    return;
}
else if(IsEmpty()){
    Front=rare=0;
    cout<<"Enter Info Part:"<<endl;
    cin>>Item;
    arr[rare] = Item;
}
else{
    rare = (rare + 1)%capacity;
    cout<<"Enter Info Part:"<<endl;
    cin>>Item;
    arr[rare] = Item;
}

}
void Queue::Dequeue(){
if(IsEmpty()){
    cout<<"Queue is Empty!!"<<endl;
    return;
}
else if(Front==rare){
    Front = rare = -1;
}
else{
Front = (Front+1)%capacity;
}
}
void Queue::display(){
if(IsEmpty()){
    cout<<"Queue is Empty!!"<<endl;
}
else if(Front<=rare){
    for(int i=Front;i<=rare;i++){
        cout<<arr[i]<<" ";
    }
}
else{
    for(int i=Front;i<capacity;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<=rare;i++){
        cout<<arr[i]<<" ";
    }
}
cout<<endl;
}
int main(){
Queue Q;
cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Insert an element"<<"\n"<<"2.Delete a Element."<<"\n"<<"3.Display the Items"<<"\n"<<"4.Exit"<<endl;
int i;

 while(true){
 cout<<"Enter your choice:"<<endl;
 cin>>i;
 switch(i)
 {
     case 1:Q.Enqueue();
            break;
     case 2:Q.Dequeue();
            break;
     case 3:Q.display();
            break;
     case 4:exit(0);
            break;
     default:cout<<"Enter a valid option!!";

}
 }
 }
