int cmp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}
int threeSumClosest(int* nums, int numsSize, int target){
    qsort(nums,numsSize,sizeof(int),cmp);
    int res=10000;
    for(int i=0; i<numsSize;i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])//去重
            continue;
       int L=i+1, R=numsSize-1;
         while(L < R)
        {
            int sum = nums[i] + nums[L] + nums[R];   
            if(sum == target)
                return sum;
            if(abs(target-res) > abs(target -sum))
            {
                res = sum; 
            }   
            if(sum < target)
            {
                L++;
                //去重 注意：在while内不要再用L--了
                while (L < R && nums[L] == nums[L-1]) L++;
            }
            else
            {
                R--;
                while (L < R && nums[R] == nums[R+1]) R--;
            }
        }    
    }
    return res;
}
