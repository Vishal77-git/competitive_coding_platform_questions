int findFinalValue(int* nums, int numsSize, int original) {
    bool found = true;
    while(found){
        for(int i = 0; i < numsSize; i++){
            if(nums[i] == original){
                original = original * 2;
                found = true;
                break;
            }
            found = false;
        }
    }
    return original;
}