 #include<bits\stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* next;
   // node* head;
    void create();
    void traverse();
    void insertAtBeg();
    void insertAtPos();
    void deleteNode();
    void reverseList();
    void ModularNode();
    void NthNodeEnd();
    node(){

    }


};
node* head = NULL;


// This function create a linked list
void node ::create(){
int n;
cout<<"enter no. of nodes to create:"<<endl;
cin>>n;

node* temp;
node* flag;
temp = new node();
 cout<<"Enter info part: "<<endl;
 cin>>temp->data;
 temp->next = head;
 head = temp;
 flag = temp;

for(int i=1;i<n;i++){
 temp = new node();
 cout<<"Enter info part: "<<endl;
 cin>>temp->data;
 temp->next = NULL;
 flag->next = temp;
 flag = temp;
}

cout<<"<!---List Created Successfully---!>"<<endl;

}

// This function traverse the list and print the elements
void node ::traverse(){
cout<<"<!---Printing the List---!>"<<endl;
for(node* j=head;j!=NULL;j= j->next){
    cout<<j->data<<" ";
}
cout<<endl;

}
// This function inserts a given node at beginning of a List.
void node:: insertAtBeg(){

node* temp = new node();
cout<<"Enter Info part:"<<endl;
cin>>temp->data;
temp->next = head;
head = temp;

}


void node :: insertAtPos(){
    node* temp;
    node* q;
    temp = new node();
    node* flag;
    flag = head;
    int count = 0,pos;
    cout<<"Enter position you want to insert at:"<<endl;
    cin>>pos;
    while(count!=pos-1 && flag->next!=NULL){
            count++;
        q = flag;
        flag = flag->next;
    }
    if(pos == 1){
        cout<<"Enter Info part:"<<endl;
        cin>>temp->data;
        temp->next = flag;
        head = temp;
    }
    else{
        cout<<"Enter Info part:"<<endl;
        cin>>temp->data;
        temp->next = flag;
        q->next = temp;
    }
    cout<<"<!---Inserted Successfully---!>"<<endl;

}
void node ::deleteNode(){
int item;
cout<<"Enter the Item you want to delete:"<<endl;
cin>>item;
node* temp;
node* ptr;
temp = head;
while(temp->data!=item && temp->next!=NULL){
        ptr=temp;
    temp = temp->next;
}
if(item == head->data){
    head = temp->next;
    delete temp;
}
else{
    ptr->next = temp->next;
    delete temp;
}
cout<<"<!---Item deleted Successfully---!>"<<endl;
}
void node::reverseList(){
node* prev;
node* temp;
node* current;
temp = head;
prev = NULL;
current = head;
while(current!=NULL){
    temp = current->next;
    current->next = prev;
    prev = current;
    current = temp;
}
head = prev;
cout<<"<!---List Reversed Successfully---!>"<<endl;

}
void node::ModularNode(){
    int k;
    node* temp = head;
    node* modeNode = NULL;
cout<<"Enter Value Of K:";
cin>>k;
for(int i=1;temp!=NULL;temp = temp->next){
    if(i%k == 0){
        modeNode = temp;
    }
    i++;

}
cout<<modeNode->data<<endl;

}
void node::NthNodeEnd(){
unordered_map<int,node*> LH;
int i=1,n;
for(node* temp = head;temp!=NULL;temp = temp->next){
    LH[i]=temp;
    i++;
}
i--;
cout<<"Enter Position you want to get:";
cin>>n;
node* temp2;
if(LH.find(i-n+1)==LH.end()){
    cout<<"ERRROR!!"<<endl;
}
else{
    temp2 = LH[i-n+1];
    cout<<temp2->data<<endl;
}


}

int main(){

    node list;
 cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Create a List."<<"\n"<<"2.Traverse a List."<<"\n"<<"3.Insert a Item at Beginning."<<"\n"<<"4.Insert An Item."<<"\n"<<"5.Delete An Item."<<"\n"<<"6.Reverse The List"<<"\n"<<"7.Modular."<<"\n"<<"8.Exit."<<endl;
 int i;

 while(true){
 cout<<"Enter your choice:"<<endl;
 cin>>i;
 switch(i)
 {
     case 1:list.create();
            break;
     case 2:list.traverse();
            break;
     case 3:list.insertAtBeg();
            break;
     case 4:list.insertAtPos();
            break;
     case 5:list.deleteNode();
            break;
     case 6:list.reverseList();
            break;
     case 7:list.NthNodeEnd();
            break;
     case 8:exit(0);
            break;
     default:cout<<"Enter a valid option!!";


 }

 }

return 0;
}

