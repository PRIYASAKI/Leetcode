int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int findDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);  

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {  
            return nums[i];
        }
        
        }
        return -1;
}
