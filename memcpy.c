#include<stdio.h>
#include<string.h>


int main(){

	int arr1[] = {1,2,3,4,5,6};
	int arr2[] = {7,8,9,10,11,12};
	int size = 6;

	puts("arr1 before memcpy ");
	for (int i=0; i<size; i++){
		printf("%d ", arr1[i]);

	}

	//copies contents of str2 to str1
	
	memcpy(arr1, arr2, sizeof(arr2));

	puts("\narr1 after memcpy");
	for (int i=0; i<size; i++){
		printf("%d ", arr1[i]);
	}
	return 0;
}
