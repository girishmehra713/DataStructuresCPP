#include<bits\stdc++.h>

using namespace std;
class node{
	public:
		int data;
		node* next;
};
int main(){
   node* head;
   head = NULL;
   node* temp = new node();
   temp->data =  2;
   temp->next = NULL;
   head = temp;
   temp = new node();
   temp->data = 4;
   temp->next = NULL;
   node* flag;
   flag = head;
   while(flag->next!=NULL){
   	flag = flag->next;
   	cout<<flag->data<<endl;
   }
   flag->next = temp;

}
