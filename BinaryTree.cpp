#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
};
node* root = NULL;
node* createTree(){
node* temp = new node();
cout<<"Enter data (or -1 to return):";
cin>>temp->data;
if(temp->data == -1){
    delete temp;
    return NULL;
}
cout<<"Enter Left Child!!"<<endl;
temp->left = createTree();
cout<<"Enter Right Child!!"<<endl;
temp->right = createTree();
return temp;
}
void traverse(node* current){
if(current == NULL)return;
queue<node*> Q;
Q.push(current);
while(!Q.empty()){
    current = Q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL)Q.push(current->left);
    if(current->right!=NULL)Q.push(current->right);
    Q.pop();
}
}
void PreOrder(node *current){
if(current == NULL)return;
cout<<current->data<<" ";
PreOrder(current->left);
PreOrder(current->right);
return;


}
bool BstUtil(node* current,int minValue,int maxValue){
if(current == NULL)return true;
if(current->data>minValue&&current->data<maxValue
&&BstUtil(current->left,minValue,current->data)&&BstUtil(current->right,current->data,maxValue))return true;
else return false;

}
void IsBinarySearchTree(node* current){
bool yes  = BstUtil(current,INT_MIN,INT_MAX);
if(yes)cout<<"It is a Binary Tree!!"<<endl;
else cout<<"It is not a binary tree!!"<<endl;
}
int main(){
    int more;
   root = createTree();
   cout<<"Do you want to traverse the Tree?(1/0):";
   cin>>more;
   if(more)PreOrder(root);
   IsBinarySearchTree(root);
}
