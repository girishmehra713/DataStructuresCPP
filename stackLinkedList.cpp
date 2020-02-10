#include<bits/stdc++.h>
using namespace std;
class stackLink{
public:
    int data;
    stackLink* next;
   // stackLink* top;
    stackLink(){

    }
    void push();
    void pop();
    bool isEmpty();
    void traverse();


};
 stackLink* top=NULL;
void stackLink::push(){
stackLink* temp = new stackLink();
cout<<"Enter Info part:";
cin>>temp->data;
temp->next = top;
top = temp;
}
bool stackLink::isEmpty(){
     if(top == NULL)
        return true;
     else{
        return false;
     }
}
void stackLink::pop(){
    stackLink* temp;
    temp = top;
if(isEmpty()){
    cout<<"Stack is Empty!!"<<endl;
    return;
}
top = top->next;
delete temp;

}

void stackLink::traverse(){
stackLink* flag;
flag = top;
while(flag!=NULL){
    cout<<flag->data<<" ";
    flag = flag->next;
}
cout<<endl;
}
int main(){
stackLink stk;
cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Insert an element"<<"\n"<<"2.Delete a Element."<<"\n"<<"3.Display the Items"<<"\n"<<"4.Exit"<<endl;
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
     case 3:stk.traverse();
            break;
     case 4:exit(0);
            break;
     default:cout<<"Enter a valid option!!";

}
 }


}
