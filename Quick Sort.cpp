#include<bits/stdc++.h>
using namespace std;

int Partitioning(int *A,int start,int end){
	
	int pivot,Pindex;
	pivot = A[end];
	Pindex = start;
	for(int i=start;i<end;i++){
		if(A[i]<=pivot){
			swap(A[i],A[Pindex]);
			Pindex++;
		}
	
	}
	swap(A[Pindex],A[end]);
	return Pindex;
	
}

void QuickSort(int *A,int start,int end){
	if(start<end){
	
	int Pindex = Partitioning(A,start,end);
	QuickSort(A,start,Pindex-1);
	QuickSort(A,Pindex+1,end);
	}
}



int main(){
	int A[] = {2,8,3,7,1,5,9,4,6};
	//sort(A,A+9,greater<int>());
	QuickSort(A,0,8);
	for(int i=0;i<9;i++) cout<<A[i]<<" ";
}
