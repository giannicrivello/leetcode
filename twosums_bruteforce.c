#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numSize, int target){
	int *ans=(int*)malloc(sizeof(int)*2); //returns answer arr size 2 elements
	int first; 
	for(int i=0; i<numSize; i++){ //first loop to store indexed elements of nums
		first = nums[i]; // first carries indexed elements of nums
		for(int j=i+1; j<numSize; j++){ //j increments the elements of nums + 1 (ex. first + first+1)
			if(first+nums[j]==target){ // if we sum to our target, perform op
				ans[0] = i;
				ans[1] = j;
				break;
			}
		}
	}
	return ans;
};

int main(){
	int numSize = 9;
	int nums[9] = {1,2,3,4,5,6};
	int target = 6;
	int arr[2];
        *arr = *twoSum(nums, numSize, target);
	printf("%d %d", arr[0], arr[1]);

}
	
