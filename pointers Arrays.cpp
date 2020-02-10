#include<bits/stdc++.h>
using namespace std;

int SumOfElements(int* A,int size){
	int i,sum =0;
//	size = sizeof(A)/sizeof(A[0]);
	for(i=0;i<size;i++){
		sum += A[i];
	}
	return sum;
}

int main(){
	int A[] = {3,5,8,4,9};
	
/*	for(int i=0;i<4;i++){
		cout<<A+i<<endl;
		cout<<&A[i]<<endl;
		cout<<A[i]<<endl;
		cout<<*(A+i)<<endl;
	}*/
	int size = sizeof(A)/sizeof(A[0]);
	cout<<SumOfElements(A,size);
}
