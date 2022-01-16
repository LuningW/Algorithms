/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().

 */
#include <stdlib.h>
int comp(const void *x,const void *y)
{
	return *(int *)x-*(int *)y;
}
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes)
{
	int i,j,k,m;
	int *temp;
	int **ans;
	ans=(int **)malloc(sizeof(int *)*500);
	*returnColumnSizes=(int *)malloc(sizeof(int)*500);
	*returnSize=0;
	qsort(nums,numsSize,sizeof(int),comp);

	for(i=0;i<numsSize;i++)
	{
		if(i!=0 && nums[i] == nums[i-1])
			continue;
		for(j=i+1;j<numsSize;j++)
		{
			if(j!=i+1 && nums[j] == nums[j-1])
				continue;
			m=numsSize-1;
			for(k=j+1;k<numsSize && k<m;k++)
			{
				if(k!=j+1 && nums[k] == nums[k-1])
					continue;
				while(nums[i]+nums[j]+nums[k]+nums[m]>target && k < m)
					m--;
				if(k>=m)
					break;
				if(nums[i]+nums[j]+nums[k]+nums[m] == target)
				{
					temp=(int *)malloc(sizeof(int)*4);
					temp[0]=nums[i];
					temp[1]=nums[j];
					temp[2]=nums[k];
					temp[3]=nums[m];
					*(ans+*returnSize)=temp;
					*(*returnColumnSizes+*returnSize)=4;
					(*returnSize)++;
				}
			}
		}
	}
	return ans;
}
