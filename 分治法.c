#include <stdio.h>
int max(int a,int b){
	if (a >= b)
		return a;
	else
		return b;
}
int find_max(int i,int j,int num[]){
	int vmax;
	int vmax1,vmax2;
	int mid;
	if ( i==j ){
		vmax=num[i];
		printf("max is %d \n", vmax);
		return vmax;
	}
	if( i==(j-1) ){
		vmax=max(num[i],num[j]);
		printf("max is %d \n", vmax);
		return vmax;
	}
	mid=(i+j)/2;
	printf("i=%d, mid=%d,j=%d \n",i,mid,j);
	vmax1=find_max(i,mid,num);
	vmax2=find_max(mid+1,j,num);
	vmax=max(vmax1,vmax2);
	return vmax;
	printf("max is %d \n", vmax);
}
	
int main () {
	int a[10]={1,8,152,44,12,23,45,78,120,25};
	int max;
	max=find_max(0,9,a);
	printf("last max is %d \n", max);
	printf("hello https://tool.lu/\n");
	return 0;
}
