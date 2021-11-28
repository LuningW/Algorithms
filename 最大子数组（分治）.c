#include <stdio.h>
/*±©Á¦Çó½â
int subset_direct(int *A,int n)
{
    int sum_max = -99999;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum+A[j];
            if(sum>sum_max){
                sum_max = sum;
            }
        }
    }
    return sum_max;
}
int main()
{
    int A[]={1,2,8,-3,-8,-2,6,10,5,-6};
    printf("%d\n",subset_direct(A,10));
    return 0;
}
*/
int linear_subset(int A[],int n)
{
    int i;
    int temp = 0;
    int max_sum = 0;
    for(i=0;i<n;i++){
        temp +=A[i];
        if(temp>max_sum){
            max_sum = temp;
        }
        if(temp<0){
            temp = 0;
        }
    }
    return max_sum;
}
int main()
{
    int A[] = {1,2,8,-3,-8,-2,6,10,5,-6};
    int max;
    max = linear_subset(A,10);
    printf("%d ",max);
    return 0;
}
