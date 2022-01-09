/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int CompareByIncrease(const void* a, const void* b)
{
    return *(int*)a - *(int*)b; // 快排构造递增序列
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    if(numsSize < 3) {
        return NULL;
    }
    // 调用stdlib库的快速排序函数
    qsort(nums, numsSize, sizeof(int), CompareByIncrease);
    //void quickSort(int* nums, int start, int end);
    //quickSort(nums, 0, numsSize);
    // 这个地方动态空间分配不好就会一直报错，大坑啊！
    int** newNums = (int**)malloc(sizeof(int*) * (numsSize)*(numsSize));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (numsSize)*(numsSize)); // 每行3个，记录有多少列，即有多少个3
    // start要加1，故这里numsSize-1，不然start超过数组界限
    for(int i = 0; i < numsSize - 1; i++) {
        // 去重
        int last = i - 1;
        if(i > 0 && nums[i] == nums[last]) {
            continue;
        }
        int target = -nums[i], start = i + 1, end = numsSize - 1;
        while(start < end) {
            if(nums[start] + nums[end] < target && start < end) {
                start++;
            }
            if(nums[start] + nums[end] > target && start < end) {
                end--;
            }
            if(nums[start] + nums[end] == target && start < end) {
                newNums[*returnSize] = malloc(sizeof(int) * 3); // 找到一组，分配空间
                (*returnColumnSizes)[*returnSize] = 3; // 记录列数(这写法真骚)，不记录列数还输出不出来呢！乌鱼子
                newNums[*returnSize][0] = nums[i];
                newNums[*returnSize][1] = nums[start];
                newNums[*returnSize][2] = nums[end];
                (*returnSize)++;    // 注意加括号
                // 去重
                while(nums[start] == nums[++start] && start < end) {
                    continue;
                }
                while(nums[end] == nums[--end] && start < end) {
                    continue;
                }
            }
        }
    }
    return newNums;
}
/*
// 快排
void quickSort(int* nums, int start, int end) {
    int i = start + 1, j = end - 1;
    void swag(int* a, int* b);
    if(i > j) {
        return;
    }
    while(i < j) {
        while(nums[i] <= nums[start] && i < j) {
            i++;
        }
        while(nums[j] >= nums[start] && i < j) {
            j--;
        }
        swag(&nums[i], &nums[j]);
    }
    if(nums[start] > nums[i]) {
        swag(&nums[start], &nums[i]);
    }
    quickSort(nums, start, i);
    quickSort(nums, i , end);
}

void swag(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/
