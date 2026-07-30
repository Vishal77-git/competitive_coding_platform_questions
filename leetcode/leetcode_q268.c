int missingNumber(int* nums, int numsSize) {
    int sum = numsSize * (numsSize + 1) / 2;
    int arrSum = 0;
    for(int i = 0; i < numsSize; i++){
        arrSum += nums[i];
    }
    return sum - arrSum;
}