#include<stdio.h>
#include<stdlib.h>
/*最大字序列和  DP实现 复杂度：O(n)*/
int max_number(int dat[],const int length){
	int sum=dat[0];
	int i=0;
	int max=sum;
	for(;i<length;i++){
		if(sum+dat[i]>dat[i]){
			sum=sum+dat[i];
		}
		else{
			sum=dat[i];
		}
		if (sum>max)	
			max=sum;
	}
	return max;
}
int main(int argc,char**argv){
	int a[4]={-1,-2,-7,-9};
	int b=max_number(a,4);
	fprintf(stdout,"%d  ",b);
	getchar();
	return 0;
}
