#include<bits/stdc++.h>
using namespace std;
class Heap{
public:

 int *arr;
 int capacity;      // Size of Heap
 int heap_type;     //Min or Max Heap
 int Count;         // Number of Elem in Heap
 void Create();
 int Parent(int);
 int RightChild(int);
 int LeftChild(int);
 void MaxHeap(int);
 void MinHeap();
 void HeapSort();

};
// Create The Heap You Want
void Heap::Create(){
Heap* h = new Heap();
if(h == NULL){
    cout<<"Memory Error!!";
    return;
}
cout<<"Enter Heap Type:(1 for max 0 for min)";
cin>>heap_type;
cout<<"Enter Size of Heap:";
cin>>capacity;
Count = 0;
arr = new int[capacity];
if(arr == NULL){
    cout<<"Memory Error!";
    return;}
cout<<"Enter Elements:";
for(int i = 0;i<capacity;i++){
    cin>>arr[i];
    Count++;
}
//if(heap_type == 1){
//    MaxHeap(Count);
////for(int i = 0;i<capacity;i++){
////cout<<arr[i]<<" ";
////
////}
//}
//else{
//    MinHeap();
//    for(int i = 0;i<capacity;i++){
//cout<<arr[i]<<" ";
//
//}
//}
}
// Return Parent Of A given Node
int Heap::Parent(int i){
 if(i<=0 || i>=Count){
    return -1;
 }
 return (i-1)/2;
}
// Return LeftChild Of A given Node
int Heap::LeftChild(int i){
int Left = (2*i)+1;
if(Left>=Count){
        return -1;
}
else{
   return Left;
}

}
// Return RightChild Of A given Node
int Heap::RightChild(int i){
int Right = (2*i) + 2;
if(Right>=Count){
  return -1;
}
else{
  return Right;
}


}

void Heap::MaxHeap(int Size){
int n = Size/2;
for(int i=n-1;i>=0;i--){

    if((arr[LeftChild(i)]>arr[i] || arr[RightChild(i)]>arr[i]) && (arr[LeftChild(i)]>arr[RightChild(i)]) && LeftChild(i)!= -1){
        swap(arr[i],arr[LeftChild(i)]);
    }
    else if((arr[LeftChild(i)]>arr[i] || arr[RightChild(i)]>arr[i]) && (arr[LeftChild(i)]<arr[RightChild(i)]) && RightChild(i)!= -1){
        swap(arr[i],arr[RightChild(i)]);
    }
}
for(int i=0;i<=n-1;i++){
    if((arr[LeftChild(i)]>arr[i] || arr[RightChild(i)]>arr[i]) && (arr[LeftChild(i)]>arr[RightChild(i)]) && LeftChild(i)!= -1){
        swap(arr[i],arr[LeftChild(i)]);
    }
    else if((arr[LeftChild(i)]>arr[i] || arr[RightChild(i)]>arr[i]) && (arr[LeftChild(i)]<arr[RightChild(i)]) && RightChild(i)!= -1){
        swap(arr[i],arr[RightChild(i)]);
    }
}



}
void Heap::MinHeap(){
int n = capacity/2;
for(int i=n-1;i>=0;i--){
    if((arr[LeftChild(i)]<arr[i] || arr[RightChild(i)]<arr[i]) &&  (arr[LeftChild(i)]<arr[RightChild(i)])){
        swap(arr[i],arr[LeftChild(i)]);
    }
    else if((arr[LeftChild(i)]<arr[i] || arr[RightChild(i)]<arr[i]) && (arr[LeftChild(i)]>arr[RightChild(i)])){
        swap(arr[i],arr[RightChild(i)]);
    }
}
for(int i=0;i<=n-1;i++){
    if((arr[LeftChild(i)]<arr[i] || arr[RightChild(i)]<arr[i]) && (arr[LeftChild(i)]<arr[RightChild(i)])){
        swap(arr[i],arr[LeftChild(i)]);
    }
    else if((arr[LeftChild(i)]<arr[i] || arr[RightChild(i)]<arr[i]) && (arr[LeftChild(i)]>arr[RightChild(i)])){
        swap(arr[i],arr[RightChild(i)]);
    }
}



}
void Heap::HeapSort(){
for(int i=0;i<Count-1;i++){
  MaxHeap(Count-(i+1));
  swap(arr[(Count-i)-1],arr[0]);
}
  cout<<"\n";
for(int i=0;i<capacity;i++){
    cout<<arr[i]<<" ";
}
}

int main(){

Heap hp;
hp.Create();
int sot;
cout<<"Do you want to Sort the elements:(1 or 0)";
cin>>sot;
if(sot){
    hp.HeapSort();
}
else exit(1);

}
