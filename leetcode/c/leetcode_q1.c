/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *seen = (int *)malloc(numsSize * sizeof(int));
    int *result_idx = (int *)malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize; i++){
        seen[i] = nums[i];
        for(int j = 0; j <= i; j++){
            if(target - nums[i] == seen[j] && (i != j)){
                result_idx[0] = j;
                result_idx[1] = i;
                *returnSize = 2;
                return result_idx;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}