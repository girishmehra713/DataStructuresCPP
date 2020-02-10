#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int A[],int S){
	int value,hole;
	for(int i=1;i<S;i++){
		value = A[i];
		hole = i-1;
		while(hole>=0 && A[hole]>value){
			A[hole+1] = A[hole];
			hole = hole-1;
		}
		A[hole+1] = value;
		
	}
}
int main(){
	int arr[] = {2,6,3,8,1,9,5,7,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	InsertionSort(arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
 }
