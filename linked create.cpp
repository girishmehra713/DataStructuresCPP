#include<bits\stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* next;


};

void createlist(){
node* head;
head = NULL;
int n;
cout<<"enter no. of nodes to create:"<<endl;
cin>>n;
node* temp;

for(int i=0;i<n;i++){
 temp = new node();
 cout<<"Enter info part: "<<endl;
 cin>>temp->data;
 temp->next = head;
 head = temp;
}
cout<<"<!---List Created Successfully---!>"<<endl;
cout<<"<!---Printing the List---!>"<<endl;
for(node* j=head;j!=NULL;j= j->next){
    cout<<j->data<<" ";
}


}

int main(){

createlist();



}
