#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    bool IsEmpty();
    void EnQueue();
    void Dequeue();
    void display();
};
node* Front = NULL;
node* rear = NULL;
int deleted;
bool node::IsEmpty(){
if(Front==NULL && rear==NULL){
    return true;
}
else{
    return false;
}
}
void node::EnQueue(){
 node* temp = new node();
if(IsEmpty()){
    cout<<"Enter Info Part:";
    cin>>temp->data;
    temp->next = NULL;
    rear = Front = temp;
}
else{
     cout<<"Enter Info Part:";
     cin>>temp->data;
     temp->next = NULL;
     rear->next = temp;
     rear = rear->next;
}
}
void node::Dequeue(){
if(IsEmpty()){
    cout<<"Queue is Empty!!"<<endl;
    return;
}
else if(Front->next == NULL && rear->next == NULL){
    deleted = Front->data;
    cout<<deleted<<endl;
    Front = NULL;
    rear = NULL;
}
else{
    deleted = Front->data;
    cout<<deleted<<endl;
    Front = Front->next;
}
}
void node::display(){
for(node* j = Front;j!=NULL;j=j->next){
    cout<<j->data<<" ";
}
cout<<endl;

}
int main(){
node Q;
cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Insert an element"<<"\n"<<"2.Delete a Element."<<"\n"<<"3.Display the Items"<<"\n"<<"4.Exit"<<endl;
int i;

 while(true){
 cout<<"Enter your choice:"<<endl;
 cin>>i;
 switch(i)
 {
     case 1:Q.EnQueue();
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
