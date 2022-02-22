#include<stdio.h>
#include<stdlib.h>



void InsertionSort(int A[], int size) {
	int i, j;
	for (i=0; i<size; i++) {
		int key = A[i];
		j = i - 1;
		while(j>=0 && A[j] < key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}



int main(){	
	int A[] = {34,41,59,26,41,58};
	int size = sizeof(A) / sizeof(A[0]); // assume this calculates size
	InsertionSort(A, size);
	for (int i=0; i<size; i++){

		printf("%d ", A[i]);
	}
}



