#include <stdio.h>



void Insert(int array[], int data, int position, int size){

	int pos = position;
	int i;
	size++;
	for(i=size; i>=pos; i--){
		array[i] = array[i-1];
	}
	array[pos-1] = data;
}






int main(){

	int array[7] = {1,2,3,4,5,6,7};
	int size = sizeof(array) / sizeof(array[0]);

	Insert(array, 32, 2, size);
	for (int i=0; i<=size; i++){
		printf("%d", array[i]);

	}

}
