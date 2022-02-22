#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* twoSums(int* nums, size, target){
	int *arr = (int*)malloc(sizeof(int)*size);
	for(int i = 0; i<size; i++)
		for(int j=i+1; j<size; j++){
			if(nums[i] + nums[j] == target){
				arr[0] = i;
				arr[1] = j;
				break;
			}
		}
	return arr;
}

int main(){
	int nums[] = {1,2,3,4,5,6};
	memcpy(nums, twoSums(nums, 6, 10), (2*sizeof(int)));
	for(int i=0; i<2; i++){

		printf("%d", nums[i]);
	}


}

