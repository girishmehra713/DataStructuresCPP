#include<bits/stdc++.h>
using namespace std;
class bstnode{
public:
    int data;
    bstnode* left;
    bstnode* right;
   void InsertItems();
   void SearchItem();
   void FindMax();

};
bstnode* root = NULL;
bstnode* getNewNode(int data){
    bstnode* newNode = new bstnode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
bstnode* Insert(bstnode* current,int data){
 if(current == NULL){
    current = getNewNode(data);
 }
 else if(data<=current->data){
    current->left = Insert(current->left,data);
 }
 else{
    current->right = Insert(current->right,data);
 }
 return current;
}
void bstnode::InsertItems(){
 int n,data;
    cout<<"Enter Number of Items You want to Insert:";
    cin>>n;
    for(int i=0;i<n;i++){
            cout<<"Enter Info Part:";
            cin>>data;
            root = Insert(root,data);
    }
    cout<<"All Items Inserted!!"<<endl;
}
bool Search(bstnode* current,int data){
if(current == NULL)return false;
else if(current->data == data)return true;
else if(data<=current->data)return Search(current->left,data);
else return Search(current->right,data);
}
void bstnode::SearchItem(){
    int Item;
cout<<"Enter Item you want to Search:";
cin>>Item;
if(Search(root,Item)){
    cout<<"Found!!"<<endl;
}
else cout<<"Not Found!!"<<endl;

}
// Minimum element in tree
bstnode* FindMin(bstnode* current){

if(current == NULL)return current;
else if(current->left == NULL)return current;
else{
    while(current->left!=NULL){
        current = current->left;
    }
    return current;
}

}
// Maximum Element in tree
void bstnode::FindMax(){
     bstnode* current = root;
if(current == NULL)cout<<"Tree is Empty"<<endl;
else if(current->right == NULL)cout<<current->data<<endl;
else{
    while(current->right!=NULL){
        current = current->right;
    }
    cout<<current->data<<endl;
}

}
int FindHeight(bstnode* current){
int leftHeight;
int rightHeight;
if(current == NULL){
    return -1;
}
leftHeight = FindHeight(current->left);
rightHeight = FindHeight(current->right);
return (max(leftHeight,rightHeight)+1);

}
bstnode* Delete(bstnode* current,int data){
if(current == NULL)return current;
else if(data<current->data)current->left = Delete(current->left,data);
else if(data>current->data)current->right = Delete(current->right,data);
else{
    // for NO child
    if(current->left == NULL && current->right == NULL){
        delete current;
        current=NULL;
        return current;
    }
    //for one child
    else if(current->left == NULL){
        bstnode* temp = current;
        current = current->right;
        delete temp;

    }
    else if(current->right == NULL){
        bstnode* temp = current;
        current = current->left;
        delete temp;

    }
    else{
        bstnode* temp = FindMin(current);
        current->data = temp->data;
        current->right = Delete(current->right,temp->data);
    }

    return current;
}


}
int main(){

bstnode N;
cout<<"<!---Welcome to my Program---!>"<<endl;
 cout<<"<!---Select a option you want to perform---!>"<<endl;
 cout<<"1.Insert Items"<<"\n"<<"2.Search a Element."<<"\n"<<"3.Maximum Element."<<"\n"<<"4.Minimum Element."<<"\n"<<"5.Height of tree."<<"\n"<<"6.Delete Element"<<"\n"<<"7.Exit"<<endl;
int i;

 while(true){
 cout<<"Enter your choice:"<<endl;
 cin>>i;
 switch(i)
 {
     case 1:N.InsertItems();
            break;
     case 2:N.SearchItem();
            break;
     case 3:N.FindMax();
            break;
     case 4:cout<<FindMin(root)<<endl;
            break;
     case 5:cout<<FindHeight(root)<<endl;
            break;
     case 6:cout<<"Enter data to delete:"<<endl;
            int more;
            cin>>more;
            Delete(root,more);
            break;
     case 7:exit(0);
            break;
     default:cout<<"Enter a valid option!!";

}
 }


}
