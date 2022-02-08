#include<stdio.h>
#include<stdlib.h>


void TwoSums(int* nums, int numSize, int target, int* returnSize){
	int* result = (int*)malloc(sizeof(int)*2);
	returnSize = 2;
	int first;
	int i,j,p;
	for (i=0; i < numSize; i++)
		first = nums[i];
		
		for(j=0; j < i+1; j++){

			if (first + nums[j] == target){
				result[0] = i;
				result[1] = j;
				break;
			}


		}
	printf("[%d, %d] target = %d", result[0], result[1], target);
	printf("\n");
}


int main(){
	int nums[5] = {1,2,3,4,5};
	int numSize = 5;
	int target = 6;
	int* returnSize;
	TwoSums(nums, numSize, target, returnSize);
	printf("madeit bake to main");

}
