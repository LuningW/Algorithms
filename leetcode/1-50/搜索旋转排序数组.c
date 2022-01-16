int binarySearch(int* nums, int l, int r, int target){
    int i = l, j = r;
    while(i <= j){
        int mid = (i + j) / 2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }

    return -1;
}

int search(int* nums, int numsSize, int target){
    int point = numsSize - 1;
    for(int i = 0; i < numsSize - 1; i++){
        if( nums[i] > nums[i + 1]){
            point = i;
        }
    }
    int res = binarySearch(nums, 0, point, target);
    if(res != -1)
        return res;
    else{
        res = binarySearch(nums, point + 1, numsSize - 1, target);
    }

    return res;
}
