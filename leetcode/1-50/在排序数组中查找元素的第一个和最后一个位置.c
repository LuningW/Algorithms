/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int *result=(int*)malloc(sizeof(int)*2);
    result[0]=-1;result[1]=-1;
    if(numsSize<1)return result;


    int i,mid;
    int left,right;
    int flag=0;
    left=0;right=numsSize-1;


    while(left<=right)
    {
        mid=(left+right)/2;
        if(nums[mid]==target)
        {
            flag=1;break;
        }
        if(nums[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }


    if(flag==1)
    {
        for(i=mid-1,left=mid;i>=0;i--)
        {
            if(nums[i]!=target)break;
            if(nums[i]==target&&i<=left)
            {
                left=i;
            }
        }
        for(i=mid+1,right=mid;i<numsSize;i++)
        {
            if(nums[i]!=target)break;
            if(nums[i]==target&&i>=right)
            {
                right=i;
            }
        }
        result[0]=left;
        result[1]=right;
        return result;
    }
    else
    return result;
}
